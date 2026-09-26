// Plan 032: grenades and using the pin (Config::grenades; Legacy only, per team).
// Checks:
// (1) Blast (revision 2): the Kingery-Bulmash surface-burst fits (Swisdak 1994), printed for 1 kg by Z; the fit's constant
//     term and its W^(1/3) scaling; the published segments meeting at their joints; falling with distance; two independent
//     relations (Glasstone's normal reflection of the fitted incident pressure against the reflected-pressure fit, Mills's
//     free-air formula at 1.8 W); the grenades' values printed; an air burst at W/1.8; the range to his body; cover x0.4 on
//     pressure and impulses (not a hedge); the room x2.5 on pressure and x3 on the duration; a wall behind him.
// (2) Bowen (McMichael 2011): q and Glasstone's p_r at 1 atm; p50 at 1/10/100 ms with the probit's 1%, 50% and 99%;
//     Hirsch's eardrums; the grenades on a standing and a prone man (printed); closer is never safer (the envelope never
//     falls as the range shrinks, for both grenades, every stance, cover, a room and a wall; Bowen alone does, printed);
//     a concussion grenade at 0.5 m and in a room.
// (3) Knockback: the overseer's check values (170 g at 0.5, 1 and 1.5 m, 70 g at 0.5 m) through the explosion and the ticks
//     that move him; knocked down or not by stance; held (not acting) while he moves and while down, then released; an
//     obstacle stops him where he could still stand and above 3 m/s hurts him 20 (v - 3)^2.
// (4) Fragments: Gurney speeds and drag; Mott's population (N0, the dust share, the mean mass, the flown count; none from
//     the fibre-bodied concussion grenade as issued, the steel-can alternative's from concBody 1); the skin's
//     threshold; the regions by stance; over many detonations the hits on standing and prone men at 1-12 m within the
//     geometry's bounds (every fragment that flies / those above the stop energy); prone fewer; a wall stops them, a hedge
//     does not; no near-miss suppression unless asked.
// (5) Lethality: E_v calibrated (the table holds the calibration), 50% out of action at 5 m standing by the model and over
//     6,000 men in the battle's own physics; the tables of out-of-action chances, standing and prone, with the blast's
//     effects, model and battle side by side: the fragmentation grenade and the steel-can concussion alternative at
//     2-20 m in the open, the fibre-bodied concussion grenade as issued at 0.3-4 m in the open and in a room.
// (6) Effects: fright, deafness (a burst eardrum for the battle), stun (then pinned) through the explosion; a death by the
//     blast itself (killed outright); lung injury in a survivor; a stunned man is down and holds.
// (7) Throwing (and the throw decision: fragmentation 15 m clear of friends, the thrower 20 m in the open or 8 m shielded);
//     range by stance and strength; the lob and the alternative arcs over walls; no lob into a roofed room; roll,
//     stopped by a wall and into a trench; fuse 4.5 +/- 0.5 and cooking by composure; a throw and its release.
// (8) Reactions: throw-back eligibility (reach, steadiness, the fuse he can assume) and the skill check; run clear or dive;
//     within the reaction radius (fragmentation 12 m, concussion 4 m) and not beyond.
// (9) Issue: gunners carry none; 1 or 2, each fragmentation or concussion, 50/50; stable per soldier; only the switched teams.
// (10) Knowledge: throw decisions read his own tracks and reports, never an enemy he does not know or where he is not; a
//     grenade is seen by line of sight; pinned is from delivery reports and silence, never the enemy's own suppression.
// (11) The switch: SameConfig, the table complete and inert off, byte-identical off, Legacy only; a fixture battle is
//     deterministic, traced or not, and throws and explodes.
#pragma once
#include "BattleSim.h"
#include "CommandSim.h"
#include "Diagnostics.h"
#include "GrenadeSim.h"
#include "ImportedMap.h"
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
namespace grenade_tests {
using namespace army;
constexpr double Pi=3.141592653589793;
inline Map Open(float half=120){Map m;m.halfWidth=m.halfHeight=half;PrepareGeometry(m);return m;}
inline Map WithObstacles(std::vector<Obstacle> obstacles,float half=60,float groundBase=0){
    Map m;m.halfWidth=m.halfHeight=half;m.groundBase=groundBase;uint64_t id=1;for(auto& o:obstacles){o.id=id++;m.obstacles.push_back(o);}
    m.nextGeometryId=id;PrepareGeometry(m);return m;
}
inline float Across(Vec3 a,Vec3 b){return std::sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));}
inline Map House(){Map house;house.halfWidth=house.halfHeight=60;AddBuilding(house,{0,0,0});PrepareGeometry(house);return house;}
// Stat-100 soldiers, every one out of the fight (health 0, far away) but those a fixture places.
inline Frame Empty(){
    Frame f=InitialFrame(Config{});NeutraliseStats(f);
    for(auto& s:f.soldiers){s.health=0;s.action=Action::Killed;s.position=s.goal={110,110,0};}
    return f;
}
inline Soldier& Place(Frame& f,int id,Vec3 p,Stance stance=Stance::Standing,float health=100){
    auto& s=f.soldiers[size_t(id)];s.position=s.goal=p;s.stance=stance;s.health=health;s.maxHealth=std::max(100.f,health);
    s.action=Action::Hold;s.reason=Reason::AwaitOrders;s.suppression=0;s.stunUntil=s.deafUntil=-100;s.stunned=s.deafened=false;s.reactionScale=1;
    s.contacts={};s.reports={};s.allies={};s.deliveries={};s.assignment=Assignment{};s.grenades={};s.knockHeight=0;
    return s;
}
inline Contact Seen(Vec3 p,float at,bool visible=true,float height=1.6f){Contact c;c.known=true;c.visible=visible;c.position=p;c.observedAt=at;c.aimHeight=p.z+height;return c;}
inline void Prime(GrenadeRuntime& g,const Config& c,const Map& map){g.k=c.grenade;g.seed=c.seed;g.world=MakeGrenadeWorld(map);}
inline LiveGrenade Lying(int id,GrenadeType type,Vec3 at,float fuseAt,int owner=-1,int team=-1){
    LiveGrenade gr;gr.id=id;gr.owner=gr.first=owner;gr.team=team;gr.type=type;gr.stage=GrenadeStage::Resting;gr.position=gr.rest=gr.from=at;
    gr.ground=true;gr.spoon=true;gr.fuseAt=fuseAt;gr.noticedAt.fill(-100.f);return gr;
}
inline std::array<Vec3,UnitCount> Where(const Frame& f){std::array<Vec3,UnitCount> p{};for(const auto& s:f.soldiers)p[size_t(s.id)]=s.position;return p;}
// One tick of the grenade world (time = tick * TickSeconds).
inline void Tick(GrenadeRuntime& g,Frame& f,Record& r,const Map& map,const Config& c,int& tick){
    ++tick;f.time=float(tick)*TickSeconds;GrenadeTickStart(g,f,f.time);StepGrenades(g,f,r,map,c,tick,Where(f),[](int){});
}
inline void RunOut(GrenadeRuntime& g,Frame& f,Record& r,const Map& map,const Config& c,int& tick,int most=400){
    for(int n=0;n<most&&(!g.live.empty()||!g.fragments.empty());++n)Tick(g,f,r,map,c,tick);
}
// A grenade of `type` goes off lying on the floor at `at` and every fragment flies out.
inline void Detonate(GrenadeRuntime& g,Frame& f,Record& r,const Map& map,const Config& c,int& tick,int id,GrenadeType type,Vec3 at){
    g.live.push_back(Lying(id,type,at,float(tick)*TickSeconds+.02f));RunOut(g,f,r,map,c,tick);
}
// Only the fragments, for counting hits: the blast does nothing (no fright, deafness, stun, eardrum, Bowen, push) and no
// hit incapacitates; the concussion grenade with its steel can (the alternative body) unless `steel` is false.
inline Config FragmentsOnly(uint32_t seed,bool steel=true){
    Config c;c.seed=seed;c.grenades=3;auto& k=c.grenade;k.concBody=steel?1.f:0.f;   // the concussion grenade's steel can by default here
    k.stunKpa=k.deafKpa=k.frightKpa=k.eardrumKpa=k.bowenP50=k.knockMass=1e9f;k.kHead=k.kThorax=k.kAbdomen=k.kLimbs=0;return c;
}
// The blast alone: no casing, so no fragments.
inline Config BlastOnly(uint32_t seed){Config c;c.seed=seed;c.grenades=3;c.prone=true;c.grenade.fragCasing=c.grenade.concCasing=0;return c;}
// The salts GrenadeSim draws with (fixtures reproduce its draws): the casualty split, Bowen's survival, the eardrum.
constexpr uint32_t SaltCasualty=6,SaltLung=11,SaltEardrum=12;

