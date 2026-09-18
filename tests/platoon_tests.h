#pragma once
#include "PlatoonTaskSim.h"
#include "TacticalRouteSim.h"
static Vec3 PlatoonCentre(const Frame& f,int squad){Vec3 sum{};int n=0;for(const auto& s:f.soldiers)if(s.squad==squad&&s.Active()&&!IsPlatoonStaff(s)){sum=sum+s.position;++n;}return n?sum*(1.f/n):Vec3{};}
static void PlatoonP04(){
    auto c=DrillConfig();c.maxSeconds=45;auto loss=Simulate(c,{}, {},76),control=Simulate(c,{}, {},77);float successor=-1,issued=-1;bool autonomous=false,controlChanged=false;
    for(const auto& f:loss.frames){if(f.time>=20&&f.time<23)for(int n=1;n<4;++n)autonomous|=f.command[n].battleDrill.initialized&&f.command[n].battleDrill.instance>0;
        if(f.time>=20&&f.platoon[0].leader==6&&successor<0)successor=f.time;}
    for(const auto& e:loss.events)if(e.actor==6&&e.kind==EventKind::OrderIssued&&e.time>=20&&e.text.find("Platoon task-tree directive:")==0&&issued<0)issued=e.time;
    for(const auto& f:control.frames)controlChanged|=f.platoon[0].leader!=5;
    std::cout<<"P04 autonomous="<<autonomous<<" successor="<<successor<<" directive="<<issued<<" control_changed="<<controlChanged<<"\n";assert(autonomous&&successor>=20&&issued>=successor&&issued<=28&&!controlChanged);
}
static void PlatoonP05(){
    auto c=DrillConfig();c.maxSeconds=100;auto weak=Simulate(c,{}, {},78),strong=Simulate(c,{}, {},79);bool withdrew=false,alternate=false,inside=true,away=true,control=false;int previous=-1;
    std::array<int,4> checkedIntent{};std::array<Vec3,4> checkedRally{};float minimumAway=1e9f;
    float strongestBelief=0;for(const auto& e:weak.diagnostics->entries)if(e.kind=="mental_map"&&e.soldier==5&&e.time<=20){float believed=0;for(const auto& cell:e.regions)believed+=cell.estimate+cell.automaticWeapons*1.5f;strongestBelief=std::max(strongestBelief,believed);}
    int strength=0;for(const auto& soldier:weak.frames.front().soldiers)if(soldier.team==0&&soldier.Active()&&!IsPlatoonStaff(soldier))++strength;
    std::cout<<"P05 belief_by20="<<strongestBelief<<" reported_strength_bound="<<strength<<" ratio="<<(strongestBelief?strength/strongestBelief:100)<<"\n";
    assert(strongestBelief>2*strength);
    for(const auto& f:weak.frames){for(int squad=0;squad<4;++squad){const auto& a=f.platoon[0].tasks.assigned[squad];if(a.task!=PlatoonTask::RetreatThere)continue;
        withdrew=true;inside&=a.position.x>=-weak.map.halfWidth&&a.position.x<=weak.map.halfWidth&&a.position.y>=-weak.map.halfHeight&&a.position.y<=weak.map.halfHeight;
        // Validate a rally when accepted as a new intent/objective, not after the squad has walked to it.
        if(checkedIntent[squad]!=a.intent.id||Distance(checkedRally[squad],a.position)>.01f){
            checkedIntent[squad]=a.intent.id;checkedRally[squad]=a.position;
            const Frame* issue=&weak.frames.front();for(const auto& before:weak.frames){if(before.time>a.issuedAt)break;issue=&before;}
            const Vec3 origin=PlatoonCentre(*issue,squad),fromEnemy=origin-a.contact.position,displacement=a.position-origin;
            const float length=Length(fromEnemy);const float projection=length>0?(displacement.x*fromEnemy.x+displacement.y*fromEnemy.y)/length:-1;
            minimumAway=std::min(minimumAway,projection);away&=a.enemy>=0&&a.contact.known&&projection>=40;
        }}
        const auto& p=f.command[0].battleDrill;if(p.kind==BattleDrill::Withdraw){if(previous>=0&&previous!=p.movingElement)alternate=true;previous=p.movingElement;}}
    for(const auto& f:strong.frames)for(const auto& a:f.platoon[0].tasks.assigned)control|=a.task==PlatoonTask::RetreatThere;
    std::cout<<"P05 withdraw="<<withdrew<<" alternate="<<alternate<<" rally_in_map="<<inside<<" minimum_away="<<minimumAway<<" strong_withdraw="<<control<<"\n";assert(withdrew&&alternate&&inside&&away&&!control);
}
static void PlatoonP06(){
    auto c=DrillConfig();c.maxSeconds=165;auto live=Simulate(c,{}, {},80),disrupted=Simulate(c,{}, {},81);int renewals=0;bool bounded=true,executed=true;
    for(const auto* record:{&live,&disrupted})for(const auto& f:record->frames)for(const auto& s:f.soldiers)if(s.Active()&&s.platoonOrder.taskNode){const auto& a=s.platoonOrder;bounded&=a.expiresAt-a.issuedAt>=60&&a.expiresAt-a.issuedAt<=90;
        if(f.command[s.squad].battleDrill.platoonArea)executed&=f.time-a.issuedAt<=90;}
    for(const auto& e:live.diagnostics->entries)renewals+=e.kind=="platoon_task"&&e.reason.find("renew committed")!=std::string::npos;
    std::cout<<"P06 renewals="<<renewals<<" lifetimes_60_90="<<bounded<<" no_stale_execution="<<executed<<"\n";assert(renewals>0&&bounded&&executed);
}
static void PlatoonP07(){
    auto c=DrillConfig();c.maxSeconds=120;auto march=Simulate(c,{}, {},82),contact=Simulate(c,{}, {},83);
    auto front=[](const Frame& f){float x=-1e9f;for(int n=0;n<4;++n)x=std::max(x,PlatoonCentre(f,n).x);return x;};
    const float displacement=front(march.frames.back())-front(march.frames.front());
    bool secure=false,known=false,forbidden=false;std::array<int,4> directives{};std::array<bool,4> fightHere{};
    float nearest=1e9f;
    for(const auto& f:march.frames){
        for(const auto& s:f.soldiers)if(s.team==0&&s.Active()){
            for(const auto& t:s.contacts)known|=t.known;
            for(const auto& enemy:f.soldiers)if(enemy.team==1&&enemy.Active())nearest=std::min(nearest,Distance(s.position,enemy.position));
        }
        if(!known)for(const auto& a:f.platoon[0].tasks.assigned)secure|=a.task==PlatoonTask::Consolidate;
    }
    for(const auto& e:march.events)if(e.actor>=0&&e.actor<32&&e.kind==EventKind::OrderIssued&&e.text.find("Platoon task-tree directive:")==0&&e.target>=0&&e.target<32)++directives[e.target/8];
    // Intentional plan015 review correction: the old predicate required removed platoon roles.
    for(const auto& f:contact.frames)for(int squad=0;squad<4;++squad){const auto& a=f.platoon[0].tasks.assigned[squad];
        forbidden|=a.task==PlatoonTask::Support||a.task==PlatoonTask::FlankNorth||a.task==PlatoonTask::FlankSouth||a.task==PlatoonTask::Reserve||a.task==PlatoonTask::Merge||a.task==PlatoonTask::Consolidate;
        if(a.enemy>=0){
            fightHere[squad]=fightHere[squad]||(a.task==PlatoonTask::FightHere&&a.contact.known);
            forbidden|=a.supportSquad>=0||a.supportSoldier>=0||bool(a.corridor)||a.hasArea||a.liftFire;
        }
    }
    const bool allFight=std::all_of(fightHere.begin(),fightHere.end(),[](bool yes){return yes;});
    const int most=*std::max_element(directives.begin(),directives.end());
    std::cout<<"P07 displacement="<<displacement<<" nearest_enemy="<<nearest<<" known="<<known<<" secure="<<secure<<" max_directives="<<most<<" control_four_fight_here="<<allFight<<" forbidden_role_or_binding="<<forbidden<<"\n";
    assert(displacement>=100&&nearest>200&&!known&&!secure&&most<=6&&allFight&&!forbidden);
}
static bool RadioTrace(const Record& r,const std::string& kind,const std::string& reason,int squad=-1){
    return std::any_of(r.diagnostics->entries.begin(),r.diagnostics->entries.end(),[&](const auto& e){return e.kind==kind&&e.reason.find(reason)!=std::string::npos&&(squad<0||e.squad==squad);});
}
static float FirstRadio(const Record& r,SquadBroadcastKind kind,int squad){
    float first=-1;for(const auto& f:r.frames)for(const auto& m:f.command[squad].battleDrill.broadcasts)if(m.kind==kind&&(first<0||m.sentAt<first))first=m.sentAt;return first;
}
static void PlatoonQ01(){
    auto c=DrillConfig();c.maxSeconds=180;auto live=Simulate(c,{}, {},86),bare=Simulate(c,{}, {},87);
    bool intent[2]={},choice[2]={},closure[2]={},roles=false,support=false;
    for(const auto& f:live.frames)for(int n=0;n<2;++n){const auto& a=f.platoon[0].tasks.assigned[n];const auto& p=f.command[n].battleDrill;
        intent[n]|=a.task==PlatoonTask::FightHere&&a.enemy>=0;choice[n]|=p.kind==BattleDrill::SquadAttack||p.action.closureFallback;
        roles|=a.supportSquad>=0||a.supportSoldier>=0||bool(a.corridor)||(a.enemy>=0&&a.hasArea);
        support|=p.radioFixing;
    }
    for(const auto& f:bare.frames)for(int n=0;n<2;++n)closure[n]|=f.command[n].battleDrill.action.closureFallback&&f.command[n].battleDrill.technique==MovementTechnique::BoundingOverwatch;
    std::cout<<"Q01 intents="<<intent[0]<<intent[1]<<" own_choice="<<choice[0]<<choice[1]<<" support="<<support<<" roles="<<roles<<" bare_closure="<<closure[0]<<closure[1]<<"\n";
    assert(intent[0]&&intent[1]&&choice[0]&&choice[1]&&support&&!roles&&closure[0]&&closure[1]);
}
static void PlatoonQ02(){
    auto c=DrillConfig();c.maxSeconds=240;auto live=Simulate(c,{}, {},88),rush=Simulate(c,{}, {},89);
    float fixed=FirstRadio(live,SquadBroadcastKind::Fixing,0),assault=FirstRadio(live,SquadBroadcastKind::Assaulting,1),phase=FirstRadio(live,SquadBroadcastKind::PhaseLine,1),lift=-1;
    for(const auto& e:live.diagnostics->entries)if(e.kind=="radio_lift"&&e.squad==0&&lift<0)lift=e.time;
    const bool opportunity=RadioTrace(live,"drill_accepted","radio opportunity",1),control=FirstRadio(rush,SquadBroadcastKind::Assaulting,1)>=0;
    std::cout<<"Q02 fixing="<<fixed<<" assault="<<assault<<" opportunity="<<opportunity<<" phase="<<phase<<" lift="<<lift<<" rush_assault="<<control<<"\n";
    assert(fixed>=0&&assault>=fixed+c.reportDelay&&opportunity&&phase>=assault&&lift>=phase&&lift-phase<=c.reportDelay+1&&!control);
}
static void PlatoonQ03(){
    auto c=DrillConfig();c.maxSeconds=240;auto live=Simulate(c,{}, {},90),one=Simulate(c,{}, {},91);
    int sides[2]={};float first=-1;int lead=-1;bool lift=false,lanes=false;int crossed=0;
    for(const auto& f:live.frames)for(int squad=1;squad<=2;++squad){
        for(const auto& m:f.command[squad].battleDrill.broadcasts)if(m.kind==SquadBroadcastKind::Assaulting){sides[squad-1]=m.side;if(first<0||m.sentAt<first){first=m.sentAt;lead=squad;}}
        for(const auto& unit:f.soldiers)if(unit.squad==squad)lanes|=!unit.assignment.teamPlan.friendlyAssaultLanes.empty();
    }
    for(const auto& e:live.diagnostics->entries)if(e.kind=="radio_lift"&&e.squad==0)lift=true;
    for(const auto& shot:live.shots)if(shot.owner/8==1||shot.owner/8==2){
        const Frame* frame=&live.frames.front();for(const auto& f:live.frames){if(f.time>shot.time)break;frame=&f;}
        const auto& unit=frame->soldiers[shot.owner];
        for(const auto& lane:unit.assignment.teamPlan.friendlyAssaultLanes){Vec3 ray=shot.aimedAt-unit.position,other=lane.target-lane.origin,offset=lane.origin-unit.position;float den=ray.x*other.y-ray.y*other.x;if(std::abs(den)<1e-5f)continue;
            float t=(offset.x*other.y-offset.y*other.x)/den,u=(offset.x*ray.y-offset.y*ray.x)/den;
            crossed+=t>0&&t<1&&u>0&&u<1&&Distance(unit.position+ray*t,lane.target)>12;}
    }
    const bool control=RadioTrace(one,"drill_accepted","radio opportunity",2);
    std::cout<<"Q03 sides="<<sides[0]<<","<<sides[1]<<" lead="<<lead<<" lift="<<lift<<" lanes="<<lanes<<" crossed="<<crossed<<" unscreened_join="<<control<<"\n";
    assert(sides[0]*sides[1]<0&&lead>=1&&lift&&lanes&&crossed==0&&!control);
}
static void PlatoonQ04(){
    auto c=DrillConfig();c.maxSeconds=120;auto near=Simulate(c,{}, {},92),far=Simulate(c,{}, {},93);
    const float need=FirstRadio(near,SquadBroadcastKind::NeedSupport,0);float help=-1;bool delivered=false,ordered=false,received=false;
    for(const auto& e:near.diagnostics->entries)if(e.squad==1&&e.kind=="drill_accepted"&&e.reason.find("radio NeedSupport")!=std::string::npos&&help<0)help=e.time;
    for(const auto& shot:near.shots)if(help>=0&&shot.owner/8==1&&shot.time>=help&&shot.time<=need+60&&Distance(shot.aimedAt,{70,0})<18)delivered=true;
    for(const auto& f:far.frames){for(const auto& a:f.platoon[0].tasks.assigned)ordered|=a.task==PlatoonTask::HelpSquad&&a.helpSquad==0;
        for(const auto& unit:f.soldiers)if(unit.squad==1)received|=unit.platoonOrder.task==PlatoonTask::HelpSquad&&unit.platoonOrder.helpSquad==0;}
    std::cout<<"Q04 need="<<need<<" neighbour_help="<<help<<" delivered_by60="<<delivered<<" distant_order="<<ordered<<" distant_receipt="<<received<<"\n";
    assert(need>=0&&help>=need+c.reportDelay&&help<=need+60&&delivered&&ordered&&received);
}
static void PlatoonQ05(){
    auto c=DrillConfig();c.maxSeconds=65;
    for(int encounter:{94,95,96}){auto r=Simulate(c,{}, {},encounter);int helps=0,opportunities=0;bool receivedNeed=false,receivedFix=false;
        for(const auto& e:r.diagnostics->entries)if(e.squad==1){
            helps+=e.kind=="drill_accepted"&&e.reason.find("radio NeedSupport")!=std::string::npos;
            opportunities+=e.kind=="radio_no_route"||(e.kind=="drill_accepted"&&e.reason.find("radio opportunity")!=std::string::npos);
        }
        for(const auto& f:r.frames)for(const auto& message:f.soldiers[8].squadRadio){receivedNeed|=message.kind==SquadBroadcastKind::NeedSupport;receivedFix|=message.kind==SquadBroadcastKind::Fixing;}
        std::cout<<"Q05 encounter="<<encounter<<" need="<<receivedNeed<<" fixing="<<receivedFix<<" help_accepts="<<helps<<" opportunity_evaluations="<<opportunities<<"\n";
        if(encounter==94)assert(receivedNeed&&receivedFix&&helps==1&&opportunities==1);
        if(encounter==95)assert(receivedNeed&&!receivedFix&&helps==1&&opportunities==0);
        if(encounter==96)assert(!receivedNeed&&receivedFix&&helps==0&&opportunities==1);
    }
}
static void RadioRetentionPin(){
    auto c=DrillConfig();c.maxSeconds=30;auto r=Simulate(c,{}, {},94);
    const Frame* recorded=nullptr;SquadBroadcast fixing;bool found=false;
    for(const auto& f:r.frames)if(f.command[1].battleDrill.action.helping){
        for(const auto& message:f.soldiers[8].squadRadio)if(message.kind==SquadBroadcastKind::Fixing){recorded=&f;fixing=message;found=true;break;}
        if(found)break;
    }
    assert(recorded&&fixing.receivedAt>=fixing.sentAt+c.reportDelay);
    Frame f=*recorded;auto& leader=f.soldiers[8];auto& p=f.command[1].battleDrill;
    // Review-authorised narrow state pin: retain a recorded received broadcast,
    // establish exhausted help at the function boundary, then call real policy.
    leader.squadRadio={fixing};p.radioLaneRevision=0;p.radioLeadSquad=-1;
    p.kind=BattleDrill::SupportByFire;p.stage=DrillStage::SupportHold;
    p.action.active=true;p.action.helping=true;p.action.supportSearchTried=true;p.action.supportSearchExhausted=true;
    p.blocked=true;p.exhausted=true;p.lastRejection="support_position_exhausted: focused retention pin";
    p.radioConsumed[int(fixing.kind)][fixing.sender]=0;
    const auto before=p;const auto digest=[&](const DrillPlan& plan){Record probe;probe.config=c;probe.frames={f};probe.frames[0].command[1].battleDrill=plan;return GameplayDigest(probe);};
    const auto original=digest(before);std::vector<Soldier> members;
    for(const auto& soldier:f.soldiers)if(soldier.squad==1&&soldier.Active()&&!IsPlatoonStaff(soldier))members.push_back(soldier);
    Diagnostics diagnostics;const bool accepted=TestRadioAction(leader,leader,members,r.map,c,p,&diagnostics,f.time);
    int rejected=0;for(const auto& e:diagnostics.entries)rejected+=e.kind=="radio_no_route";
    assert(!accepted&&rejected==1&&p.radioConsumed[int(fixing.kind)][fixing.sender]==fixing.serial);
    auto retained=p;retained.radioConsumed=before.radioConsumed;
    assert(digest(retained)==original&&p.action.route==before.action.route);
    assert(p.action.helping&&p.action.supportSearchExhausted&&p.lastRejection==before.lastRejection&&p.instance==before.instance&&p.generation==before.generation);
    const size_t entries=diagnostics.entries.size();assert(!TestRadioAction(leader,leader,members,r.map,c,p,&diagnostics,f.time+.1f));
    assert(diagnostics.entries.size()==entries);retained=p;retained.radioConsumed=before.radioConsumed;assert(digest(retained)==original);
    std::cout<<"Radio retention: recorded Fixing serial="<<fixing.serial<<" received="<<fixing.receivedAt<<" exhausted help instance="<<p.instance<<" rejection=1 live_state_digest_unchanged=1 repeat_evaluations=0\n";
}
static void PlatoonQ06(){
    auto c=DrillConfig();c.maxSeconds=85;auto loss=Simulate(c,{}, {},99),control=Simulate(c,{}, {},100);
    for(const auto* r:{&loss,&control}){
        float attack=FirstRadio(*r,SquadBroadcastKind::Assaulting,0),retire=-1;bool held=false,incoming=false,casualty=false;
        for(const auto& f:r->frames)if(attack>=0&&f.time>=attack&&f.time<attack+11.9f){
            const auto& p=f.command[0].battleDrill;held|=f.time>=attack+8&&p.kind==BattleDrill::SquadAttack;
            incoming|=p.effectiveFire;
        }
        for(const auto& e:r->diagnostics->entries)if(e.squad==0&&e.kind=="assault_break_evidence"){
            if(retire<0)retire=e.time;
            casualty|=e.reason=="new assault-element casualty";
        }
        std::cout<<"Q06 encounter="<<r->encounter<<" attack="<<attack<<" held8="<<held<<" incoming="<<incoming<<" new_evidence_retire="<<retire<<" casualty="<<casualty<<"\n";
        assert(attack>=0&&held&&incoming&&(retire<0||retire>=attack+12));
        if(r==&loss)assert(casualty&&retire<=attack+17);else assert(!casualty);
    }
}
static void PlatoonQ07(){
    auto c=DrillConfig();c.maxSeconds=110;
    for(int encounter:{101,102,103}){
        auto r=Simulate(c,{}, {},encounter);float call=FirstRadio(r,SquadBroadcastKind::NeedSupport,0),received=-1,choice=-1;bool fallback=false;
        for(const auto& f:r.frames)for(const auto& message:f.soldiers[f.command[0].leader>=0?f.command[0].leader:0].squadRadio)
            if(message.kind==SquadBroadcastKind::Fixing&&message.squad==1&&received<0)received=message.receivedAt;
        for(const auto& e:r.diagnostics->entries)if(e.squad==0&&e.time>=received&&received>=0&&
            ((e.kind=="drill_accepted"&&e.reason.find("radio opportunity")!=std::string::npos)||e.reason.find("answered caller: no covered flank")!=std::string::npos)){
            if(choice<0)choice=e.time;
            fallback|=e.reason.find("answered caller")!=std::string::npos;
        }
        std::cout<<"Q07 encounter="<<encounter<<" call="<<call<<" received_fixing="<<received<<" choice="<<choice<<" fallback="<<fallback<<"\n";
        assert(call>=0);
        if(encounter==102)assert(received<0&&choice<0);else assert(received>=call&&choice>=received&&choice<=received+5);
        if(encounter==103)assert(fallback);
    }
}
static void PlatoonQ08(){
    auto c=DrillConfig();c.maxSeconds=25;auto record=Simulate(c,{}, {},56);const Frame* selected=nullptr;
    for(const auto& f:record.frames){const auto& p=f.command[0].battleDrill;
        if(p.action.active&&p.kind==BattleDrill::SupportByFire&&p.acceptedDirective.intent.purpose==GoalPurpose::Support&&
            Distance(p.action.objective,p.acceptedDirective.intent.objective)<=1){selected=&f;break;}}
    assert(selected);
    for(bool changed:{false,true}){
        Frame frame=*selected;auto& cmd=frame.command[0];const int receiver=cmd.leader;auto& leader=frame.soldiers[receiver];
        leader.squadRadio.clear(); // Isolate a received command from unrelated volunteering.
        auto order=cmd.battleDrill.acceptedDirective;order.serial+=1000;order.intent.id+=1000;
        order.issuedAt=frame.time;order.expiresAt=frame.time+75;order.intent.expiresAt=order.expiresAt;
        if(changed)order.intent.objective.y+=45;
        PlatoonRuntime transport;transport.nextReport.fill(1e9f);transport.nextRelay.fill(1e9f);
        PlatoonMessage packet;packet.order=true;packet.sender=order.issuer;packet.recipient=receiver;
        packet.arrives=frame.time+c.reportDelay;packet.directive=order;transport.messages.push_back(packet);
        Diagnostics diagnostics;ReactionRuntime reactions;reactions.diagnostics=&diagnostics;std::vector<Event> events;
        frame.time+=c.reportDelay;UpdatePlatoon(frame,record.map,c,transport,reactions,events);
        frame.time+=2;ProcessReactions(frame,reactions,events);assert(leader.platoonOrder.serial==order.serial);
        const int instance=cmd.battleDrill.instance;cmd.battleDrill.directiveBoundary=true;
        std::vector<Soldier> friends;for(const auto& s:frame.soldiers)if(s.squad==0)friends.push_back(s);
        UpdateDrillPlan(leader,friends,record.map,c,{}, {},cmd,&diagnostics,frame.time);
        bool retained=false;for(const auto& e:diagnostics.entries)retained|=e.kind=="support_directive_retained";
        std::cout<<"Q08 changed="<<changed<<" instance="<<instance<<"->"<<cmd.battleDrill.instance<<" retained="<<retained<<"\n";
        if(changed)assert(cmd.battleDrill.instance>instance&&!retained);else assert(cmd.battleDrill.instance==instance&&retained);
    }
}
static void PlatoonQ09(){
    auto c=DrillConfig();c.maxSeconds=25;auto shared=Simulate(c,{}, {},79),distinct=Simulate(c,{}, {},78);
    int sharedMax=0,distinctMax=0;bool overlapping=false;
    for(const auto& f:shared.frames){const auto& leader=f.soldiers[5];auto known=WithTracks(leader,f.time);int unique=0;
        for(const auto& contact:known.contacts)unique+=contact.known;
        int observations=0;for(const auto& cell:BuildMentalMap(leader,f.time))observations+=cell.observations;
        assert(observations==unique);sharedMax=std::max(sharedMax,observations);
        std::array<int,UnitCount> reports{};for(const auto& squad:leader.platoonReports)for(const auto& contact:squad.observations)
            if(contact.contact.known&&contact.track>=0)overlapping|=++reports[contact.track]>=2;
    }
    for(const auto& f:distinct.frames){int n=0;for(const auto& cell:BuildMentalMap(f.soldiers[5],f.time))n+=cell.observations;distinctMax=std::max(distinctMax,n);}
    std::cout<<"Q09 shared="<<sharedMax<<" overlapping_reports="<<overlapping<<" distinct="<<distinctMax<<"\n";
    assert(overlapping&&sharedMax==4&&distinctMax>sharedMax);
}

static void PlatoonTests(const std::string& name){std::cout.setf(std::ios::unitbuf);
        if(name=="all"||name=="Q06")PlatoonQ06();
    if(name=="all"||name=="Q07")PlatoonQ07();
    if(name=="all"||name=="Q08")PlatoonQ08();
    if(name=="all"||name=="Q09")PlatoonQ09();
    if(name=="all"||name=="Q01")PlatoonQ01();
    if(name=="all"||name=="Q02")PlatoonQ02();
    if(name=="all"||name=="Q03")PlatoonQ03();
    if(name=="all"||name=="Q04")PlatoonQ04();
    if(name=="all"||name=="Q05")PlatoonQ05();
    if(name=="all"||name=="retention")RadioRetentionPin();
    if(name=="all"||name=="P04")PlatoonP04();
    if(name=="all"||name=="P05")PlatoonP05();
    if(name=="all"||name=="P06")PlatoonP06();
    if(name=="all"||name=="P07")PlatoonP07();
}
