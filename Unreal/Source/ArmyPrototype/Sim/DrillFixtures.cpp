#include "DrillSim.h"
#include "TacticalRouteSim.h"
#include <stdexcept>
#include <cmath>
namespace army {
static void MakeActionEncounter(int id,Map& map,Frame& frame){
    map=Map{};map.halfWidth=160;map.halfHeight=100;
    for(auto& s:frame.soldiers){s.health=0;s.action=Action::Killed;s.assignment={};s.contacts={};s.reports={};}
    for(int n=0;n<8;++n){auto& s=frame.soldiers[n];s.health=100;s.role=n==0?Role::Sergeant:n==1?Role::Corporal:n==7?Role::MachineGunner:Role::Rifleman;s.machineGun=n==7;s.position={-6,(n-3.5f)*6};s.goal=s.position;
        map.obstacles.push_back({{3,(n-3.5f)*6},{.6f,2},false,true,1.3f});
    }
    auto& enemy=frame.soldiers[32];enemy.health=10000;enemy.position={70,0};enemy.goal=enemy.position;enemy.role=Role::Sergeant;enemy.machineGun=false;enemy.reloadUntil=id<=57||id>=68?10000:0;
    map.obstacles.push_back({{68,0},{.6f,2},false,true,1.3f});
    auto& order=frame.soldiers[0].platoonOrder;order.serial=1;order.issuer=13;order.expiresAt=600;order.intent={1,0,id<=57?GoalPurpose::Support:GoalPurpose::Seize,{70,0},12,600};order.task=id<=57?PlatoonTask::Support:PlatoonTask::FlankNorth;
    frame.command[0].mission={70,0};frame.command[4].leader=32;
    for(int n:{13,14}){auto& s=frame.soldiers[n];s.health=10000;s.reloadUntil=10000;s.position={-35,float(n-13)*10};s.role=n==13?Role::Lieutenant:Role::PlatoonSergeant;}
    frame.platoon[0].leader=13;frame.platoon[0].sergeant=14;
    if(id>=58&&id<=67){
        enemy.health=500; // Durable through preparation, still physically clearable.

        int rank=0;for(int n:{1,3,4,5}){float y=20.f+6.f*rank++;frame.soldiers[n].position={-2,y};map.obstacles.push_back({{3,y},{.6f,2},false,true,1.3f});}
        if(id!=61)map.obstacles.push_back({{30,12},{30,1},false,false,4});
        for(float y:{-22.f,22.f})map.obstacles.push_back({{51,y},{.6f,3},false,true,1.3f});
    }
    if(id==60){
        // Keep the deathmatch alive after objective clearance so D08 can observe
        // consolidation. Remote, durable observer; no reports or contacts injected.
        auto& remote=frame.soldiers[63];remote.health=10000;remote.reloadUntil=10000;
        remote.position={-150,-90};remote.goal=remote.position;remote.role=Role::Sergeant;remote.machineGun=false;
        remote.platoonOrder.serial=1;remote.platoonOrder.issuer=63;remote.platoonOrder.expiresAt=600;
        remote.platoonOrder.task=PlatoonTask::Observe;
        remote.platoonOrder.intent={1,0,GoalPurpose::Observe,remote.position,8,600};
        frame.command[7].leader=63;frame.command[7].mission=remote.position;
    }
    if(id==57)for(int n:{0,2,6,7})frame.soldiers[n].reloadUntil=10000;
    if(id==59)for(int n:{1,3,4,5})frame.soldiers[n].reloadUntil=10000;
    if(id>=68){
        for(int n=0;n<8;++n)frame.soldiers[n].health=10000; // Isolate the strength condition from the casualty trigger.

        for(int n=32;n<(id==68?48:40);++n){auto& s=frame.soldiers[n];s.health=10000;s.reloadUntil=10000;s.position={65.f+(n-32)/8*6,(n%8-3.5f)*6};s.goal=s.position;s.role=Role::Rifleman;s.machineGun=false;}
        for(float x:{-35.f,-65.f})for(float y:{-18.f,-6.f,6.f,18.f})map.obstacles.push_back({{x,y},{.6f,2},false,true,1.3f});
    }
    for(auto& s:frame.soldiers){s.goal=s.position;s.facing=s.look={s.team?-1.f:1.f,0};}
    PrepareGeometry(map);
}
void StepDrillEncounter(int id,Frame& f){
    // Fixture stimuli alter physical actors, never their contacts or receipts.
    if(id>=68&&std::fmod(f.time,5.f)>.15f)for(int n=32;n<(id==68?48:40);++n)f.soldiers[n].reloadUntil=f.time+.25f;
    if(id==56&&f.time>=30)for(int n:{0,2,6,7})f.soldiers[n].reloadUntil=10000;
    if(id==62&&f.time>=30&&f.time<45)for(int n:{0,2,6,7})f.soldiers[n].reloadUntil=45;
    if((id==64||id==65)&&f.time>=30&&f.soldiers[33].health==0){
        const auto& p=f.command[0].battleDrill;if(p.action.route&&!p.action.route->points.empty()){
            auto& s=f.soldiers[33];s.health=10000;s.reloadUntil=10000;s.position=p.action.route->points[p.action.route->points.size()/2]+Vec3{0,id==64?0.f:-50.f};s.goal=s.position;s.role=Role::Rifleman;
        }
    }
    if((id==66||id==67)&&f.time>=35){f.soldiers[4].health=0;f.soldiers[4].action=Action::Wounded;if(id==67){f.soldiers[5].health=0;f.soldiers[5].action=Action::Wounded;}}
}
void MakeDrillEncounter(const Config&,int id,Map& map,Frame& frame){
    if(id>=56&&id<=69){MakeActionEncounter(id,map,frame);return;}
    if(id<44||id>55)throw std::invalid_argument("Unknown drill fixture");
    int pair=(id-44)/2;bool control=(id%2)!=0;
    map=Map{};map.halfWidth=260;map.halfHeight=110;
    for(auto& s:frame.soldiers){s.health=0;s.action=Action::Killed;s.assignment={};s.contacts={};s.reports={};}
    for(int n=0;n<8;++n){auto& s=frame.soldiers[n];s.health=100;s.role=n==0?Role::Sergeant:n==1?Role::Corporal:n==7?Role::MachineGunner:Role::Rifleman;s.machineGun=n==7;s.position={-float(n/2)*7,float(n%2?1:-1)*7};s.goal=s.position;}
    auto& enemy=frame.soldiers[32];enemy.health=10000;enemy.position={240,0};enemy.reloadUntil=10000;enemy.role=Role::Sergeant;enemy.machineGun=false;enemy.goal=enemy.position;
    // Own pre-battle movement order, never injected enemy knowledge or receipts.
    auto& order=frame.soldiers[0].platoonOrder;order.serial=1;order.issuer=0;order.expiresAt=600;order.intent={1,0,GoalPurpose::Seize,{120,0},12,600};
    frame.command[0].mission={120,0};frame.command[4].leader=32;
    if(pair==0&&control){
        for(int n=0;n<8;++n)frame.soldiers[n].position={-4.f*n,0};
        map.obstacles={{{65,-4},{110,2},false,false,4},{{65,4},{110,2},false,false,4}};
    }
    if(pair==1||pair==2){
        enemy.position={pair==1?120.f:control?160.f:90.f,0};
        frame.soldiers[2].position={pair==1?75.f:120.f,0};
        if(pair==1&&control)enemy.position={240,0}; // No contact can be sensed in the control window.
        if(!(pair==1&&control))for(float x:{-10.f,10.f,30.f,50.f,70.f,100.f})for(float y:{-14.f,14.f})map.obstacles.push_back({{x,y},{.6f,4},false,true,1.3f});
    }
    if(pair==3||pair==4){
        enemy.position={pair==3?60.f:80.f,0};enemy.reloadUntil=0;enemy.machineGun=pair==4;
        // A rifleman ordered to hold exposed ground retreats before firing. Give
        // the durable target its own low cover, outside the squad's 25m search.
        map.obstacles.push_back({{enemy.position.x-1.8f,0},{.6f,2},false,true,1.3f});
        for(int n=0;n<8;++n)frame.soldiers[n].position={-6.f-float(n%2)*3,(n-3.5f)*7};
        if(pair==4||!control)for(int n=0;n<8;++n)map.obstacles.push_back({{3.f-float(n%2)*3,(n-3.5f)*7},{.6f,2},false,true,1.3f});
        if(pair==4&&control)for(int n:{2,6,7}){frame.soldiers[n].health=0;frame.soldiers[n].action=Action::Killed;}
        // Real platoon report receiver. It neither fabricates contact nor issues a task tree.
        for(int n:{13,14}){auto& s=frame.soldiers[n];s.health=10000;s.reloadUntil=10000;s.position={-35,float(n-13)*10};s.role=n==13?Role::Lieutenant:Role::PlatoonSergeant;}
        frame.platoon[0].leader=13;frame.platoon[0].sergeant=14;
    }
    if(pair==5){
        enemy.position={65,0};for(int n=0;n<8;++n)frame.soldiers[n].position={-12,(n-3.5f)*5};
        for(int n=0;n<(control?10:5);++n)map.obstacles.push_back({{3,(n-(control?4.5f:2.f))*(control?4.f:6.f)},{.6f,.7f},false,true,1.3f});
    }
    for(auto& s:frame.soldiers){s.goal=s.position;s.facing=s.look={s.team?-1.f:1.f,0};}
    PrepareGeometry(map);
}
}
