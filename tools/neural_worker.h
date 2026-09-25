#pragma once
// Training-only CLI transport. Never included by the Unreal module or actor scorer.
#include <iomanip>
#include <array>
#include <locale>

static std::string WorkerLine() {
    std::string line;
    if(!std::getline(std::cin,line))throw std::runtime_error("Training coordinator disconnected");
    if(line.size()>131072)throw std::runtime_error("Oversized worker command");
    return line;
}
static int NeuralWorker() {
    std::cin.imbue(std::locale::classic());std::cout.imbue(std::locale::classic());
    std::cout<<std::setprecision(9)<<"{\"type\":\"hello\",\"protocol\":1,\"schema\":3,\"max_schema\":4,\"map_view\":1,\"build\":\""<<BuildIdentifier()<<"\"}"<<std::endl;
    while(true) {
        auto line=WorkerLine();if(line=="QUIT")return 0;
        std::istringstream command(line);std::string verb,mapPath,mapDigest,extra;uint64_t episode=0;
        Config config;config.externalPolicy=true;
        if(!(command>>verb>>episode>>config.seed>>config.maxSeconds>>config.policyCandidates>>std::quoted(mapPath)>>mapDigest)||verb!="RESET")
            throw std::runtime_error("Invalid RESET command");
        // Plan 026 P4: an optional trailing interface schema. Absent (protocol 1) or 3 is the
        // schema-3 interface exactly as before; 4 selects 128-column rows and flat actions.
        if(command>>extra){
            std::string more;
            if((extra!="3"&&extra!="4")||(command>>more))throw std::runtime_error("Invalid RESET command");
            if(extra=="4")config.policySchema=4;
        }
        if(!std::isfinite(config.maxSeconds)||config.maxSeconds<1||config.maxSeconds>600)
            throw std::runtime_error("Worker battle limit must be 1..600 seconds");
        std::ifstream file(mapPath,std::ios::binary);std::ostringstream source;source<<file.rdbuf();std::string error;
        config.battlefield=ImportBattlefield(source.str(),error);
        if(!config.battlefield||std::to_string(config.battlefield->digest)!=mapDigest)
            throw std::runtime_error("Worker battlefield identity mismatch");
        config.terrain=config.battlefield->kind=="trenches"?Terrain::Trenches:Terrain::FracturedWorks;
        // RESET deliberately has no static-defence setting: Ember is ordinary Legacy.
        DiagnosticOptions options;options.enabled=false;options.keepFrames=false;
        LeanRecorder lean;
        std::array<int,2> active{},initial{};bool started=false;uint64_t sequence=0,actionHash=1469598103934665603ull;
        auto truth=[&](const Frame& frame){
            std::array<int,2> now{};for(const auto& soldier:frame.soldiers)if(soldier.Active())++now[soldier.team];
            if(!started){active=initial=now;started=true;
                std::cout<<"{\"type\":\"start\",\"episode\":"<<episode<<",\"initial\":["<<initial[0]<<','<<initial[1]<<"]}"<<std::endl;}
            if(now!=active){active=now;
                std::cout<<"{\"type\":\"reward\",\"episode\":"<<episode<<",\"time\":"<<frame.time<<",\"active\":["<<active[0]<<','<<active[1]<<"]}"<<std::endl;}
        };
        options.trainingStateSink=truth;
        options.frameSink=[&](const Record& record,const Frame& frame){truth(frame);lean.Record_(record,frame);};
        options.squadActionCallback=[&](const SquadObservation& observation,int squad,float time){
            ++sequence;SquadDecision message;message.schema=config.policySchema>=4?4:3;message.neural=true;message.squad=squad;message.time=time;message.observation=observation;
            std::cout<<"{\"type\":\"decision\",\"episode\":"<<episode<<",\"sequence\":"<<sequence
                <<",\"observation\":"<<SquadDecisionJson(message)<<",\"critic\":["
                <<float(active[0])/std::max(1,initial[0])<<','<<float(active[1])/std::max(1,initial[1])<<','<<time/config.maxSeconds<<"]}"<<std::endl;
            std::istringstream answer(WorkerLine());std::string action;uint64_t expectedEpisode=0,expectedSequence=0;int index=-1;
            if(!(answer>>action>>expectedEpisode>>expectedSequence>>index)||action!="ACTION"||(answer>>extra)||
                expectedEpisode!=episode||expectedSequence!=sequence||!SquadActionLegal(observation,index))
                throw std::runtime_error("Stale or illegal training ACTION");
            actionHash=(actionHash^uint64_t(index))*1099511628211ull;
            return index;
        };
        options.squadDecisionSink=[&](const SquadDecision& receipt){
            std::cout<<"{\"type\":\"receipt\",\"episode\":"<<episode<<",\"sequence\":"<<sequence<<",\"selected\":"<<receipt.selected
                <<",\"outcome\":\""<<receipt.outcome<<"\"}"<<std::endl;
        };
        auto start=DiagnosticClock::now();auto result=Simulate(config,options);
        std::cout<<"{\"type\":\"end\",\"episode\":"<<episode<<",\"winner\":"<<result.winner<<",\"time\":"<<result.duration
            <<",\"active\":["<<active[0]<<','<<active[1]<<"],\"decisions\":"<<sequence<<",\"external_policy\":true,\"digest\":\""<<lean.Digest(result)
            <<"\",\"action_hash\":\""<<actionHash<<'"';
        if(config.policySchema) {
            // The same battle's digest without the interface fold: equal to a schema-3 run's digest
            // whenever the schema-4 choices were the same (never go now).
            result.config.policySchema=0;const auto neutral=lean.Digest(result);result.config.policySchema=config.policySchema;
            std::cout<<",\"policy_schema\":"<<config.policySchema<<",\"schema_neutral_digest\":\""<<neutral<<'"';
        }
        std::cout<<",\"wall_seconds\":"<<DiagnosticSeconds(start)<<",\"peak_memory_bytes\":"<<PeakMemory()<<"}"<<std::endl;
    }
}
