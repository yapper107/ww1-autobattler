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
    // Endurance owns max health, initiative owns reaction time.
    for(const auto& s:plain->soldiers) {
        assert(std::abs(s.maxHealth-100*StatScale(s.stats.Get(Stat::Endurance)))<1e-3f);
        assert(s.health==s.maxHealth);
        assert(std::abs(s.reactionBase-.425f/StatScale(s.stats.Get(Stat::Initiative)))<1e-4f);
    }
    // Fixtures are stat-neutral so their authored timing bounds keep their meaning.
    Config drills=c;drills.drills=drills.foundations=true;Map map;auto fixture=frame(drills);
    MakeDrillEncounter(drills,44,map,*fixture);
    for(const auto& s:fixture->soldiers){for(float value:s.stats.value)assert(value==100.f);assert(s.maxHealth==100.f);}
    // Sway phases and the recoil direction carry no talent, so NeutraliseStats leaves them.
    {bool phased=false;for(const auto& s:fixture->soldiers)phased|=s.swayPhase!=0.f||s.swayPhase2!=0.f;assert(phased);
     for(int id=0;id<UnitCount;++id)assert(fixture->soldiers[id].swayPhase==plain->soldiers[id].swayPhase&&fixture->soldiers[id].recoilSign==plain->soldiers[id].recoilSign);}
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
// Plan 017 phase 2: drag, impact energy, the deposit rule and over-penetration.
static void BallisticEnergyTests() {
    const Soldier rifleman;const auto& gun=rifleman.gun;
    auto energyAt=[&](float range){const float v=gun.muzzleVelocity*std::exp(-gun.dragK*range);return .5f*gun.bulletMass*v*v;};
    assert(std::abs(energyAt(0)-2929.f)<25.f);                        // about 2.9 kJ at the muzzle
    // The substep rule multiplies the velocity by exp(-k*segment) every step, which
    // integrates to the muzzle speed times exp(-k*distance).
    float speed=gun.muzzleVelocity;for(int step=0;step<3000;++step)speed*=std::exp(-gun.dragK*.1f);
    assert(speed>582.f&&speed<585.f);                                 // about 583 m/s after 300 m
    assert(std::abs(speed-gun.muzzleVelocity*std::exp(-gun.dragK*300.f))<.5f);
    assert(std::abs(energyAt(100)-2546.f)<25.f&&std::abs(energyAt(300)-1925.f)<25.f);
    // Severity is one draw with four outcomes and scales the deposited energy only.
    assert(HitSeverity(0.f)==1.f&&HitSeverity(.79f)==1.f&&HitSeverity(.85f)==.5f&&HitSeverity(.95f)==1.5f&&HitSeverity(.99f)==2.f);
    const float close=energyAt(100);
    assert(std::abs(HitDamage(close,1.f)-40.f)<1.f);                  // a standing target at 100 m
    assert(std::abs(HitDamage(energyAt(0),1.f)-41.f)<1.f&&std::abs(HitDamage(energyAt(300),1.f)-36.f)<1.f);
    assert(HitDamage(close,.5f)*2==HitDamage(close,1.f)&&HitDamage(close,2.f)==2*HitDamage(close,1.f));
    // Deposit rises with impact energy and saturates above the exit threshold; below it a
    // round cannot leave the body and gives up everything, so the rule steps there.
    for(float e=100;e<=1300;e+=50)assert(DepositedEnergy(e)==e);
    for(float e=1450;e<6000;e+=50)assert(DepositedEnergy(e)>DepositedEnergy(e-50)&&DepositedEnergy(e)<e&&DepositedEnergy(e)<2000.f);
    const float through=close-DepositedEnergy(close);
    assert(through>300.f&&std::abs(through-1161.f)<15.f);             // the first body lets 1.16 kJ out
    assert(DepositedEnergy(through)==through);                        // and the second keeps it
    // At contact range the round leaves two bodies and the third stops it.
    float carried=energyAt(0);int exits=0;
    while(DepositedEnergy(carried)!=carried){carried-=DepositedEnergy(carried);++exits;}
    assert(exits==2&&carried<400.f&&std::abs(HitDamage(carried,1.f)-10.9f)<1.f);
    // A slow round has too little energy to leave the first body at all.
    Soldier slow;EquipWeapon(slow,{WeaponId::Rifle,{{WeaponModifier::Field::MuzzleVelocity,.35f,0}}});
    const float weak=.5f*slow.gun.bulletMass*slow.gun.muzzleVelocity*slow.gun.muzzleVelocity;
    assert(slow.gun.muzzleVelocity<260.f&&weak<400.f&&DepositedEnergy(weak)==weak);
    // Drag-aware lead against a numerically integrated flight, and the k<=0 fallback.
    for(float range:{25.f,100.f,300.f}) {
        const double k=gun.dragK,v0=gun.muzzleVelocity;double integrated=0;
        for(int step=0;step<20000;++step)integrated+=(range/20000.0)/(v0*std::exp(-k*range*(step+.5)/20000.0));
        const float lead=FlightTime(range,gun.muzzleVelocity,gun.dragK);
        assert(std::abs(lead-float(integrated))<1e-3f*lead);
        assert(lead>range/gun.muzzleVelocity);                        // drag always costs time
    }
    assert(std::abs(FlightTime(100,gun.muzzleVelocity,0)-100.f/gun.muzzleVelocity)<1e-6f);
    std::cout<<"STATS ballistics: muzzle "<<energyAt(0)<<" J, 300 m speed "<<speed<<" m/s, 100 m loss "
             <<HitDamage(close,1.f)<<" health, first body lets "<<through<<" J out PASS\n";
}
static void OverPenetrationTests(const Record& r,size_t& withVictims,size_t& penetrating,size_t& stopped) {
    for(const auto& shot:r.shots) {
        assert(shot.hit==!shot.victims.empty());
        if(shot.victims.empty())continue;
        ++withVictims;penetrating+=shot.victims.size()>1;
        assert(shot.target==shot.victims.front().soldier);
        float previous=1e9f,last=shot.time-1e-4f;std::array<bool,UnitCount> seen{};
        for(const auto& victim:shot.victims) {
            assert(victim.soldier>=0&&victim.soldier<UnitCount&&victim.soldier!=shot.owner&&!seen[victim.soldier]);
            seen[victim.soldier]=true;
            assert(victim.time>=last&&victim.time<=shot.impactTime);last=victim.time;
            assert(victim.energy>0&&victim.energy<previous);previous=victim.energy;   // an exiting round is slower
            bool found=false;
            for(const auto& e:r.events)if(e.kind==EventKind::Hit&&e.actor==shot.owner&&e.target==victim.soldier&&e.time==victim.time)found=true;
            assert(found);
        }
        // The terminal stop is Soldier exactly when the last body kept everything.
        const float terminal=shot.victims.back().energy;
        if(DepositedEnergy(terminal)==terminal){++stopped;assert(shot.impact==Shot::Impact::Soldier);}
        else assert(shot.impact!=Shot::Impact::Soldier);
    }
}
// Plan 017 phase 3: the sway wander, the recoil kick and its decay.
static void SwayAndRecoilTests() {
    Soldier rifleman;rifleman.swayPhase=1.3f;rifleman.swayPhase2=4.1f;
    const float amplitude=SwayAmplitude(rifleman);
    assert(std::abs(amplitude-.010f)<1e-6f);
    for(float t=0;t<60;t+=.01f){const Vec3 off=SwayOffset(rifleman,t);
        assert(std::abs(off.x)<=amplitude+1e-6f&&std::abs(off.y)<=amplitude+1e-6f&&off.z==0.f);}
    for(float t:{0.f,3.3f,17.75f,119.9f}){const Vec3 a=SwayOffset(rifleman,t),b=SwayOffset(rifleman,t);assert(a.x==b.x&&a.y==b.y);}
    // The yaw period is 2.3 s and the pitch period 3.7 s, so the figure does not close.
    assert(std::abs(SwayOffset(rifleman,2.3f).x-SwayOffset(rifleman,0).x)<1e-5f);
    assert(std::abs(SwayOffset(rifleman,2.3f).y-SwayOffset(rifleman,0).y)>1e-3f);
    // Dexterity, stance, suppression and ergonomics are the only inputs to the amplitude.
    Soldier quick=rifleman;quick.stats.value[size_t(Stat::Dexterity)]=140;
    Soldier clumsy=rifleman;clumsy.stats.value[size_t(Stat::Dexterity)]=80;
    assert(SwayAmplitude(quick)<amplitude&&amplitude<SwayAmplitude(clumsy));
    assert(std::abs(SwayAmplitude(quick)-.010f/1.4f)<1e-6f&&std::abs(SwayAmplitude(clumsy)-.010f/.8f)<1e-6f);
    Soldier low=rifleman;low.stance=Stance::Crouched;
    assert(SwayAmplitude(low)<amplitude&&std::abs(SwayAmplitude(low)-.7f*amplitude)<1e-6f);
    Soldier pinned=rifleman;pinned.suppression=1;
    assert(std::abs(SwayAmplitude(pinned)-3*amplitude)<1e-6f);
    Soldier gunner;EquipWeapon(gunner,{WeaponId::MachineGun,{}});
    assert(SwayAmplitude(gunner)>amplitude&&std::abs(SwayAmplitude(gunner)-.010f/gunner.gun.ergonomics)<1e-6f);
    // One bolt shot displaces the aim by the kick and the cycle takes it away again.
    Soldier shooter;const float kick=RecoilKick(shooter);
    assert(std::abs(kick-.012f)<1e-6f&&shooter.recoil.x==0.f&&shooter.recoil.y==0.f);
    ApplyRecoil(shooter);
    assert(std::abs(shooter.recoil.y-kick)<1e-6f&&std::abs(std::abs(shooter.recoil.x)-.3f*kick)<1e-6f);
    const int boltTicks=int(1.25f/TickSeconds+.5f);
    for(int step=0;step<boltTicks;++step)DecayRecoil(shooter,TickSeconds);
    assert(shooter.recoil.y<.1f*kick&&std::abs(shooter.recoil.x)<.1f*kick&&shooter.recoil.y>0);
    // A sustained burst at the cyclic rate settles near three kicks, decaying between rounds.
    const float mgKick=RecoilKick(gunner);
    for(int round=0;round<10;++round){ApplyRecoil(gunner);for(int step=0;step<int(.10f/TickSeconds+.5f);++step)DecayRecoil(gunner,TickSeconds);}
    const float burst=gunner.recoil.y;
    assert(std::abs(burst-3*mgKick)<.15f*3*mgKick);
    // The 1.0 s pause takes a tenth of the burst offset away; a tenth of one kick needs 1.25 s,
    // because the gun's ergonomics 0.69 slow its decay to a 0.36 s time constant.
    for(int step=0;step<int(1.0f/TickSeconds+.5f);++step)DecayRecoil(gunner,TickSeconds);
    const float afterPause=gunner.recoil.y;
    assert(afterPause<.1f*burst&&afterPause<.2f*mgKick);
    for(int step=0;step<int(.25f/TickSeconds+.5f);++step)DecayRecoil(gunner,TickSeconds);
    assert(gunner.recoil.y<.1f*mgKick);
    // Crouching steadies both; the phases carry no talent, so fixtures keep them.
    Soldier braced;braced.stance=Stance::Crouched;
    assert(std::abs(RecoilKick(braced)-.8f*kick)<1e-6f);
    std::cout<<"STATS sway and recoil: amplitude "<<amplitude*1000<<" mrad, rifle kick "<<kick*1000
             <<" mrad, ten machine-gun rounds reach "<<burst/mgKick<<" kicks, the 1.0 s pause leaves "
             <<afterPause/mgKick<<" and 1.25 s leaves "<<gunner.recoil.y/mgKick<<" PASS\n";
}
// Plan 019: the walking-fire table, its stat scaling and the rule for who may use it.
static void MovingFireValueTests() {
    Soldier rifleman;const MovingFire& walk=rifleman.gun.moving;
    assert(walk.aimSeconds==2.5f&&walk.aimCap==.5f&&walk.spread==3.f&&walk.sway==4.f);
    assert(walk.recoilKick==1.5f&&walk.recoilRecovery==.5f&&walk.cadence==1.5f&&walk.range==70.f&&walk.pace==.8f);
    assert(walk.burstMin==0&&walk.burstMax==0);   // the rifle keeps its own cadence structure
    Soldier moving=rifleman;moving.movingFire=true;
    // The reference soldier walks at exactly the table values.
    assert(std::abs(AimSeconds(moving)-2.5f*AimSeconds(rifleman))<1e-6f);
    assert(std::abs((ShotSpread(moving)-rifleman.gun.baseDeviation)-3.f*(ShotSpread(rifleman)-rifleman.gun.baseDeviation))<1e-6f);
    assert(std::abs(VerticalSpread(moving)-3.f*VerticalSpread(rifleman))<1e-7f);
    assert(std::abs(SwayAmplitude(moving)-4.f*SwayAmplitude(rifleman))<1e-7f);
    assert(std::abs(RecoilKick(moving)-1.5f*RecoilKick(rifleman))<1e-7f);
    assert(ShotSpread(moving)>rifleman.gun.baseDeviation);   // the mechanical deviation is not multiplied
    // Recovery at half the rate: one second of walking decay is the square root of one
    // second of standing decay, because exp(-2t) = sqrt(exp(-4t)).
    {Soldier a=moving,b=rifleman;a.recoil=b.recoil={0,.02f,0};
     for(int n=0;n<20;++n){DecayRecoil(a,.05f);DecayRecoil(b,.05f);}
     assert(a.recoil.y>b.recoil.y&&std::abs(a.recoil.y/.02f-std::sqrt(b.recoil.y/.02f))<1e-5f);}
    // The aim never settles above the cap, and that cap is the readiness threshold.
    assert(AimReady(rifleman)==1.f&&AimReady(moving)==.5f);
    {Soldier settling=moving;settling.action=Action::Advance;
     UpdateAim(settling,32,{20,0,1.45f},10.f);assert(std::abs(settling.aim-.5f)<1e-6f);
     settling.movingFire=false;settling.action=Action::Fire;UpdateAim(settling,32,{20,0,1.45f},10.f);assert(settling.aim==1.f);
     Soldier halted=rifleman;halted.action=Action::Advance;UpdateAim(halted,32,{20,0,1.45f},10.f);assert(halted.aim==0.f);}
    // Dexterity carries the handling terms and composure the spread: a better soldier
    // loses less to the walk, a worse one more, and the reference exactly the table.
    auto ratio=[](Soldier s,float(*value)(const Soldier&)){Soldier m=s;m.movingFire=true;return value(m)/value(s);};
    Soldier quick=rifleman;quick.stats.value[size_t(Stat::Dexterity)]=140;
    Soldier clumsy=rifleman;clumsy.stats.value[size_t(Stat::Dexterity)]=80;
    assert(ratio(quick,AimSeconds)<2.5f&&ratio(quick,AimSeconds)>1.f&&ratio(clumsy,AimSeconds)>2.5f);
    assert(ratio(quick,SwayAmplitude)<4.f&&ratio(clumsy,SwayAmplitude)>4.f);
    assert(ratio(quick,RecoilKick)<1.5f&&ratio(clumsy,RecoilKick)>1.5f);
    Soldier calm=rifleman;calm.stats.value[size_t(Stat::Composure)]=140;
    Soldier nervous=rifleman;nervous.stats.value[size_t(Stat::Composure)]=80;
    assert(ratio(calm,VerticalSpread)<3.f&&ratio(calm,VerticalSpread)>1.f&&ratio(nervous,VerticalSpread)>3.f);
    assert(std::abs(MovePenalty(3.f,1.f)-3.f)<1e-6f&&MovePenalty(3.f,2.f)<3.f&&MovePenalty(3.f,.5f)>3.f);
    // The machine gun is heavier in every term and fires short bursts from the hip.
    Soldier gunner;EquipWeapon(gunner,{WeaponId::MachineGun,{}});
    const MovingFire& hip=gunner.gun.moving;
    assert(hip.spread==5.f&&hip.sway==6.f&&hip.recoilKick==2.f&&hip.recoilRecovery==.25f&&hip.range==60.f&&hip.pace==.6f);
    assert(hip.burstMin==4&&hip.burstMax==6&&hip.cadence==1.f);   // the cyclic rate is mechanical
    Soldier hipFire=gunner;hipFire.movingFire=true;
    assert(std::abs(SwayAmplitude(hipFire)-6.f*SwayAmplitude(gunner))<1e-7f&&std::abs(RecoilKick(hipFire)-2.f*RecoilKick(gunner))<1e-7f);
    assert(WalkingFireRange(rifleman)==70.f&&WalkingFireRange(gunner)==60.f);
    std::cout<<"MOVING FIRE table: rifle spread "<<ShotSpread(moving)*1000<<" mrad against "<<ShotSpread(rifleman)*1000
             <<" standing, aim "<<AimSeconds(moving)<<"s to a cap of "<<AimReady(moving)<<" PASS\n";
}
static void MovingFireRuleTests() {
    // Only an attack movement, and only what the soldier himself has.
    Soldier s;s.assignment.task=Task::Advance;s.action=Action::Advance;s.reason=Reason::OrderedAdvance;
    assert(AttackMovement(s)&&WalkingFire(s,10));
    for(Task task:{Task::BoundMove,Task::Flank,Task::ClearLane,Task::Advance})assert(AttackMovementTask(task));
    for(Task task:{Task::Rally,Task::PullBack,Task::Overwatch,Task::BoundCover,Task::RearGuard,Task::Hold,Task::Window,Task::None})assert(!AttackMovementTask(task));
    // Moving to a shelter, to a peek, regrouping, falling back or holding: no walking fire.
    {Soldier cover=s;cover.action=Action::Cover;cover.reason=Reason::EmergencyCover;assert(!WalkingFire(cover,10));}
    {Soldier cover=s;cover.action=Action::Cover;cover.reason=Reason::Contact;assert(!WalkingFire(cover,10));}
    {Soldier peek=s;peek.reason=Reason::Peek;assert(!WalkingFire(peek,10));}
    {Soldier rally=s;rally.assignment.task=Task::Rally;rally.reason=Reason::Regroup;assert(!WalkingFire(rally,10));}
    {Soldier back=s;back.assignment.task=Task::PullBack;back.action=Action::Retreat;back.reason=Reason::SquadPullBack;assert(!WalkingFire(back,10));}
    {Soldier rear=s;rear.assignment.task=Task::RearGuard;rear.action=Action::Cover;rear.reason=Reason::RearPosition;assert(!WalkingFire(rear,10));}
    {Soldier halted=s;halted.action=Action::Fire;halted.reason=Reason::ClearShot;assert(!WalkingFire(halted,10));}
    {Soldier lane=s;lane.assignment.task=Task::ClearLane;lane.action=Action::Cover;lane.reason=Reason::ClearLane;assert(WalkingFire(lane,10));}
    {Soldier bound=s;bound.assignment.task=Task::BoundMove;bound.reason=Reason::BoundAdvance;assert(WalkingFire(bound,10));}
    // A gun ordered to support from a position is untouched by any of this.
    {Soldier gun=s;EquipWeapon(gun,{WeaponId::MachineGun,{}});gun.assignment.task=Task::Overwatch;gun.action=Action::Fire;gun.reason=Reason::SuppressiveFire;
     Soldier plain;EquipWeapon(plain,{WeaponId::MachineGun,{}});
     assert(!AttackMovement(gun)&&!WalkingFire(gun,10)&&!gun.movingFire);
     assert(AimSeconds(gun)==AimSeconds(plain)&&ShotSpread(gun)==ShotSpread(plain)&&SwayAmplitude(gun)==SwayAmplitude(plain)&&RecoilKick(gun)==RecoilKick(plain));}
    // An empty magazine is carried in silence.
    {Soldier empty=s;empty.magazineRemaining=0;assert(AttackMovement(empty)&&!WalkingFire(empty,10));}
    // The flank stays quiet until he is fired on, wounded, or close.
    {Soldier flank=s;flank.assignment.task=Task::Flank;flank.reason=Reason::SquadFlank;
     assert(FlankHoldsFire(flank,10)&&!WalkingFire(flank,10));
     Soldier far=flank;far.contacts[TeamSize]={true,true,{35,0},9.5f};assert(!WalkingFire(far,10));
     Soldier near=flank;near.contacts[TeamSize]={true,true,{25,0},9.5f};assert(WalkingFire(near,10));
     Soldier stale=flank;stale.contacts[TeamSize]={true,true,{25,0},5.f};assert(!WalkingFire(stale,10));
     Soldier remembered=flank;remembered.contacts[TeamSize]={true,false,{25,0},9.5f};assert(!WalkingFire(remembered,10));
     Soldier fired=flank;fired.suppression=.2f;assert(WalkingFire(fired,10));
     Soldier hurt=flank;hurt.health=90;assert(WalkingFire(hurt,10));}
    std::cout<<"MOVING FIRE rule: attack movements only, quiet flank, empty magazine, stationary support gun PASS\n";
}
static void StatBattleTests() {
    Config c;c.maxSeconds=120;const auto record=std::make_unique<Record>(Simulate(c));const auto& r=*record;
    assert(!r.shots.empty());
    // The per-shot bookkeeping is checked on every shot of every battle here. A round through
    // TWO bodies is rare enough that one battle may legitimately produce none, so its
    // existence is asserted over three seeds rather than over this one battle.
    size_t withVictims=0,penetrating=0,stopped=0;
    OverPenetrationTests(r,withVictims,penetrating,stopped);
    for(uint32_t seed:{108u,109u}){Config other=c;other.seed=seed;
        const auto extra=std::make_unique<Record>(Simulate(other));OverPenetrationTests(*extra,withVictims,penetrating,stopped);}
    assert(withVictims>0&&penetrating>0&&stopped>0);
    std::cout<<"STATS over-penetration: over three battles "<<withVictims<<" shots with victims, "<<penetrating
             <<" through more than one body, "<<stopped<<" stopped in a body PASS\n";
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
    // Recoil is live in a real battle: automatic fire stacks it and it decays between bursts.
    float peak=0;int stacked=0,settled=0;
    auto observe=[&](const Record& battle) {
        peak=0;stacked=settled=0;
        for(const auto& frame:battle.frames)for(const auto& s:frame.soldiers) {
            peak=std::max(peak,std::abs(s.recoil.y));
            if(s.rounds>0&&frame.time-s.lastShotAt>1.5f&&std::abs(s.recoil.y)<.05f*RecoilKick(s))++settled;
        }
        for(size_t k=1;k<battle.frames.size();++k)for(int id=0;id<UnitCount;++id) {
            const auto& before=battle.frames[k-1].soldiers[id];const auto& now=battle.frames[k].soldiers[id];
            if(now.gun.action!=WeaponAction::Automatic||now.rounds<=before.rounds)continue;
            if(now.recoil.y>1.5f*RecoilKick(now))++stacked;
        }
    };
    observe(r);
    // When a machine gun opens sustained fire is the squad controller's business, not the
    // stat model's. A controller that brings its gun into action after the first two minutes
    // (plan 018, first legacy child) is given the whole battle before recoil is called dead.
    if(!stacked){Config whole;const auto longer=std::make_unique<Record>(Simulate(whole));observe(*longer);}
    assert(peak>0&&stacked>0&&settled>0);
    // Recoil has decayed for anyone who stopped firing: a gun still mid-burst in the final
    // frame is the controller's timing, not a stat defect, and is left out.
    float trailing=0;const float end=r.frames.back().time;
    for(const auto& s:r.frames.back().soldiers)if(end-s.lastShotAt>1.5f)trailing=std::max(trailing,std::abs(s.recoil.y)/RecoilKick(s));
    assert(trailing<1.f);
    std::cout<<"STATS recoil in battle: peak "<<peak*1000<<" mrad, "<<stacked<<" automatic rounds fired on a displaced aim, "
             <<settled<<" settled samples, final frame at "<<trailing<<" kicks PASS\n";
    std::cout<<"STATS battle: "<<reloads<<" rifle reloads between "<<fastest<<"s and "<<slowest<<"s; "<<decaySamples<<" composure decay samples PASS\n";
}
static void StatsTests() {
    StatSamplerTests();StatGenerationTests();WeaponItemTests();BallisticEnergyTests();SwayAndRecoilTests();MovingFireValueTests();MovingFireRuleTests();StatBattleTests();
    std::cout<<"PASS: stat sampler, roster generation, weapon items, fire control references, magazine tracking, energy ballistics, over-penetration, sway and recoil, the walking-fire table and its rule\n";
}
