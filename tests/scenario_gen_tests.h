#include <set>
static void ScenarioGeneratorTests(){
    std::set<uint64_t> fingerprints,physicalFingerprints;std::string error;
    for(uint32_t seed=1;seed<=100;++seed){
        auto a=GenerateScenario(ScenarioFamily::F1,seed),b=GenerateScenario(ScenarioFamily::F1,seed);
        assert(ValidateScenario(a,error));assert(ScenarioDigest(a)==ScenarioDigest(b));
        fingerprints.insert(ScenarioDigest(a));
        auto content=a;content.genSeed=0;physicalFingerprints.insert(ScenarioDigest(content));
        Config c;c.family=ScenarioFamily::F1;c.genSeed=seed;auto x=InitialFrame(c);Map mx;ApplyScenario(a,c,mx,x);
        c.seed=109;auto y=InitialFrame(c);Map my;ApplyScenario(b,c,my,y);
        bool reactionChanged=false;
        for(int id=0;id<UnitCount;++id){assert(Distance(x.soldiers[id].position,y.soldiers[id].position)==0);
            assert(x.soldiers[id].Active()==y.soldiers[id].Active()&&x.soldiers[id].machineGun==y.soldiers[id].machineGun);
            reactionChanged|=x.soldiers[id].reactionBase!=y.soldiers[id].reactionBase;}
        assert(reactionChanged);
    }
    assert(fingerprints.size()==100&&physicalFingerprints.size()==100);
    auto invalid=GenerateScenario(ScenarioFamily::F1,1);invalid.squads[0]&=~1;assert(!ValidateScenario(invalid,error));
    invalid=GenerateScenario(ScenarioFamily::F1,1);invalid.positions[0]=invalid.positions[1];assert(!ValidateScenario(invalid,error));
    invalid=GenerateScenario(ScenarioFamily::F1,1);invalid.map.prepared=false;assert(!ValidateScenario(invalid,error));
    invalid=GenerateScenario(ScenarioFamily::F1,1);auto pinched=invalid.map.obstacles[1];pinched.center.x=4;
    ReplaceObstacle(invalid.map,pinched.id,pinched);assert(!ValidateScenario(invalid,error));
    bool rejected=false;try{GenerateScenario(ScenarioFamily::F2,1);}catch(const std::invalid_argument&){rejected=true;}assert(rejected);
    Config c;c.family=ScenarioFamily::F1;c.genSeed=1;c.maxSeconds=3;DiagnosticOptions off;off.enabled=false;
    auto traced=Simulate(c),plain=Simulate(c,off);assert(GameplayDigest(traced)==GameplayDigest(plain));
    auto changed=c;changed.genSeed=2;assert(!SameConfig(c,changed));assert(GameplayDigest(Simulate(changed,off))!=GameplayDigest(plain));
    changed=c;changed.family=ScenarioFamily::None;assert(!SameConfig(c,changed));
    c.cognition=c.foundations=true;assert(GameplayDigest(Simulate(c))==GameplayDigest(Simulate(c,off)));
    for(bool cognitive:{false,true}){
        Config authored;authored.cognition=authored.foundations=cognitive;authored.maxSeconds=1;
        auto normal=Simulate(authored,off);authored.genSeed=999;
        assert(GameplayDigest(normal)==GameplayDigest(Simulate(authored,off)));
    }
    auto bad=c;bad.terrain=Terrain::Trenches;rejected=false;
    try{Simulate(bad,off);}catch(const std::invalid_argument&){rejected=true;}assert(rejected);
    std::cout<<"SCENARIO generator: 100 deterministic valid distinct draws, battle-seed invariant deployments, rejection controls and both-controller trace parity PASS\n";
}