// ---- (1) Blast -------------------------------------------------------------------------------------------------------
// Mills (1987): the free-air overpressure (kPa) at Z = R / W^(1/3). Glasstone: the normal reflection of an incident p in an
// ideal gas at atmospheric p0 (both kPa).
inline double Mills(double z){return 1772/(z*z*z)-114/(z*z)+108/z;}
inline double Glasstone(double p,double p0){return 2*p*(7*p0+4*p)/(7*p0+p);}
inline float Part(const KbBlast& b,int what){return what==0?b.pressure:what==1?b.duration:what==2?b.impulse:what==3?b.reflectedImpulse:b.reflectedPressure;}
inline void BlastTests(){
    const GrenadeTuning k;const double p0=101.325;
    std::cout<<"GRENADES Kingery-Bulmash (Swisdak 1994), surface burst of 1 kg TNT:\n"<<std::setprecision(4);
    for(float z:{.2f,.3f,.5f,.7f,1.f,1.5f,2.f,3.f,5.f,7.f,10.f,15.f,20.f,30.f,40.f}){const KbBlast b=KingeryBulmash(1,z);
        std::cout<<"GRENADES   Z "<<std::setw(4)<<z<<": P "<<std::setw(8)<<b.pressure<<" kPa, t+ "<<std::setw(6)<<b.duration<<" ms, i "<<std::setw(7)<<b.impulse
                 <<" kPa ms, i_r "<<std::setw(7)<<b.reflectedImpulse<<" kPa ms, p_r "<<std::setw(8)<<b.reflectedPressure<<" kPa; i/(P t+) "<<b.impulse/(b.pressure*b.duration)
                 <<"; Glasstone p_r "<<Glasstone(b.pressure,p0)<<", Mills P at 1.8 W "<<Mills(z/std::cbrt(1.8))<<"\n";}
    std::cout<<std::setprecision(6);
    // The pressure fit's constant term (Z 1: exp 7.2106 = 1353 kPa) and the W^(1/3) scaling (1 kg at 2 m, 8 kg at 4 m: Z 2).
    assert(std::abs(KingeryBulmash(1,1).pressure-1353.1f)<1);
    {const KbBlast one=KingeryBulmash(1,2),eight=KingeryBulmash(8,4);
     assert(std::abs(one.pressure-eight.pressure)<1e-3f*one.pressure&&std::abs(eight.duration-2*one.duration)<1e-3f*eight.duration);
     assert(std::abs(eight.impulse-2*one.impulse)<1e-3f*eight.impulse&&std::abs(eight.reflectedImpulse-2*one.reflectedImpulse)<1e-3f*eight.reflectedImpulse);}
    // The published segments meet: at each joint the fits either side agree within 3% (0 P, 1 t+, 2 i, 4 p_r).
    const std::pair<float,int> joints[8]={{2.9f,0},{23.8f,0},{1.02f,1},{2.8f,1},{.96f,2},{2.38f,2},{33.7f,2},{2.f,4}};
    for(const auto& joint:joints){
        const float below=Part(KingeryBulmash(1,joint.first*(1-1e-5f)),joint.second),above=Part(KingeryBulmash(1,joint.first*(1+1e-5f)),joint.second);
        const char* names[5]={"P","t+","i","i_r","p_r"};
        std::cout<<"GRENADES   joint of "<<names[joint.second]<<" at Z "<<joint.first<<": "<<below<<" | "<<above<<" ("<<100*(above/below-1)<<"%)\n";
        assert(std::abs(above-below)<.03f*std::max(above,below));
    }
    // Falling with distance (allowing a joint's step), the reflected above the incident.
    {KbBlast last=KingeryBulmash(1,.2f);
     for(int n=1;n<=400;++n){const KbBlast b=KingeryBulmash(1,.2f*std::pow(200.f,float(n)/400));
        assert(b.pressure<=last.pressure*1.03f&&b.impulse<=last.impulse*1.03f&&b.reflectedImpulse<=last.reflectedImpulse*1.03f&&b.reflectedPressure<=last.reflectedPressure*1.03f);
        assert(b.reflectedImpulse>b.impulse&&b.reflectedPressure>b.pressure);last=b;}}
    // Independent relations: Glasstone's reflection of the fitted incident pressure within 6% of the reflected fit from Z 2
    // (a weak enough shock for an ideal gas) to 40; Mills's free-air formula at 1.8 W within 30% of the surface fit from Z 3
    // to 20 (it runs high beyond).
    for(float z:{2.f,3.f,5.f,7.f,10.f,15.f,20.f,30.f,40.f}){const KbBlast b=KingeryBulmash(1,z);
        assert(std::abs(Glasstone(b.pressure,p0)/b.reflectedPressure-1)<.06);
        if(z>=3&&z<=20)assert(std::abs(Mills(z/std::cbrt(1.8))/b.pressure-1)<.3);}
    // The grenades (printed): lying on the ground, by distance.
    for(int type=0;type<2;++type){const float charge=type?k.concCharge:k.fragCharge;
        for(float r:{.5f,1.f,1.5f,2.f,3.f,5.f,8.f,12.f}){const KbBlast b=KingeryBulmash(charge,r);
            std::cout<<"GRENADES "<<(type?"concussion (170 g)":"fragmentation (70 g)")<<" at "<<r<<" m: Z "<<b.scaled<<", P "<<b.pressure<<" kPa, t+ "<<b.duration
                     <<" ms, i "<<b.impulse<<", i_r "<<b.reflectedImpulse<<" kPa ms\n";}}
    // An air burst (in a hand, in flight) is the surface fit at W / 1.8.
    assert(BlastOverpressure(k,k.fragCharge,3,false)==KingeryBulmash(k.fragCharge*k.airBurst,3).pressure&&BlastOverpressure(k,k.fragCharge,3,false)<BlastOverpressure(k,k.fragCharge,3,true));
    // The range is to the nearest point of his body.
    const Map open=Open();Frame f=Empty();
    for(float r:{1.f,2.f,3.f,5.f,8.f,12.f}){Soldier& s=Place(f,1,{r,0,0});const BlastReading b=BlastOn(k,open,{0,0,k.burstHeight},k.fragCharge,true,s);const KbBlast kb=KingeryBulmash(k.fragCharge,r);
        assert(std::abs(b.range-r)<1e-4f&&b.kpa==b.raw&&b.raw==kb.pressure&&b.duration==kb.duration&&b.impulse==kb.impulse&&!b.shielded&&!b.room&&!b.wall);}
    {Soldier& s=Place(f,1,{0,0,3.2f});assert(std::abs(BlastOn(k,open,{0,0,k.burstHeight},k.fragCharge,true,s).range-(3.2f-k.burstHeight))<1e-4f);}
    // Solid cover between the burst and all of him: pressure and impulses x0.4, the duration as it was. A hedge is no cover.
    const Map walled=WithObstacles({{{2,0,0},{.2f,3,0},false,false,2.5f}});
    {Soldier& s=Place(f,1,{4,0,0});const BlastReading b=BlastOn(k,walled,{0,0,k.burstHeight},k.fragCharge,true,s);const KbBlast kb=KingeryBulmash(k.fragCharge,4);
     assert(b.shielded&&std::abs(b.kpa-b.raw*k.coverFactor)<1e-3f&&std::abs(b.impulse-kb.impulse*k.coverFactor)<1e-4f);
     assert(std::abs(b.reflectedImpulse-kb.reflectedImpulse*k.coverFactor)<1e-4f&&b.duration==kb.duration);
     Soldier& aside=Place(f,2,{0,6,0});assert(!BlastOn(k,walled,{0,0,k.burstHeight},k.fragCharge,true,aside).shielded);}
    Obstacle hedge{{2,0,0},{.2f,3,0},false,false,2.5f};hedge.concealment=true;hedge.flags=1;
    const Map hedged=WithObstacles({hedge});assert(hedged.hasConcealment);
    {Soldier& s=Place(f,1,{4,0,0});assert(!BlastOn(k,hedged,{0,0,k.burstHeight},k.fragCharge,true,s).shielded);}
    // The room: an authored house, the burst on its ground floor. The same room: pressure x2.5 and the positive phase x3, the
    // impulses as in the open; upstairs neither (the slab shields him); outside the walls not the room.
    const Map house=House();const Vec3 burst{2.5f,2.5f,k.burstHeight};
    {Soldier& s=Place(f,1,{-2.5f,2.5f,0});const BlastReading b=BlastOn(k,house,burst,k.concCharge,true,s);const KbBlast kb=KingeryBulmash(k.concCharge,b.range);
     std::cout<<"GRENADES room: "<<b.kpa<<" kPa and "<<b.duration<<" ms in the room, "<<b.raw<<" kPa and "<<kb.duration<<" ms in the open\n";
     assert(b.room&&!b.shielded&&std::abs(b.kpa-b.raw*k.roomFactor)<1e-3f&&std::abs(b.duration-kb.duration*k.roomDuration)<1e-5f&&b.impulse==kb.impulse);}
    {Soldier& s=Place(f,1,{-2.5f,2.5f,UpperFloor});const BlastReading b=BlastOn(k,house,burst,k.concCharge,true,s);assert(!b.room&&b.shielded);}
    {Soldier& s=Place(f,1,{9,2.5f,0});assert(!BlastOn(k,house,burst,k.concCharge,true,s).room);}
    assert(SameRoom(house,{0,2,UpperFloor+k.burstHeight},{-3,2,UpperFloor})&&!SameRoom(house,{0,2,k.burstHeight},{-3,2,UpperFloor}));
    // A wall 0.6 m behind him along the wave: he takes Glasstone's reflected pressure (Bowen's man against a surface).
    const Map backed=WithObstacles({{{3.8f,0,0},{.2f,3,0},false,false,2.5f}});
    {Soldier& s=Place(f,1,{3,0,0});const BlastReading b=BlastOn(k,backed,{0,0,k.burstHeight},k.fragCharge,true,s);
     assert(b.wall&&!b.shielded&&std::abs(b.psi-EquivalentPressure(k,b.kpa,Stance::Standing,true))<1e-4f&&b.psi>EquivalentPressure(k,b.kpa,Stance::Standing,false));
     Soldier& clear=Place(f,2,{0,3,0});assert(!BlastOn(k,backed,{0,0,k.burstHeight},k.fragCharge,true,clear).wall);}
    std::cout<<"GRENADES blast: Kingery-Bulmash as published (joints, scaling, Glasstone and Mills), range to his body, cover x0.4 (not a hedge), the room x2.5 and x3, a wall behind PASS\n";
}

// ---- (2) Bowen and the eardrum ---------------------------------------------------------------------------------------
inline void BowenTests(){
    const GrenadeTuning k;
    // One atmosphere of overpressure (14.7 psi): q = 2.5 p^2 / (7 p0 + p) = 4.59 psi; Glasstone's p_r = 40.4 psi (x2.75).
    const float atm=14.7f*6.894757f;
    assert(std::abs(EquivalentPressure(k,atm,Stance::Standing,false)-(14.7f+4.594f))<.01f&&std::abs(EquivalentPressure(k,atm,Stance::Crouched,false)-(14.7f+4.594f))<.01f);
    assert(std::abs(EquivalentPressure(k,atm,Stance::Prone,false)-14.7f)<1e-3f&&std::abs(EquivalentPressure(k,atm,Stance::Prone,true)-40.42f)<.02f);
    // p50 by duration (1/10/100 ms: 477.2/97.4/64.6 psi); survival 0.5 there; 99% at exp(-0.1788 x 2.326) = 0.660 p50 and 1%
    // at 1.516 p50 (Bowen's threshold and near-certain lethality).
    for(float t:{1.f,10.f,100.f}){const double p50=61.5*(1+6.76*std::pow(double(t),-1.064)),low=p50*std::exp(-.1788*2.3263),high=p50*std::exp(.1788*2.3263);
        float probit=0;const float half=BowenSurvival(k,float(p50),t,&probit),safe=BowenSurvival(k,float(low),t),lethal=BowenSurvival(k,float(high),t);
        std::cout<<"GRENADES Bowen t+ "<<t<<" ms: p50 "<<p50<<" psi, survival "<<half<<"; "<<safe<<" at "<<low<<" psi; "<<lethal<<" at "<<high<<" psi\n";
        assert(std::abs(half-.5f)<1e-4f&&std::abs(probit-5)<1e-3f&&std::abs(safe-.99f)<1e-3f&&std::abs(lethal-.01f)<1e-3f);}
    {float probit=0;assert(BowenSurvival(k,0,1,&probit)==1&&probit==99&&BowenSurvival(k,100,0)==1);}
    // A heavier man is scaled as Bowen scales him: 140 kg is the 70 kg man at t+ x 2^(-1/3).
    {GrenadeTuning heavy=k;heavy.bowenMass=140;assert(std::abs(BowenSurvival(heavy,300,2)-BowenSurvival(k,300,2*std::pow(.5f,1.f/3)))<1e-5f);}
    // Hirsch: about 1% at 34 kPa, 50% at 103 kPa, 99% at 300 kPa.
    assert(std::abs(EardrumRupture(k,103)-.5f)<1e-5f&&EardrumRupture(k,34)>.004f&&EardrumRupture(k,34)<.012f&&EardrumRupture(k,300)>.98f&&EardrumRupture(k,0)==0);
    // The grenades on a man in the open (printed): standing and prone, eardrum, stun.
    const Map open=Open();Frame f=Empty();
    for(int type=0;type<2;++type)for(float r:{.3f,.5f,.75f,1.f,1.5f,2.f,3.f,5.f}){
        const GrenadeType kind=type?GrenadeType::Concussion:GrenadeType::Fragmentation;const float charge=GrenadeCharge(k,kind);
        Soldier& up=Place(f,1,{r,0,0});const BlastReading a=BlastOn(k,open,{0,0,k.burstHeight},charge,true,up);
        Soldier& flat=Place(f,2,{-r,0,0},Stance::Prone);const BlastReading b=BlastOn(k,open,{0,0,k.burstHeight},charge,true,flat);
        std::cout<<"GRENADES "<<(type?"concussion":"fragmentation")<<" at "<<r<<" m: "<<a.kpa<<" kPa for "<<a.duration<<" ms; survival standing "<<a.survival<<" (p_eq "<<a.psi
                 <<" psi, probit "<<a.probit<<"), prone "<<b.survival<<"; eardrum "<<a.eardrum<<"; stun "<<StunSeconds(k,up,a.kpa)<<" s\n";}
    // Closer is never safer. Bowen alone on the fits spares a closer man inside Z 1 (the fitted positive phase shortens
    // faster than the pressure grows); the envelope, the least over every range from his out, never does (printed).
    for(int type=0;type<2;++type)for(float r:{.2f,.3f,.4f,.5f,.55f,.56f,.6f,.7f,.8f,1.f,1.2f}){
        const float charge=type?k.concCharge:k.fragCharge;
        const float alone=BlastProbit(k,charge,r,Stance::Standing,1,1,false,false),never=BlastProbit(k,charge,r,Stance::Standing,1,1,false);
        std::cout<<"GRENADES "<<(type?"concussion":"fragmentation")<<" standing at "<<r<<" m (Z "<<r/std::cbrt(charge)<<"): survival by Bowen alone "<<NormalCdf(alone-5)
                 <<", closer never safer "<<NormalCdf(never-5)<<"\n";}
    // For both grenades, their air bursts and a 1.5 kg charge; standing, crouched, prone, behind cover, in a room (standing
    // and prone) and against a wall: from contact to 4 m in 5 mm steps the envelope's probit never falls as the range grows,
    // it is never above Bowen alone by more than the grid's interpolation (0.02 of a probit), and from Z 2.8 it is Bowen.
    {struct Condition { Stance stance; float pressure, duration; bool wall; };
     const Condition conditions[7]={{Stance::Standing,1,1,false},{Stance::Crouched,1,1,false},{Stance::Prone,1,1,false},{Stance::Standing,k.coverFactor,1,false},
        {Stance::Standing,k.roomFactor,k.roomDuration,false},{Stance::Prone,k.roomFactor,k.roomDuration,false},{Stance::Standing,1,1,true}};
     float worst=0;
     for(float charge:{k.fragCharge,k.concCharge,k.fragCharge*k.airBurst,k.concCharge*k.airBurst,1.5f})for(const auto& cond:conditions){
        float last=-1e9f;
        for(int n=0;n<=800;++n){const float r=.005f*float(n);
            const float never=BlastProbit(k,charge,r,cond.stance,cond.pressure,cond.duration,cond.wall),alone=BlastProbit(k,charge,r,cond.stance,cond.pressure,cond.duration,cond.wall,false);
            assert(never>=last-1e-5f);last=never;worst=std::max(worst,never-alone);
            assert(never<=alone+.02f&&(r/std::cbrt(charge)<2.8f||never==alone));}}
     std::cout<<"GRENADES envelope: monotone for 5 charges x 7 conditions; at most "<<worst<<" of a probit above Bowen alone (interpolation)\n";}
    // The hand checks: a concussion grenade 0.5 m from a standing man in the open: Bowen alone gives 0.57, the envelope the
    // least from there out, 0.40 at the duration fit's joint (Z 1.02, 0.565 m); 1 m from him in a room (x2.5, x3), almost
    // surely dead; a fragmentation grenade at 1 m does not kill by blast.
    {Soldier& s=Place(f,1,{.5f,0,0});const BlastReading b=BlastOn(k,open,{0,0,k.burstHeight},k.concCharge,true,s);
     assert(std::abs(NormalCdf(BlastProbit(k,k.concCharge,.5f,Stance::Standing,1,1,false,false)-5)-.572f)<.02f&&std::abs(b.survival-.40f)<.01f);}
    {Soldier& s=Place(f,1,{1,0,0});assert(BlastOn(k,open,{0,0,k.burstHeight},k.fragCharge,true,s).survival>.9999f);}
    {const Map house=House();Soldier& s=Place(f,1,{1.5f,2.5f,0});const BlastReading b=BlastOn(k,house,{2.5f,2.5f,k.burstHeight},k.concCharge,true,s);
     std::cout<<"GRENADES concussion 1 m away in a room: "<<b.kpa<<" kPa for "<<b.duration<<" ms, p_eq "<<b.psi<<" psi: survival "<<b.survival<<(b.wall?" (a wall behind him)":"")<<"\n";
     assert(b.room&&b.survival<.01f);}
    std::cout<<"GRENADES Bowen: q and p_r, p50 by duration and the probit, mass scaling, Hirsch's eardrums, the hand checks PASS\n";
}

