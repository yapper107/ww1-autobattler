#pragma once
// Phase 3 fixtures use physical firing/reload/casualty stimuli and normal sensing
// and command transport. No contact, task receipt or delivered-fire record is injected.
static void DrillD06(){
    auto c=DrillConfig();c.maxSeconds=55;auto live=Simulate(c,{}, {},56),silent=Simulate(c,{}, {},57);
    bool established=false,lost=false,control=false,evidence=true;int protectedShooters=0;
    for(const auto& f:live.frames){const auto& p=f.command[0].battleDrill;established|=p.action.established;lost|=f.time>38&&p.action.everEstablished&&!p.action.established;

        int covered=0;for(int id=0;id<8;++id)if(p.elements[id]==0)covered+=ProtectedAt(live.map,f.soldiers[id].position,{70,0},Stance::Crouched);protectedShooters=std::max(protectedShooters,covered);
    }
    for(const auto& e:live.diagnostics->entries)if(e.squad==0&&e.reason.find("support established: element delivered")!=std::string::npos){
        bool useful=false;for(int id:{0,2,6,7}){int rounds=0;for(const auto& shot:live.shots)rounds+=shot.owner==id&&shot.time<=e.time&&shot.time>=e.time-7&&Distance(shot.aimedAt,{70,0})<12;useful|=rounds>=(id==7?2:3);}evidence&=useful;
    }
    for(const auto& f:silent.frames)control|=f.command[0].battleDrill.action.established||f.command[0].battleDrill.stage==DrillStage::AttackMove;
    std::cout<<"D06 established="<<established<<" lost="<<lost<<" evidence="<<evidence<<" protected="<<protectedShooters<<" silent_released="<<control<<"\n";
    assert(established&&lost&&evidence&&protectedShooters>=2&&!control);
}
static void DrillD07(){
    auto c=DrillConfig();c.maxSeconds=160;auto signal=Simulate(c,{}, {},58),control=Simulate(c,{}, {},59);float receipt=-1,lift=-1;bool noSignalLift=false;int crossing=0;
    for(const auto& f:signal.frames){const auto& p=f.command[0].battleDrill;if(p.action.phaseLineAt>=0&&receipt<0)receipt=p.action.phaseLineAt;
        bool all=true;for(int id=0;id<8;++id)if(p.elements[id]==0)all&=f.soldiers[id].assignment.teamPlan.liftFire;
        if(receipt>=0&&all&&lift<0)lift=f.time;
    }
    for(const auto& f:control.frames)noSignalLift|=f.command[0].battleDrill.action.lifted;
    for(const auto& shot:signal.shots)if(lift>=0&&shot.time>lift&&shot.owner<8){int e=signal.frames.back().command[0].battleDrill.elements[shot.owner];if(e==0&&Distance(shot.aimedAt,{70,0})<12)++crossing;}
    std::cout<<"D07 phase_receipt="<<receipt<<" lift_received="<<lift<<" late_original_area_rounds="<<crossing<<" no_signal_lift="<<noSignalLift<<"\n";
    assert(receipt>=0&&lift>=receipt&&lift-receipt<=c.reportDelay+1&&crossing==0&&!noSignalLift);
}
static void DrillSectorPositions(){
    auto c=DrillConfig();auto f=InitialFrame(c);Map map;MakeDrillEncounter(c,60,map,f);
    auto l=f.soldiers[0],m=f.soldiers[1];GroupPositionQuery q;q.target=f.soldiers[32].position;q.support=l.position;q.center=m.position;
    q.areaMin={-160,-10};q.areaMax={160,10};q.radius=45;q.minTargetDistance=20;q.maxTargetDistance=45;
    q.minAngle=40;q.maxAngle=60;q.angleProbe=0;q.coherenceRadius=160;q.protectedPosition=true;q.anchors[1]=q.target;
    auto lane=QueryPositions(l,{m},map,q,0,nullptr);assert(!lane[0].valid);
    q.areaDiscCenter=q.target;q.areaDiscRadius=60;auto attack=QueryPositions(l,{m},map,q,0,nullptr);
    assert(attack[0].valid);const auto& slot=attack[0].primary;
    assert(slot.angle>=40&&slot.angle<=60&&Distance(slot.cover.shelter,q.target)>=20&&Distance(slot.cover.shelter,q.target)<=45);
    assert(std::abs(slot.cover.shelter.y)>10&&Walkable(map,slot.cover.shelter));
    std::cout<<"Sector position query: lane rejects; lane union objective disc accepts reachable covered flank\n";
}
static void DrillScreenEvidence(){
    auto c=DrillConfig();auto f=InitialFrame(c);Map map;MakeDrillEncounter(c,60,map,f);
    // Observer-only geometry proof, before simulation and policy acceptance.
    // No actor contact or delivery is injected.
    auto leader=f.soldiers[0];auto member=f.soldiers[1];GroupPositionQuery q;
    q.center=member.position;q.target=f.soldiers[32].position;q.support=leader.position;
    q.radius=45;q.minAngle=40;q.maxAngle=60;q.angleProbe=0;q.minTargetDistance=20;q.maxTargetDistance=45;
    q.coherenceRadius=160;q.protectedPosition=true;q.maxFallbacks=256;q.anchors[member.id%8]=q.target;
    auto slots=QueryPositions(leader,{member},map,q,0,nullptr);float best=0;int candidates=0;
    if(slots[0].valid){auto choices=slots[0].fallbacks;choices.push_back(slots[0].primary);
        for(const auto& slot:choices){auto path=FindPath(map,member.position,slot.cover.shelter);if(path.empty())continue;
            float total=0,blocked=0;Vec3 prior=member.position;
            for(Vec3 end:path){float length=Distance(prior,end);int steps=std::max(1,int(std::ceil(length)));
                for(int k=1;k<=steps;++k){Vec3 at=prior+(end-prior)*(float(k)/steps);float ds=length/steps;total+=ds;
                    if(!ClearLine3D(map,f.soldiers[32].position+Vec3{0,0,1.7f},at+Vec3{0,0,1.3f}))blocked+=ds;
                }prior=end;
            }if(total>0){++candidates;best=std::max(best,blocked/total);}
        }
    }
    std::cout<<"D08 observer screened candidate routes="<<candidates<<" best blocked fraction="<<best<<"\n";
    assert(candidates>0&&best>=.6f);
}
static void DrillD08(){
    DrillScreenEvidence();
    auto c=DrillConfig();c.maxSeconds=240;auto screened=Simulate(c,{}, {},60),bare=Simulate(c,{}, {},61);bool accepted=false,moved=false,angle=false,consolidated=false,unsupported=false,reported=false,screenChecked=false;int reorganise=0;float longest=0;
    for(const auto& f:screened.frames){const auto& p=f.command[0].battleDrill;accepted|=p.action.attack;
        if(p.action.attack&&p.action.route&&!screenChecked){
            float total=0,blocked=0;Vec3 prior=p.action.route->start;
            for(Vec3 end:p.action.route->points){float length=Distance(prior,end);int samples=std::max(1,int(std::ceil(length)));
                for(int k=1;k<=samples;++k){Vec3 at=prior+(end-prior)*(float(k)/samples);total+=length/samples;
                    if(!ClearLine3D(screened.map,f.soldiers[32].position+Vec3{0,0,1.7f},at+Vec3{0,0,1.3f}))blocked+=length/samples;
                }prior=end;
            }
            std::cout<<"D08 accepted route observer blocked fraction="<<(total?blocked/total:0)<<"\n";
            assert(total>0&&blocked/total>=.6f);screenChecked=true;
        }
        if(p.stage==DrillStage::AttackMove){moved|=std::any_of(p.movers.begin(),p.movers.end(),[](bool x){return x;});assert(p.action.everEstablished);}
        if(p.stage==DrillStage::AssaultLine||p.stage==DrillStage::Assault){Vec3 centre{};int n=0;for(int id=0;id<8;++id)if(p.elements[id]==1&&f.soldiers[id].Active()){centre=centre+f.soldiers[id].position;++n;}if(n){centre=centre*(1.f/n);auto a=p.action.base-p.action.objective,b=centre-p.action.objective;float degrees=std::abs(std::atan2(a.x*b.y-a.y*b.x,a.x*b.x+a.y*b.y))*180/3.14159265f;angle|=degrees>=40&&degrees<=60&&Distance(centre,p.action.objective)<=45;}}
        consolidated|=p.stage==DrillStage::Consolidate;
        for(int id=0;id<8;++id){const auto& s=f.soldiers[id];if(s.assignment.execution.rushSeconds>0&&(s.action==Action::Advance||s.action==Action::Retreat))longest=std::max(longest,f.time-s.assignment.activatedAt);}
    }
    for(const auto& e:screened.diagnostics->entries)reorganise+=e.squad==0&&e.kind=="drill_stage_advanced"&&e.reason.find("consolidation receipts: Reorganise once")!=std::string::npos;
    for(const auto& f:bare.frames){unsupported|=f.command[0].battleDrill.action.attack;for(const auto& r:f.soldiers[13].platoonReports)reported|=r.squad==0&&r.drillCause==TaskCause::Support;}
    std::cout<<"D08 covered_attack="<<accepted<<" moved="<<moved<<" physical_angle="<<angle<<" longest_rush="<<longest<<" consolidate="<<consolidated<<" reorganise="<<reorganise<<" bare_attack="<<unsupported<<" bare_report="<<reported<<"\n";
    assert(accepted&&moved&&angle&&longest<=5.05f&&consolidated&&reorganise==1&&!unsupported&&reported);
}
static void DrillD09(){
    auto c=DrillConfig();c.maxSeconds=100;auto gap=Simulate(c,{}, {},62),continuous=Simulate(c,{}, {},63);bool pause=false,resume=false,controlPause=false,protectedHold=true;int instance=-1,generation=-1;
    for(const auto& f:gap.frames){const auto& p=f.command[0].battleDrill;if(p.action.paused){if(!pause){instance=p.instance;generation=p.generation;}pause=true;for(int id=0;id<8;++id)if(p.elements[id]==1&&!p.movers[id])protectedHold&=ProtectedAt(gap.map,f.soldiers[id].position,p.action.objective,Stance::Crouched);}
        if(pause&&!p.action.paused&&p.action.established){resume=true;assert(p.instance==instance&&p.generation==generation);break;}}
    for(const auto& f:continuous.frames)controlPause|=f.command[0].battleDrill.action.paused;
    std::cout<<"D09 pause="<<pause<<" resume_same="<<resume<<" protected="<<protectedHold<<" continuous_pause="<<controlPause<<"\n";assert(pause&&resume&&protectedHold&&!controlPause);
}
static void DrillD10(){
    auto c=DrillConfig();c.maxSeconds=100;auto inside=Simulate(c,{}, {},64),outside=Simulate(c,{}, {},65);int attempts[2]={};bool committed[2]={},resolved=false;
    for(int k=0;k<2;++k){const auto& r=k?outside:inside;for(const auto& f:r.frames){const auto& p=f.command[0].battleDrill;committed[k]|=p.action.attack;if(!k)resolved|=p.action.alternates==1||p.blocked;}
        for(const auto& e:r.diagnostics->entries)attempts[k]+=e.squad==0&&e.kind=="drill_candidate"&&e.reason.find("single alternate")!=std::string::npos;}
    std::cout<<"D10 committed="<<committed[0]<<"/"<<committed[1]<<" alternatives="<<attempts[0]<<"/"<<attempts[1]<<" resolved="<<resolved<<"\n";assert(committed[0]&&committed[1]&&attempts[0]==1&&attempts[1]==0&&resolved);
}
static void DrillD11(){
    auto c=DrillConfig();c.maxSeconds=70;auto one=Simulate(c,{}, {},66),two=Simulate(c,{}, {},67);bool committed=false,stable=true,continued=false,failed=false,reorganised=false;
    auto initial=one.frames[1].command[0].battleDrill.elements;
    for(const auto& f:one.frames){const auto& p=f.command[0].battleDrill;if(f.time<35)committed|=p.action.attack;if(f.time>=35&&f.time<=40){for(int id=0;id<8;++id)if(f.soldiers[id].Active())stable&=p.elements[id]==initial[id];continued|=p.action.active&&!p.blocked;}}
    for(const auto& e:two.diagnostics->entries)if(e.squad==0&&e.time>=35){failed|=e.reason.find("InsufficientStrength")!=std::string::npos;reorganised|=e.reason.find("Reorganise:")!=std::string::npos;}
    std::cout<<"D11 committed="<<committed<<" frozen="<<stable<<" continued="<<continued<<" weak_failed="<<failed<<" reformed="<<reorganised<<"\n";assert(committed&&stable&&continued&&failed&&reorganised);
}
static void DrillD16(){
    auto c=DrillConfig();c.maxSeconds=140;auto superior=Simulate(c,{}, {},68),equal=Simulate(c,{}, {},69);bool retreat=false,alternate=false,complete=false,control=false;int old=-1;float rear=0;
    for(const auto& f:superior.frames){const auto& p=f.command[0].battleDrill;if(p.kind==BattleDrill::BreakContact){retreat=true;if(old>=0&&old!=p.movingElement)alternate=true;old=p.movingElement;rear=std::max(rear,-p.center.x-6);}
        complete|=DrillTrace(superior,"drill_stage_advanced","contact broken or rally reached");}
    for(const auto& f:equal.frames)control|=f.command[0].battleDrill.kind==BattleDrill::BreakContact;
    std::cout<<"D16 retreat="<<retreat<<" alternate="<<alternate<<" rear_distance="<<rear<<" complete="<<complete<<" equal_break="<<control<<"\n";assert(retreat&&alternate&&rear>=25&&complete&&!control);
}

