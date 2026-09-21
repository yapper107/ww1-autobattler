// Plan 022: stamina and the sprint to cover. Three parts: the table and the rules at the
// reference soldier, the crossing estimate (one man, one thirty-metre gap watched by one
// known enemy, with and without the feature), and one crossing battle under both attacking
// controllers, where only the mechanism is asserted and the rest is reported as counts.
#pragma once
#include "ImportedMap.h"
static army::Soldier Fresh(bool machineGun=false){
    using namespace army;
    Soldier s;s.id=1;s.assignment.id=7;s.assignment.task=Task::Advance;
    if(machineGun)EquipWeapon(s,{WeaponId::MachineGun,{}});
    s.stamina=StaminaCapacity(s);
    return s;
}
static void SprintTableTests(){
    using namespace army;
    auto rifleman=Fresh(),gunner=Fresh(true);
    assert(std::abs(StaminaCapacity(rifleman)-8.f)<1e-4f);                 // 8 s of sprint at Endurance 100
    assert(std::abs(SprintPace(rifleman)-1.6f)<1e-4f);                     // 1.6 times his own pace
    assert(std::abs(SprintPace(rifleman)*3.15f-5.04f)<1e-3f);              // about 5 m/s, about 40 m of sprint
    assert(gunner.machineGun&&std::abs(SprintPace(gunner)-1.35f)<1e-4f&&std::abs(SprintPace(gunner)*2.55f-3.4425f)<1e-3f);
    assert(std::abs(StaminaRecovery(rifleman)-8.f/30.f)<1e-5f);            // full again in 30 s at rest
    // Endurance owns capacity and recovery, speed owns the sprint, and neither touches the other.
    auto tough=Fresh();tough.stats.value[size_t(Stat::Endurance)]=120;tough.stamina=StaminaCapacity(tough);
    assert(std::abs(StaminaCapacity(tough)-9.6f)<1e-4f&&StaminaRecovery(tough)>StaminaRecovery(rifleman));
    assert(std::abs(StaminaCapacity(tough)/StaminaRecovery(tough)-25.f)<1e-3f); // 30 s / 1.2
    assert(SprintPace(tough)==SprintPace(rifleman));
    auto quick=Fresh();quick.stats.value[size_t(Stat::Speed)]=130;
    assert(std::abs(SprintPace(quick)-1.6f*1.3f)<1e-4f&&StaminaCapacity(quick)==StaminaCapacity(rifleman));
    auto slow=Fresh();slow.stats.value[size_t(Stat::Speed)]=80;
    assert(SprintPace(slow)<SprintPace(rifleman)&&SprintPace(slow)>1.f);
    // A full man pays nothing; an empty one pays the table, and it fades linearly back.
    assert(StaminaPenalty(rifleman,Sprint().windedAim)==1.f&&StaminaPenalty(rifleman,Sprint().windedSway)==1.f);
    auto spent=Fresh();spent.stamina=0;
    assert(std::abs(StaminaPenalty(spent,Sprint().windedAim)-1.3f)<1e-5f&&std::abs(StaminaPenalty(spent,Sprint().windedSway)-1.5f)<1e-5f);
    auto half=Fresh();half.stamina=4;
    assert(std::abs(StaminaPenalty(half,Sprint().windedAim)-1.15f)<1e-5f&&std::abs(StaminaPenalty(half,Sprint().windedSway)-1.25f)<1e-5f);
    assert(std::abs(AimSeconds(spent)/AimSeconds(rifleman)-1.3f)<1e-4f&&std::abs(SwayAmplitude(spent)/SwayAmplitude(rifleman)-1.5f)<1e-4f);
    assert(AimSeconds(half)>AimSeconds(rifleman)&&AimSeconds(half)<AimSeconds(spent));
    // A full man's aim and sway are the pre-022 numbers exactly, not merely close.
    assert(AimSeconds(rifleman)==0.45f/(rifleman.gun.ergonomics*1.f)*(1+3*rifleman.suppression)*1.f*1.f);
    std::cout<<"STAMINA table: capacity "<<StaminaCapacity(rifleman)<<"s, sprint x"<<SprintPace(rifleman)
             <<", gunner x"<<SprintPace(gunner)<<", recovery "<<StaminaRecovery(rifleman)<<"/s, winded aim x"
             <<StaminaPenalty(spent,Sprint().windedAim)<<" sway x"<<StaminaPenalty(spent,Sprint().windedSway)<<" PASS\n";
}
static void StaminaClockTests(){
    using namespace army;
    // Sprinting drains one second per second; the gunner a third faster.
    auto s=Fresh();StepStamina(s,true,true,1.f);
    assert(std::abs(s.stamina-7.f)<1e-5f&&!s.winded&&CanSprint(s));
    auto gunner=Fresh(true);StepStamina(gunner,true,true,1.f);
    assert(std::abs(gunner.stamina-(8.f-4.f/3.f))<1e-4f);
    // Recovery: none while sprinting, half rate walking, full rate at rest.
    auto walking=Fresh();walking.stamina=4;StepStamina(walking,false,true,1.f);
    assert(std::abs(walking.stamina-(4.f+8.f/30.f*.5f))<1e-5f);
    auto resting=Fresh();resting.stamina=4;StepStamina(resting,false,false,1.f);
    assert(std::abs(resting.stamina-(4.f+8.f/30.f))<1e-5f);
    auto running=Fresh();running.stamina=4;StepStamina(running,true,true,1.f);
    assert(running.stamina<4.f);
    // The user's latch: empty makes him winded, and only FULL clears it.
    auto spent=Fresh();
    for(int tick=0;tick<200;++tick)StepStamina(spent,true,true,TickSeconds);
    assert(spent.stamina==0.f&&spent.winded&&!CanSprint(spent));
    for(int tick=0;tick<int(29.f/TickSeconds);++tick)StepStamina(spent,false,false,TickSeconds);
    assert(spent.winded&&!CanSprint(spent)&&spent.stamina>7.f&&spent.stamina<8.f);
    for(int tick=0;tick<int(2.f/TickSeconds);++tick)StepStamina(spent,false,false,TickSeconds);
    assert(!spent.winded&&spent.stamina==StaminaCapacity(spent)&&CanSprint(spent));
    // A wounded man never sprints, whatever he has left.
    auto hurt=Fresh();hurt.health=40;
    assert(!CanSprint(hurt)&&CanSprint(Fresh()));
    std::cout<<"STAMINA clock: drain, gunner drain, walking and resting recovery and the winded latch PASS\n";
}
static void SprintTriggerTests(){
    using namespace army;
    // Walking to his objective with nothing known and nothing in sight: he walks.
    auto plain=Fresh();plain.action=Action::Advance;plain.reason=Reason::OrderedAdvance;
    assert(!SprintTrigger(plain,false,20));
    // (c) the stretch ahead is in a known enemy's sight, whatever his order.
    assert(SprintTrigger(plain,true,20));
    // (a) under fire and on his way to cover.
    auto pressed=Fresh();pressed.action=Action::Cover;pressed.reason=Reason::Settle;pressed.suppression=.2f;
    assert(SprintTrigger(pressed,false,20));
    pressed.suppression=0;assert(!SprintTrigger(pressed,false,20));
    // (b) the reaction move into cover, whatever order he holds.
    for(Reason reason:{Reason::EmergencyCover,Reason::Contact,Reason::Suppressed,Reason::Flanked,Reason::Relocate}){
        auto reacting=Fresh();reacting.action=Action::Cover;reacting.reason=reason;
        assert(SprintTrigger(reacting,false,20));
    }
    auto peeking=Fresh();peeking.action=Action::Cover;peeking.reason=Reason::Peek;
    assert(!SprintTrigger(peeking,false,20));
    // A two-metre hop is walked whatever the reason: a peek, a duck, a slot adjustment.
    auto hopping=Fresh();hopping.action=Action::Cover;hopping.reason=Reason::Contact;
    assert(!SprintTrigger(hopping,true,2)&&SprintTrigger(hopping,true,20));
    // (d) a squad retreat, and the bounded rush of a typed assault.
    auto pulling=Fresh();pulling.action=Action::Retreat;pulling.reason=Reason::SquadPullBack;
    assert(SprintTrigger(pulling,false,20));
    auto ordered=Fresh();ordered.assignment.task=Task::PullBack;ordered.action=Action::Advance;
    assert(SprintTrigger(ordered,false,20));
    auto rushing=Fresh();rushing.assignment.task=Task::BoundMove;rushing.action=Action::Advance;rushing.assignment.execution.rushSeconds=5;
    assert(SprintTrigger(rushing,false,20));
    // A man who is firing, holding, down or in cover with nothing on him does not sprint.
    for(Action action:{Action::Fire,Action::Hold,Action::Wounded,Action::Killed}){
        auto still=Fresh();still.action=action;still.reason=Reason::Contact;
        assert(!SprintTrigger(still,true,20));
    }
    // No fire while sprinting; he may fire again the moment he drops to a walk.
    auto attacker=Fresh();attacker.action=Action::Advance;attacker.reason=Reason::Search;
    assert(WalkingFire(attacker,10));
    attacker.sprinting=true;assert(!WalkingFire(attacker,10));
    attacker.sprinting=false;assert(WalkingFire(attacker,10));
    std::cout<<"STAMINA triggers: revealed stretch, under fire to cover, the reaction move, retreat, the assault rush, and no fire while sprinting PASS\n";
}
static void SpeedStatTests(){
    using namespace army;
    const StatDistribution d;
    const auto a=GenerateStats(d,107,3);
    // Speed is its own hashed stream, and the seven older stats are the sampler sequence.
    assert(a.value[size_t(Stat::Speed)]==SampleStat(d,float(SoldierHash(107,3,SpeedStatSalt)>>40)/16777216.f));
    assert(a.value[size_t(Stat::Speed)]==GenerateStats(d,107,3).value[size_t(Stat::Speed)]);
    assert(a.value[size_t(Stat::Speed)]!=GenerateStats(d,107,4).value[size_t(Stat::Speed)]);
    assert(a.value[size_t(Stat::Speed)]!=GenerateStats(d,108,3).value[size_t(Stat::Speed)]);
    assert(GenerateStats(StatDistribution::Fixed(),107,3).value[size_t(Stat::Speed)]==100.f);
    bool varied=false;for(int slot=0;slot<UnitCount;++slot)varied|=GenerateStats(d,107,slot).value[size_t(Stat::Speed)]!=a.value[size_t(Stat::Speed)];
    assert(varied);
    // The roster is the same soldier with the feature on and off: the seven stats, the eighth,
    // the sway phases and the recoil direction are all hashed, never configured.
    Config on,off;off.stamina=false;
    auto full=std::make_unique<Frame>(InitialFrame(on));auto plain=std::make_unique<Frame>(InitialFrame(off));
    for(int id=0;id<UnitCount;++id){
        const auto& x=full->soldiers[id];const auto& y=plain->soldiers[id];
        assert(SameStats(x.stats,y.stats)&&x.swayPhase==y.swayPhase&&x.swayPhase2==y.swayPhase2&&x.recoilSign==y.recoilSign);
        assert(x.stamina==StaminaCapacity(x)&&!x.winded&&!x.sprinting&&y.stamina==StaminaCapacity(y));
    }
    assert(!SameConfig(on,off));
    std::cout<<"STAMINA speed stat: own hashed stream, deterministic per roster seed and slot, roster identical on and off PASS\n";
}
// One man, one thirty-metre gap watched by one known enemy, cover either side: the screen
// north of the walk is open only between x=-15 and x=+15.
static army::Map GapAndScreens(){
    using namespace army;
    Map m;m.halfWidth=70;m.halfHeight=60;
    m.obstacles.push_back({{-42,6,0},{28,1,0},false,false,3.2f});
    m.obstacles.push_back({{42,6,0},{28,1,0},false,false,3.2f});
    PrepareGeometry(m);
    return m;
}
static void CrossingEstimateTests(){
    using namespace army;
    auto map=GapAndScreens();
    const Vec3 start{-40,0,0},goal{40,0,0},watcher{0,40,0};
    auto walker=Fresh();walker.position=start;
    auto& ct=walker.contacts[TeamSize];ct.known=true;ct.visible=true;ct.position=watcher;ct.observedAt=10;ct.aimHeight=1.45f;
    auto path=FindPath(map,start,goal);
    assert(!path.empty());
    const float walked=PathRevealedSeconds(map,walker,start,path,10,false);
    const float sprinted=PathRevealedSeconds(map,walker,start,path,10,true);
    // The gap is about thirty metres: nine and a half seconds at a walk, six at a sprint.
    assert(walked>8.f&&walked<11.f);
    assert(std::abs(walked/sprinted-SprintPace(walker))<.05f);
    // Two seconds of stamina left: he sprints about ten metres of the gap and walks the rest.
    auto tired=walker;tired.stamina=2;
    const float mixed=PathRevealedSeconds(map,tired,start,path,10,true);
    const float metres=walked*3.15f,sprintMetres=2.f*3.15f*SprintPace(tired);
    const float expected=2.f+(metres-sprintMetres)/3.15f;
    assert(mixed>sprinted&&mixed<walked&&std::abs(mixed-expected)<.4f);
    // A winded man and a wounded man walk it, so the estimate is the pre-022 figure exactly.
    auto blown=walker;blown.winded=true;
    assert(PathRevealedSeconds(map,blown,start,path,10,true)==walked);
    auto hurt=walker;hurt.health=40;
    assert(PathRevealedSeconds(map,hurt,start,path,10,true)==walked);
    // And with the feature off the measure is untouched whatever his stamina.
    assert(PathRevealedSeconds(map,tired,start,path,10,false)==walked);
    std::cout<<"STAMINA crossing estimate: "<<walked<<"s in the enemy's sight at a walk, "<<sprinted
             <<"s sprinted, "<<mixed<<"s with two seconds of stamina left (predicted "<<expected<<"s) PASS\n";
}
// The crossing battle: attackers start behind cover, defenders sit in low cover across open
// ground, and the whole force has to cross it.
static std::string SprintCrossingMap(){
    using namespace army;
    std::ostringstream m;
    m<<"ARMYMAP 1 city 22\nBOUNDS 80 40 0\n";
    uint64_t id=1;
    for(int n=0;n<6;++n)m<<"O "<<id++<<" -34 "<<(-15.f+float(n)*6.f)<<" 0 0.7 0.7 1.2 0 1 1\n";
    for(int row=0;row<2;++row)for(int n=0;n<5;++n)
        m<<"O "<<id++<<' '<<(34.f+float(row)*6.f)<<' '<<(-12.f+float(n)*6.f)<<" 0 0.7 0.7 1.2 0 1 1\n";
    m<<"O "<<id++<<" 48 0 0 0.3 14 3.2 1 0 1\n";
    for(int i=0;i<UnitCount;++i){
        const float side=i<TeamSize?-36.f:44.f,y=-31.f+float(i%TeamSize)*2.f;
        m<<"U "<<i<<' '<<side<<' '<<y<<" 0 "<<(i<TeamSize?30.f:44.f)<<' '<<y<<" 0\n";
    }
    m<<"END\n";
    return m.str();
}
struct SprintCounts {
    uint64_t digest=0;
    int sprintFrames=0,windedFrames=0,movingFrames=0,shots=0,attackerHits=0,defenderSprints=0;
    float seenMoving=0,sprintSeconds=0;
};
static SprintCounts RunSprintCrossing(const std::shared_ptr<const army::ImportedBattlefield>& map,uint32_t seed,bool stamina,bool drills){
    using namespace army;
    Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=150;c.stamina=stamina;c.drills=c.foundations=drills;
    c.staticDefence.layout=DefenceLayout::Spread;c.staticDefence.defenders=6;c.staticDefence.seed=22;
    DiagnosticOptions quiet;quiet.enabled=false;
    auto record=std::make_unique<Record>(Simulate(c,quiet));const auto& r=*record;
    SprintCounts out;out.digest=GameplayDigest(r);out.shots=int(r.shots.size());
    for(const auto& shot:r.shots)if(shot.hit&&shot.target<TeamSize)++out.attackerHits;
    std::array<bool,UnitCount> wasWinded{};std::array<float,UnitCount> lastStamina{};
    for(size_t k=1;k<r.frames.size();++k){
        const float step=r.frames[k].time-r.frames[k-1].time;
        const auto& frame=r.frames[k];
        for(const auto& s:frame.soldiers){
            if(!s.Active())continue;
            const float capacity=StaminaCapacity(s);
            assert(s.stamina>=0&&s.stamina<=capacity+1e-3f);
            if(!stamina)assert(s.stamina==capacity&&!s.winded&&!s.sprinting);
            if(s.team){out.defenderSprints+=s.sprinting;continue;}   // a seated defender never sprints
            // He never fires while sprinting. He is winded only on the very tick he empties,
            // and below the wounded cutoff only when the round that took him there landed
            // during this sample: both states are entered after the movement stage has run.
            if(s.sprinting){assert(!s.movingFire&&s.action!=Action::Fire&&s.action!=Action::Hold);
                assert(!s.winded||s.stamina==0);
                assert(s.health>=Sprint().woundedHealth||s.health<r.frames[k-1].soldiers[size_t(s.id)].health);
                ++out.sprintFrames;out.sprintSeconds+=step;}
            if(s.winded)++out.windedFrames;
            if(stamina){
            // The latch: once he is empty he walks until he is full again.
            if(wasWinded[size_t(s.id)]&&lastStamina[size_t(s.id)]<capacity-.2f)assert(!s.sprinting);
            wasWinded[size_t(s.id)]=s.winded;lastStamina[size_t(s.id)]=s.stamina;}
            const bool displaced=Distance(s.position,r.frames[k-1].soldiers[size_t(s.id)].position)>1e-4f;
            if(!displaced)continue;
            ++out.movingFrames;
            for(const auto& enemy:frame.soldiers)if(enemy.Active()&&enemy.team!=s.team&&
                ClearLine3D(r.map,enemy.position+Vec3{0,0,enemy.stance==Stance::Crouched?.82f:1.7f},s.position+Vec3{0,0,1.3f})){
                out.seenMoving+=step;break;
            }
        }
    }
    return out;
}
static void SprintBattleTests(){
    using namespace army;
    std::string error;auto crossing=ImportBattlefield(SprintCrossingMap(),error);
    if(!crossing)std::cout<<"STAMINA crossing map rejected: "<<error<<std::endl;
    assert(crossing&&error.empty());
    for(int controller=0;controller<2;++controller){
        const uint32_t seed=101+uint32_t(controller);
        const auto on=RunSprintCrossing(crossing,seed,true,controller!=0),off=RunSprintCrossing(crossing,seed,false,controller!=0);
        // Both controllers sprint: the rule is the soldier's own, not the controller's.
        assert(on.sprintFrames>0&&on.defenderSprints==0);
        assert(on.digest!=off.digest);
        assert(on.digest==RunSprintCrossing(crossing,seed,true,controller!=0).digest);
        std::cout<<"STAMINA crossing "<<(controller?"drills":"legacy")<<" seed "<<seed
                 <<": sprinting samples="<<on.sprintFrames<<" ("<<on.sprintSeconds<<"s) winded samples="<<on.windedFrames
                 <<" of "<<on.movingFrames<<" moving; attacker-seconds seen while displacing "<<on.seenMoving
                 <<" against "<<off.seenMoving<<"; attackers hit "<<on.attackerHits<<" against "<<off.attackerHits
                 <<"; shots "<<on.shots<<" against "<<off.shots<<"\n";
    }
    std::cout<<"STAMINA crossing battle: both controllers sprint, no fire while sprinting, the latch holds and the off switch is exact PASS\n";
}
static void StaminaTests(){
    std::cout.setf(std::ios::unitbuf);
    SprintTableTests();StaminaClockTests();SprintTriggerTests();SpeedStatTests();CrossingEstimateTests();SprintBattleTests();
    std::cout<<"STAMINA: the table, the clock, the triggers, the speed stat, the crossing estimate and the crossing battle PASS\n";
}