// ---- (3) Knockback ---------------------------------------------------------------------------------------------------
// Ticks the grenade world until his knockback is over (and he is up), checking the hold each tick; returns the highest he
// flew.
inline float RunKnock(GrenadeRuntime& g,Frame& f,Record& r,const Map& map,const Config& c,int& tick,int id){
    float highest=0;
    for(int n=0;n<400;++n){
        Tick(g,f,r,map,c,tick);highest=std::max(highest,f.soldiers[size_t(id)].knockHeight);
        const auto& m=g.men[size_t(id)];if(!m.knocked)break;
        const GrenadeOrder o=GrenadeOverride(g,f,f.soldiers[size_t(id)],map,c,f.time,nullptr,false);
        assert(o.hold&&o.order.reason==Reason::Knocked&&o.order.action==Action::Hold&&GrenadeHeld(g,f.soldiers[size_t(id)]));
        assert(m.knockDown?o.order.stance==Stance::Prone:o.order.stance==f.soldiers[size_t(id)].stance);
    }
    return highest;
}
inline void KnockTests(){
    // The overseer's check (open ground, standing, the grenade lying there): 170 g at 0.5 m: dv 1.4 across and 2.8 up,
    // moved about 0.95 m; at 1 m about 0.15 m, knocked down; at 1.5 m about 0.05 m; 70 g at 0.5 m about 0.2 m.
    struct Case { GrenadeType type; float r, moved, tolerance; bool down; };
    const Case cases[4]={{GrenadeType::Concussion,.5f,.95f,.05f,true},{GrenadeType::Concussion,1,.15f,.02f,true},
                         {GrenadeType::Concussion,1.5f,.05f,.01f,false},{GrenadeType::Fragmentation,.5f,.2f,.02f,true}};
    const Map open=Open();
    for(const auto& one:cases){
        Config c=BlastOnly(21);c.grenade.stunKpa=c.grenade.bowenP50=1e9f;   // no stun, no death: the push is the question
        Frame f=Empty();Place(f,1,{one.r,0,0});GrenadeRuntime g;Prime(g,c,open);Record r;int tick=10;f.time=float(tick)*TickSeconds;
        const BlastReading b=BlastOn(g.k,open,{0,0,g.k.burstHeight},GrenadeCharge(g.k,one.type),true,f.soldiers[1]);
        const float across=std::sqrt(b.push.x*b.push.x+b.push.y*b.push.y);const KnockPath path=KnockTravel(g.k,across,b.push.z);
        Detonate(g,f,r,open,c,tick,1,one.type,{0,0,0});
        assert(g.men[1].knocking&&g.totals.knockbacks==1&&g.men[1].knockDown==one.down);
        const float highest=RunKnock(g,f,r,open,c,tick,1);
        const float moved=Across(f.soldiers[1].position,{one.r,0,0});
        std::cout<<"GRENADES knockback "<<(one.type==GrenadeType::Concussion?"170 g":"70 g")<<" at "<<one.r<<" m: i "<<b.impulse<<", i_r "<<b.reflectedImpulse<<" kPa ms; dv "
                 <<across<<" across, "<<b.push.z<<" up; "<<path.air<<" s in the air, highest "<<highest<<" m, slid "<<path.slide<<" m; moved "<<moved<<" m (check "<<one.moved
                 <<"); knocked down "<<g.men[1].knockDown<<"\n";
        assert(std::abs(moved-path.distance)<1e-3f&&std::abs(moved-one.moved)<one.tolerance&&f.soldiers[1].position.y==0&&f.soldiers[1].knockHeight==0);
        if(path.air>0)assert(std::abs(highest-b.push.z*b.push.z/(2*9.81f))<.02f);
        if(one.r==.5f&&one.type==GrenadeType::Concussion)assert(std::abs(across-1.4f)<.1f&&std::abs(b.push.z-2.8f)<.1f);
        const GrenadeOrder after=GrenadeOverride(g,f,f.soldiers[1],open,c,f.time,nullptr,false);assert(!after.hold&&after.released&&!GrenadeHeld(g,f.soldiers[1]));
        if(one.down)assert(f.time>=g.men[1].knockEnd+g.k.knockRise-1e-4f);
    }
    // By stance, 1 m from 170 g: crouched (0.4 m^2, centre 0.6 m) he stays up below 0.9 m/s; prone is never knocked down.
    for(Stance stance:{Stance::Crouched,Stance::Prone}){
        Config c=BlastOnly(23);c.grenade.stunKpa=c.grenade.bowenP50=1e9f;Frame f=Empty();Place(f,1,{1,0,0},stance);GrenadeRuntime g;Prime(g,c,open);Record r;int tick=10;
        const BlastReading b=BlastOn(g.k,open,{0,0,g.k.burstHeight},g.k.concCharge,true,f.soldiers[1]);
        Detonate(g,f,r,open,c,tick,1,GrenadeType::Concussion,{0,0,0});RunKnock(g,f,r,open,c,tick,1);
        std::cout<<"GRENADES knockback "<<(stance==Stance::Prone?"prone":"crouched")<<" at 1 m: dv "<<Length(b.push)<<", moved "<<Across(f.soldiers[1].position,{1,0,0})<<" m\n";
        assert(!g.men[1].knockDown&&Length(b.push)<Length(BlastOn(g.k,open,{0,0,g.k.burstHeight},g.k.concCharge,true,Place(f,2,{-1,0,0})).push));
    }
    // An obstacle stops him where he could still stand, at the speed he had there, and above 3 m/s it hurts: 1.5 kg (a
    // charge, not a grenade) 1 m from a man, a wall 1.5 m behind him; he meets it in the air (dv across about 5 m/s).
    {Config c=BlastOnly(22);c.grenade.fragCharge=1.5f;c.grenade.stunKpa=c.grenade.bowenP50=c.grenade.eardrumKpa=1e9f;
     const Map walled=WithObstacles({{{2.7f,0,0},{.2f,3,0},false,false,2.5f}});Frame f=Empty();Place(f,1,{1,0,0});GrenadeRuntime g;Prime(g,c,walled);Record r;int tick=10;
     const BlastReading b=BlastOn(g.k,walled,{0,0,g.k.burstHeight},1.5f,true,f.soldiers[1]);
     const float across=std::sqrt(b.push.x*b.push.x+b.push.y*b.push.y);const KnockPath path=KnockTravel(g.k,across,b.push.z);
     Detonate(g,f,r,walled,c,tick,1,GrenadeType::Fragmentation,{0,0,0});RunKnock(g,f,r,walled,c,tick,1);
     const float stopped=f.soldiers[1].position.x,expected=20*(across-3)*(across-3);
     std::cout<<"GRENADES knockback into a wall: dv "<<across<<" across (free, he would go "<<path.distance<<" m); stopped at "<<stopped<<" (the wall's face at 2.5), injury "
              <<100-f.soldiers[1].health<<" (20 (v - 3)^2 = "<<expected<<")\n";
     assert(stopped<=2.5f-.48f&&stopped>2.5f-.48f-.05f-1e-3f&&stopped-1<across*path.air&&across>3);
     assert(std::abs(100-f.soldiers[1].health-expected)<.01f&&g.totals.knockImpacts==1&&f.soldiers[1].Active());}
    std::cout<<"GRENADES knockback: the check values, knocked down by stance, held while moving and down then released, an obstacle stops and hurts PASS\n";
}

