#pragma once
#include "SquadPolicy.h"
#include <limits>
#include <cstring>
#include <iomanip>
#include <locale>
#include "ManeuverSim.h"
#include "SquadRaster.h"

static std::string ZeroSquadPolicy() {
    std::ostringstream text;text<<"ARMY_SQUAD_POLICY 2 96 32 0\n";
    for(int i=0;i<96*32+32+32+1;++i)text<<"0 ";
    return text.str();
}

// Plan 026 P4: schema-4 artifacts. Weights are a fixed pseudo-random sequence; the schema-4 text of
// a schema-3 model is its zero extension (new columns, go-now head and raster blocks all zero).
static float PseudoWeight(uint64_t& state){state=state*6364136223846793005ull+1442695040888963407ull;return float(int((state>>33)%2001)-1000)/997.f;}
static std::string Schema3Text(uint64_t seed,bool extended,float nowBias=0) {
    std::ostringstream text;text.imbue(std::locale::classic());text<<std::setprecision(9);
    text<<(extended?"ARMY_SQUAD_POLICY 4 128 32 0 128 16\n":"ARMY_SQUAD_POLICY 3 97 32 0\n");
    uint64_t state=seed;
    for(int h=0;h<32;++h){for(int f=0;f<97;++f)text<<PseudoWeight(state)<<' ';if(extended)for(int f=97;f<128;++f)text<<"0 ";}
    for(int h=0;h<32;++h)text<<PseudoWeight(state)<<' ';          // hidden bias
    for(int h=0;h<32;++h)text<<PseudoWeight(state)<<' ';          // through-the-gates head
    if(extended)for(int h=0;h<32;++h)text<<"0 ";                  // go-now head
    text<<PseudoWeight(state)<<' ';                               // its bias
    if(extended){text<<nowBias<<' ';for(int i=0;i<16*128+16+32*16;++i)text<<"0 ";}
    return text.str();
}
// Plan 026 4c: the map view. Knowledge boundary, cache invalidation, pooling/embedding against a
// double-precision reference, hex round trip, determinism and read-only construction in battle.
static void RasterTests(const Config& external4,const DiagnosticOptions& off) {
    const float time=50;
    Map map=MakeSkirmishMap();
    Soldier leader;leader.id=0;leader.team=0;leader.squad=0;leader.position={-40,3,0};
    std::vector<Soldier> squad{leader};
    SquadCommand cmd;cmd.mission={-40,3,0};
    auto view=BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time);
    auto window=SquadRasterWindow(view);assert(window.size()==size_t(SquadRasterBytes));
    auto channelSum=[](const std::vector<uint8_t>& w,int c){int sum=0;for(int k=0;k<256;++k)sum+=w[size_t(c*256+k)];return sum;};
    auto at=[&](const std::vector<uint8_t>& w,const SquadRasterView& v,Vec3 p,int c){
        const int i=v.CellX(p.x)-v.originX+8,j=v.CellY(p.y)-v.originY+8;assert(i>=0&&i<16&&j>=0&&j<16);
        return int(w[size_t((c*16+j)*16+i)]);};
    // Origin cell is window index 8; the man himself is a friendly there, the mission is marked.
    assert(at(window,view,leader.position,6)==32&&at(window,view,cmd.mission,7)==64);
    assert(view.offsetX>=0&&view.offsetX<1&&view.offsetY>=0&&view.offsetY<1);
    // An enemy 20 m away that nobody has seen or reported: no trace in the enemy channels.
    const Vec3 enemy{-20,3,0};const int enemyId=TeamSize+5;
    assert(channelSum(window,3)==0&&channelSum(window,4)==0);
    assert(view.Cell(view.CellX(enemy.x),view.CellY(enemy.y))[3]==0);
    // Once reported (a received report, not his own sight), it lands in its own cell only.
    Contact report;report.known=true;report.position=enemy;report.observedAt=time;report.automaticWeapon=true;
    leader.reports[size_t(enemyId)]=report;
    auto reported=BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time);auto seen=SquadRasterWindow(reported);
    assert(at(seen,reported,enemy,3)==64&&at(seen,reported,enemy,4)==255);
    assert(channelSum(seen,3)==64&&channelSum(seen,4)==255);
    for(int c:{0,1,2,5,6,7})assert(channelSum(seen,c)==channelSum(window,c)); // nothing else moved
    // A stale report (older than confidence .15) is not known and leaves no trace.
    leader.reports[size_t(enemyId)].observedAt=time-110;
    assert(channelSum(SquadRasterWindow(BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time)),3)==0);
    leader.reports[size_t(enemyId)]=Contact{};
    // A reported fire area fills channel 5 around it, strongest at its own cell centre.
    const int fx=view.CellX(-28),fy=view.CellY(9);
    const Vec3 fire{-map.halfWidth+(fx+.5f)*6,-map.halfHeight+(fy+.5f)*6,0};
    leader.fireAreas[0]=FireArea{fire,1,time};
    auto fired=BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time);auto hot=SquadRasterWindow(fired);
    assert(at(hot,fired,fire,5)==255&&channelSum(window,5)==0&&channelSum(hot,5)>255);
    assert(fired.Cell(fx+3,fy)[5]==0); // 18 m away: beyond the 12 m danger radius
    leader.fireAreas[0]=FireArea{};
    // Allies: seen within 10 s count, older sightings do not; platoon waypoints are channel 7.
    Contact ally;ally.known=true;ally.position={-30,-20,0};ally.observedAt=time-9;leader.allies[9]=ally;
    std::vector<Vec3> approaches{{-10,-30,0}};
    auto allied=BuildSquadRasterView(leader,squad,map,approaches,cmd,leader.position,time);auto both=SquadRasterWindow(allied);
    assert(at(both,allied,ally.position,6)==32&&at(both,allied,approaches[0],7)==96);
    leader.allies[9].observedAt=time-10;
    assert(channelSum(SquadRasterWindow(BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time)),6)==32);
    leader.allies[9]=Contact{};
    // Off-map cells are flagged; the window around a corner origin shows them.
    {auto corner=BuildSquadRasterView(leader,squad,map,{},cmd,{-map.halfWidth+1,-map.halfHeight+1,0},time);
     auto w=SquadRasterWindow(corner);assert(w[0]==255&&w[256]==255&&w[512]==0);
     assert(corner.Cell(-1,5)[0]==255&&corner.Cell(-1,5)[1]==255);}
    // Static channels: cached per revision; removing an obstacle (a revision bump) changes channel 0.
    {const auto* first=&SquadRasterStaticChannels(map);assert(first==&SquadRasterStaticChannels(map));
     const Obstacle* wall=nullptr;
     for(const auto& o:map.obstacles)if(o.blocksMovement&&!o.building&&o.center.z<1&&o.half.x*o.half.y>=1){wall=&o;break;}
     assert(wall);const Vec3 centre=wall->center;const uint64_t id=wall->id;const uint64_t revision=map.revision;
     auto probe=BuildSquadRasterView(leader,squad,map,{},cmd,centre,time);
     const auto before=probe.Cell(probe.CellX(centre.x),probe.CellY(centre.y));assert(before[0]>0);
     assert(RemoveObstacle(map,id)&&map.revision>revision);
     auto after=BuildSquadRasterView(leader,squad,map,{},cmd,centre,time);
     const auto changed=after.Cell(after.CellX(centre.x),after.CellY(centre.y));
     assert(changed[0]<before[0]&&SquadRasterStaticChannels(map).key==map.revision);}
    // Determinism: the same inputs give the same raster.
    assert(SquadRasterWindow(BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time))==
        SquadRasterWindow(BuildSquadRasterView(leader,squad,map,{},cmd,leader.position,time)));
    // Samples: HOLD (origin) columns hold the origin cell, the 3x3 mean and the in-cell offset.
    {SquadFeatures row{};SquadRasterSamples(view,leader.position,leader.position,row);
     const auto cell=view.Cell(view.originX,view.originY);
     for(int c=0;c<8;++c){assert(row[size_t(101+c)]==float(cell[size_t(c)])/255.f&&row[size_t(117+c)]==row[size_t(101+c)]);
         int sum=0;for(int dy=-1;dy<=1;++dy)for(int dx=-1;dx<=1;++dx)sum+=view.Cell(view.originX+dx,view.originY+dy)[size_t(c)];
         assert(row[size_t(109+c)]==float(sum)/(9*255.f));}
     assert(row[125]==view.offsetX&&row[126]==view.offsetY&&row[127]==0);
     for(int f=97;f<101;++f)assert(row[size_t(f)]==0);}
    // Hex round trip.
    {std::vector<uint8_t> bytes(256);for(int i=0;i<256;++i)bytes[size_t(i)]=uint8_t(i);
     std::vector<uint8_t> back;assert(SquadRasterFromHex(SquadRasterHex(bytes),back)&&back==bytes);
     assert(SquadRasterHex({0x0f,0xa0})=="0fa0");assert(!SquadRasterFromHex("abc",back)&&!SquadRasterFromHex("zz",back));}
    // Pooling and embedding against a double-precision reference.
    {std::string text="ARMY_SQUAD_POLICY 4 128 32 0 128 16\n";std::ostringstream numbers;numbers.imbue(std::locale::classic());numbers<<std::setprecision(9);
     uint64_t state=4242;for(int i=0;i<32*128+32+2*32+2+16*128+16+32*16;++i)numbers<<PseudoWeight(state)*.25f<<' ';
     std::string error;auto policy=LoadSquadPolicy(text+numbers.str(),error);assert(policy);
     std::vector<uint8_t> raster(SquadRasterBytes,uint8_t(0));for(auto& b:raster)b=uint8_t((state=state*6364136223846793005ull+1)>>56);
     const auto pooled=SquadRasterPooling(raster);
     std::array<double,128> reference{};
     for(int c=0;c<8;++c)for(int j=0;j<16;++j)for(int i=0;i<16;++i)reference[size_t(c*16+(j/4)*4+i/4)]+=raster[size_t((c*16+j)*16+i)];
     for(int k=0;k<128;++k)assert(pooled[size_t(k)]==float(reference[size_t(k)])/4080.f);
     std::array<double,16> units{};
     for(int u=0;u<16;++u){double sum=policy->rasterBias[size_t(u)];for(int k=0;k<128;++k)sum+=double(policy->rasterWeights[size_t(u*128+k)])*reference[size_t(k)]/4080.;units[size_t(u)]=std::max(0.,sum);}
     const auto embedded=SquadRasterEmbedding(*policy,raster);assert(embedded.present);
     double worst=0;int active=0;
     for(int h=0;h<32;++h){double sum=0;for(int u=0;u<16;++u)sum+=double(policy->rasterProjection[size_t(h*16+u)])*units[size_t(u)];
         worst=std::max(worst,std::abs(sum-double(embedded.hidden[size_t(h)])));}
     for(double u:units)active+=u>0;
     assert(worst<1e-5&&active>0&&active<16);
     assert(!SquadRasterEmbedding(*policy,{}).present);
     std::cout<<"Map view embedding: max error "<<worst<<" against double precision, "<<active<<"/16 units active\n";
     // The embedding enters every row: a map-aware policy scores the same row differently.
     SquadFeatures x{};x[0]=1;auto plain=SquadLogits(*policy,x);auto viewed=SquadLogits(*policy,x,&embedded);
     assert(plain[0]!=viewed[0]||plain[1]!=viewed[1]);}
    // In battle: every schema-4 decision carries a raster, and the same battle gives the same
    // rasters. Construction is read-only: a zero raster projection plays the zero-raster model's
    // battle bit for bit, while a live projection is actually used (its logits differ).
    auto hexes=[&](const Config& config,std::vector<std::string>& out){
        DiagnosticOptions record=off;LeanRecorder lean;
        record.squadDecisionSink=[&](const SquadDecision& d){assert(d.observation.raster.size()==size_t(SquadRasterBytes));out.push_back(SquadRasterHex(d.observation.raster));};
        record.frameSink=[&](const Record& r,const Frame& f){lean.Record_(r,f);};
        auto result=Simulate(config,record,{},1);return lean.Digest(result);};
    {std::string error;auto zero=LoadSquadPolicy(Schema3Text(11,true),error);assert(zero);
     auto readOnly=std::make_shared<SquadPolicy>(*zero);uint64_t state=77;
     for(auto& w:readOnly->rasterWeights)w=PseudoWeight(state);
     for(auto& b:readOnly->rasterBias)b=PseudoWeight(state);
     auto live=std::make_shared<SquadPolicy>(*readOnly);for(auto& w:live->rasterProjection)w=PseudoWeight(state)*4;
     readOnly->digest=zero->digest; // same identity: only the unprojected embedding differs
     Config a=external4;a.externalPolicy=false;a.neuralPolicy=zero;Config b=a;b.neuralPolicy=readOnly;
     std::vector<std::string> first,second,third;
     const auto da=hexes(a,first),db=hexes(b,second),dc=hexes(a,third);
     assert(!first.empty()&&first==third&&da==dc);          // determinism
     assert(da==db&&first==second);                         // a zero projection changes nothing
     std::vector<float> zeroLogits,liveLogits;
     DiagnosticOptions logits=off;logits.squadDecisionSink=[&](const SquadDecision& d){if(zeroLogits.empty())zeroLogits=d.logits;};
     Simulate(a,logits,{},1);
     Config c=a;c.neuralPolicy=live;logits.squadDecisionSink=[&](const SquadDecision& d){if(liveLogits.empty())liveLogits=d.logits;};
     Simulate(c,logits,{},1);
     assert(!zeroLogits.empty()&&zeroLogits.size()==liveLogits.size()&&zeroLogits!=liveLogits);
     size_t bytes=0;for(const auto& h:first)bytes+=h.size();
     std::cout<<"Map view in battle: "<<first.size()<<" decisions, identical rasters and digest on repeat and with a zero projection, "
        <<bytes/first.size()<<" hex chars per raster\n";}
}
static void Schema4Tests(const Config& schema3External,const DiagnosticOptions& off) {
    std::string error;
    // Loader: schema 4 accepted only with its exact header and every block.
    std::string zeros="ARMY_SQUAD_POLICY 4 128 32 0 128 16\n";
    for(int i=0;i<32*128+32+2*32+2+16*128+16+32*16;++i)zeros+="0 ";
    auto zero4=LoadSquadPolicy(zeros,error);
    assert(zero4&&error.empty()&&zero4->schema==4&&zero4->features==128&&zero4->heads==2);
    auto three=LoadSquadPolicy(Schema3Text(7,false),error);assert(three&&three->schema==3&&three->features==97&&three->heads==1);
    auto four=LoadSquadPolicy(Schema3Text(7,true),error);assert(four&&four->schema==4);
    {const std::string& t=zeros;
     assert(!LoadSquadPolicy("ARMY_SQUAD_POLICY 4 128 32 0 128 8"+t.substr(t.find('\n')),error));
     assert(!LoadSquadPolicy("ARMY_SQUAD_POLICY 4 128 32 0"+t.substr(t.find('\n')),error));
     assert(!LoadSquadPolicy("ARMY_SQUAD_POLICY 4 97 32 0 128 16"+t.substr(t.find('\n')),error));
     assert(!LoadSquadPolicy("ARMY_SQUAD_POLICY 3 128 32 0"+t.substr(t.find('\n')),error));
     assert(!LoadSquadPolicy(t.substr(0,t.rfind("0 "))+"\n",error)); // one number short
     assert(!LoadSquadPolicy(t+"0",error));                           // one number long
     assert(!LoadSquadPolicy(Schema3Text(7,false)+"0 0",error));}
    // Zero extension: the through-the-gates logit is bit-for-bit the schema-3 logit, whatever the
    // reserved and raster columns hold; the go-now head of the extension is exactly its bias.
    uint64_t state=99;int rows=0;
    for(int n=0;n<500;++n){SquadFeatures x{};for(int f=0;f<97;++f)x[f]=PseudoWeight(state)*4;
        const float a=SquadLogit(*three,x);auto both=SquadLogits(*four,x);
        for(int f=97;f<128;++f)x[f]=PseudoWeight(state)*4;
        auto noisy=SquadLogits(*four,x);
        assert(std::memcmp(&a,&both[0],4)==0&&std::memcmp(&a,&noisy[0],4)==0&&SquadLogit(*four,x)==a);
        assert(both[1]==0&&noisy[1]==0);++rows;}
    // Schema 2 scores its own 96 columns only (as it always did, the 97th had no weight).
    {SquadFeatures x{};x[96]=5;auto z=LoadSquadPolicy(ZeroSquadPolicy(),error);assert(z->features==96&&SquadLogit(*z,x)==0);}
    // Flat selection: ties go to the first legal flat index; legality per timing.
    SquadObservation obs;obs.actions.resize(3);obs.legal={true,true,false};obs.legalNow={false,true,true};
    assert(SelectSquadAction(*zero4,obs)==0);                  // all logits zero: row 0, through the gates
    obs.legal[0]=false;assert(SelectSquadAction(*zero4,obs)==2); // next legal flat index: row 1 through the gates
    obs.legal[1]=false;assert(SelectSquadAction(*zero4,obs)==3); // row 1 go now
    SquadPolicy eager=*zero4;eager.nowOutputBias=1;obs.legal={true,true,false};
    std::vector<float> logits;assert(SelectSquadAction(eager,obs,&logits)==3&&logits.size()==6&&logits[3]==1&&logits[0]==0);
    eager.nowOutputBias=-1;assert(SelectSquadAction(eager,obs)==0);
    assert(SquadActionCount(obs)==6&&SquadActionLegal(obs,5)&&!SquadActionLegal(obs,1)&&!SquadActionLegal(obs,6)&&!SquadActionLegal(obs,-1));
    {auto bad=obs;bad.legalNow.pop_back();assert(SelectSquadAction(*zero4,bad)==-1);
     bad=obs;bad.legalNow.clear();assert(SelectSquadAction(*zero4,bad)==-1);
     assert(SelectSquadAction(*three,obs)==-1);                // a schema-3 model never sees a timing mask
     bad=obs;bad.raster.assign(SquadRasterBytes,0);assert(SelectSquadAction(*zero4,bad)==0); // stage 4c: a full raster is accepted
     bad.raster.pop_back();assert(SelectSquadAction(*zero4,bad)==-1);                        // a short one is not
     bad=obs;bad.legalNow.clear();bad.raster.assign(SquadRasterBytes,0);assert(SelectSquadAction(*three,bad)==-1);} // nor by schema 3
    assert(SquadRasterEmbedding(*four,{}).present==false);
    // Configuration: schema 4 is explicit, validated and part of identity.
    {Config plain,wide;wide.policySchema=4;assert(!SameConfig(plain,wide));
     Config odd;odd.policySchema=3;odd.maxSeconds=1;bool refused=false;try{Simulate(odd,off);}catch(const std::invalid_argument&){refused=true;}assert(refused);
     Config mismatch;mismatch.maxSeconds=1;mismatch.neuralPolicy=four;refused=false;try{Simulate(mismatch,off);}catch(const std::invalid_argument&){refused=true;}assert(refused);
     mismatch.neuralPolicy=three;mismatch.policySchema=4;refused=false;try{Simulate(mismatch,off);}catch(const std::invalid_argument&){refused=true;}assert(refused);
     Config drillsWide;drillsWide.drills=drillsWide.foundations=true;drillsWide.policySchema=4;drillsWide.maxSeconds=1;
     refused=false;try{Simulate(drillsWide,off);}catch(const std::invalid_argument&){refused=true;}assert(refused);}
    // Never go now under schema 4: the same battle as the schema-3 external run making the same
    // row choices. Only the interface fold differs, so the digest with that fold removed is equal.
    auto rowChoice=[](const SquadObservation& observation,int timingRows){
        const int n=int(observation.actions.size());
        if(observation.legal[1])return 1;
        for(int i=2;i<n;++i)if(observation.legal[i])return i;
        (void)timingRows;return 0;};
    Config external4=schema3External;external4.policySchema=4;
    DiagnosticOptions three3=off,never=off;LeanRecorder lean3,leanNever;int decisions3=0,decisionsNever=0,schema4Rows=0;
    three3.squadActionCallback=[&](const SquadObservation& o,int,float){++decisions3;assert(o.legalNow.empty()&&o.raster.empty());return rowChoice(o,0);};
    three3.frameSink=[&](const Record& r,const Frame& f){lean3.Record_(r,f);};
    never.squadActionCallback=[&](const SquadObservation& o,int,float){++decisionsNever;
        assert(o.legalNow.size()==o.actions.size()&&!o.legalNow[0]&&o.legalNow[1]==o.legal[1]);
        for(size_t i=2;i<o.actions.size();++i)assert(o.legalNow[i]==o.legal[i]);
        // 4c: 97..100 reserved, 101..126 map samples in [0,1], 127 spare; one raster per decision.
        assert(o.raster.size()==size_t(SquadRasterBytes));
        for(const auto& row:o.actions){for(int f=97;f<SquadRasterColumn;++f)assert(row[f]==0);
            for(int f=SquadRasterColumn;f<127;++f)assert(row[f]>=0&&row[f]<=1);assert(row[127]==0);}
        ++schema4Rows;return rowChoice(o,1)*SquadTimingCount;};
    never.frameSink=[&](const Record& r,const Frame& f){leanNever.Record_(r,f);};
    std::vector<std::string> outcomes4;
    never.squadDecisionSink=[&](const SquadDecision& d){assert(d.schema==4&&d.outcome!="committed_now");
        assert(SquadDecisionJson(d).find("\"legal_now\":[")!=std::string::npos);
        assert(SquadDecisionJson(d).find("\"raster\":\""+SquadRasterHex(d.observation.raster)+"\"")!=std::string::npos);};
    auto r3=Simulate(schema3External,three3,{},1);auto r4=Simulate(external4,never,{},1);
    assert(decisions3==decisionsNever&&decisions3>0&&lean3.frameHash==leanNever.frameHash);
    assert(lean3.Digest(r3)!=leanNever.Digest(r4));                 // the fold is present
    auto neutral=r4;neutral.config.policySchema=0;assert(leanNever.Digest(neutral)==lean3.Digest(r3));
    // Always go now: commits are go-now commits, their bounds are released without waiting for
    // covering fire, and no bound is paused for covering fire while its release runs.
    DiagnosticOptions always=off;int nowCommits=0,commits=0,releasedFrames=0,exposedReleased=0,supportPauses=0,releases=0;
    always.squadActionCallback=[&](const SquadObservation& o,int,float){
        for(size_t i=1;i<o.actions.size();++i)if(o.legalNow[i])return int(i)*SquadTimingCount+1;
        return 0;};
    always.squadDecisionSink=[&](const SquadDecision& d){nowCommits+=d.outcome=="committed_now";commits+=d.outcome=="committed";
        assert(d.outcome!="support_wait"&&d.outcome!="preparing");};
    std::array<bool,SquadCount> wasReleased{};
    always.frameSink=[&](const Record&,const Frame& f){
        for(int q=0;q<SquadCount;++q){const auto& c=f.command[q];const bool on=PolicyReleased(c,f.time);
            if(wasReleased[q]&&c.movementBlock.reason==MoveBlock::Support)++supportPauses;
            if(on&&!wasReleased[q])++releases;
            // A released bound is running: no pause, the squad on its way, whatever covering fire.
            if(on&&c.movementBlock.reason==MoveBlock::None){++releasedFrames;if(c.moveExposure>=.2f)++exposedReleased;}
            wasReleased[q]=on&&c.movementBlock.reason==MoveBlock::None;}};
    Simulate(external4,always,{},1);
    assert(nowCommits>0&&commits==0&&releases>0&&releasedFrames>0&&supportPauses==0);
    // Control: the same row rule through the gates is held by them (waits, preparation or a
    // covering-fire pause), which is what the go-now arm skipped.
    DiagnosticOptions gated=off;int held=0,gatedSupportPauses=0;std::array<MoveBlock,SquadCount> lastBlock{};
    gated.squadActionCallback=[&](const SquadObservation& o,int,float){
        for(size_t i=1;i<o.actions.size();++i)if(o.legalNow[i])return int(i)*SquadTimingCount;
        return 0;};
    gated.squadDecisionSink=[&](const SquadDecision& d){held+=d.outcome=="support_wait"||d.outcome=="preparing";assert(d.outcome!="committed_now");};
    gated.frameSink=[&](const Record&,const Frame& f){for(int q=0;q<SquadCount;++q){const auto reason=f.command[q].movementBlock.reason;
        if(reason==MoveBlock::Support&&lastBlock[q]!=MoveBlock::Support)++gatedSupportPauses;lastBlock[q]=reason;}};
    Simulate(external4,gated,{},1);
    std::cout<<"through-the-gates control: "<<held<<" waits or preparations, "<<gatedSupportPauses<<" covering-fire pauses"<<std::endl;
    assert(held+gatedSupportPauses>0);
    // The same scenario never releases anything when go now is never chosen.
    int neverReleased=0;never.squadDecisionSink={};
    never.frameSink=[&](const Record&,const Frame& f){for(const auto& c:f.command)neverReleased+=c.policyRelease;};
    Simulate(external4,never,{},1);assert(neverReleased==0);
    RasterTests(external4,off);
    std::cout<<"Schema 4: "<<rows<<" zero-extended logits bitwise, never-now "<<decisionsNever<<" decisions schema-3 identical, always-now "
        <<nowCommits<<" go-now commits, "<<releases<<" releases, "<<releasedFrames<<" released bound frames ("<<exposedReleased<<" exposed), 0 support pauses\n";
}
static void NeuralTests() {
    std::string error;auto model=LoadSquadPolicy(ZeroSquadPolicy(),error);
    assert(model&&error.empty()&&model->digest);
    assert(!LoadSquadPolicy("ARMY_SQUAD_POLICY 2 96 32 0\n",error));
    assert(!LoadSquadPolicy(ZeroSquadPolicy()+"junk",error));
    assert(!LoadSquadPolicy(std::string(300000,'0'),error));
    SquadObservation obs;obs.actions.resize(3);obs.legal={true,false,true};
    SquadPolicy weighted=*model;weighted.weights[0]=1;weighted.output[0]=1;
    obs.actions[0][0]=-1;obs.actions[1][0]=10;obs.actions[2][0]=2;
    assert(SelectSquadAction(weighted,obs)==2); // illegal highest score cannot win
    obs.legal[2]=false;assert(SelectSquadAction(weighted,obs)==0);
    obs.legal[0]=false;assert(SelectSquadAction(weighted,obs)==-1);
    obs.legal={true,true,true};obs.actions[1][0]=std::numeric_limits<float>::quiet_NaN();
    assert(SelectSquadAction(weighted,obs)==-1);
    obs.actions[1][0]=0;obs.actions[2][0]=0;assert(SelectSquadAction(*model,obs)==0);
    Config plain,neural;neural.neuralPolicy=model;
    assert(!SameConfig(plain,neural));assert(SameConfig(neural,neural));
    auto altered=std::make_shared<SquadPolicy>(*model);altered->digest++;
    Config different=neural;different.neuralPolicy=altered;assert(!SameConfig(neural,different));
    // Recorder is a side channel: it must preserve the same battle and all decisions.
    Config c;c.maxSeconds=120;
    DiagnosticOptions off;off.enabled=false;off.keepFrames=false;
    auto before=Simulate(c,off,{},1);int choices=0;
    DiagnosticOptions recording=off;
    recording.squadDecisionSink=[&](const SquadDecision& decision){
        ++choices;assert(!decision.neural&&decision.selected==decision.teacher);
        assert(decision.observation.legal[decision.teacher]);
        for(const auto& row:decision.observation.actions)for(float value:row)assert(std::isfinite(value));
        for(const auto& row:decision.observation.actions)for(int i=0;i<32;++i)
            assert(row[i]==decision.observation.actions[0][i]);
        assert(decision.outcome!="unclassified");
        assert(decision.observation.raster.empty()&&SquadDecisionJson(decision).find("raster")==std::string::npos); // recording-only: no map view
        assert(!SquadDecisionJson(decision).empty());
    };
    auto after=Simulate(c,recording,{},1);
    assert(GameplayDigest(before)==GameplayDigest(after));assert(choices>0);
    auto sameNumbers=LoadSquadPolicy(ZeroSquadPolicy()+"\n",error);
    assert(sameNumbers&&sameNumbers->digest!=model->digest);
    // Hash identity even when no shot or action changes; both full and lean paths must retain it.
    Config small;small.maxSeconds=1;small.neuralPolicy=model;
    auto a=Simulate(small,off);small.neuralPolicy=sameNumbers;auto b=Simulate(small,off);
    assert(GameplayDigest(a)!=GameplayDigest(b));
    LeanRecorder first,second;DiagnosticOptions lean=off;
    lean.frameSink=[&](const Record& r,const Frame& f){first.Record_(r,f);};
    small.neuralPolicy=model;auto la=Simulate(small,lean);
    lean.frameSink=[&](const Record& r,const Frame& f){second.Record_(r,f);};
    small.neuralPolicy=sameNumbers;auto lb=Simulate(small,lean);
    assert(first.Digest(la)!=second.Digest(lb));
    // Schema-3 continuation runs through the same gates and keeps preparation age.
    Config external=c;external.externalPolicy=true;
    DiagnosticOptions controlled=off;int keeps=0,commits=0;float maxAge=0;
    controlled.squadActionCallback=[&](const SquadObservation& observation,int,float){
        assert(observation.actions.size()<=32&&observation.actions[1][96]==1);
        if(observation.legal[1]){++keeps;maxAge=std::max(maxAge,observation.actions[1][11]);return 1;}
        for(size_t i=2;i<observation.legal.size();++i)if(observation.legal[i])return int(i);
        return 0;
    };
    controlled.squadDecisionSink=[&](const SquadDecision& d){assert(d.schema==3);commits+=d.outcome=="committed";};
    auto continued=Simulate(external,controlled,{},1);
    assert(keeps>0&&commits>0&&maxAge>0);
    controlled.squadActionCallback=[](const SquadObservation&,int,float){return 99;};
    bool rejected=false;try{Simulate(external,controlled,{},1);}catch(const std::runtime_error&){rejected=true;}assert(rejected);
    controlled.squadActionCallback=[](const SquadObservation&,int,float){return 0;};
    controlled.squadDecisionSink={};
    LeanRecorder externalA,externalB;
    controlled.frameSink=[&](const Record& r,const Frame& f){externalA.Record_(r,f);};
    auto ea=Simulate(external,controlled,{},1);
    controlled.frameSink=[&](const Record& r,const Frame& f){externalB.Record_(r,f);};
    auto eb=Simulate(external,controlled,{},1);
    assert(externalA.Digest(ea)==externalB.Digest(eb));
    std::cout<<"Neural continuation: "<<keeps<<" keep choices, "<<commits<<" commits, max preparation age "<<maxAge*30<<"s\n";
    std::cout<<"Neural policy contracts and recording parity pass ("<<choices<<" decisions)\n";
    Schema4Tests(external,off);
}
