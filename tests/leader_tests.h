#pragma once
#include "LeaderSim.h"
static void LeaderTests(){
    const OfficerProfile good{.9f,.5f,.9f,.9f},bad{.15f,.9f,.2f,.2f};
    Config c;c.drills=c.foundations=c.leaderEffects=true;c.family=ScenarioFamily::F1;c.equalTroops=true;
    c.platoonProfiles={good,bad};auto initial=InitialFrame(c);
    assert(SameProfile(initial.soldiers[5].officer,good)&&SameProfile(initial.soldiers[37].officer,bad));
    assert(SameProfile(initial.soldiers[0].officer,c.officer)); // NCO quality and troop abilities are untouched.
    assert(initial.soldiers[0].initiativeAllowed&&!initial.soldiers[32].initiativeAllowed);
    auto successor=initial.soldiers[38];assert(SameProfile(successor.officer,c.officer));
    int drops[2]={};double delays[2]={};
    for(int team=0;team<2;++team)for(int n=0;n<200;++n){
        PlatoonMessage message;message.radio=true;message.sender=team*32;message.recipient=team*32+8;message.arrives=2+n;
        message.broadcast.serial=n+1;auto repeat=message;
        bool delivered=ProfileMessage(message,initial.soldiers[team*32+5],c,1+n,nullptr);
        bool same=ProfileMessage(repeat,initial.soldiers[team*32+5],c,1+n,nullptr);
        assert(delivered==same&&message.arrives==repeat.arrives);
        if(!delivered)++drops[team];else delays[team]+=message.arrives-(2+n);
    }
    assert(drops[1]>drops[0]&&delays[1]/(200-drops[1])>delays[0]/(200-drops[0]));
    bool blurred=false;
    for(int n=0;n<30&&!blurred;++n){
        PlatoonMessage report;report.sender=32;report.recipient=37;report.arrives=5+n;report.situation.enemy=0;
        Contact known;known.known=true;known.position={20,10};known.observedAt=3;
        report.situation.observations.push_back({0,known});
        if(ProfileMessage(report,initial.soldiers[37],c,3,nullptr)){
            const auto& changed=report.situation.observations[0];assert(changed.track==0&&changed.contact.observedAt==3);
            assert(Distance(changed.contact.position,known.position)>10);blurred=true;
        }
    }
    assert(blurred);
    assert(LeaderSettings(bad).enemyScale<LeaderSettings(good).enemyScale);
    assert(LeaderSettings(bad).retreatRatio<LeaderSettings(good).retreatRatio);
    assert(LeaderSettings(bad).assessmentSeconds>LeaderSettings(good).assessmentSeconds);
    for(int draw=1;draw<=30;++draw){
        c.genSeed=draw;auto g=GenerateLeaderScenario(c);auto before=ScenarioDigest(g);c.seed+=17;std::swap(c.platoonProfiles[0],c.platoonProfiles[1]);
        assert(before==ScenarioDigest(GenerateLeaderScenario(c)));
        auto frame=InitialFrame(c);Map map;ApplyScenario(g,c,map,frame);int count[2]={},guns[2]={};
        for(const auto& s:frame.soldiers)if(s.Active()){++count[s.team];guns[s.team]+=s.machineGun;assert(Walkable(map,s.position));}
        assert(count[0]==count[1]&&count[0]>=4&&count[0]<=12&&guns[0]==guns[1]);
        Config ordinary=c;ordinary.equalTroops=false;assert(ScenarioDigest(GenerateLeaderScenario(ordinary))==ScenarioDigest(GenerateScenario(c.family,c.genSeed)));
    }
    c.genSeed=1;c.seed=107;c.maxSeconds=12;
    auto on=std::make_unique<Record>(Simulate(c));DiagnosticOptions off;off.enabled=false;
    auto untraced=std::make_unique<Record>(Simulate(c,off));assert(GameplayDigest(*on)==GameplayDigest(*untraced));
    Config changed=c;changed.platoonProfiles[0].communication=.123f;assert(!SameConfig(c,changed));
    std::cout<<"Leader contracts: isolated lieutenant profiles, deterministic net drops="<<drops[0]<<"/"<<drops[1]<<", report identities/timestamps retained, successor own profile, 30 equal-roster/weapon draws and seed/profile-invariant geometry, trace parity pass\n";
}