// ---- (4) Fragments ---------------------------------------------------------------------------------------------------
// The share of the N0 potential fragments that meet a man's body (the bullets' cylinder, radius 0.4 m, height h on his
// floor) at horizontal distance R from a burst `lift` above the floor, flying (not dust) and arriving with at least `stop`
// J: straight lines (within 12 m gravity drops a fragment a few millimetres), uniform over the sphere; along each line the
// energy rises with the mass, so the lightest mass that arrives bounds the share (Mott: s = ln 1/u exponential, m = mu s^2).
inline double ReachShare(const GrenadeTuning& k,GrenadeType type,double R,double h,double lift,double stop){
    const double rho=.4,mu=MottMu(k,type),v0=FragmentSpeed(k,type),sMin=std::sqrt(k.dustMass/mu);
    if(R<=rho)return .5*std::exp(-sMin);
    const double alpha=std::asin(rho/R);const int n=400,m=60;double sum=0;
    for(int i=0;i<n;++i){const double phi=-alpha+(i+.5)*2*alpha/n,sine=std::sin(phi);
        const double d0=R*std::cos(phi)-std::sqrt(std::max(0.,rho*rho-R*R*sine*sine));
        const double low=std::atan(-lift/d0),high=std::atan((h-lift)/d0);
        for(int j=0;j<m;++j){const double theta=low+(j+.5)*(high-low)/m,d=d0/std::cos(theta);
            auto energy=[&](double sv){const double mass=mu*sv*sv;return .5*mass*v0*v0*std::exp(-2*d/(k.dragScale*std::cbrt(mass)));};
            double lo=sMin,hi=sMin;
            if(energy(sMin)<stop){hi=40;for(int it=0;it<60;++it){const double mid=.5*(lo+hi);if(energy(mid)<stop)lo=mid;else hi=mid;}}
            sum+=std::cos(theta)*(high-low)/m*std::exp(-hi);}}
    return sum*(2*alpha/n)/(4*Pi);
}
constexpr float RingDistances[6]={1,2,3,5,8,12};
// Rings of men at 1/2/3/5/8/12 m, each ring in its own 60-degree sector with its men spaced so none shades another.
inline std::array<std::vector<int>,6> PlaceRings(Frame& f,Stance stance){
    std::array<std::vector<int>,6> rings;int id=0;
    for(int n=0;n<6;++n){const float r=RingDistances[n];const float width=2*std::asin(.4f/r)*1.3f;
        const int count=std::max(1,int(std::floor((60.f*float(Pi)/180)/width)));
        for(int m=0;m<count;++m){const float angle=float(n)*60.f*float(Pi)/180+(float(m)-float(count-1)*.5f)*width;
            Place(f,id,{r*std::cos(angle),r*std::sin(angle),0},stance,1e5f);rings[size_t(n)].push_back(id++);}}
    return rings;
}
struct Shower { std::array<double,6> hits{},damage{},men{}; int detonations=0; };
inline Shower Fire(GrenadeType type,Stance stance,int detonations,uint32_t seed){
    const Config c=FragmentsOnly(seed);const Map open=Open();Frame f=Empty();const auto rings=PlaceRings(f,stance);
    GrenadeRuntime g;Prime(g,c,open);Record r;int tick=0;Shower out;out.detonations=detonations;
    std::array<int,UnitCount> ringOf{};ringOf.fill(-1);for(size_t n=0;n<6;++n)for(int id:rings[n]){ringOf[size_t(id)]=int(n);out.men[n]+=1;}
    for(int n=0;n<detonations;++n){
        Detonate(g,f,r,open,c,tick,n+1,type,{0,0,0});
        for(const auto& e:r.events)if(e.kind==EventKind::Hit&&e.target>=0&&ringOf[size_t(e.target)]>=0)out.hits[size_t(ringOf[size_t(e.target)])]+=1;
        r.events.clear();r.explosions.clear();
        for(auto& s:f.soldiers)if(ringOf[size_t(s.id)]>=0){out.damage[size_t(ringOf[size_t(s.id)])]+=double(1e5f-s.health);s.health=1e5f;s.suppression=0;}
    }
    return out;
}
inline void FragmentTests(){
    const GrenadeTuning k;
    // Gurney: 839 m/s for 550 g of iron on 70 g, 2238 m/s for 100 g on 170 g; lambda 27/39/54 m at 0.5/1.5/4 g.
    const float vf=FragmentSpeed(k,GrenadeType::Fragmentation),vc=FragmentSpeed(k,GrenadeType::Concussion);
    std::cout<<"GRENADES fragments: "<<vf<<" m/s (fragmentation), "<<vc<<" m/s (concussion); lambda "<<1/FragmentDragK(k,.0005f)<<", "<<1/FragmentDragK(k,.0015f)<<", "<<1/FragmentDragK(k,.004f)<<" m\n";
    assert(std::abs(vf-840)<2&&std::abs(vc-2240)<3);
    assert(std::abs(1/FragmentDragK(k,.0005f)-27)<.5f&&std::abs(1/FragmentDragK(k,.0015f)-39)<.5f&&std::abs(1/FragmentDragK(k,.004f)-54)<.5f);
    // Mott: N0 = casing / (2 mu): 1,100 and 500; the dust share 1 - exp(-sqrt(dust / mu)): 36% and 51%, so about 703 and 247
    // fly; the mean mass 2 mu (mass conserved).
    // The concussion grenade as issued has a fibre body (the US Mk 3): no fragments; its steel-can alternative (the German
    // M24, concBody 1) breaks up as Mott's population.
    GrenadeTuning steel=k;steel.concBody=1;
    assert(FragmentPopulation(k,GrenadeType::Fragmentation)==1100&&FragmentPopulation(k,GrenadeType::Concussion)==0&&FragmentPopulation(steel,GrenadeType::Concussion)==500);
    std::array<double,2> flying{};
    for(int type=0;type<2;++type){const GrenadeType kind=type?GrenadeType::Concussion:GrenadeType::Fragmentation;const double mu=MottMu(k,kind);
        double sum=0;int dust=0;const int draws=200000;
        for(int i=0;i<draws;++i){const float m=MottMass(k,kind,GrenadeDraw(9,uint32_t(type+1),uint32_t(i),9));sum+=m;dust+=m<k.dustMass;}
        const double share=1-std::exp(-std::sqrt(k.dustMass/mu));flying[size_t(type)]=FragmentPopulation(steel,kind)*(1-share);
        std::cout<<"GRENADES Mott "<<(type?"concussion (steel can)":"fragmentation")<<": N0 "<<FragmentPopulation(steel,kind)<<", mean mass "<<1e3*sum/draws<<" g (2 mu "<<2e3*mu<<"), dust "
                 <<dust/double(draws)<<" (expected "<<share<<"), flying "<<flying[size_t(type)]<<"\n";
        assert(std::abs(sum/draws/(2*mu)-1)<.02&&std::abs(dust/double(draws)-share)<.005);}
    {const Config c=FragmentsOnly(5);const Map open=Open();Frame f=Empty();GrenadeRuntime g;Prime(g,c,open);Record r;int tick=0;
     Detonate(g,f,r,open,c,tick,1,GrenadeType::Fragmentation,{0,0,0});Detonate(g,f,r,open,c,tick,2,GrenadeType::Concussion,{0,0,0});
     for(size_t n=0;n<2;++n){const double expected=flying[n],sigma=std::sqrt(expected*(1-expected/FragmentPopulation(steel,n?GrenadeType::Concussion:GrenadeType::Fragmentation)));
        std::cout<<"GRENADES a detonation flies "<<r.explosions[n].fragments<<" (expected "<<expected<<")\n";assert(std::abs(r.explosions[n].fragments-expected)<4*sigma);}}
    {const Config c=FragmentsOnly(6,false);const Map open=Open();Frame f=Empty();GrenadeRuntime g;Prime(g,c,open);Record r;int tick=0;
     Detonate(g,f,r,open,c,tick,1,GrenadeType::Concussion,{0,0,0});assert(r.explosions.size()==1&&r.explosions[0].fragments==0&&g.totals.fragmentsFlown==0);}
    // The skin: a 0.5 g fragment presents 1.5 (m/rho)^(2/3) = 23.9 mm^2 and penetrates from 2.39 J.
    assert(std::abs(FragmentArea(k,.0005f)-23.9f)<.2f&&!Penetrates(k,.0005f,2.3f)&&Penetrates(k,.0005f,2.45f));
    // The regions by stance: the shares of the presented area.
    for(Stance stance:{Stance::Standing,Stance::Crouched,Stance::Prone}){int counts[4]={};const int draws=40000;
        for(int i=0;i<draws;++i)++counts[FragmentRegion(k,stance,GrenadeDraw(3,1,uint32_t(i),13))];
        const float head=stance==Stance::Prone?k.headProne:stance==Stance::Crouched?k.headCrouched:k.headStanding;
        const float thorax=stance==Stance::Prone?k.thoraxProne:stance==Stance::Crouched?k.thoraxCrouched:k.thoraxStanding;
        const float abdomen=stance==Stance::Prone?k.abdomenProne:stance==Stance::Crouched?k.abdomenCrouched:k.abdomenStanding;
        const float shares[4]={head,thorax,abdomen,1-head-thorax-abdomen};
        for(int n=0;n<4;++n)assert(std::abs(counts[n]/double(draws)-shares[n])<.01);}
    // Over many detonations the hits on standing and prone men at 1-12 m lie within the geometry's bounds: at most every
    // fragment that flies along a line onto him, at least those that still carry the stop energy there (the flight tests
    // the stop at each substep's end, so a light one may go a little past it).
    const int runs=150;
    const Shower standing[2]={Fire(GrenadeType::Fragmentation,Stance::Standing,runs,41),Fire(GrenadeType::Concussion,Stance::Standing,runs*2,42)};
    const Shower prone=Fire(GrenadeType::Fragmentation,Stance::Prone,runs,43);
    for(int type=0;type<3;++type){const Shower& s=type==2?prone:standing[type];const GrenadeType kind=type==1?GrenadeType::Concussion:GrenadeType::Fragmentation;
        const double h=type==2?.35:1.85;const int population=FragmentPopulation(steel,kind);
        for(size_t n=0;n<6;++n){
            const double samples=s.men[n]*s.detonations,mean=s.hits[n]/samples,perHit=s.hits[n]>0?s.damage[n]/s.hits[n]:0;
            const double most=population*ReachShare(k,kind,RingDistances[n],h,k.burstHeight,0),least=population*ReachShare(k,kind,RingDistances[n],h,k.burstHeight,k.fragmentStopEnergy);
            std::cout<<"GRENADES "<<(type==1?"concussion (steel can)":"fragmentation")<<(type==2?" prone ":" standing ")<<std::setw(2)<<RingDistances[n]<<" m: hits "<<std::setprecision(4)<<mean
                     <<" (geometry "<<least<<" to "<<most<<"), damage per hit "<<perHit<<"\n"<<std::setprecision(6);
            assert(mean<=most+4*std::sqrt(most/samples)+.01*most&&mean>=least-4*std::sqrt(least/samples)-.01*least);
            if(type==2&&n>0)assert(mean<standing[0].hits[n]/(standing[0].men[n]*standing[0].detonations));   // prone takes fewer
        }
    }
    // A wall stops them; a hedge does not (fragments pass concealment as bullets do).
    for(int hedgeCase=0;hedgeCase<2;++hedgeCase){
        Obstacle wall{{2,0,0},{.2f,3,0},false,false,2.5f};if(hedgeCase){wall.concealment=true;wall.flags=1;}
        const Map map=WithObstacles({wall});const Config c=FragmentsOnly(7);Frame f=Empty();
        Place(f,1,{4,0,0},Stance::Standing,1e5f);Place(f,2,{0,4,0},Stance::Standing,1e5f);
        GrenadeRuntime g;Prime(g,c,map);Record r;int tick=0;int behind=0,open=0;
        for(int n=0;n<40;++n){Detonate(g,f,r,map,c,tick,n+1,GrenadeType::Fragmentation,{0,0,0});
            for(const auto& e:r.events)if(e.kind==EventKind::Hit){behind+=e.target==1;open+=e.target==2;}
            r.events.clear();}
        std::cout<<"GRENADES "<<(hedgeCase?"hedge":"wall")<<": "<<behind<<" hits behind it, "<<open<<" on the man in the open (40 detonations at 4 m)\n";
        assert(open>0&&(hedgeCase?behind>0:behind==0));
    }
    // Near misses: none by default (the blast's fright is the explosion's fear); a table value turns the bullets' rule on.
    for(float nearMiss:{0.f,.01f}){
        Config c=FragmentsOnly(8);c.grenade.fragmentHitSuppression=0;c.grenade.fragmentNearMiss=nearMiss;const Map open=Open();Frame f=Empty();
        Place(f,1,{6,0,0},Stance::Standing,1e5f);GrenadeRuntime g;Prime(g,c,open);Record r;int tick=0;
        Detonate(g,f,r,open,c,tick,1,GrenadeType::Fragmentation,{0,0,0});
        std::cout<<"GRENADES near misses at "<<nearMiss<<": suppression "<<f.soldiers[1].suppression<<" at 6 m\n";
        assert(nearMiss>0?f.soldiers[1].suppression>0:f.soldiers[1].suppression==0);
    }
    std::cout<<"GRENADES fragments: Gurney speeds, drag, Mott's population, the skin, the regions; hits on the body within the geometry, prone fewer, walls stop them, no near-miss suppression unless asked PASS\n";
}

// ---- (5) Lethality ---------------------------------------------------------------------------------------------------
inline void LethalityTests(){
    const GrenadeTuning k;
    // E_v: a standing man in the open 5 m from a fragmentation grenade is out of action with 0.5 (Jordan's 5 m lethal
    // radius). The table holds the calibration.
    const float ev=CalibrateWoundEnergy(k,5,.5f);
    std::cout<<"GRENADES E_v calibrated: "<<ev<<" J (table "<<k.woundEnergy<<" J); at 5 m the model gives "<<FragmentLethality(k,GrenadeType::Fragmentation,5,Stance::Standing,k.woundEnergy)<<"\n";
    assert(std::abs(ev/k.woundEnergy-1)<.005f&&std::abs(FragmentLethality(k,GrenadeType::Fragmentation,5,Stance::Standing,k.woundEnergy)-.5f)<.005f);
    // The battle's own physics (the flight, the draws, every effect of the burst): 24 men round a fragmentation grenade at
    // 5 m, 250 detonations.
    {Config c;c.seed=51;c.grenades=3;c.prone=true;const Map open=Open();Frame f=Empty();GrenadeRuntime g;Prime(g,c,open);Record r;int tick=0;
     const int men=24,runs=250;int out=0;
     for(int n=0;n<runs;++n){
        for(int m=0;m<men;++m){const float angle=2*float(Pi)*float(m)/men;Place(f,m,{5*std::cos(angle),5*std::sin(angle),0});g.men[size_t(m)]=SoldierGrenade{};}
        Detonate(g,f,r,open,c,tick,n+1,GrenadeType::Fragmentation,{0,0,0});
        for(int m=0;m<men;++m)out+=!f.soldiers[size_t(m)].Active();
        r.events.clear();r.explosions.clear();}
     const double p=double(out)/(men*runs),sigma=std::sqrt(.25/(men*runs));
     std::cout<<"GRENADES 5 m, standing, in the battle's physics: "<<p<<" out of action ("<<men*runs<<" men, sigma "<<sigma<<")\n";
     assert(std::abs(p-.5)<4*sigma+.01);}
    // The table: out of action by distance, standing and prone: the fragmentation grenade and the concussion grenade's
    // steel-can alternative (the German M24, concBody 1). The model: the fragments (the calibration's model) and the blast
    // (Bowen's death, lung injury); the battle: rings of men, every effect. From 5 m out the two agree.
    GrenadeTuning steel=k;steel.concBody=1;
    const float distances[7]={2,3,5,8,12,15,20};
    for(int type=0;type<2;++type)for(int lying=0;lying<2;++lying){
        const GrenadeType kind=type?GrenadeType::Concussion:GrenadeType::Fragmentation;const Stance stance=lying?Stance::Prone:Stance::Standing;
        Config c;c.seed=uint32_t(61+type*2+lying);c.grenades=3;c.prone=true;c.grenade=steel;const Map open=Open();Frame f=Empty();GrenadeRuntime g;Prime(g,c,open);Record r;int tick=0;
        std::array<std::vector<std::pair<int,Vec3>>,7> rings;int id=0;
        for(size_t n=0;n<7;++n){const float radius=distances[n],width=2*std::asin(.4f/radius)*1.3f,sector=2*float(Pi)/7;
            const int count=std::max(1,int(std::floor(sector/width)));
            for(int m=0;m<count;++m){const float angle=float(n)*sector+(float(m)-float(count-1)*.5f)*width;rings[n].push_back({id++,{radius*std::cos(angle),radius*std::sin(angle),0}});}}
        const int runs=type?300:200;std::array<int,7> out{};
        for(int n=0;n<runs;++n){
            for(const auto& ring:rings)for(const auto& man:ring){Place(f,man.first,man.second,stance);g.men[size_t(man.first)]=SoldierGrenade{};}
            Detonate(g,f,r,open,c,tick,n+1,kind,{0,0,0});
            for(size_t q=0;q<7;++q)for(const auto& man:rings[q])out[q]+=!f.soldiers[size_t(man.first)].Active();
            r.events.clear();r.explosions.clear();}
        std::cout<<"GRENADES out of action, "<<(type?"concussion, steel can (the M24 alternative)":"fragmentation")<<", "<<(lying?"prone":"standing")<<" (E_v "<<k.woundEnergy<<" J):\n";
        for(size_t q=0;q<7;++q){
            Frame probe=Empty();Soldier& s=Place(probe,1,{distances[q],0,0},stance);
            const BlastReading b=BlastOn(k,open,{0,0,k.burstHeight},GrenadeCharge(k,kind),true,s);
            const float lung=b.probit<k.lungInjuryProbit?k.lungInjuryHealth*std::min(1.f,(k.lungInjuryProbit-b.probit)/(k.lungInjuryProbit-5)):0.f;
            const float across=std::sqrt(b.push.x*b.push.x+b.push.y*b.push.y);
            const float moved=Length(b.push)>=k.knockMinimum?KnockTravel(k,across,std::max(0.f,b.push.z)).distance:0.f;
            const double frag=FragmentLethality(steel,kind,distances[q],stance,k.woundEnergy),model=1-(1-frag)*b.survival*(lung>=100?0:1);
            const double samples=double(rings[q].size())*runs,battle=out[q]/samples,sigma=std::sqrt(std::max(.0025,battle*(1-battle))/samples);
            std::cout<<"GRENADES   "<<std::setw(2)<<distances[q]<<" m: blast "<<std::setprecision(3)<<b.kpa<<" kPa (stun "<<StunSeconds(k,s,b.kpa)<<" s, eardrum "<<b.eardrum
                     <<", survival "<<b.survival<<", pushed "<<moved<<" m); fragments "<<frag<<"; model "<<model<<"; battle "<<battle<<" +/- "<<sigma<<" ("<<samples<<" men)\n"<<std::setprecision(6);
            if(distances[q]>=5)assert(std::abs(battle-model)<4*sigma+.02);
        }
    }
    // The concussion grenade as issued (the fibre-bodied US Mk 3: no fragments, the blast alone), in the open and in a room
    // (the burst in the authored house's ground-floor room, the men on a clear line along it), standing and prone. The
    // model: Bowen with the envelope, and a survivor at probit 5 or below takes 100 of lung injury (out of action); the
    // battle: every effect of the burst, 1,000 detonations (no fragment, so the men on one line shade nobody).
    {const float near[8]={.3f,.5f,.75f,1,1.5f,2,3,4};const Map open=Open(),house=House();
     for(int inside=0;inside<2;++inside)for(int lying=0;lying<2;++lying){
        const Map& map=inside?house:open;const Vec3 at=inside?Vec3{2.5f,2.5f,0}:Vec3{0,0,0};const Stance stance=lying?Stance::Prone:Stance::Standing;
        Config c;c.seed=uint32_t(71+inside*2+lying);c.grenades=3;c.prone=true;Frame f=Empty();GrenadeRuntime g;Prime(g,c,map);Record r;int tick=0;
        const int runs=1000;std::array<int,8> out{};
        for(int n=0;n<runs;++n){
            for(int q=0;q<8;++q){Place(f,q,{at.x-near[q],at.y,0},stance);g.men[size_t(q)]=SoldierGrenade{};}
            Detonate(g,f,r,map,c,tick,n+1,GrenadeType::Concussion,at);
            for(int q=0;q<8;++q)out[size_t(q)]+=!f.soldiers[size_t(q)].Active();
            r.events.clear();r.explosions.clear();}
        assert(g.totals.fragmentsFlown==0);
        std::cout<<"GRENADES out of action, concussion as issued (fibre, blast only), "<<(inside?"in a room":"in the open")<<", "<<(lying?"prone":"standing")<<":\n";
        for(int q=0;q<8;++q){
            Frame probe=Empty();Soldier& s=Place(probe,1,{at.x-near[q],at.y,0},stance);
            const BlastReading b=BlastOn(k,map,at+Vec3{0,0,k.burstHeight},k.concCharge,true,s);
            const float across=std::sqrt(b.push.x*b.push.x+b.push.y*b.push.y);
            const float moved=Length(b.push)>=k.knockMinimum?KnockTravel(k,across,std::max(0.f,b.push.z)).distance:0.f;
            const double model=b.probit<=5?1.:1.-b.survival,battle=out[size_t(q)]/double(runs),sigma=std::sqrt(std::max(.0025,battle*(1-battle))/runs);
            std::cout<<"GRENADES   "<<std::setw(4)<<near[q]<<" m: "<<std::setprecision(3)<<b.kpa<<" kPa for "<<b.duration<<" ms: survival "<<b.survival<<" (Bowen alone "
                     <<NormalCdf(BlastProbit(k,k.concCharge,b.range,stance,inside?k.roomFactor:1.f,inside?k.roomDuration:1.f,b.wall,false)-5)<<"), stun "<<StunSeconds(k,s,b.kpa)
                     <<" s, eardrum "<<b.eardrum<<", pushed "<<moved<<" m; out of action: model "<<model<<", battle "<<battle<<" +/- "<<sigma<<"\n"<<std::setprecision(6);
            assert(b.room==(inside==1)&&!b.shielded&&std::abs(battle-model)<4*sigma+.01);
        }
     }}
    std::cout<<"GRENADES lethality: E_v calibrated, 50% at 5 m by the model and the battle, the tables by distance PASS\n";
}