static void DrillProjectedRushPositions(){
    Map map;map.halfWidth=50;map.halfHeight=50;
    map.obstacles.push_back({{10,0},{.6f,20},false,false,4});PrepareGeometry(map);
    Soldier member;member.id=1;member.squad=0;member.position={-8,8};member.health=100;
    GroupPositionQuery q;q.center=member.position;q.target={20,8};q.radius=3;q.anchors[1]={0,8};
    q.protectedPosition=false;q.safeEndpoint=true;q.maxPathLength=9.45f;q.preferCover=true;
    auto catalogue=QueryPositions(member,{member},map,q,0,nullptr);assert(!catalogue[0].valid);
    q.formation=true;auto projected=QueryPositions(member,{member},map,q,0,nullptr);assert(projected[0].valid);
    assert(projected[0].primary.cover.id==0&&Walkable(map,projected[0].primary.cover.shelter));
    assert(!ClearLine3D(map,projected[0].primary.cover.shelter+Vec3{0,0,1.3f},q.target+Vec3{0,0,1.7f}));
    q.maxPathLength=4;auto tooFar=QueryPositions(member,{member},map,q,0,nullptr);assert(!tooFar[0].valid);
    std::cout<<"Projected rush: screened open ground succeeds without catalogue cover; short path budget rejects\n";
}

