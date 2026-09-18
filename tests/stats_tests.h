// Plan 017 phase 1: stats, weapon items, fire control and magazines.
#pragma once
#include <memory>
static void StatSamplerTests() {
    const StatDistribution d;
    assert(std::abs(d.baseShare+d.lowShare+d.highShare-1)<1e-6f);
    for(int n=0;n<1000;++n)assert(SampleStat(StatDistribution::Fixed(),n/1000.f)==100.f);
    uint32_t state=12345u;auto draw=[&]{state=state*1664525u+1013904223u;return float(state>>8)/16777216.f;};
    const int draws=100000;int branchBase=0,branchLow=0,branchHigh=0;
    std::array<int,10> lowBins{},highBins{};
    for(int n=0;n<draws;++n) {
        const float u=draw(),value=SampleStat(d,u);
        assert(std::isfinite(value)&&value>=d.lowEdge-1e-3f&&value<=d.highEdge+1e-3f);
        if(u<d.baseShare)++branchBase; else if(u<d.baseShare+d.lowShare)++branchLow; else ++branchHigh;
        if(value<100)++lowBins[std::min(9,int((100-value)/2))];
        if(value>100)++highBins[std::min(9,int((value-100)/4))];
    }
    assert(std::abs(float(branchBase)/draws-.50f)<.01f);
    assert(std::abs(float(branchLow)/draws-.40f)<.01f);
    assert(std::abs(float(branchHigh)/draws-.10f)<.01f);
    // Base cluster stays inside 100 +/- baseHalfWidth; the tails reach their edges.
    for(float u=0;u<d.baseShare;u+=.001f){const float v=SampleStat(d,u);assert(v>=100-d.baseHalfWidth-1e-3f&&v<=100+d.baseHalfWidth+1e-3f);}
    for(float u=d.baseShare;u<d.baseShare+d.lowShare;u+=.001f){const float v=SampleStat(d,u);assert(v>=d.lowEdge-1e-3f&&v<=100+1e-3f);}
    for(float u=d.baseShare+d.lowShare;u<1;u+=.001f){const float v=SampleStat(d,u);assert(v>=100-1e-3f&&v<=d.highEdge+1e-3f);}
    // Tail density thins away from 100 in both directions.
    for(size_t bin=1;bin<lowBins.size();++bin)assert(lowBins[bin]<=lowBins[bin-1]);
    for(size_t bin=1;bin<highBins.size();++bin)assert(highBins[bin]<=highBins[bin-1]);
    assert(lowBins.back()<lowBins.front()&&highBins.back()<highBins.front());
    std::cout<<"STATS sampler: base="<<branchBase<<" low="<<branchLow<<" high="<<branchHigh<<" of "<<draws<<" PASS\n";
}
static void StatGenerationTests() {
    const StatDistribution d;
    const auto a=GenerateStats(d,107,3);
    assert(SameStats(a,GenerateStats(d,107,3)));
    assert(!SameStats(a,GenerateStats(d,107,4)));
    assert(!SameStats(a,GenerateStats(d,108,3)));
    bool independent=false;for(size_t k=1;k<StatCount;++k)independent|=a.value[k]!=a.value[0];
    assert(independent);
    for(float value:GenerateStats(StatDistribution::Fixed(),107,3).value)assert(value==100.f);
    // Talent is a pure function of the roster seed and slot: no battle RNG is consumed.
    Config c;auto frame=[](const Config& config){return std::make_unique<Frame>(InitialFrame(config));};
    const auto plain=frame(c);
    Config other=c;other.doctrine=Doctrine::Aggressive;other.approach=Approach::North;other.terrain=Terrain::Trenches;other.supportWeapon=false;
    {const auto shifted=frame(other);
     for(int id=0;id<UnitCount;++id)assert(SameStats(plain->soldiers[id].stats,shifted->soldiers[id].stats));}
    Config pinned=c;pinned.rosterSeed=4242;const auto roster=frame(pinned);
    {Config again=pinned;again.seed=c.seed+19;const auto sameRoster=frame(again);
     for(int id=0;id<UnitCount;++id)assert(SameStats(roster->soldiers[id].stats,sameRoster->soldiers[id].stats));}
    bool moved=false;for(int id=0;id<UnitCount;++id)moved|=!SameStats(plain->soldiers[id].stats,roster->soldiers[id].stats);
    assert(moved);
    assert(!SameConfig(c,pinned));
    // Mirrored slots share a soldier under the equal-troop comparison.
    {Config equal=c;equal.equalTroops=true;const auto mirrored=frame(equal);
     for(int id=0;id<TeamSize;++id)assert(SameStats(mirrored->soldiers[id].stats,mirrored->soldiers[id+TeamSize].stats));}
    bool asymmetric=false;for(int id=0;id<TeamSize;++id)asymmetric|=!SameStats(plain->soldiers[id].stats,plain->soldiers[id+TeamSize].stats);
    assert(asymmetric);
    // Toughness owns max health, initiative owns reaction time.
    for(const auto& s:plain->soldiers) {
        assert(std::abs(s.maxHealth-100*StatScale(s.stats.Get(Stat::Toughness)))<1e-3f);
        assert(s.health==s.maxHealth);
        assert(std::abs(s.reactionBase-.425f/StatScale(s.stats.Get(Stat::Initiative)))<1e-4f);
    }
    // Fixtures are stat-neutral so their authored timing bounds keep their meaning.
    Config drills=c;drills.drills=drills.foundations=true;Map map;auto fixture=frame(drills);
    MakeDrillEncounter(drills,44,map,*fixture);
    for(const auto& s:fixture->soldiers){for(float value:s.stats.value)assert(value==100.f);assert(s.maxHealth==100.f);}
    std::cout<<"STATS generation: roster determinism, independence, equal-troop mirroring and neutral fixtures PASS\n";
}
static void WeaponItemTests() {
    Soldier rifleman;
    assert(rifleman.gun.action==WeaponAction::Bolt&&!rifleman.machineGun);
    assert(rifleman.magazineRemaining==rifleman.gun.magazine&&rifleman.gun.magazine==8);
    Soldier gunner;EquipWeapon(gunner,{WeaponId::MachineGun,{}});
    assert(gunner.machineGun&&gunner.gun.action==WeaponAction::Automatic&&gunner.magazineRemaining==60);
    EquipWeapon(gunner,{WeaponId::Rifle,{}});assert(!gunner.machineGun&&gunner.magazineRemaining==8);
    EquipWeapon(gunner,{WeaponId::MachineGun,{}});
    // The table is the 100-stat reference for today's abstraction.
    assert(std::abs(SightRange(rifleman)-70.f)<1e-3f&&std::abs(SightRange(gunner)-95.f)<1e-3f);
    assert(std::abs(ShotSpread(rifleman)-.047f)<1e-4f&&std::abs(ShotSpread(gunner)-.080f)<5e-4f);
    assert(std::abs(AimSeconds(rifleman)-.45f)<1e-4f&&std::abs(AimSeconds(gunner)-.65f)<5e-3f);
    assert(std::abs(VerticalSpread(rifleman)-.014f)<1e-5f&&std::abs(VerticalSpread(gunner)-.0209f)<5e-4f);
    // Muzzle velocity follows the barrel power law.
    const auto& mg=WeaponTable(WeaponId::MachineGun);
    assert(std::abs(gunner.gun.muzzleVelocity-mg.cartridge.referenceVelocity*std::pow(mg.barrelLength/mg.cartridge.referenceBarrel,.2f))<1e-3f);
    assert(std::abs(rifleman.gun.muzzleVelocity-720.f)<1e-3f&&gunner.gun.muzzleVelocity<720.f&&gunner.gun.muzzleVelocity>700.f);
    // A modifier changes the resolved value and leaves the table alone.
    Soldier fitted;EquipWeapon(fitted,{WeaponId::Rifle,{{WeaponModifier::Field::Ergonomics,1.25f,0}}});
    assert(std::abs(fitted.gun.ergonomics-1.25f)<1e-4f&&WeaponTable(WeaponId::Rifle).ergonomics==1.f);
    assert(AimSeconds(fitted)<AimSeconds(rifleman));
    // Stats move the fire-control numbers through their single entry points.
    Soldier sharp=rifleman;sharp.stats.value[size_t(Stat::Perception)]=120;
    assert(ShotSpread(sharp)<ShotSpread(rifleman)&&ShotSpread(sharp)>sharp.gun.baseDeviation);
    assert(std::abs(SightRange(sharp)-84.f)<1e-3f);
    Soldier quick=rifleman;quick.stats.value[size_t(Stat::Dexterity)]=120;
    assert(AimSeconds(quick)<AimSeconds(rifleman));
    assert(std::abs(WeaponTable(WeaponId::Rifle).reloadSeconds/StatScale(120.f)-2.0833f)<1e-3f);
    // Wisdom is the quality of a sent report.
    Soldier wise=rifleman;wise.stats.value[size_t(Stat::Wisdom)]=125;
    assert(std::abs(ReportDelay(.75f,rifleman)-.75f)<1e-5f&&ReportDelay(.75f,wise)<.75f);
    // The organisation flag is a cache; Simulate rejects a divergent frame.
    auto frame=std::make_unique<Frame>(InitialFrame(Config{}));CheckWeaponConsistency(*frame);
    auto throws=[](const Frame& corrupt){try{CheckWeaponConsistency(corrupt);}catch(const std::logic_error&){return true;}return false;};
    assert(frame->soldiers[7].machineGun);
    frame->soldiers[0].machineGun=true;assert(throws(*frame));frame->soldiers[0].machineGun=false;
    frame->soldiers[7].machineGun=false;assert(throws(*frame));frame->soldiers[7].machineGun=true;
    frame->soldiers[0].magazineRemaining=frame->soldiers[0].gun.magazine+1;assert(throws(*frame));
    frame->soldiers[0].magazineRemaining=frame->soldiers[0].gun.magazine;CheckWeaponConsistency(*frame);
    std::cout<<"STATS weapons: table reference, modifiers, power-law velocity and the consistency assertion PASS\n";
}
static void StatBattleTests() {
    Config c;c.maxSeconds=120;const auto record=std::make_unique<Record>(Simulate(c));const auto& r=*record;
    assert(!r.shots.empty());
    // Every recorded frame keeps the weapon invariants.
    for(const auto& f:r.frames)for(const auto& s:f.soldiers) {
        assert(s.machineGun==(s.gun.action==WeaponAction::Automatic));
        assert(s.magazineRemaining>=0&&s.magazineRemaining<=s.gun.magazine);
    }
    // Composure scales suppression decay; some soldier is not at the reference rate.
    int decaySamples=0,offReference=0;
    for(size_t k=1;k<r.frames.size();++k)for(int id=0;id<UnitCount;++id) {
        const float before=r.frames[k-1].soldiers[id].suppression,after=r.frames[k].soldiers[id].suppression;
        if(before<=0||r.frames[k].time-r.frames[k-1].time>FrameSeconds+1e-4f)continue;
        const float composure=StatScale(r.frames[k].soldiers[id].stats.Get(Stat::Composure));
        float own=before,reference=before;
        for(int tick=0;tick<4;++tick){own=std::max(0.f,own-TickSeconds*.15f*composure);reference=std::max(0.f,reference-TickSeconds*.15f);}
        if(std::abs(after-own)<1e-5f){++decaySamples;if(std::abs(own-reference)>1e-5f)++offReference;}
    }
    assert(decaySamples>100&&offReference>0);
    // A magazine is only reloaded when it empties, and the pause is dexterity scaled.
    std::array<std::vector<float>,UnitCount> fired{};
    for(const auto& shot:r.shots)fired[shot.owner].push_back(shot.time);
    int reloads=0;bool ordinaryFaster=false;float fastest=1e9f,slowest=0;
    for(int id=0;id<UnitCount;++id) {
        const auto& s=r.frames.front().soldiers[id];
        if(s.gun.action!=WeaponAction::Bolt)continue;
        const float reload=s.gun.reloadSeconds/StatScale(s.stats.Get(Stat::Dexterity));
        for(size_t n=1;n<fired[id].size();++n) {
            const float gap=fired[id][n]-fired[id][n-1];
            if(n%size_t(s.gun.magazine)==0){assert(gap>=reload-1e-3f);++reloads;fastest=std::min(fastest,reload);slowest=std::max(slowest,reload);}
            else if(gap<reload)ordinaryFaster=true;
        }
    }
    assert(reloads>0&&ordinaryFaster&&fastest<slowest);
    std::cout<<"STATS battle: "<<reloads<<" rifle reloads between "<<fastest<<"s and "<<slowest<<"s; "<<decaySamples<<" composure decay samples PASS\n";
}
static void StatsTests() {
    StatSamplerTests();StatGenerationTests();WeaponItemTests();StatBattleTests();
    std::cout<<"PASS: stat sampler, roster generation, weapon items, fire control references and magazine tracking\n";
}