// ---- (6) Effects -----------------------------------------------------------------------------------------------------
inline void EffectTests(){
    const Config c=BlastOnly(11);
    const Map open=Open();Frame f=Empty();GrenadeRuntime g;Prime(g,c,open);Record r;int tick=100;f.time=float(tick)*TickSeconds;
    Place(f,1,{1,0,0});Place(f,2,{-2,0,0});Place(f,3,{0,3,0});Place(f,4,{0,-12,0});
    Place(f,5,{0,1,0});f.soldiers[5].stats.value[size_t(Stat::Composure)]=120;   // a steadier man at 1 m too
    std::array<BlastReading,6> seen{};for(int i=1;i<=5;++i)seen[size_t(i)]=BlastOn(g.k,open,{0,0,g.k.burstHeight},g.k.fragCharge,true,f.soldiers[size_t(i)]);
    Detonate(g,f,r,open,c,tick,1,GrenadeType::Fragmentation,{0,0,0});
    const float when=r.explosions.at(0).time;
    auto burst=[&](int id){return GrenadeDraw(c.seed,1,uint32_t(id),SaltEardrum)<EardrumRupture(g.k,seen[size_t(id)].kpa);};
    auto deaf=[&](int id){return burst(id)?f.soldiers[size_t(id)].deafUntil>1e5f:seen[size_t(id)].kpa>=g.k.deafKpa?std::abs(f.soldiers[size_t(id)].deafUntil-(when+30))<1e-3f:f.soldiers[size_t(id)].deafUntil<0;};
    std::cout<<"GRENADES effects, fragmentation: 1 m "<<seen[1].kpa<<" kPa, 2 m "<<seen[2].kpa<<", 3 m "<<seen[3].kpa<<", 12 m "<<seen[4].kpa<<"; eardrums burst "
             <<burst(1)<<burst(2)<<burst(3)<<burst(4)<<burst(5)<<"\n";
    // 1 m: stunned (2 + 6 min(1, (dP - 50) / 150)) / composure s, deafened (for the battle if an eardrum burst), pinned by
    // fright, unhurt (Bowen's survival is 1 there), pushed a few centimetres (not down).
    const float p1=seen[1].kpa,full=StunSeconds(g.k,f.soldiers[1],p1);
    assert(seen[1].survival>.9999f&&f.soldiers[1].health==100&&f.soldiers[1].Active()&&deaf(1)&&f.soldiers[1].suppression==1);
    assert(std::abs(f.soldiers[1].stunUntil-(when+full))<1e-4f&&std::abs(f.soldiers[5].stunUntil-(when+full/1.2f))<1e-3f);
    assert(!g.men[1].knockDown&&g.men[1].knockReach>0&&g.men[1].knockReach<.1f);
    // 2 m (45 kPa): deafened, not stunned; fright min(1, 45/40) = 1. 3 m (24 kPa): fright only, 24/40. 12 m: nothing.
    assert(f.soldiers[2].stunUntil<0&&deaf(2)&&f.soldiers[2].health==100&&f.soldiers[2].suppression==1);
    assert(f.soldiers[3].stunUntil<0&&deaf(3)&&std::abs(f.soldiers[3].suppression-seen[3].kpa/40)<1e-4f);
    assert(f.soldiers[4].suppression==0&&f.soldiers[4].deafUntil<0&&seen[4].kpa<g.k.frightKpa);
    assert(std::abs(StunSeconds(g.k,f.soldiers[2],50)-2)<1e-5f&&std::abs(StunSeconds(g.k,f.soldiers[2],125)-5)<1e-5f&&StunSeconds(g.k,f.soldiers[2],49.9f)==0&&seen[2].kpa<50);
    // The stunned man is down and holds; the deafened react 1.5 times slower; the stun over, he is pinned (suppression 1).
    GrenadeTickStart(g,f,f.time);
    assert(f.soldiers[1].stunned&&f.soldiers[1].deafened&&f.soldiers[2].deafened&&!f.soldiers[2].stunned&&f.soldiers[2].reactionScale==1.5f);
    {Soldier plain=f.soldiers[2];plain.reactionScale=1;assert(std::abs(ReactionSeconds(f.soldiers[2],ReactionKind::Sight)-1.5f*ReactionSeconds(plain,ReactionKind::Sight))<1e-5f);}
    const GrenadeOrder held=GrenadeOverride(g,f,f.soldiers[1],open,c,f.time,nullptr,false);
    assert(held.hold&&held.order.action==Action::Hold&&held.order.reason==Reason::Stunned&&held.order.stance==Stance::Prone);
    {Config crouch=c;crouch.prone=false;assert(GrenadeOverride(g,f,f.soldiers[1],open,crouch,f.time,nullptr,false).order.stance==Stance::Crouched);}
    f.soldiers[1].suppression=.2f;
    const float end=f.soldiers[1].stunUntil;GrenadeTickStart(g,f,end+.01f);
    assert(!f.soldiers[1].stunned&&f.soldiers[1].suppression==1);
    const GrenadeOrder after=GrenadeOverride(g,f,f.soldiers[1],open,c,end+.01f,nullptr,false);assert(!after.hold&&after.released);
    // A death by the blast itself: a concussion grenade 1 m from him in a room (survival well under 1%): killed outright,
    // not the wounded share; one casualty event.
    {const Config rc=BlastOnly(12);const Map house=House();Frame lethal=Empty();Place(lethal,6,{1.5f,2.5f,0});GrenadeRuntime g2;Prime(g2,rc,house);Record r2;int tick2=0;
     const BlastReading b=BlastOn(g2.k,house,{2.5f,2.5f,g2.k.burstHeight},g2.k.concCharge,true,lethal.soldiers[6]);
     const bool dies=GrenadeDraw(rc.seed,1,6,SaltLung)>=b.survival;
     Detonate(g2,lethal,r2,house,rc,tick2,1,GrenadeType::Concussion,{2.5f,2.5f,0});
     std::cout<<"GRENADES room: survival "<<b.survival<<", "<<(dies?"killed by the blast":"survived the draw")<<"\n";
     assert(dies&&!lethal.soldiers[6].Active()&&lethal.soldiers[6].action==Action::Killed&&g2.totals.blastDeaths==1&&g2.totals.blastCasualties==1);
     int casualties=0;for(const auto& e:r2.events)casualties+=e.kind==EventKind::Casualty&&e.actor==6;assert(casualties==1);
     int explosions=0;for(const auto& e:r2.events)explosions+=e.kind==EventKind::Explosion;assert(explosions==1&&r2.explosions.size()==1&&r2.explosions[0].ground);}
    // Lung injury: 0.62 m from a concussion grenade in the open (survival about 0.6, probit between 5 and 7.33): a
    // survivor takes 100 (7.33 - Z) / 2.33; one who does not survive is killed outright.
    for(int survive=0;survive<2;++survive){
        const Config lc=BlastOnly(13);Frame near=Empty();Place(near,7,{.62f,0,0});GrenadeRuntime g3;Prime(g3,lc,open);Record r3;int tick3=0;
        const BlastReading b=BlastOn(g3.k,open,{0,0,g3.k.burstHeight},g3.k.concCharge,true,near.soldiers[7]);assert(b.probit>5&&b.probit<7.33f);
        int id=1;while((GrenadeDraw(lc.seed,uint32_t(id),7,SaltLung)<b.survival)!=(survive==1))++id;
        Detonate(g3,near,r3,open,lc,tick3,id,GrenadeType::Concussion,{0,0,0});
        const float lung=100*(7.33f-b.probit)/(7.33f-5);
        if(survive)assert(near.soldiers[7].Active()&&std::abs(near.soldiers[7].health-(100-lung))<1e-3f&&g3.totals.blastInjuries==1&&g3.totals.blastDeaths==0);
        else assert(!near.soldiers[7].Active()&&near.soldiers[7].action==Action::Killed&&g3.totals.blastDeaths==1);
        if(survive)std::cout<<"GRENADES lung injury at 0.62 m (probit "<<b.probit<<"): "<<lung<<" health\n";
    }
    {int wounded=0;for(int n=0;n<4000;++n)wounded+=GrenadeDraw(5,uint32_t(n),7,SaltCasualty)<.55f;assert(std::abs(wounded/4000.-.55)<.03);}
    std::cout<<"GRENADES effects: stun "<<full<<" s at 1 m (then pinned), deafness and eardrums, fright, a death by the blast, lung injury; a stunned man down and holding PASS\n";
}

