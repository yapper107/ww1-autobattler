#pragma once
#include "DrillSim.h"
#include "PositionSim.h"
#include <set>
static Config DrillConfig(){Config c;c.drills=c.foundations=true;return c;}
static bool DrillTrace(const Record& r,const char* kind,const char* reason=""){
    for(const auto& e:r.diagnostics->entries)if(e.squad==0&&e.kind==kind&&(std::string(kind)=="technique_selected"?e.reason==reason:e.reason.find(reason)!=std::string::npos))return true;
    return false;
}
static void PositionServiceTests(){
    for(int layout:{0,5,6,7}){
        auto c=DrillConfig();auto frame=InitialFrame(c);auto map=MakeSkirmishMap();if(layout)MakeMGEncounter(c,layout,map,frame);
        const auto& covers=CoverPositions(map);assert(!covers.empty());auto leader=frame.soldiers[0];leader.position=covers.front().shelter;
        Soldier member=leader;member.id=2;member.position=leader.position;
        GroupPositionQuery query;query.center=leader.position;query.target=leader.position+Vec3{40,0};query.anchors[2]=leader.position;query.radius=20;query.coherenceRadius=40;
        auto first=QueryPositions(leader,{member},map,query,0,nullptr);assert(first.size()==1&&first[0].valid);
        auto selected=first[0].primary.cover;query.reserved.push_back({3,selected});auto second=QueryPositions(leader,{member},map,query,0,nullptr);
        if(second[0].valid){assert(Distance(selected.shelter,second[0].primary.cover.shelter)>=2);assert(Distance(selected.peek,second[0].primary.cover.peek)>=1.8f);}
        query.boundCenter={10000,10000};query.boundRadius=35;assert(!QueryPositions(leader,{member},map,query,0,nullptr)[0].valid);query.boundRadius=0;
        query.areaMin={10000,10000};assert(!QueryPositions(leader,{member},map,query,0,nullptr)[0].valid);
    }
    // Moving formation does not depend on the cover catalogue, even if its
    // caller also requests protection. Its projection remains bounded to 3 m.
    {
        auto c=DrillConfig();auto frame=InitialFrame(c);auto map=MakeSkirmishMap();MakeDrillEncounter(c,44,map,frame);
        auto leader=frame.soldiers[0];auto member=frame.soldiers[2];
        GroupPositionQuery q;q.center={20,0};q.anchors[2]={20,0};q.formation=true;q.protectedPosition=true;
        auto free=QueryPositions(leader,{member},map,q,0,nullptr);
        assert(free[0].valid&&free[0].primary.cover.id==0);
        assert(Distance(free[0].primary.cover.shelter,q.anchors[2])<=3.001f);
        q.formation=false;auto halted=QueryPositions(leader,{member},map,q,0,nullptr);assert(!halted[0].valid);
        q.formation=true;q.areaMin={24,-10};assert(!QueryPositions(leader,{member},map,q,0,nullptr)[0].valid);
    }
    auto f=InitialFrame(DrillConfig());std::vector<Soldier> squad(f.soldiers.begin(),f.soldiers.begin()+8);
    for(auto kind:{OrganisationKind::GunCentric,OrganisationKind::Section,OrganisationKind::Teams,OrganisationKind::Rush}){
        auto members=AssignElements(squad,kind);assert(members[0]==0&&members[7]==0&&members[5]==-1&&members[6]==-1);
        assert(members[1]==(kind==OrganisationKind::Rush?0:1));assert(Organisation(kind).gunNeverSilent);
    }
    std::cout<<"Position service: authored layouts 0/5/6/7, reservations, area rejection and four templates PASS\n";
}
static void DrillD01(){
    auto c=DrillConfig();c.maxSeconds=160;auto open=Simulate(c,{}, {},44),narrow=Simulate(c,{}, {},45);
    int moving=0,spaced=0,arrived=0;for(size_t k=1;k<open.frames.size();++k){const auto& f=open.frames[k];const auto& p=f.command[0].battleDrill;
        const bool wedgeSample=p.technique==MovementTechnique::Traveling&&p.interval==10;
        for(int id=0;id<8;++id){const auto& s=f.soldiers[id];if(!wedgeSample||!s.Active()||Distance(s.position,open.frames[k-1].soldiers[id].position)<.1f)continue;++moving;
        float nearest=1e9f;for(int other=0;other<8;++other)if(other!=id&&f.soldiers[other].Active())nearest=std::min(nearest,Distance(s.position,f.soldiers[other].position));spaced+=nearest>=6&&nearest<=14;}
        int in=0;for(int id=0;id<8;++id)in+=Distance(f.soldiers[id].position,{120,0})<30;arrived=std::max(arrived,in);if(in==8)break;
    }
    bool inside=true;for(const auto& f:narrow.frames)for(int id=0;id<8;++id)inside&=std::abs(f.soldiers[id].position.y)<=2;
    std::cout<<"D01 moving="<<moving<<" spacing_share="<<float(spaced)/std::max(1,moving)<<" arrived="<<arrived<<" corridor_inside="<<inside<<"\n";
    assert(DrillTrace(open,"technique_selected","traveling"));assert(moving>0&&spaced>=.8f*moving);assert(arrived==8);
    assert(inside&&DrillTrace(narrow,"formation_slot","column interval 4"));
    for(const auto& e:open.diagnostics->entries)assert(!(e.kind=="position_pair_rejected"&&e.time>1&&e.reason.find("spacing")!=std::string::npos));
}
static void DrillD02(){
    auto c=DrillConfig();c.maxSeconds=70;auto report=Simulate(c,{}, {},46),control=Simulate(c,{}, {},47);bool received=false,distant=false,protectedTrail=false,closeControl=false,quietControl=true;
    for(const auto& f:report.frames){const auto& leader=f.soldiers[0];received|=leader.reports[32].known&&!leader.contacts[32].known;const auto& p=f.command[0].battleDrill;Vec3 center[2]{};int count[2]={};
        for(int id=0;id<8;++id)if(p.elements[id]>=0){center[p.elements[id]]=center[p.elements[id]]+f.soldiers[id].position;++count[p.elements[id]];}
        if(count[0]&&count[1]){float gap=Distance(center[0]*(1.f/count[0]),center[1]*(1.f/count[1]));distant|=gap>=30&&gap<=50;}
        for(int id=0;id<8;++id)if(!p.movers[id]&&p.hasSlot[id])protectedTrail|=ProtectedAt(report.map,f.soldiers[id].position,p.sector,Stance::Crouched)&&ClearLine3D(report.map,f.soldiers[id].position+Vec3{0,0,1.5f},p.sector+Vec3{0,0,1.4f});
    }
    for(const auto& f:control.frames){const auto& p=f.command[0].battleDrill;if(f.time<=6&&p.instance>0)quietControl&=p.technique==MovementTechnique::Traveling;Vec3 center[2]{};int count[2]={};for(int id=0;id<8;++id)if(p.elements[id]>=0){center[p.elements[id]]=center[p.elements[id]]+f.soldiers[id].position;++count[p.elements[id]];}if(count[0]&&count[1])closeControl|=Distance(center[0]*(1.f/count[0]),center[1]*(1.f/count[1]))<20;}
    std::cout<<"D02 report_only="<<received<<" 30-50m="<<distant<<" protected_trail="<<protectedTrail<<" control_traveling="<<quietControl<<" control_close="<<closeControl<<"\n";
    assert(received&&DrillTrace(report,"technique_selected","traveling overwatch")&&distant&&protectedTrail);
    assert(DrillTrace(control,"technique_selected","traveling")&&closeControl&&quietControl);
}
static void DrillD03(){
    auto c=DrillConfig();c.maxSeconds=80;auto near=Simulate(c,{}, {},48),far=Simulate(c,{}, {},49);bool alternate=false,covered=true;float maximum=0;int previous=-1,bounds=0;
    for(const auto& f:near.frames){const auto& p=f.command[0].battleDrill;if(p.technique!=MovementTechnique::BoundingOverwatch)continue;
        if(previous>=0&&previous!=p.movingElement)alternate=true;
        previous=p.movingElement;
        bool protection=false;for(int id=0;id<8;++id)if(p.elements[id]!=p.movingElement&&p.hasSlot[id])protection|=ProtectedAt(near.map,f.soldiers[id].position,p.sector,Stance::Crouched);
        if(f.time>5)covered&=protection;
    }
    // A completed bound is a received arrival, not a path-length estimate.
    for(const auto& e:near.diagnostics->entries)if(e.squad==0&&e.kind=="drill_stage_advanced"&&e.reason.find("matching received arrivals")!=std::string::npos){
        const Frame* end=&near.frames.front();for(const auto& f:near.frames){if(f.time>e.time)break;end=&f;}
        const auto& p=end->command[0].battleDrill;if(p.technique!=MovementTechnique::BoundingOverwatch)continue;
        Vec3 center[2]{};int count[2]={};for(int id=0;id<8;++id)if(end->soldiers[id].Active()&&p.elements[id]>=0){int el=p.elements[id];center[el]=center[el]+end->soldiers[id].position;++count[el];}
        if(count[0]&&count[1]){maximum=std::max(maximum,Distance(center[0]*(1.f/count[0]),center[1]*(1.f/count[1])));++bounds;}
    }
    bool farAlternates=false;for(const auto& e:far.diagnostics->entries)farAlternates|=e.kind=="technique_selected"&&e.reason=="bounding overwatch"&&e.time<5;
    std::cout<<"D03 alternation="<<alternate<<" covered="<<covered<<" maximum_bound="<<maximum<<" far_early_bounds="<<farAlternates<<"\n";
    assert(bounds>0&&alternate&&covered&&maximum<=47);assert(DrillTrace(far,"technique_selected","traveling overwatch")&&!farAlternates);
}
static void DrillD04(){
    auto c=DrillConfig();c.maxSeconds=50;auto covered=Simulate(c,{}, {},50),bare=Simulate(c,{}, {},51);float first=-1;std::set<int> firing;bool allCover=false,assessment=false,separated=true,pathBound=true;
    for(const auto& f:covered.frames){for(int id=0;id<8;++id)if(f.soldiers[id].understoodSuppression>0&&first<0)first=f.time;
        int count=0;for(int id=0;id<8;++id)count+=ProtectedAt(covered.map,f.soldiers[id].position,{60,0},Stance::Crouched);allCover|=count==8;
        const auto& p=f.command[0].battleDrill;for(int a=0;a<8;++a)for(int b=a+1;b<8;++b)if(p.hasSlot[a]&&p.hasSlot[b])separated&=Distance(p.slots[a].shelter,p.slots[b].shelter)>=2&&Distance(p.slots[a].peek,p.slots[b].peek)>=1.8f;
    }
    for(int id=0;id<8;++id){bool reached=false;float bound=-1;
        for(const auto& f:covered.frames)if(first>=0&&f.time>=first){const auto& a=f.soldiers[id].assignment;
            if(bound<0&&a.hasSlot){auto path=FindPath(covered.map,f.soldiers[id].position,a.slot.shelter);float length=0;Vec3 prior=f.soldiers[id].position;for(Vec3 at:path){length+=Distance(prior,at);prior=at;}bound=f.time+length/1.89f+1;}
            if(bound>=0&&f.time<=bound&&ProtectedAt(covered.map,f.soldiers[id].position,{60,0},Stance::Crouched))reached=true;
        }pathBound&=reached;
    }
    for(const auto& shot:covered.shots)if(shot.owner<8&&first>=0&&shot.time>=first&&shot.time<=first+4)firing.insert(shot.owner);
    for(const auto& e:covered.diagnostics->entries)if(e.kind=="drill_stage"&&e.reason.find("assessment")!=std::string::npos&&first>=0&&e.time<=first+5.5f)assessment=true;
    std::cout<<"D04 first_receipt="<<first<<" return_shooters_4s="<<firing.size()<<" all_cover="<<allCover<<" spacing="<<separated<<" path_bound="<<pathBound<<" assessment="<<assessment<<" bare_rear="<<DrillTrace(bare,"drill_stage","BreakContact")<<"\n";
    assert(first>=0&&firing.size()>=3&&allCover&&separated&&assessment&&pathBound);assert(DrillTrace(bare,"drill_stage","BreakContact")&&DrillTrace(bare,"drill_stage","rearward bound"));
}
static void DrillD05(){
    auto c=DrillConfig();c.maxSeconds=60;auto capable=Simulate(c,{}, {},52),weak=Simulate(c,{}, {},53);bool support=DrillTrace(capable,"drill_stage","gun group supports"),blocked=false,received=false;float sent=-1,at=-1;
    for(const auto& e:weak.diagnostics->entries)if(e.kind=="drill_stage"&&e.reason.find("Blocked/Support")!=std::string::npos&&sent<0)sent=e.time;
    for(const auto& f:weak.frames)for(const auto& report:f.soldiers[13].platoonReports)if(report.squad==0&&report.drillCause==TaskCause::Support){received=true;if(at<0)at=f.time;}
    for(const auto& f:capable.frames)blocked|=f.command[0].battleDrill.blocked;
    const auto& organisation=weak.frames[1].command[0].battleDrill;int gun=0,rifles=0;
    for(int id=0;id<8;++id)if(weak.frames[1].soldiers[id].Active()){gun+=organisation.elements[id]==0;rifles+=organisation.elements[id]==1;}
    assert(gun<Organisation(OrganisationKind::Section).elements[0].minStrength&&rifles>=Organisation(OrganisationKind::Section).elements[1].minStrength);
    std::cout<<"D05 support="<<support<<" incorrectly_blocked="<<blocked<<" weak_report="<<received<<" latency="<<at-sent<<"\n";
    assert(support&&!blocked);assert(received&&sent>=0&&at-sent<=4);
}
static void DrillD17(){
    auto c=DrillConfig();c.maxSeconds=40;auto scarce=Simulate(c,{}, {},54),ample=Simulate(c,{}, {},55);int occupied[2]={};bool spaced=true;
    const auto& initial=ample.frames.front();auto leader=initial.soldiers[0];std::vector<Soldier> members(initial.soldiers.begin(),initial.soldiers.begin()+8);
    GroupPositionQuery q;q.center={-12,0};q.target={65,0};q.areaMin={-258,-24};q.areaMax={258,24};q.radius=25;q.coherenceRadius=90;q.groupCap=35;q.protectedPosition=true;
    for(const auto& member:members)q.anchors[member.id]=member.position;
    auto valid=QueryPositions(leader,members,ample.map,q,0,nullptr);int available=0;
    for(size_t a=0;a<valid.size();++a)if(valid[a].valid){++available;assert(ProtectedAt(ample.map,valid[a].primary.cover.shelter,q.target,Stance::Crouched));
        for(size_t b=a+1;b<valid.size();++b)if(valid[b].valid)assert(Distance(valid[a].primary.cover.shelter,valid[b].primary.cover.shelter)>=2);
    }
    std::cout<<"D17 independently allocatable protected slots="<<available<<"\n";assert(available>=8);
    for(int which=0;which<2;++which){const auto& r=which?ample:scarce;for(const auto& f:r.frames){const auto& p=f.command[0].battleDrill;int count=0;for(int n=0;n<8;++n)count+=p.hasSlot[n]&&Distance(f.soldiers[n].position,p.slots[n].shelter)<1;
        occupied[which]=std::max(occupied[which],count);for(int a=0;a<8;++a)for(int b=a+1;b<8;++b)if(p.hasSlot[a]&&p.hasSlot[b])spaced&=Distance(p.slots[a].shelter,p.slots[b].shelter)>=2;
    }}std::cout<<"D17 scarce_occupied="<<occupied[0]<<" ample_occupied="<<occupied[1]<<" spacing="<<spaced<<"\n";
    assert(occupied[0]==5&&occupied[1]==8&&spaced);
}
// Production sensing/transport: no fabricated receipts. These pins distinguish
// policy commitment from a command-layer deduplication hiding planner churn.
static void DrillLifecycleTests(){
    int continued=0,retained=0,latched=0,paused=0,clocked=0;
    for(int encounter:{44,48,53,55}){
        auto c=DrillConfig();c.maxSeconds=40;auto record=Simulate(c,{}, {},encounter);
        auto transition=[&](float from,float to,const char* reason){
            for(const auto& e:record.diagnostics->entries)if(e.squad==0&&e.kind=="drill_stage_advanced"&&e.time>from&&e.time<=to&&e.reason.find(reason)!=std::string::npos)return true;
            return false;
        };
        for(size_t k=1;k<record.frames.size();++k){const auto& a=record.frames[k-1];const auto& b=record.frames[k];const auto& old=a.command[0].battleDrill;const auto& now=b.command[0].battleDrill;
            if(!old.initialized)continue;
            if(old.generation==now.generation&&now.clockAt>old.clockAt){
                if(now.paused){assert(now.stageElapsed==old.stageElapsed);++paused;}
                else if(now.stageElapsed>old.stageElapsed)++clocked;
            }
            if(now.deadline>0)assert(std::any_of(now.movers.begin(),now.movers.end(),[](bool moving){return moving;}));
            // Phase3c ruling: Support may have a soldier-local recovery deadline.
            // The planner's eligible stage clock above remains the lifecycle contract.
            for(int n=0;n<8;++n){const auto& assignment=b.soldiers[n].assignment;
                if(assignment.drillInstance>0&&assignment.execution.completion!=Completion::Support)assert(assignment.execution.deadline==0);
            }
            if(now.retreat)assert(now.effectiveFire);
            if(old.elements!=now.elements)assert(transition(a.time,b.time,"Reorganise"));
            if(old.generation!=now.generation)assert(transition(a.time,b.time,""));
            if(!transition(a.time,b.time,"")){
                assert(old.generation==now.generation);++continued;
                for(int n=0;n<8;++n){assert(Distance(old.positions[n],now.positions[n])<.001f);if(old.arrivals[n]){assert(now.arrivals[n]);++latched;}}
            }
            if(old.stage==DrillStage::Bound&&now.stage==DrillStage::Bound&&old.movingElement==now.movingElement&&!transition(a.time,b.time,"")){
                for(int n=0;n<8;++n)if(now.elements[n]!=now.movingElement&&b.soldiers[n].Active()){
                    assert(a.soldiers[n].assignment.id==b.soldiers[n].assignment.id||b.soldiers[n].assignment.issuedAt<=a.time);++retained;
                }
            }
        }
        // Every issued squad order has a transition on its issuance tick.
        for(const auto& e:record.diagnostics->entries)if(e.kind=="order_issued"&&e.squad==0)assert(transition(e.time-.001f,e.time+.001f,""));
    }
    std::cout<<"Lifecycle continue samples="<<continued<<" retained overwatch samples="<<retained<<" latched receipt samples="<<latched<<"\n";
    assert(continued>100&&retained>0&&latched>0);
    std::cout<<"Progress clock paused="<<paused<<" running="<<clocked<<"\n";assert(paused>0&&clocked>0);
}
static void DrillClockArrivalTests(){
    auto c=DrillConfig();c.maxSeconds=100;
    for(int encounter:{97,98}){auto r=Simulate(c,{}, {},encounter);int requests=0,certified=0,failed=0,received=0;
        for(const auto& e:r.diagnostics->entries){
            requests+=e.kind=="drill_stage_advanced"&&e.reason.find("actual-position arrival certification")!=std::string::npos;
            if(e.squad!=0||!e.execution.arrivalCheck)continue;
            if(e.kind=="task_status"&&e.taskStatus==int(TaskStatus::Done)){
                ++certified;assert(Distance(e.position,e.goal)<=3);assert(Distance(e.position,e.goal)>.75f);
            }
            if(e.kind=="task_status"&&e.taskStatus==int(TaskStatus::Failed)&&e.taskCause==int(TaskCause::Timeout)){++failed;assert(Distance(e.position,e.goal)>3);}
            received+=e.kind=="task_status_received"&&e.taskStatus==int(TaskStatus::Done);
        }
        // Match the actual production receipt in the leader's own memory.
        for(const auto& f:r.frames)for(const auto& receipt:f.soldiers[0].taskReports)if(receipt.execution.arrivalCheck&&receipt.status==TaskStatus::Done){++received;assert(Distance(receipt.position,receipt.goal)<=3);}
        std::cout<<"Clock arrival encounter="<<encounter<<" requests="<<requests<<" certified="<<certified<<" failed="<<failed<<" received="<<received<<"\n";
        assert(requests>0);if(encounter==97)assert(certified>0&&received>0);else assert(certified==0&&failed>0);
    }
}
#include "squad_drills_tests.h"
static void DrillsTests(const std::string& name="all"){
    std::cout.setf(std::ios::unitbuf);
    if(name=="clock-arrival"){DrillClockArrivalTests();return;}
    if(name=="close"){DrillCloseAssaultPositions();return;}
    if(name=="sprint"){DrillSprintContracts();return;}
    if(name=="projection"){DrillProjectedRushPositions();return;}
    if(name=="sector"){DrillSectorPositions();return;}
    if(name=="lifecycle"){DrillLifecycleTests();return;}
    if(name=="positions"){PositionServiceTests();return;}
    if(name=="plumbing"){auto c=DrillConfig();c.maxSeconds=3;DiagnosticOptions off;off.enabled=false;for(auto terrain:{Terrain::FracturedWorks,Terrain::Trenches}){c.terrain=terrain;assert(GameplayDigest(Simulate(c))==GameplayDigest(Simulate(c,off)));}return;}
    if(name=="all"||name=="D01")DrillD01( );
    if(name=="all"||name=="D02")DrillD02( );
    if(name=="all"||name=="D03")DrillD03( );
    if(name=="all"||name=="D04")DrillD04( );
    if(name=="all"||name=="D05")DrillD05( );
    if(name=="all"||name=="D17")DrillD17();
    if(name=="all"||name=="D06")DrillD06();
    if(name=="all"||name=="D07")DrillD07();
    if(name=="all"||name=="D08")DrillD08();
    if(name=="all"||name=="D09")DrillD09();
    if(name=="all"||name=="D10")DrillD10();
    if(name=="all"||name=="D11")DrillD11();
    if(name=="all"||name=="D16")DrillD16();
}