static void DrillSprintContracts(){
    auto c=DrillConfig();c.maxSeconds=100;auto r=Simulate(c,{}, {},60);
    int moving=0,arrived=0;float longest=0;
    for(const auto& f:r.frames)for(const auto& s:f.soldiers){const auto& a=s.assignment;
        if(!s.Active()||a.drillInstance<=0||a.execution.rushSeconds<=0||a.execution.paused)continue;
        if(s.action==Action::Advance&&s.reason==Reason::BoundAdvance){++moving;assert(s.stance==Stance::Standing);}
        if(s.reason==Reason::AtWaypoint&&Distance(s.position,a.position)<=.7f){++arrived;assert(s.stance==Stance::Crouched);}
        if(a.teamPlan.route){float length=0;Vec3 previous=a.teamPlan.route->start;for(Vec3 at:a.teamPlan.route->points){length+=Distance(previous,at);previous=at;}longest=std::max(longest,length);assert(length<=15.001f);}
    }
    std::cout<<"Sprint contracts: standing movement="<<moving<<" crouched arrivals="<<arrived<<" maximum route="<<longest<<"\n";
    assert(moving>0&&arrived>0);
}

static void DrillCloseAssaultPositions(){
    auto c=DrillConfig();c.maxSeconds=20;auto r=Simulate(c,{}, {},60);
    const auto& f=r.frames.back();const auto& leader=f.soldiers[0];const auto& member=f.soldiers[1];
    auto knowledge=WithTracks(leader,f.time);assert(knowledge.contacts[32].known);
    GroupPositionQuery q;q.center=leader.position;q.coherenceRadius=200;q.target={70,0};
    q.formation=true;q.safeEndpoint=true;q.radius=.1f;q.anchors[1]={58,-7};
    auto unprotected=QueryPositions(leader,{member},r.map,q,f.time,nullptr);assert(!unprotected[0].valid);
    q.supportedObjective=q.target;q.supportedAssaultRadius=18;
    auto supported=QueryPositions(leader,{member},r.map,q,f.time,nullptr);assert(supported[0].valid);
    q.anchors[1]={45,-7};auto distant=QueryPositions(leader,{member},r.map,q,f.time,nullptr);assert(!distant[0].valid);
    q.anchors[1]={58,-7};q.supportedObjective={45,-7};
    auto otherThreat=QueryPositions(leader,{member},r.map,q,f.time,nullptr);assert(!otherThreat[0].valid);
    std::cout<<"Close assault positions: supported objective inside18 accepted; unsupported, distant and other-threat controls reject\n";
}