// ---- (7) Throwing ----------------------------------------------------------------------------------------------------
inline void ThrowTests(){
    const GrenadeTuning k;Frame f=Empty();Soldier& s=Place(f,1,{0,0,0});
    assert(ThrowRange(k,s,Stance::Standing)==30&&ThrowRange(k,s,Stance::Crouched)==24&&ThrowRange(k,s,Stance::Prone)==12);
    s.stats.value[size_t(Stat::Strength)]=120;assert(std::abs(ThrowRange(k,s,Stance::Standing)-36)<1e-4f);s.stats.value[size_t(Stat::Strength)]=100;
    // Open ground: the 40-degree lob to 20 m; nothing beyond the range.
    const Map open=Open();const GrenadeWorld ow=MakeGrenadeWorld(open);const Vec3 release{0,0,k.releaseStanding};
    {const ThrowArc a=FindThrowArc(k,ow,release,{20,0,0},30);assert(a.clear&&a.angle==40);
     const GrenadeLanding l=SimulateLanding(ow,release,a.velocity,0);assert(Distance(l.position,{20,0,0})<.05f&&l.contact==GrenadeContact::Floor);
     assert(!FindThrowArc(k,ow,release,{31,0,0},30).clear&&!FindThrowArc(k,ow,release,{25,0,0},24).clear);}
    // A wall 8 m out: 3.5 m the lob clears; 7 m it takes the 55-degree arc; 12 m the 70; 20 m none.
    const float heights[4]={3.5f,7,12,20},angles[4]={40,55,70,0};
    for(int n=0;n<4;++n){const Map walled=WithObstacles({{{8,0,0},{.3f,6,0},false,false,heights[n]}});const GrenadeWorld w=MakeGrenadeWorld(walled);
        const ThrowArc a=FindThrowArc(k,w,release,{20,0,0},30);
        std::cout<<"GRENADES wall "<<heights[n]<<" m at 8 m, target at 20 m: "<<(a.clear?"arc ":"no arc")<<(a.clear?std::to_string(int(a.angle)):"")<<"\n";
        assert(a.clear==(angles[n]>0)&&(!a.clear||a.angle==angles[n]));
        if(a.clear){const GrenadeLanding l=SimulateLanding(w,release,a.velocity,0);assert(Distance(l.position,{20,0,0})<.05f);}}
    // A throw into a wall drops at its foot on the thrower's side.
    {const Map walled=WithObstacles({{{8,0,0},{.3f,6,0},false,false,20}});const GrenadeWorld w=MakeGrenadeWorld(walled);Vec3 v;float fl=0;assert(ArcVelocity(release,{20,0,0},40,v,fl));
     const GrenadeLanding l=SimulateLanding(w,release,v,1.5f);assert(l.contact==GrenadeContact::Wall&&l.position.x<7.7f&&l.position.x>7.f&&std::abs(l.position.z)<1e-4f);}
    // A roofed room (a building footprint whose walls have no opening): no arc drops into it; a lob that would rolls off the
    // roof at the nearest eave (here the thrower's side). The same walls without the building record (a yard) take the lob.
    {std::vector<Obstacle> walls={{{15,-4,0},{4.2f,.2f,0},true,false,3},{{15,4,0},{4.2f,.2f,0},true,false,3},{{11,0,0},{.2f,4.2f,0},true,false,3},{{19,0,0},{.2f,4.2f,0},true,false,3}};
     const Map yard=WithObstacles(walls);const GrenadeWorld yw=MakeGrenadeWorld(yard);assert(FindThrowArc(k,yw,release,{15,0,0},30).clear);
     Map roofed=WithObstacles(walls);Building b;b.center={15,0,0};b.half={4,4,0};b.authoredStairs=false;b.floors=1;b.id=1;roofed.buildings.push_back(b);
     roofed.importedBuildings=true;roofed.spatial.reset();roofed.segments.reset();PrepareGeometry(roofed);
     const GrenadeWorld rw=MakeGrenadeWorld(roofed);assert(rw.roofs.size()==1&&std::abs(rw.roofs[0]-3)<1e-4f);
     assert(!FindThrowArc(k,rw,release,{15,0,0},30).clear);
     Vec3 v;float fl=0;assert(ArcVelocity(release,{13,0,0},55,v,fl));const GrenadeLanding l=SimulateLanding(rw,release,v,0);
     std::cout<<"GRENADES roof: a lob onto the roofed room lands at "<<l.position.x<<", "<<l.position.y<<", "<<l.position.z<<" (contact "<<int(l.contact)<<", the wall at x 10.8)\n";
     assert(l.contact==GrenadeContact::Roof&&l.position.x<10.8f&&l.position.x>10.f&&std::abs(l.position.z)<1e-4f);
     assert(ArcVelocity(release,{18,0,0},55,v,fl));const GrenadeLanding far=SimulateLanding(rw,release,v,0);   // down nearer the far wall (x 16)
     assert(far.contact==GrenadeContact::Roof&&far.position.x>19.2f&&far.position.x<20.f);}
    // The roll: on along the throw; stopped short of a wall; into a trench it drops.
    {Vec3 v;float fl=0;assert(ArcVelocity(release,{20,0,0},40,v,fl));
     assert(Distance(SimulateLanding(ow,release,v,2).position,{22,0,0})<.06f);
     const Map walled=WithObstacles({{{21,0,0},{.2f,3,0},false,false,1}});const GrenadeWorld w=MakeGrenadeWorld(walled);
     const Vec3 stop=SimulateLanding(w,release,v,2).position;assert(stop.x<20.8f&&stop.x>=20.f);
     const Map trench=WithObstacles({{{-10,0,-1.4f},{30.5f,20,0},false,true,1.4f,false},{{41,0,-1.4f},{19,20,0},false,true,1.4f,false}},60,-1.4f); // a trench from x 20.5 to 22
     const GrenadeWorld tw=MakeGrenadeWorld(trench);const Vec3 in=SimulateLanding(tw,release,v,2).position;
     std::cout<<"GRENADES roll: into the trench at "<<in.x<<", "<<in.z<<"\n";
     assert(std::abs(in.z+1.4f)<1e-3f&&in.x>20.5f&&in.x<22.f);}
    // Scatter: 1.4 m at 15 m, 2.1 m at 20 m (the plan), wider under fire and for clumsy hands.
    assert(std::abs(LandingScatter(k,s,15)-1.7f)<1e-4f&&std::abs(LandingScatter(k,s,20)-2.1f)<1e-4f);
    {Soldier shaken=s;shaken.suppression=.5f;assert(std::abs(LandingScatter(k,shaken,20)-3.15f)<1e-4f);}
    // Fuse 4.5 +/- 0.5 s; cooking 0..1.5 s by composure (0 at 80, 0.5 at 100, 1.5 at 140).
    {double sum=0;float low=10,high=0;for(int id=1;id<=4000;++id){const float fuse=GrenadeFuse(k,77,id);sum+=fuse;low=std::min(low,fuse);high=std::max(high,fuse);}
     assert(low>=4.f&&high<=5.f&&std::abs(sum/4000-4.5)<.02&&high-low>.95f);}
    const float composures[3]={80,100,140},cooks[3]={0,.5f,1.5f};
    for(int n=0;n<3;++n){Soldier man=s;man.stats.value[size_t(Stat::Composure)]=composures[n];assert(std::abs(CookSeconds(k,man)-cooks[n])<1e-4f);}
    std::cout<<"GRENADES throwing: range by stance and strength, the lob and the alternative arcs, walls and roofs, roll and trench, scatter, fuse and cooking PASS\n";
}
// A thrower behind a low wall and an enemy 15 m off behind another: the throw decision, its release and its grenade.
struct Duel { Map map; Frame f; GrenadeRuntime g; Config c; Record r; int tick=200; };
inline void SetDuel(Duel& d,float targetX=15,bool knows=true){
    d.c=Config{};d.c.seed=21;d.c.grenades=3;d.c.prone=true;
    d.map=WithObstacles({{{1,0,0},{.2f,3,0},false,true,1.15f},{{targetX-1,0,0},{.2f,3,0},false,true,1.15f}});
    d.f=Empty();d.f.time=float(d.tick)*TickSeconds;Prime(d.g,d.c,d.map);
    Soldier& s=Place(d.f,1,{0,0,0},Stance::Crouched);s.grenades={1,1};
    Place(d.f,40,{targetX,0,0},Stance::Crouched);
    if(knows)s.contacts[40]=Seen({targetX,0,0},d.f.time-1,false,.8f);
}
inline bool Decide(Duel& d,Order& order,bool defender=false){
    Soldier& s=d.f.soldiers[1];order=Order{s.position,Action::Hold,Reason::Duck,Stance::Crouched};
    d.g.men[1].nextCheck=0;
    return GrenadeThrowChoice(d.g,d.f,s,WithReports(s,d.f.time),d.map,d.c,d.f.time,order,nullptr,defender);
}
inline void ThrowDecisionTests(){
    // He cannot shoot the man behind the far wall: he throws; fragmentation, from cover with no friend near the target.
    Duel d;SetDuel(d);Order order;
    assert(Decide(d,order)&&order.reason==Reason::GrenadeThrow&&order.action==Action::Hold);
    const auto& m=d.g.men[1];assert(m.mode==GrenadeMode::Throw&&m.type==GrenadeType::Fragmentation&&m.target==40);
    assert(d.g.live.size()==1&&d.g.live[0].stage==GrenadeStage::Held&&d.g.live[0].owner==1&&d.f.soldiers[1].grenades[0]==0&&d.f.soldiers[1].grenades[1]==1);
    // Cooking: the lever flies CookSeconds before the release; the fuse runs 4.5 +/- 0.5 s from it.
    const LiveGrenade held=d.g.live[0];
    assert(std::abs(held.spoonAt-(m.releaseAt-CookSeconds(d.g.k,d.f.soldiers[1])))<1e-4f&&std::abs(held.fuseAt-held.spoonAt-GrenadeFuse(d.g.k,d.c.seed,held.id))<1e-4f);
    assert(std::abs(m.releaseAt-d.f.time-d.g.k.throwSeconds)<1e-4f);
    // Exposed and silent while throwing: the override holds him for the throw.
    {const GrenadeOrder o=GrenadeOverride(d.g,d.f,d.f.soldiers[1],d.map,d.c,d.f.time,nullptr,false);assert(o.hold&&o.order.reason==Reason::GrenadeThrow&&GrenadeHeld(d.g,d.f.soldiers[1]));}
    // The release, the flight and the landing near the aim (within 3 sigma), then the burst.
    while(d.g.live.front().stage==GrenadeStage::Held)Tick(d.g,d.f,d.r,d.map,d.c,d.tick);
    assert(d.g.men[1].mode==GrenadeMode::None&&d.g.live.front().stage==GrenadeStage::Flying);
    const LiveGrenade flying=d.g.live.front();
    std::cout<<"GRENADES throw: released at "<<flying.releasedAt<<" s, lands at "<<flying.rest.x<<", "<<flying.rest.y<<" after "<<flying.landedAt-flying.releasedAt<<" s, bursts at "<<flying.fuseAt<<" s\n";
    assert(Distance(flying.rest,{15,0,0})<3*LandingScatter(d.g.k,d.f.soldiers[1],15)+2.f&&flying.fuseAt>flying.landedAt);
    {const GrenadeOrder o=GrenadeOverride(d.g,d.f,d.f.soldiers[1],d.map,d.c,d.f.time,nullptr,false);assert(!o.hold&&o.released);}
    while(!d.g.live.empty()||!d.g.fragments.empty())Tick(d.g,d.f,d.r,d.map,d.c,d.tick);
    assert(d.r.explosions.size()==1&&std::abs(d.r.explosions[0].time-flying.fuseAt)<TickSeconds+1e-4f&&d.g.totals.throws==1);
    // Not again within the cooldown.
    {Order again;assert(!Decide(d,again));}
    // Knowledge (7): no track of him, a stale one, or one from 10 s ago: no throw, whoever stands there.
    {Duel x;SetDuel(x,15,false);Order o;assert(!Decide(x,o));}
    {Duel x;SetDuel(x);x.f.soldiers[1].contacts[40].observedAt=x.f.time-x.c.grenade.targetAge-.1f;Order o;assert(!Decide(x,o));}
    // A report is his knowledge too; he throws at where he believes the man is, not where he is.
    {Duel x;SetDuel(x,15,false);x.f.soldiers[1].reports[40]=Seen({15,2.5f,0},x.f.time-2,false,.8f);Order o;assert(Decide(x,o));
     assert(Distance(x.g.men[1].aim,{15,2.5f,0})<1e-4f);}
    // A friend he saw 6 m from the target: no fragmentation (15 m) and no concussion inside 4 m either way: here concussion.
    {Duel x;SetDuel(x);x.f.soldiers[1].allies[2]=Seen({15,-6,0},x.f.time-.5f);Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Concussion);}
    {Duel x;SetDuel(x);x.f.soldiers[1].allies[2]=Seen({15,-3,0},x.f.time-.5f);Order o;assert(!Decide(x,o));}   // inside both radii
    {Duel x;SetDuel(x);x.f.soldiers[1].allies[2]=Seen({15,-3,0},x.f.time-5);Order o;assert(Decide(x,o));}    // not seen there lately
    // Too close for himself (he is a friend too): a man 6 m off gets concussion, 3 m off nothing.
    {Duel x;SetDuel(x,6);Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Concussion);}
    {Duel x;SetDuel(x,3.5f);Order o;assert(!Decide(x,o));}
    // Jordan's fragmentation safety (25 Sep): behind his own wall, shielded from a burst at the aim and within two sigma of
    // his scatter, 8 m will do (9 m: fragmentation); in the open (the enemy's wall alone is not his cover: a short throw
    // lands in front of it) he wants 20 m (15 m: concussion; carrying only fragmentation, no throw; 21 m: fragmentation);
    // another friend within 15 m of the aim rules it out wherever he is (14 m: concussion; 16 m: fine).
    {Duel x;SetDuel(x,9);Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Fragmentation);}
    auto open=[](Duel& x,float targetX){SetDuel(x,targetX);x.map=WithObstacles({{{targetX-1,0,0},{.2f,3,0},false,true,1.15f}});Prime(x.g,x.c,x.map);};
    {Duel x;open(x,15);Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Concussion);}
    {Duel x;open(x,15);x.f.soldiers[1].grenades={1,0};Order o;assert(!Decide(x,o));}
    {Duel x;open(x,21);x.f.soldiers[1].grenades={1,0};Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Fragmentation);}
    {Duel x;SetDuel(x);x.f.soldiers[1].allies[2]=Seen({15,-14,0},x.f.time-.5f);Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Concussion);}
    {Duel x;SetDuel(x);x.f.soldiers[1].allies[2]=Seen({15,-16,0},x.f.time-.5f);Order o;assert(Decide(x,o)&&x.g.men[1].type==GrenadeType::Fragmentation);}
    // A man he can shoot (no wall before him) is no target unless he holds his post and the man is close, or they bunch.
    {Duel x;SetDuel(x,12);x.map=WithObstacles({{{1,0,0},{.2f,3,0},false,true,1.15f}});Prime(x.g,x.c,x.map);Order o;x.f.soldiers[1].assignment.task=Task::Advance;
     assert(!Decide(x,o));x.f.soldiers[1].assignment.task=Task::Hold;assert(Decide(x,o)&&std::string(x.g.men[1].why)=="closing");}
    {Duel x;SetDuel(x,20);x.map=WithObstacles({{{1,0,0},{.2f,3,0},false,true,1.15f}});Prime(x.g,x.c,x.map);x.f.soldiers[1].assignment.task=Task::Advance;
     for(int e:{41,42})x.f.soldiers[1].contacts[size_t(e)]=Seen({20,float(e-40)*1.5f,0},x.f.time-1);
     Order o;assert(Decide(x,o)&&std::string(x.g.men[1].why)=="bunch");}
    // Pinned (suppression above his duck threshold) he does not rise to throw; moving he does not throw.
    {Duel x;SetDuel(x);x.f.soldiers[1].suppression=.6f;Order o;assert(!Decide(x,o));}
    {Duel x;SetDuel(x);Soldier& s=x.f.soldiers[1];Order o{Vec3{0,10,0},Action::Advance,Reason::OrderedAdvance,Stance::Standing};x.g.men[1].nextCheck=0;
     assert(!GrenadeThrowChoice(x.g,x.f,s,WithReports(s,x.f.time),x.map,x.c,x.f.time,o,nullptr,false));}
    // Legacy only: his team without grenades, or a typed controller, never throws.
    {Duel x;SetDuel(x);x.c.grenades=2;Order o;assert(!Decide(x,o));}
    std::cout<<"GRENADES throw decisions: cannot shoot, bunch, holding and close; types by cover and friends (fragmentation: 15 m clear of friends, himself 20 m in the open or 8 m shielded); his own knowledge only; cooking and release PASS\n";
}

