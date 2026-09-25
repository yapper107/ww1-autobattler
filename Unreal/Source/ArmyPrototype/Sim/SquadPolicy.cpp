#include "SquadPolicy.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <locale>
#include <sstream>

namespace army {
std::shared_ptr<const SquadPolicy> LoadSquadPolicy(const std::string& source,std::string& error) {
    error.clear();
    if(source.size()>256*1024){error="Squad policy exceeds 256 KiB";return {};}
    std::istringstream in(source);in.imbue(std::locale::classic());
    std::string magic;int schema=0,features=0,hidden=0,candidates=0,rasterInputs=0,rasterUnits=0;
    if(!(in>>magic>>schema>>features>>hidden>>candidates)||magic!="ARMY_SQUAD_POLICY"||
        (schema!=2&&schema!=3&&schema!=4)||features!=(schema==2?96:schema==3?97:SquadFeatureCount)||hidden!=SquadHiddenCount||(candidates!=0&&candidates!=30)||
        (schema==4&&(!(in>>rasterInputs>>rasterUnits)||rasterInputs!=SquadRasterPooled||rasterUnits!=SquadRasterUnits))) {
        error="Unsupported squad policy schema or dimensions";return {};
    }
    auto policy=std::make_shared<SquadPolicy>();policy->candidates=candidates;policy->schema=schema;
    policy->features=features;policy->heads=schema==4?SquadTimingCount:1;
    auto read=[&](float& value){return bool(in>>value)&&std::isfinite(value)&&std::abs(value)<=1000;};
    // Blocks in order: features (input weights, hidden bias), heads (output weights and bias of
    // each head), then for schema 4 the raster embedding (weights, bias, projection to hidden).
    for(int h=0;h<SquadHiddenCount;++h)for(int f=0;f<features;++f)
        if(!read(policy->weights[h*SquadFeatureCount+f])){error="Invalid squad input weights";return {};}
    for(auto& value:policy->bias)if(!read(value)){error="Invalid squad hidden bias";return {};}
    for(auto& value:policy->output)if(!read(value)){error="Invalid squad output weights";return {};}
    if(schema==4)for(auto& value:policy->nowOutput)if(!read(value)){error="Invalid squad go-now weights";return {};}
    if(!read(policy->outputBias)){error="Invalid squad output bias";return {};}
    if(schema==4) {
        if(!read(policy->nowOutputBias)){error="Invalid squad go-now bias";return {};}
        for(auto& value:policy->rasterWeights)if(!read(value)){error="Invalid squad raster weights";return {};}
        for(auto& value:policy->rasterBias)if(!read(value)){error="Invalid squad raster bias";return {};}
        for(auto& value:policy->rasterProjection)if(!read(value)){error="Invalid squad raster projection";return {};}
    }
    std::string extra;if(in>>extra){error="Trailing squad policy data";return {};}
    policy->source=source;policy->digest=1469598103934665603ull;
    for(unsigned char byte:source)policy->digest=(policy->digest^byte)*1099511628211ull;
    return policy;
}
std::array<float,SquadRasterPooled> SquadRasterPooling(const std::vector<uint8_t>& raster) {
    std::array<float,SquadRasterPooled> pooled{};
    if(raster.size()!=size_t(SquadRasterBytes))return pooled;
    constexpr int side=SquadRasterSize/SquadRasterPool;
    const float divisor=float(SquadRasterPool*SquadRasterPool*255);
    for(int c=0;c<SquadRasterChannels;++c)for(int py=0;py<side;++py)for(int px=0;px<side;++px) {
        int sum=0;
        for(int j=0;j<SquadRasterPool;++j)for(int i=0;i<SquadRasterPool;++i)
            sum+=raster[size_t((c*SquadRasterSize+py*SquadRasterPool+j)*SquadRasterSize+px*SquadRasterPool+i)];
        pooled[size_t((c*side+py)*side+px)]=float(sum)/divisor;
    }
    return pooled;
}
SquadRasterContribution SquadRasterEmbedding(const SquadPolicy& policy,const std::vector<uint8_t>& raster) {
    SquadRasterContribution result;
    if(policy.schema<4||raster.size()!=size_t(SquadRasterBytes))return result;
    const auto pooled=SquadRasterPooling(raster);
    std::array<float,SquadRasterUnits> units{};
    for(int u=0;u<SquadRasterUnits;++u) {
        float sum=policy.rasterBias[size_t(u)];
        for(int k=0;k<SquadRasterPooled;++k){volatile float product=policy.rasterWeights[size_t(u*SquadRasterPooled+k)]*pooled[size_t(k)];sum+=product;}
        units[size_t(u)]=std::max(0.f,sum);
    }
    for(int h=0;h<SquadHiddenCount;++h) {
        float sum=0;
        for(int u=0;u<SquadRasterUnits;++u){volatile float product=policy.rasterProjection[size_t(h*SquadRasterUnits+u)]*units[size_t(u)];sum+=product;}
        result.hidden[size_t(h)]=sum;
    }
    result.present=true;
    return result;
}
std::string SquadRasterHex(const std::vector<uint8_t>& raster) {
    static const char digits[]="0123456789abcdef";
    std::string hex(raster.size()*2,'0');
    for(size_t i=0;i<raster.size();++i){hex[2*i]=digits[raster[i]>>4];hex[2*i+1]=digits[raster[i]&15];}
    return hex;
}
bool SquadRasterFromHex(const std::string& hex,std::vector<uint8_t>& raster) {
    raster.clear();
    if(hex.size()%2)return false;
    auto digit=[](char ch)->int{return ch>='0'&&ch<='9'?ch-'0':ch>='a'&&ch<='f'?ch-'a'+10:ch>='A'&&ch<='F'?ch-'A'+10:-1;};
    raster.reserve(hex.size()/2);
    for(size_t i=0;i<hex.size();i+=2){const int hi=digit(hex[i]),lo=digit(hex[i+1]);
        if(hi<0||lo<0){raster.clear();return false;}raster.push_back(uint8_t(hi*16+lo));}
    return true;
}
std::array<float,SquadTimingCount> SquadLogits(const SquadPolicy& policy,const SquadFeatures& features,const SquadRasterContribution* raster) {
    std::array<float,SquadTimingCount> result{policy.outputBias,policy.nowOutputBias};
    for(int h=0;h<SquadHiddenCount;++h) {
        float sum=policy.bias[h];
        for(int f=0;f<policy.features;++f) {
            // Round the product before addition; do not change compiler flags for combat.
            volatile float product=policy.weights[h*SquadFeatureCount+f]*features[f];
            sum+=product;
        }
        if(raster&&raster->present)sum+=raster->hidden[h];
        const float active=std::max(0.f,sum);
        volatile float product=active*policy.output[h];result[0]+=product;
        if(policy.heads>1){volatile float now=active*policy.nowOutput[h];result[1]+=now;}
    }
    return result;
}
float SquadLogit(const SquadPolicy& policy,const SquadFeatures& features) {
    return SquadLogits(policy,features)[0];
}
size_t SquadActionCount(const SquadObservation& observation) {
    return observation.legalNow.empty()?observation.actions.size():observation.actions.size()*SquadTimingCount;
}
bool SquadActionLegal(const SquadObservation& observation,int index) {
    if(index<0||size_t(index)>=SquadActionCount(observation))return false;
    if(observation.legalNow.empty())return observation.legal[size_t(index)];
    const size_t row=size_t(index)/SquadTimingCount;
    return index%SquadTimingCount?observation.legalNow[row]:observation.legal[row];
}
int SelectSquadAction(const SquadPolicy& policy,const SquadObservation& observation,std::vector<float>* logits) {
    const bool flat=policy.schema>=4;
    if(observation.actions.empty()||observation.actions.size()>size_t(policy.schema==2?31:SquadActionLimit)||
        observation.legal.size()!=observation.actions.size()||
        (flat?observation.legalNow.size()!=observation.actions.size():!observation.legalNow.empty())||
        (!observation.raster.empty()&&(!flat||observation.raster.size()!=size_t(SquadRasterBytes))))return -1;
    const auto raster=SquadRasterEmbedding(policy,observation.raster);
    if(logits)logits->assign(SquadActionCount(observation),0);
    int best=-1;float score=-std::numeric_limits<float>::infinity();
    for(size_t a=0;a<observation.actions.size();++a) {
        for(float value:observation.actions[a])if(!std::isfinite(value)||std::abs(value)>16)return -1;
        if(!flat) {
            if(!observation.legal[a])continue;
            const float candidate=SquadLogit(policy,observation.actions[a]);
            if(!std::isfinite(candidate))return -1;
            if(logits)(*logits)[a]=candidate;
            if(best<0||candidate>score){best=int(a);score=candidate;}
            continue;
        }
        if(!observation.legal[a]&&!observation.legalNow[a])continue;
        const auto both=SquadLogits(policy,observation.actions[a],&raster);
        for(int timing=0;timing<SquadTimingCount;++timing) {
            if(!(timing?observation.legalNow[a]:observation.legal[a]))continue;
            const float candidate=both[size_t(timing)];
            if(!std::isfinite(candidate))return -1;
            const int index=int(a)*SquadTimingCount+timing;
            if(logits)(*logits)[size_t(index)]=candidate;
            // Strictly greater: a tie keeps the first legal flat index.
            if(best<0||candidate>score){best=index;score=candidate;}
        }
    }
    return best;
}
std::string SquadDecisionJson(const SquadDecision& decision) {
    std::ostringstream out;out.imbue(std::locale::classic());out<<std::setprecision(9);
    out<<"{\"schema\":"<<decision.schema<<",\"time\":"<<decision.time<<",\"squad\":"<<decision.squad<<",\"leader\":"<<decision.leader
        <<",\"candidates\":"<<decision.candidates<<",\"neural\":"<<decision.neural<<",\"teacher\":"<<decision.teacher
        <<",\"selected\":"<<decision.selected<<",\"outcome\":\""<<decision.outcome<<"\",\"legal\":[";
    for(size_t i=0;i<decision.observation.legal.size();++i){if(i)out<<',';out<<decision.observation.legal[i];}
    out<<']';
    if(decision.schema>=4){out<<",\"legal_now\":[";
        for(size_t i=0;i<decision.observation.legalNow.size();++i){if(i)out<<',';out<<decision.observation.legalNow[i];}out<<']';}
    if(decision.schema>=4&&!decision.observation.raster.empty())out<<",\"raster\":\""<<SquadRasterHex(decision.observation.raster)<<'"';
    out<<",\"features\":[";
    for(size_t i=0;i<decision.observation.actions.size();++i){if(i)out<<',';out<<'[';
        for(int j=0;j<(decision.schema==2?96:decision.schema==3?97:SquadFeatureCount);++j){if(j)out<<',';out<<decision.observation.actions[i][j];}out<<']';}
    out<<"],\"teacher_scores\":[";
    for(size_t i=0;i<decision.teacherScores.size();++i){if(i)out<<',';out<<decision.teacherScores[i];}
    out<<"],\"logits\":[";for(size_t i=0;i<decision.logits.size();++i){if(i)out<<',';out<<decision.logits[i];}
    out<<"]}";return out.str();
}
}
