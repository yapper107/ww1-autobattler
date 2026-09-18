#include "PlatoonTaskSim.h"
#include "DrillSim.h"
#include <algorithm>
namespace army {
void MakePlatoonEncounter(const Config& config,int id,Map& map,Frame& f){
    NeutraliseStats(f);
    if(id==99||id==100){
        MakeDrillEncounter(config,60,map,f);
        for(int n=0;n<8;++n)f.soldiers[n].health=10000;
        f.soldiers[32].health=10000;EquipWeapon(f.soldiers[32],{WeaponId::MachineGun,{}}); // Real automatic fire; isolate controlled attrition.
        return;
    }
    if(id>=101&&id<=103){
        MakePlatoonEncounter(config,92,map,f);
        if(id==102)for(int n=8;n<16;++n)f.soldiers[n].reloadUntil=10000;
        if(id==103){
            // Start with two absent gun-group members. The later gun loss crosses
            // minStrength and calls for help without the separate three-new-loss
            // BreakContact trigger; a retiring squad must finish its commitment.
            for(int n:{2,6}){f.soldiers[n].health=0;f.soldiers[n].action=Action::Killed;}
            // An already reachable firing station isolates caller response from
            // the separate unresolved held-slot allocation defect.
            for(int n=8;n<16;++n){auto& member=f.soldiers[n];member.position={38.f,24.f+(n-8)*4.f};member.goal=member.position;
                map.obstacles.push_back({{42,member.position.y},{.6f,1.5f},false,true,1.3f});}
            f.soldiers[8].platoonOrder.intent.objective=f.soldiers[8].position;
            map.obstacles.erase(std::remove_if(map.obstacles.begin(),map.obstacles.end(),[](const auto& obstacle){return obstacle.half.x>20;}),map.obstacles.end());PrepareGeometry(map);}
        return;
    }
    if(id>=94&&id<=96){
        MakePlatoonEncounter(config,90,map,f);
        // Three independent squads, no screened flank. Physical attrition and
        // delivered fire generate the broadcasts through normal transport.
        map.obstacles.erase(std::remove_if(map.obstacles.begin(),map.obstacles.end(),[](const auto& o){return o.half.x>20;}),map.obstacles.end());
        for(int squad=0;squad<3;++squad){auto& s=f.soldiers[squad*8];auto& order=s.platoonOrder;
            order.task=squad==2?PlatoonTask::HelpSquad:PlatoonTask::None;
            order.helpSquad=squad==2?0:-1;order.intent.objective=squad==2?Vec3{70,0}:s.position;
        }
        for(int n=0;n<8;++n)f.soldiers[n].reloadUntil=10000;
        if(id==95)for(int n=16;n<24;++n)f.soldiers[n].health=0;
        if(id==96)for(int n=0;n<8;++n)f.soldiers[n].health=0;
        PrepareGeometry(map);return;
    }
    if(id==97||id==98){
        MakePlatoonEncounter(config,82,map,f);
        for(int n=8;n<32;++n)f.soldiers[n].health=0;
        f.platoon[0].leader=f.platoon[0].sergeant=-1;
        return;
    }
    map=Map{};map.halfWidth=200;map.halfHeight=140;
    for(auto& s:f.soldiers){s.health=0;s.action=Action::Killed;s.assignment={};s.contacts={};s.reports={};}
    for(int n=0;n<32;++n){auto& s=f.soldiers[n];s.health=1000;s.position={-50.f-float(n%8)/2*3,(n/8-1.5f)*32+(n%4-1.5f)*5};s.goal=s.position;s.reloadUntil=0;}
    for(int n:{5,6})f.soldiers[n].position={-65,-12+float(n-5)*6};
    for(int n=32;n<40;++n){auto& s=f.soldiers[n];s.health=300;s.position={55.f+float(n/4%2)*4,(n%4-1.5f)*6};s.goal=s.position;s.reloadUntil=10000;EquipWeapon(s,{WeaponId::Rifle,{}});s.role=n==32?Role::Sergeant:Role::Rifleman;}
    f.platoon[1].leader=f.platoon[1].sergeant=-1;
    for(int squad=0;squad<4;++squad)f.command[squad].mission={90,float(squad-1.5f)*30};
    for(float y:{-48.f,-32.f,-16.f,0.f,16.f,32.f,48.f,64.f}){
        map.obstacles.push_back({{-38,y},{.6f,2},false,true,1.3f});
        map.obstacles.push_back({{53,y},{.6f,2},false,true,1.3f});
    }
    const bool bare=id==71||id==75;
    if(!bare)map.obstacles.push_back({{5,12},{65,1},false,false,4});
    if(id==78||id==79){
        // Physical strength controls; contact and ratios still travel normally.
        for(int n=0;n<32;++n)if(n%8>=3&&!IsPlatoonStaff(f.soldiers[n])){f.soldiers[n].health=0;f.soldiers[n].action=Action::Killed;}
        const int count=id==78?32:4;
        for(int n=32;n<64;++n){auto& s=f.soldiers[n];s.health=n<32+count?10000:0;s.reloadUntil=10000;s.role=Role::Rifleman;EquipWeapon(s,{WeaponId::Rifle,{}});s.position={30.f+(n-32)/8*6,(n%8-3.5f)*5};s.goal=s.position;}
        f.soldiers[7].health=0;map.obstacles.clear();
        for(int n=0;n<32;++n)if(f.soldiers[n].Active()){f.soldiers[n].position={-40.f-float(n%3)*2,(n/8-1.5f)*12};f.soldiers[n].goal=f.soldiers[n].position;}
        for(int n=32;n<64;++n){f.soldiers[n].position={15.f+float((n-32)/8)*3,(n%8-3.5f)*5};f.soldiers[n].goal=f.soldiers[n].position;}
    }
    if(id==80||id==81){for(int n=32;n<64;++n){auto& s=f.soldiers[n];s.health=n==63?10000:0;s.position={180,125};s.goal=s.position;s.reloadUntil=10000;}map.obstacles.clear();}
    if(id==82){
        map.halfWidth=500;map.halfHeight=250;map.obstacles.clear();
        for(int n=32;n<64;++n){auto& s=f.soldiers[n];s.health=n==63?10000:0;s.position={450,220};s.goal=s.position;s.reloadUntil=10000;}
    }
    if(id==83)for(int n=32;n<40;++n){f.soldiers[n].position.x-=15;f.soldiers[n].goal=f.soldiers[n].position;}
    if(id==84||id==85){
        map.obstacles.clear();
        for(float x:{-35.f,-10.f,15.f,40.f})for(float y=-72;y<=72;y+=12)map.obstacles.push_back({{x,y},{.6f,2},false,true,1.3f});
        for(int n=0;n<32;++n){auto& s=f.soldiers[n];s.health=(id==84||n%8<4||IsPlatoonStaff(s))?10000:0;s.reloadUntil=id==85?10000:0;}
        for(int n=32;n<64;++n){auto& s=f.soldiers[n];s.health=n<32+(id==84?30:24)?10000:0;s.position={(id==85?5.f:35.f)+float((n-32)/8)*3,(n%8-3.5f)*8};s.goal=s.position;s.reloadUntil=10000;EquipWeapon(s,{WeaponId::Rifle,{}});s.role=Role::Rifleman;}
    }
    if(id>=86&&id<=93){
        map=Map{};map.halfWidth=260;map.halfHeight=140;
        for(auto& s:f.soldiers){s.health=0;s.assignment={};s.contacts={};s.reports={};s.platoonOrder={};}
        const int count=(id==90||id==91)?24:16;
        for(int n=0;n<count;++n){auto& s=f.soldiers[n];const int squad=n/8,slot=n%8;
            s.health=10000;s.reloadUntil=0;EquipWeapon(s,{slot==7?WeaponId::MachineGun:WeaponId::Rifle,{}});s.role=slot==0?Role::Sergeant:slot==1?Role::Corporal:slot==7?Role::MachineGunner:Role::Rifleman;
            const float y=squad==0?-18.f:squad==1?34.f:-42.f;
            s.position={-6.f-float(slot/2)*2,y+(slot-3.5f)*4};s.goal=s.position;s.organisation=0;
            map.obstacles.push_back({{2,s.position.y},{.6f,1.5f},false,true,1.3f});
        }
        for(int n:{29,30}){auto& s=f.soldiers[n];s.health=10000;s.reloadUntil=10000;s.position={-55,float(n-29)*8};s.role=n==29?Role::Lieutenant:Role::PlatoonSergeant;EquipWeapon(s,{WeaponId::Rifle,{}});}
        f.platoon[0].leader=29;f.platoon[0].sergeant=30;
        auto& target=f.soldiers[32];target.health=10000;target.position={70,0};target.goal=target.position;target.reloadUntil=10000;target.role=Role::Sergeant;EquipWeapon(target,{WeaponId::Rifle,{}});
        auto& hold=target.platoonOrder;hold.serial=1;hold.issuer=32;hold.expiresAt=600;hold.intent={1,0,GoalPurpose::Support,target.position,8,600};
        f.platoon[1].leader=32;f.platoon[1].sergeant=-1;
        map.obstacles.push_back({{68,0},{.6f,3},false,true,1.3f});
        if(id!=87){map.obstacles.push_back({{30,12},{30,1},false,false,4});for(float y:{22.f,36.f})map.obstacles.push_back({{49,y},{.6f,3},false,true,1.3f});}
        if(id==90){map.obstacles.push_back({{30,-12},{30,1},false,false,4});for(float y:{-22.f,-36.f})map.obstacles.push_back({{49,y},{.6f,3},false,true,1.3f});}
        for(int squad=0;squad<count/8;++squad){f.command[squad].leader=squad*8;f.command[squad].mission={70,0};}
        if(id>=88&&id<=91){
            for(int squad=0;squad<count/8;++squad){auto& s=f.soldiers[squad*8];auto& order=s.platoonOrder;
                order.serial=1;order.issuer=29;order.expiresAt=600;order.intent={1,0,GoalPurpose::Support,squad?s.position:Vec3{70,0},8,600};
                order.task=squad?PlatoonTask::None:PlatoonTask::HelpSquad;order.helpSquad=squad?-1:1;
            }
            if(id==89)f.soldiers[8].organisation=3;
        }
        if(id==92||id==93){
            auto& idle=f.soldiers[8].platoonOrder;idle.serial=1;idle.issuer=29;idle.expiresAt=600;
            idle.intent={1,0,GoalPurpose::Support,f.soldiers[8].position,8,600};
            for(int n=0;n<8;++n)f.soldiers[n].reloadUntil=10000;
            if(id==93){for(int n=8;n<16;++n){f.soldiers[n].position.x-=120;f.soldiers[n].goal=f.soldiers[n].position;}idle.intent.objective=f.soldiers[8].position;}
        }
    }
    for(auto& s:f.soldiers){s.facing=s.look={s.team?-1.f:1.f,0};}
    PrepareGeometry(map);
}
void StepPlatoonEncounter(int id,Frame& f){
    if(id==99){
        for(const auto& message:f.command[0].battleDrill.broadcasts)if(message.kind==SquadBroadcastKind::Assaulting&&f.time>=message.sentAt+12){
            f.soldiers[3].health=0;f.soldiers[3].action=Action::Killed;break;
        }
    }
    if(id>=101&&id<=103&&f.time>=20)for(int n:{2,6,7}){f.soldiers[n].health=0;f.soldiers[n].action=Action::Wounded;}

    if((id==94||id==95)&&f.time>=20)for(int n:{2,6,7}){f.soldiers[n].health=0;f.soldiers[n].action=Action::Wounded;}
    if(id==97||id==98)for(int n=0;n<8;++n){auto& s=f.soldiers[n];
        // A physical reload halts movers short of their already accepted end.
        // No assignment, clock, knowledge or receipt is fabricated.
        if(s.assignment.drillInstance>0&&Distance(s.position,s.assignment.position)<(id==97?2.8f:5.8f)&&f.time>2)s.reloadUntil=f.time+.3f;
    }
    if(id==76&&f.time>=20){f.soldiers[5].health=0;f.soldiers[5].action=Action::Killed;}
    if((id==92||id==93)&&f.time>=20)for(int n:{2,6,7}){f.soldiers[n].health=0;f.soldiers[n].action=Action::Wounded;}
    // Negative expiry control removes the reporting/renewal endpoint physically.
    if(id==81&&f.time>=20){f.soldiers[5].health=0;f.soldiers[6].health=0;}
}
}