// ---- (8) Reactions ---------------------------------------------------------------------------------------------------
struct Scene { Map map; Frame f; GrenadeRuntime g; Config c; Record r; int tick=300; };
inline void SetScene(Scene& x,Vec3 man,float fuseIn=3.2f,std::vector<Obstacle> obstacles={}){
    x.c=Config{};x.c.seed=31;x.c.grenades=3;x.c.prone=true;x.map=obstacles.empty()?Open(60):WithObstacles(obstacles);
    x.f=Empty();x.f.time=float(x.tick)*TickSeconds;Prime(x.g,x.c,x.map);
    Place(x.f,2,man);Place(x.f,40,{15,0,0});
    x.g.live.push_back(Lying(50,GrenadeType::Fragmentation,{0,0,0},x.f.time+fuseIn,40,1));
}
inline GrenadeOrder React(Scene& x,float seenAgo=0,bool defender=false){
    auto& m=x.g.men[2];m.mode=GrenadeMode::React;m.grenade=50;m.noticed=x.f.time-seenAgo;m.reactAt=x.f.time;
    return GrenadeOverride(x.g,x.f,x.f.soldiers[2],x.map,x.c,x.f.time,nullptr,defender);
}
inline void ReactionTests(){
    const GrenadeTuning k;Frame f=Empty();Soldier& s=Place(f,1,{0,0,0});
    // The skill check: p = clamp(0.5 x mean StatScale(dexterity, initiative, composure) - 0.1, 0.05, 0.8).
    assert(std::abs(ThrowBackChance(k,s)-.4f)<1e-5f);
    for(Stat stat:{Stat::Dexterity,Stat::Initiative,Stat::Composure})s.stats.value[size_t(stat)]=140;
    assert(std::abs(ThrowBackChance(k,s)-.6f)<1e-5f);
    for(Stat stat:{Stat::Dexterity,Stat::Initiative,Stat::Composure})s.stats.value[size_t(stat)]=80;
    assert(std::abs(ThrowBackChance(k,s)-.3f)<1e-5f);
    {GrenadeTuning low=k;low.skillOffset=1;assert(ThrowBackChance(low,s)==low.skillMin);GrenadeTuning high=k;high.skillSlope=5;assert(ThrowBackChance(high,s)==high.skillMax);}
    {int taken=0;for(int id=1;id<=4000;++id)taken+=ThrowBackDraw(31,id,2,0)<.4f;assert(std::abs(taken/4000.-.4)<.03);}
    // Eligible: 1.5 m off, steady, seen at rest just now (he assumes 2.5 s left, needs 1.5/3 + 1): he goes for it.
    {Scene x;SetScene(x,{1.5f,0,0});const GrenadeOrder o=React(x);
     assert(o.hold&&o.direct&&o.order.reason==Reason::GrenadeThrowBack&&x.g.men[2].mode==GrenadeMode::ThrowBack&&x.g.totals.throwBackAttempts==1);
     assert(x.g.men[2].success==(ThrowBackDraw(31,50,2,0)<ThrowBackChance(k,x.f.soldiers[2])));}
    // Not steady (above his duck threshold), beyond reach, or seen too long ago: he does not.
    {Scene x;SetScene(x,{1.5f,0,0});x.f.soldiers[2].suppression=.6f;React(x);assert(x.g.men[2].mode!=GrenadeMode::ThrowBack);}
    {Scene x;SetScene(x,{2.8f,0,0});React(x);assert(x.g.men[2].mode!=GrenadeMode::ThrowBack);}
    {Scene x;SetScene(x,{1.5f,0,0});React(x,1.1f);assert(x.g.men[2].mode!=GrenadeMode::ThrowBack);}
    // The fuse he assumes, not the true one: with 0.4 s truly left he still goes for it (a cooked grenade kills him).
    {Scene x;SetScene(x,{1.5f,0,0},.4f);React(x);assert(x.g.men[2].mode==GrenadeMode::ThrowBack);}
    // Taken up: success throws it back at the man who threw it, where he knows him; failure fumbles (the time lost) then down.
    for(int want=0;want<2;++want){
        int id=50;while((ThrowBackDraw(31,id,2,0)<.4f)!=(want==1))++id;
        Scene x;SetScene(x,{1.5f,0,0},3.5f);x.g.live.front().id=id;x.f.soldiers[2].contacts[40]=Seen({15,0,0},x.f.time-1);
        auto& m=x.g.men[2];m.mode=GrenadeMode::React;m.grenade=id;m.noticed=x.f.time;m.reactAt=x.f.time;
        GrenadeOverride(x.g,x.f,x.f.soldiers[2],x.map,x.c,x.f.time,nullptr,false);assert(m.mode==GrenadeMode::ThrowBack&&m.success==(want==1));
        x.f.soldiers[2].position={.3f,0,0};Tick(x.g,x.f,x.r,x.map,x.c,x.tick);
        if(want){assert(m.holding&&x.g.live.front().stage==GrenadeStage::Held&&x.g.live.front().holder==2);
            for(int n=0;n<12&&x.g.live.front().stage==GrenadeStage::Held;++n){GrenadeOverride(x.g,x.f,x.f.soldiers[2],x.map,x.c,x.f.time,nullptr,false);Tick(x.g,x.f,x.r,x.map,x.c,x.tick);}
            const LiveGrenade back=x.g.live.front();
            std::cout<<"GRENADES thrown back: lands at "<<back.rest.x<<", "<<back.rest.y<<" (its thrower at 15, 0), "<<back.fuseAt-back.landedAt<<" s before it bursts\n";
            assert(back.stage==GrenadeStage::Flying&&back.owner==2&&back.team==0&&Distance(back.rest,{15,0,0})<8&&x.g.totals.throwBacks==1);}
        else{assert(m.mode==GrenadeMode::Fumble&&x.g.totals.fumbles==1&&x.g.live.front().stage==GrenadeStage::Resting);
            x.f.time+=k.throwBackMargin+.01f;const GrenadeOrder o=GrenadeOverride(x.g,x.f,x.f.soldiers[2],x.map,x.c,x.f.time,nullptr,false);
            assert(o.order.reason==Reason::GrenadeDive&&o.order.stance==Stance::Prone&&m.mode==GrenadeMode::Dive);}
    }
    // Not eligible, with open ground to run to beyond the 12 m reaction radius in the time he assumes: he runs; then down there.
    {Scene x;SetScene(x,{3,0,0});const GrenadeOrder o=React(x);
     assert(o.hold&&o.direct&&o.order.reason==Reason::GrenadeEscape&&o.order.action==Action::Cover&&x.g.men[2].mode==GrenadeMode::Run);
     assert(Distance(o.order.goal,{0,0,0})>x.g.k.fragReact&&x.g.totals.runs==1);
     x.f.soldiers[2].position=o.order.goal;const GrenadeOrder there=GrenadeOverride(x.g,x.f,x.f.soldiers[2],x.map,x.c,x.f.time,nullptr,false);
     assert(there.order.reason==Reason::GrenadeDive&&there.order.stance==Stance::Prone);
     // The burst over, he is released.
     RunOut(x.g,x.f,x.r,x.map,x.c,x.tick);const GrenadeOrder after=GrenadeOverride(x.g,x.f,x.f.soldiers[2],x.map,x.c,x.f.time,nullptr,false);assert(!after.hold&&after.released);}
    // Cover beyond the radius he can reach is preferred to open ground: a low wall 13.6 m out on his side, him at 6 m.
    {Scene x;SetScene(x,{6,0,0},3.2f,{{{13.6f,0,0},{.2f,1.5f,0},false,true,1.15f}});
     const GrenadeOrder o=React(x);assert(x.g.men[2].mode==GrenadeMode::Run&&o.order.goal.x>13.8f);
     std::cout<<"GRENADES run: to "<<o.order.goal.x<<", "<<o.order.goal.y<<" (behind the wall)\n";}
    // A static defender never leaves his post, and with too little time nobody runs: they dive.
    {Scene x;SetScene(x,{3,0,0});const GrenadeOrder o=React(x,0,true);assert(o.order.reason==Reason::GrenadeDive&&x.g.men[2].mode==GrenadeMode::Dive);}
    {Scene x;SetScene(x,{3,0,0});const GrenadeOrder o=React(x,2.3f);assert(o.order.reason==Reason::GrenadeDive);}
    // Boxed in (walls all round): no path out: he dives.
    {Scene x;SetScene(x,{3,0,0},3.2f,{{{3,1.2f,0},{2,.2f,0},false,true,3},{{3,-1.2f,0},{2,.2f,0},false,true,3},{{1.4f,0,0},{.2f,1.4f,0},false,true,3},{{4.6f,0,0},{.2f,1.4f,0},false,true,3}});
     assert(React(x).order.reason==Reason::GrenadeDive);}
    // He reacts only to a grenade he sees: at rest within its danger radius and in his line of sight; after his reaction
    // time (deafened, half as long again).
    {Scene x;SetScene(x,{3,0,0},3.2f,{{{1.5f,0,0},{.2f,3,0},false,true,2.2f}});Tick(x.g,x.f,x.r,x.map,x.c,x.tick);
     assert(x.g.live.front().noticedAt[2]<-50&&x.g.men[2].mode==GrenadeMode::None);}
    {Scene x;SetScene(x,{3,0,0});Tick(x.g,x.f,x.r,x.map,x.c,x.tick);
     assert(x.g.live.front().noticedAt[2]==x.f.time&&x.g.men[2].mode==GrenadeMode::React&&
            std::abs(x.g.men[2].reactAt-x.f.time-ReactionSeconds(x.f.soldiers[2],ReactionKind::Sight))<1e-4f);}
    // Within the fragmentation grenade's 12 m (Jordan, 25 Sep) he reacts, beyond it not; the concussion grenade's is 4 m.
    {Scene x;SetScene(x,{11,0,0});Tick(x.g,x.f,x.r,x.map,x.c,x.tick);assert(x.g.men[2].mode==GrenadeMode::React);}
    {Scene x;SetScene(x,{13,0,0});Tick(x.g,x.f,x.r,x.map,x.c,x.tick);assert(x.g.men[2].mode==GrenadeMode::None);}
    {Scene x;SetScene(x,{3.5f,0,0});x.g.live.front().type=GrenadeType::Concussion;Tick(x.g,x.f,x.r,x.map,x.c,x.tick);assert(x.g.men[2].mode==GrenadeMode::React);}
    {Scene x;SetScene(x,{5,0,0});x.g.live.front().type=GrenadeType::Concussion;Tick(x.g,x.f,x.r,x.map,x.c,x.tick);assert(x.g.men[2].mode==GrenadeMode::None);}
    std::cout<<"GRENADES reactions: the skill check, throw-back eligibility on the fuse he can assume, taken up or fumbled, run clear or dive, seen only in sight PASS\n";
}

// ---- (9) Issue -------------------------------------------------------------------------------------------------------
inline void IssueTests(){
    Config c;c.squadMachineGuns=true;c.grenades=3;c.rosterSeed=77;
    auto kits=[&](uint32_t seed,const Config& base){Config x=base;x.seed=seed;Frame f=InitialFrame(x);GrenadeRuntime g;Record r;IssueGrenades(g,x,MakeBattleMap(x),f,r);
        std::array<std::array<uint8_t,2>,UnitCount> out{};for(const auto& s:f.soldiers)out[size_t(s.id)]=s.grenades;return std::make_pair(out,r.grenadeTotals.issued);};
    const auto a=kits(107,c),b=kits(108,c);
    const Frame roster=InitialFrame(c);int issued=0;
    for(const auto& s:roster.soldiers){const auto& kit=a.first[size_t(s.id)];const int total=kit[0]+kit[1];issued+=total;
        if(s.machineGun)assert(total==0);else assert(total==1||total==2);}
    assert(a.second==issued&&a.first==b.first);   // the same men carry the same grenades in every battle of the roster
    {Config x=c;x.rosterSeed=0;assert(kits(107,x).first!=kits(108,x).first);}   // the battle seed as the roster
    {Config x=c;x.grenades=1;const auto one=kits(107,x);for(int id=TeamSize;id<UnitCount;++id)assert(one.first[size_t(id)][0]+one.first[size_t(id)][1]==0);
     for(int id=0;id<TeamSize;++id)assert(one.first[size_t(id)]==a.first[size_t(id)]);}
    {Config x=c;x.drills=x.foundations=true;assert(!Grenades(x,0)&&!Grenades(x,1)&&!GrenadesAny(x));}
    // 1 or 2 at 50/50, each fragmentation or concussion at 50/50.
    int men=0,twos=0,grenades=0,frags=0;
    for(uint32_t rosterDraw=1;rosterDraw<=400;++rosterDraw){Config x=c;x.rosterSeed=rosterDraw;
        for(int slot=0;slot<UnitCount;++slot){const auto kit=GrenadeKit(x,slot,false);++men;twos+=kit[0]+kit[1]==2;grenades+=kit[0]+kit[1];frags+=kit[0];}}
    std::cout<<"GRENADES issue: "<<issued<<" grenades in the roster of 107; over "<<men<<" men "<<double(twos)/men<<" carry two, "<<double(frags)/grenades<<" are fragmentation\n";
    assert(std::abs(double(twos)/men-.5)<.02&&std::abs(double(frags)/grenades-.5)<.02);
    std::cout<<"GRENADES issue: gunners none, 1-2 each 50/50 by type, stable per soldier, only the switched teams, Legacy only PASS\n";
}

// ---- (10) Pinned, as the side can know it ----------------------------------------------------------------------------
inline void PinnedTests(){
    const GrenadeTuning k;Frame f=Empty();const float t=50;
    Soldier& leader=Place(f,1,{0,0,0});
    Soldier& enemy=Place(f,40,{30,0,0});
    leader.contacts[40]=Seen({30,0,0},t-2);leader.contacts[40].lastFireAt=t-5;
    FireDelivery report;report.shooter=3;report.enemy=40;report.rounds=4;report.target={30,.5f,1.4f};report.observedAt=t-1;leader.deliveries[0]=report;
    // His men saw their rounds strike the place a second ago and he has not been seen firing for 5 s: pinned, whatever the
    // enemy's own state (his true suppression is not read: here it is 0).
    enemy.suppression=0;float fired=-1;
    assert(PinnedAsKnown(k,leader,WithTracks(leader,t),40,t,&fired)&&fired==t-1);
    // Seen firing 1 s ago: not pinned.
    {Soldier x=leader;x.contacts[40].lastFireAt=t-1;assert(!PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    // No fire of ours on his place (truly pinned or not): not pinned.
    {Soldier x=leader;x.deliveries={};enemy.suppression=1;assert(!PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    // Our rounds 10 m off his place and aimed at another: not his pin. Old fire (5 s ago): not now.
    {Soldier x=leader;x.deliveries[0].enemy=41;x.deliveries[0].target={40,0,1};assert(!PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    {Soldier x=leader;x.deliveries[0].observedAt=t-5;assert(!PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    // A report is knowledge; a track 25 s old is not; one he saw fall is not.
    {Soldier x=leader;x.contacts[40]=Contact{};x.reports[40]=Seen({30,0,0},t-3,false);x.reports[40].lastFireAt=t-10;assert(PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    {Soldier x=leader;x.contacts[40].observedAt=t-25;assert(!PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    {Soldier x=leader;x.contacts[40].seenDown=true;assert(!PinnedAsKnown(k,x,WithTracks(x,t),40,t));}
    std::cout<<"GRENADES pinned: from his delivery reports and the enemy's silence, never the enemy's own suppression PASS\n";
}

// ---- (11) The switch and a battle ------------------------------------------------------------------------------------
// Squad 0 of each side 26 m apart across a field of low walls (1 m, crouch cover); everyone else penned far off.
inline std::string Field(){
    std::ostringstream m;m<<"ARMYMAP 2 city 32\nBOUNDS 150 60 0\n";int id=1;
    auto O=[&](float x,float y,float hx,float hy,float h,int low){m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 "<<hx<<' '<<hy<<' '<<h<<" 0 "<<low<<" 1\n";};
    for(float cx:{-130.f,130.f}){O(cx-8.3f,0,.3f,8.6f,3.2f,0);O(cx+8.3f,0,.3f,8.6f,3.2f,0);O(cx,-8.3f,8.f,.3f,3.2f,0);O(cx,8.3f,8.f,.3f,3.2f,0);}
    for(int col=0;col<5;++col)for(int row=0;row<4;++row){const float x=-20.f+10.f*float(col),y=-27.f+18.f*float(row)+(col%2?6.f:0.f);
        const bool across=(col+row)%2==0;O(x,y,across?1.5f:.3f,across?.3f:1.5f,1.f,1);}
    for(int i=0;i<UnitCount;++i){
        const int team=i/TeamSize,squad=(i/SquadSize)%SquadsPerTeam,slot=i%SquadSize;Vec3 p;
        if(squad==0)p={(team?14.f:-14.f)+(team?1.f:-1.f)*float(slot/4)*2.5f,-9.f+6.f*float(slot%4),0};
        else{const int k=i-team*TeamSize-SquadSize;p={(team?124.f:-136.f)+2.5f*float(k%6),-6.f+2.5f*float(k/6),0};}
        m<<"U "<<i<<' '<<p.x<<' '<<p.y<<" 0 "<<p.x<<' '<<p.y<<" 0\n";}
    m<<"END\n";return m.str();
}
struct FieldRun { uint64_t digest=0; GrenadeTotals totals; size_t explosions=0,rows=0,frames=0; int issued=0; };
inline FieldRun RunField(const Config& c,bool traced,bool evaluate=false){
    DiagnosticOptions options;options.enabled=traced;options.keepFrames=false;
    LeanRecorder recorder;recorder.evaluate=evaluate;FieldRun out;
    options.frameSink=[&](const Record& record,const Frame& frame){recorder.Record_(record,frame);out.frames+=!frame.grenades.empty();};
    const auto r=Simulate(c,options);out.digest=recorder.Digest(r);out.totals=r.grenadeTotals;out.explosions=r.explosions.size();out.issued=r.grenadeTotals.issued;
    if(traced)for(const auto& e:r.diagnostics->entries)out.rows+=e.kind.rfind("grenade",0)==0;
    return out;
}
inline void SwitchTests(){
    Config off,on;on.grenades=3;
    assert(SameConfig(off,off)&&!SameConfig(off,on));
    Config azure=on;azure.grenades=1;assert(!SameConfig(on,azure));
    Config table=on;table.grenade.fragMott=.0003f;assert(!SameConfig(on,table));
    Config inert=off;inert.grenade.fragMott=.0003f;inert.grenade.throwSeconds=1;assert(SameConfig(off,inert));   // inert while off
    assert(SameGrenadeTuning(GrenadeTuning{},GrenadeTuning{}));
    // The table by name is the whole table: every entry of GrenadeTuning (all floats) once, under its own name.
    {GrenadeTuning t;assert(t.concBody==0&&SetGrenadeParam(t,"concBody",1)&&t.concBody==1&&SetGrenadeParam(t,"woundEnergy",120)&&t.woundEnergy==120&&!SetGrenadeParam(t,"noSuchThing",1));
     const auto& params=GrenadeParams();assert(params.size()*sizeof(float)==sizeof(GrenadeTuning));
     for(size_t a=0;a<params.size();++a){assert(std::string(params[a].name).size()>2);
        for(size_t b=a+1;b<params.size();++b)assert(params[a].member!=params[b].member&&std::string(params[a].name)!=params[b].name);}}
    Config typed=on;typed.drills=typed.foundations=true;assert(!GrenadesAny(typed));
    std::string error;const auto map=ImportBattlefield(Field(),error);if(!map)std::cout<<"GRENADES field map: "<<error<<"\n";assert(map&&error.empty());
    auto field=[&](uint32_t seed,int teams){Config c;c.battlefield=map;c.seed=seed;c.maxSeconds=90;c.prone=true;c.grenades=teams;return c;};
    // Off: the table changes nothing, digest for digest; nobody carries, no grenade is in any frame.
    {Config a=field(4,0),b=a;b.grenade.fragMott=.0003f;b.grenade.throwSeconds=.5f;
     DiagnosticOptions quiet;quiet.enabled=false;quiet.keepFrames=true;
     const auto ra=Simulate(a,quiet);assert(GameplayDigest(ra)==GameplayDigest(Simulate(b,quiet)));
     for(const auto& fr:ra.frames){assert(fr.grenades.empty());for(const auto& s:fr.soldiers)assert(s.grenades[0]+s.grenades[1]==0&&s.stunUntil<0&&s.reactionScale==1);}
     assert(ra.explosions.empty()&&ra.grenadeTotals.issued==0);}
    // On: deterministic, traced or not, with or without the evaluation export; they throw and it goes off.
    int throws=0,explosions=0,rows=0,withGrenades=0;
    for(uint32_t seed:{3u,4u}){
        const auto traced=RunField(field(seed,3),true),quiet=RunField(field(seed,3),false),evaluated=RunField(field(seed,3),false,true);
        assert(traced.digest==quiet.digest&&quiet.digest==evaluated.digest);
        assert(traced.digest!=RunField(field(seed,0),false).digest);
        std::cout<<"GRENADES field seed "<<seed<<": issued "<<traced.issued<<", throws "<<traced.totals.throws<<", explosions "<<traced.explosions<<", fragment hits "
                 <<traced.totals.fragmentHits<<" ("<<traced.totals.penetrating<<" penetrating, "<<traced.totals.incapacitating<<" incapacitating), stuns "<<traced.totals.stuns
                 <<", knockbacks "<<traced.totals.knockbacks<<" ("<<traced.totals.knockdowns<<" down), blast deaths "<<traced.totals.blastDeaths
                 <<", casualties "<<traced.totals.blastCasualties<<" blast / "<<traced.totals.fragmentCasualties
                 <<" fragments ("<<traced.totals.friendlyCasualties<<" friendly), reactions "<<traced.totals.reactions<<" (dives "<<traced.totals.dives<<", runs "<<traced.totals.runs
                 <<", throw-backs "<<traced.totals.throwBacks<<" of "<<traced.totals.throwBackAttempts<<"), close-ins "<<traced.totals.closeIns<<", evidence rows "<<traced.rows<<"\n";
        throws+=traced.totals.throws;explosions+=int(traced.explosions);rows+=int(traced.rows);withGrenades+=int(traced.frames);
        assert(traced.issued>0&&int(traced.explosions)<=traced.totals.throws+traced.totals.dropped);
    }
    assert(throws>0&&explosions>0&&rows>0&&withGrenades>0);
    // One side only: the other side carries none.
    {DiagnosticOptions quiet;quiet.enabled=false;quiet.keepFrames=true;const auto r=Simulate(field(3,2),quiet);
     for(const auto& s:r.frames.front().soldiers)assert(s.team==1||s.grenades[0]+s.grenades[1]==0);
     assert(r.grenadeTotals.issued>0);}
    // Plan 033 on as well: every burst joins the world's explosion queue (one on the battle's last tick excepted: the
    // queue is read at the next tick's start), deterministically.
    {Config c=field(3,3);c.destruction=true;
     auto fight=[&](Record& out){DiagnosticOptions quiet;quiet.enabled=false;quiet.keepFrames=false;LeanRecorder recorder;
        quiet.frameSink=[&](const Record& record,const Frame& frame){recorder.Record_(record,frame);};out=Simulate(c,quiet);return recorder.Digest(out);};
     Record a,b;const uint64_t da=fight(a),db=fight(b);
     const int bursts=int(a.explosions.size()),queued=a.destructionTotals.explosions;
     assert(da==db&&bursts>0&&(queued==bursts||(queued==bursts-1&&a.explosions.back().time>a.duration-2*TickSeconds)));
     for(const auto& e:a.destruction)assert(e.time>=a.explosions.front().time);
     std::cout<<"GRENADES with destruction: "<<bursts<<" bursts, "<<queued<<" through the structures ("<<a.destruction.size()<<" destruction events, "
              <<a.destructionTotals.revisions<<" geometry revisions) PASS\n";}
    std::cout<<"GRENADES switch: SameConfig, the table inert off, byte-identical off, Legacy only; a battle deterministic traced or not, "<<throws<<" throws, "<<explosions<<" explosions PASS\n";
}
}
inline void GrenadeTests(){
    std::cout.setf(std::ios::unitbuf);
    grenade_tests::BlastTests();grenade_tests::BowenTests();grenade_tests::KnockTests();grenade_tests::FragmentTests();grenade_tests::LethalityTests();
    grenade_tests::EffectTests();grenade_tests::ThrowTests();
    grenade_tests::ThrowDecisionTests();grenade_tests::ReactionTests();grenade_tests::IssueTests();grenade_tests::PinnedTests();grenade_tests::SwitchTests();
    std::cout<<"GRENADES all PASS\n";
}
