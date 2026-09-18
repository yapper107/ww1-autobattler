#include "Diagnostics.h"
#include "DrillSim.h"
#include "CommandSim.h"
#include "TacticalRouteSim.h"
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <stdexcept>
namespace army {
std::string BuildIdentifier(){
#ifdef _WIN32
    return std::string(ARMY_BUILD_ID)+"-windows";
#else
    return std::string(ARMY_BUILD_ID)+"-linux";
#endif
}
double DiagnosticSeconds(DiagnosticClock::time_point s){return std::chrono::duration<double>(DiagnosticClock::now()-s).count();}
void DecisionAlternatives::Add(Vec3 p,float score,const char* reason){choices.push_back({p,score,reason});std::stable_sort(choices.begin(),choices.end(),[](const Alternative&a,const Alternative&b){return a.score<b.score;});if(choices.size()>3)choices.resize(3);}
bool DetailedFor(const Diagnostics* d,int id,int squad,float t){return d&&d->options.enabled&&d->options.detailed&&(d->options.soldier<0||d->options.soldier==id)&&(d->options.squad<0||d->options.squad==squad)&&t>=d->options.from&&t<=d->options.to;}
static const char* Phase(const SquadCommand& c){return SquadPhaseName(c.phase);}
static void Knowledge(TraceEntry& e,const Soldier& s,float t){const auto k=WithTracks(s,t);for(int i=0;i<UnitCount;++i)if((k.contacts[i].known&&t-k.contacts[i].observedAt<=120)||t-k.contacts[i].clearedAt<10)e.knowledge.push_back({i,s.contacts[i].known&&s.contacts[i].observedAt>=k.contacts[i].observedAt,k.contacts[i]});for(const auto& report:s.movementReports)if(report.soldier>=0&&t-report.observedAt<8)e.movementReports.push_back(report);for(const auto& report:s.deliveries)if(report.shooter>=0&&t-report.observedAt<(report.history.empty()?6.f:10.f))e.deliveries.push_back(report);}
void TraceSoldier(Diagnostics& d,const Soldier& s,const SquadCommand& c,const Map& m,const Tactics& tactics,float time,const DecisionAlternatives* alternatives){
    if(!d.options.enabled)return;
    auto& previous=d.previous[s.id];const auto& p=previous.state;
    bool change=!previous.valid||p.order!=s.assignment.serial||p.action!=int(s.action)||p.stance!=int(s.stance)||p.assigned!=tactics.assigned||
        (tactics.assigned&&Distance(p.cover,tactics.shelter)>0.5f)||Distance(p.goal,s.goal)>0.5f||p.blocked!=s.holdingFire||p.alive!=s.Active();
    bool detail=alternatives&&DetailedFor(&d,s.id,s.squad,time)&&!alternatives->choices.empty();
    if(!change&&!detail&&time-previous.heartbeat<5)return;
    TraceEntry e;e.id=d.nextId++;e.parent=d.lastDecision[s.id]?d.lastDecision[s.id]:d.lastPlan[s.squad];
    e.routeId=s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0;e.routeStage=c.routeStage;
    e.geometry=m.revision;e.coverId=tactics.coverId;
    e.planDecision=d.lastPlan[s.squad];
    e.execution=s.assignment.execution;e.peek=s.assignment.hasSlot?s.assignment.slot.peek:s.assignment.position;e.sector=s.assignment.sector;
    e.supportProgress=s.supportProgress;e.supportDeadline=c.accepted.reconsiderAt;
    e.injuries=c.accepted.injuries;e.stageDeadline=c.accepted.executionDeadline;e.supportThreat=c.accepted.supportThreat;e.friendlyIntent=s.supportSector.friendlies;
    e.support=CommandSupport(c,s.cognition);e.supportSquad=e.support<0?-1:e.support/SquadSize;e.supportDeployed=c.accepted.supportDeployed;e.supportUseful=c.accepted.supportUseful;
    if(s.cognition)for(const auto& area:s.coverage)if(area.observer>=0)e.coverage.push_back(area);
    e.taskId=s.assignment.id;e.taskStatus=int(s.assignment.status);e.taskCause=int(s.assignment.cause);e.taskSequence=s.assignment.statusSequence;e.taskSubject=s.id;e.taskTarget=s.assignment.target;e.taskObservedAt=s.assignment.statusAt;
    e.time=time;e.soldier=s.id;e.squad=s.squad;e.order=s.assignment.serial;e.issuer=s.assignment.issuer;e.plan=c.planId;
    if(e.order!=p.order&&d.issuedOrders.count(e.order))e.parent=d.receivedOrders.count(e.order)?d.receivedOrders[e.order]:d.issuedOrders[e.order];
    e.kind=!previous.valid?"initial":!s.Active()?"casualty":p.order!=e.order?"order_activated":
        tactics.assigned&&p.assigned&&Distance(p.cover,tactics.shelter)>0.5f?"cover_changed":p.assigned&&!tactics.assigned?"cover_released":
        Distance(s.position,s.goal)<0.75f&&Distance(p.position,p.goal)>=0.75f?"arrived":change?"execution":"heartbeat";
    e.reason=ReasonText(s.reason);e.phase=Phase(c);e.position=s.position;e.goal=s.goal;e.cover=tactics.shelter;e.assigned=tactics.assigned;
    e.nearShelter=tactics.assigned&&std::min(Distance(s.position,tactics.shelter),Distance(s.position,tactics.peek))<1.5f;
    e.movementBlock=int(c.movementBlock.reason);e.role=int(s.role);e.supportReady=c.movementBlock.reason==MoveBlock::None&&(c.supportUseful||c.coveringReady);e.blocked=s.holdingFire;e.action=int(s.action);e.task=int(s.assignment.task);e.stance=int(s.stance);e.alive=s.Active();
    e.rounds=s.rounds;e.aim=s.aim;e.suppression=s.understoodSuppression;e.health=s.understoodHealth;e.danger=c.danger;
    e.stats=s.stats;e.maxHealth=s.maxHealth;e.weapon=s.gun.name;e.magazine=s.magazineRemaining;
    {const Vec3 sway=SwayOffset(s,time);e.swayYaw=sway.x;e.swayPitch=sway.y;e.recoilYaw=s.recoil.x;e.recoilPitch=s.recoil.y;}
    e.orderGoal=s.assignment.position;e.orderIssued=s.assignment.issuedAt;e.orderReceived=s.assignment.receivedAt;Knowledge(e,s,time);
    e.protectedPosition=!e.knowledge.empty();for(const auto& ct:e.knowledge)if(!ProtectedAt(m,s.position,ct.contact.position,s.stance))e.protectedPosition=false;
    if(alternatives)e.alternatives=alternatives->choices;
    d.lastDecision[s.id]=e.id;previous.valid=true;previous.state=e;previous.heartbeat=time;d.entries.push_back(std::move(e));
}
void TraceProposal(Diagnostics* d,const Soldier& s,const SquadCommand& c,const Map& map,float time,const char* kind,const std::string& reason){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.parent=d->lastPlan[s.squad];e.soldier=s.id;e.squad=s.squad;e.time=time;
    e.routeId=c.route?c.route->id:0;e.routeStage=c.routeStage;
    if(c.route&&std::none_of(d->routes.begin(),d->routes.end(),[&](const auto& r){return r==c.route;}))d->routes.push_back(c.route);
    e.geometry=map.revision;e.kind=kind;e.reason=reason;e.phase=Phase(c);e.position=s.position;e.goal=c.hasWaypoint?c.waypoint:c.mission;e.plan=c.planId;e.movementBlock=int(c.movementBlock.reason);e.role=int(s.role);e.supportReady=c.movementBlock.reason==MoveBlock::None&&(c.supportUseful||c.coveringReady);e.danger=c.danger;
    Knowledge(e,s,time);if(e.kind=="proposal_accepted"||e.kind=="plan_phase"||e.kind=="movement_revised"||e.kind=="movement_resumed"){d->lastPlan[s.squad]=e.id;d->activePlanIds[s.squad]=c.planId;}d->entries.push_back(std::move(e));
}
void TraceOrder(Diagnostics* d,const Soldier& s,const Assignment& a,float time,const char* kind){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=s.id;e.squad=s.squad;e.issuer=a.issuer;e.order=a.serial;e.kind=kind;e.reason=TaskName(a.task);if(a.intent.id)e.reason+="; goal="+std::to_string(a.intent.id)+" purpose="+std::to_string(int(a.intent.purpose));
    e.execution=a.execution;e.peek=a.hasSlot?a.slot.peek:a.position;e.sector=a.sector;
    e.intent=a.intent;e.taskTarget=a.target;e.geometry=a.geometry;e.taskId=a.id;e.taskStatus=int(a.status);e.taskCause=int(a.cause);e.taskSequence=a.statusSequence;e.taskSubject=s.id;e.taskObservedAt=a.statusAt;
    e.parent=d->issuedOrders.count(a.serial)?d->issuedOrders[a.serial]:d->lastPlan[s.squad];e.planDecision=d->lastPlan[s.squad];
    e.plan=d->activePlanIds[s.squad];e.routeId=a.teamPlan.route?a.teamPlan.route->id:0;e.goal=a.position;e.position=s.position;e.orderIssued=a.issuedAt;e.orderReceived=a.receivedAt;Knowledge(e,s,time);
    if(e.kind=="order_issued")d->issuedOrders[a.serial]=e.id;
    if(e.kind=="order_received")d->receivedOrders[a.serial]=e.id;
    d->entries.push_back(std::move(e));
}
void TracePath(Diagnostics* d,const Soldier& s,const Map& map,float time,const std::vector<Vec3>& path,const char* kind,uint64_t route){
    if(!d||!d->options.enabled||Distance(s.position,s.goal)<.75f)return;
    PathEvidence e;e.decision=d->lastDecision[s.id];e.geometry=map.revision;e.route=route;e.time=time;
    e.soldier=s.id;e.squad=s.squad;e.order=s.assignment.serial;e.start=s.position;e.goal=s.goal;
    e.kind=kind;e.status=path.empty()?"no_executable_path":"executable";e.points=path;d->paths.push_back(std::move(e));
}
static std::string Q(const std::string& s){std::ostringstream o;o<<'"';for(unsigned char c:s){if(c=='"'||c=='\\')o<<'\\'<<c;else if(c=='\n')o<<"\\n";else if(c<32)o<<"\\u"<<std::hex<<std::setw(4)<<std::setfill('0')<<int(c)<<std::dec;else o<<c;}o<<'"';return o.str();}
static void V(std::ostream& o,Vec3 v){o<<'['<<v.x<<','<<v.y<<','<<v.z<<']';}
std::string TraceJson(const TraceEntry& e){std::ostringstream o;o<<std::setprecision(8);o<<"{\"id\":"<<e.id<<",\"parent\":"<<e.parent<<",\"plan_decision\":"<<e.planDecision<<",\"time\":"<<e.time<<",\"soldier\":"<<e.soldier<<",\"squad\":"<<e.squad<<",\"order\":"<<e.order<<",\"issuer\":"<<e.issuer<<",\"plan\":"<<e.plan<<",\"geometry\":"<<e.geometry<<",\"kind\":"<<Q(e.kind)<<",\"reason\":"<<Q(e.reason)<<",\"phase\":"<<Q(e.phase);
    o<<",\"task_id\":"<<e.taskId<<",\"task_status\":"<<e.taskStatus<<",\"task_cause\":"<<e.taskCause<<",\"task_sequence\":"<<e.taskSequence<<",\"task_subject\":"<<e.taskSubject<<",\"task_target\":"<<e.taskTarget<<",\"task_observed_at\":"<<e.taskObservedAt<<",\"task_remaining\":"<<e.taskRemaining;
    o<<",\"completion\":"<<int(e.execution.completion)<<",\"execution_method\":"<<e.execution.method<<",\"execution_stage\":"<<e.execution.stage<<",\"execution_generation\":"<<e.execution.generation<<",\"execution_deadline\":"<<e.execution.deadline<<",\"execution_paused\":"<<e.execution.paused;
    o<<",\"rifle_support\":"<<e.execution.rifleSupport<<",\"execution_support_threat\":"<<e.execution.supportThreat;
    o<<",\"prepare_deadline\":"<<e.prepareDeadline<<",\"unavailable_support\":[";for(size_t n=0;n<e.supportFailures.size();++n){const auto& loss=e.supportFailures[n];if(n)o<<",";o<<"{\"soldier\":"<<loss.soldier<<",\"observed_at\":"<<loss.observedAt<<",\"cause\":"<<int(loss.cause)<<"}";}o<<"]";
    o<<",\"scout_deadline\":"<<e.scoutDeadline<<",\"scouts\":[";for(size_t i=0;i<e.scouts.size();++i){if(i)o<<",";o<<e.scouts[i];}o<<"]";
    o<<",\"local_support\":"<<e.localSupport<<",\"local_threat\":"<<e.localThreat<<",\"local_useful\":"<<e.localUseful<<",\"local_deadline\":"<<e.localDeadline<<",\"local_sector\":";V(o,e.localSector);o<<",\"local_position\":";V(o,e.localPosition);
    o<<",\"peek\":";V(o,e.peek);o<<",\"sector\":";V(o,e.sector);
    o<<",\"injury_assessments\":[";bool firstInjury=true;
    for(int slot=0;slot<SquadSize;++slot){const auto& injury=e.injuries[slot];if(injury.deadline<=0)continue;
        if(!firstInjury)o<<',';
        firstInjury=false;
        o<<"{\"soldier\":"<<e.squad*SquadSize+slot<<",\"generation\":"<<injury.generation<<",\"deadline\":"<<injury.deadline<<",\"remaining\":"<<injury.remaining<<",\"evidence_at\":"<<injury.evidenceAt<<",\"pause_since\":"<<injury.pauseSince<<",\"path_metric\":"<<injury.pathMetric<<'}';}
    o<<']';
    o<<",\"execution_unavailable\":"<<e.execution.unavailable<<",\"stage_deadline\":"<<e.stageDeadline<<",\"support_threat\":"<<e.supportThreat<<",\"friendly_intent\":[";
    for(size_t n=0;n<e.friendlyIntent.size();++n){const auto& f=e.friendlyIntent[n];if(n)o<<',';o<<"{\"soldier\":"<<f.soldier<<",\"observed_at\":"<<f.observedAt<<",\"position\":";V(o,f.position);o<<",\"destination\":";V(o,f.destination);o<<'}';}o<<']';
    const auto& progress=e.supportProgress;
    o<<",\"support_progress\":{\"shooter\":"<<progress.shooter<<",\"assignment\":"<<progress.assignment<<",\"route\":"<<progress.route<<",\"stage\":"<<progress.stage<<",\"observed_at\":"<<progress.observedAt<<",\"status_at\":"<<progress.statusAt<<",\"deadline\":"<<progress.deadline<<",\"status\":"<<int(progress.status)<<",\"cause\":"<<int(progress.cause)<<"},\"support_wait_deadline\":"<<e.supportDeadline;
    o<<",\"support\":"<<e.support<<",\"support_squad\":"<<e.supportSquad<<",\"support_deployed\":"<<e.supportDeployed<<",\"support_useful\":"<<e.supportUseful<<",\"movers\":[";
    for(size_t n=0;n<e.movers.size();++n){if(n)o<<',';o<<e.movers[n];}o<<"],\"holders\":[";
    for(size_t n=0;n<e.holders.size();++n){if(n)o<<',';o<<e.holders[n];}o<<"],\"coverage\":[";
    for(size_t n=0;n<e.coverage.size();++n){const auto& a=e.coverage[n];if(n)o<<',';o<<"{\"observer\":"<<a.observer<<",\"method\":"<<a.method<<",\"stage\":"<<a.stage<<",\"generation\":"<<a.generation<<",\"observed_at\":"<<a.observedAt<<",\"received_at\":"<<a.receivedAt<<",\"samples\":"<<a.samples<<",\"position\":";V(o,a.position);o<<",\"sector\":";V(o,a.sector);o<<'}';}o<<"],\"failed_attempts\":[";
    for(size_t n=0;n<e.attempts.size();++n){const auto& a=e.attempts[n];if(n)o<<',';o<<"{\"method\":"<<int(a.method)<<",\"at\":"<<a.at<<",\"cause\":"<<int(a.cause)<<",\"geometry\":"<<a.geometry<<",\"threats\":"<<a.threats<<",\"objective\":";V(o,a.objective);o<<",\"destination\":";V(o,a.destination);o<<'}';}o<<']';
    o<<",\"route\":"<<e.routeId<<",\"route_stage\":"<<e.routeStage;
    o<<",\"position\":";V(o,e.position);o<<",\"goal\":";V(o,e.goal);o<<",\"cover\":";V(o,e.cover);
    o<<",\"movement_block\":"<<e.movementBlock<<",\"role\":"<<e.role<<",\"order_goal\":";V(o,e.orderGoal);o<<",\"cover_id\":"<<e.coverId<<",\"assigned\":"<<e.assigned<<",\"protected\":"<<e.protectedPosition<<",\"near_shelter\":"<<e.nearShelter<<",\"support_ready\":"<<e.supportReady<<",\"blocked\":"<<e.blocked<<",\"alive\":"<<e.alive<<",\"action\":"<<e.action<<",\"task\":"<<e.task<<",\"stance\":"<<e.stance<<",\"rounds\":"<<e.rounds<<",\"max_health\":"<<e.maxHealth<<",\"magazine\":"<<e.magazine<<",\"sway_yaw\":"<<e.swayYaw<<",\"sway_pitch\":"<<e.swayPitch<<",\"recoil_yaw\":"<<e.recoilYaw<<",\"recoil_pitch\":"<<e.recoilPitch<<",\"weapon\":"<<Q(e.weapon)<<",\"stats\":{\"perception\":"<<e.stats.Get(Stat::Perception)<<",\"dexterity\":"<<e.stats.Get(Stat::Dexterity)<<",\"toughness\":"<<e.stats.Get(Stat::Toughness)<<",\"strength\":"<<e.stats.Get(Stat::Strength)<<",\"wisdom\":"<<e.stats.Get(Stat::Wisdom)<<",\"initiative\":"<<e.stats.Get(Stat::Initiative)<<",\"composure\":"<<e.stats.Get(Stat::Composure)<<'}'<<",\"aim\":"<<e.aim<<",\"suppression\":"<<e.suppression<<",\"health\":"<<e.health<<",\"danger\":"<<e.danger<<",\"order_issued\":"<<e.orderIssued<<",\"order_received\":"<<e.orderReceived;
    if(e.foundations||e.intent.id){
        o<<",\"goal_intent\":{\"id\":"<<e.intent.id<<",\"parent\":"<<e.intent.parent<<",\"purpose\":"<<int(e.intent.purpose)<<",\"radius\":"<<e.intent.radius<<",\"expires_at\":"<<e.intent.expiresAt<<",\"status\":"<<e.goalStatus<<",\"observed_at\":"<<e.goalObservedAt<<",\"objective\":";V(o,e.intent.objective);o<<'}';
    }
    if(e.foundations){
        o<<",\"look\":";V(o,e.look);o<<",\"estimate_bias\":"<<e.estimateBias<<",\"regions\":[";
        for(size_t index=0;index<e.regions.size();++index){const auto& r=e.regions[index];if(index)o<<',';
            o<<"{\"x\":"<<r.x<<",\"y\":"<<r.y<<",\"observations\":"<<r.observations<<",\"automatic_weapons\":"<<r.automaticWeapons<<",\"low\":"<<r.low<<",\"high\":"<<r.high<<",\"estimate\":"<<r.estimate<<",\"unseen_allowance\":"<<r.unseen<<",\"uncertainty\":"<<r.uncertainty<<",\"confidence\":"<<r.confidence<<",\"observed_at\":"<<r.observedAt<<'}';
        }o<<']';
    }
    o<<",\"knowledge\":[";bool first=true;for(const auto& k:e.knowledge){if(!first)o<<',';first=false;o<<"{\"enemy\":"<<k.id<<",\"personal\":"<<k.personal<<",\"observed_at\":"<<k.contact.observedAt<<",\"automatic_weapon\":"<<k.contact.automaticWeapon<<",\"confidence\":"<<TrackConfidence(k.contact,e.time)<<",\"uncertainty\":"<<TrackUncertainty(k.contact,e.time)<<",\"cleared_at\":"<<k.contact.clearedAt<<",\"last_fire_at\":"<<k.contact.lastFireAt<<",\"original_observer\":"<<k.contact.originalObserver<<",\"report_source\":"<<k.contact.reportSource<<",\"received_at\":"<<k.contact.registeredAt<<",\"position\":";V(o,k.contact.position);o<<'}';}o<<"],\"movement_reports\":[";first=true;for(const auto& r:e.movementReports){if(!first)o<<',';first=false;o<<"{\"soldier\":"<<r.soldier<<",\"order\":"<<r.order<<",\"observed_at\":"<<r.observedAt<<",\"destination\":";V(o,r.destination);o<<'}';}o<<"],\"covering_fire\":[";first=true;for(const auto& r:e.deliveries){if(!first)o<<',';first=false;o<<"{\"shooter\":"<<r.shooter<<",\"enemy\":"<<r.enemy<<",\"rounds\":"<<r.rounds<<",\"observed_at\":"<<r.observedAt<<",\"target\":";V(o,r.target);o<<",\"times\":[";for(int i=0;i<8;++i){if(i)o<<',';o<<r.times[i];}o<<"],\"delivered\":[";for(size_t j=0;j<r.history.size();++j){if(j)o<<',';o<<"{\"at\":"<<r.history[j].at<<",\"target\":";V(o,r.history[j].target);o<<'}';}o<<"]}";}o<<"],\"alternatives\":[";first=true;for(const auto& a:e.alternatives){if(!first)o<<',';first=false;o<<"{\"position\":";V(o,a.position);o<<",\"score\":"<<a.score<<",\"reason\":"<<Q(a.reason)<<'}';}o<<"]}";return o.str();}
uint64_t GameplayDigest(const Record& r){ // Stable field hashing, never raw struct padding or wall clocks.
    uint64_t h=1469598103934665603ull;auto bytes=[&](const void* p,size_t n){auto b=static_cast<const unsigned char*>(p);for(size_t i=0;i<n;++i)h=(h^b[i])*1099511628211ull;};
    auto f=[&](float v){uint32_t b;std::memcpy(&b,&v,4);bytes(&b,4);};auto i=[&](int v){bytes(&v,4);};auto v=[&](Vec3 p){f(p.x);f(p.y);f(p.z);};i(r.winner);f(r.duration);
    // Stats and weapons are unconditional: a legacy battle must never miss a stat change.
    for(const auto& profile:r.config.statProfiles){f(profile.baseShare);f(profile.lowShare);f(profile.highShare);f(profile.baseHalfWidth);f(profile.lowEdge);f(profile.highEdge);f(profile.shape);}
    bytes(&r.config.rosterSeed,sizeof(r.config.rosterSeed));
    if(!r.frames.empty())for(const auto& s:r.frames.front().soldiers){for(float value:s.stats.value)f(value);f(s.maxHealth);f(s.swayPhase);f(s.swayPhase2);f(s.recoilSign);i(int(s.weapon.def));i(int(s.weapon.modifiers.size()));
        for(const auto& m:s.weapon.modifiers){i(int(m.field));f(m.multiply);f(m.add);}}
    // Over-penetration victims live on the shot, not the frame, so they hash here.
    for(const auto& shot:r.shots){i(int(shot.victims.size()));for(const auto& victim:shot.victims){i(victim.soldier);f(victim.time);f(victim.energy);}}
    for(const auto& frame:r.frames){f(frame.time);for(const auto& s:frame.soldiers){f(s.lastShotAt);for(const auto& d:s.deliveries){i(d.shooter);i(d.enemy);i(d.rounds);v(d.origin);v(d.target);f(d.observedAt);for(float t:d.times)f(t);if(r.config.recoveryFixture){i(int(d.history.size()));for(const auto& round:d.history){f(round.at);v(round.target);}}}if(r.config.recoveryFixture||r.config.foundations){const auto& a=s.assignment;bytes(&a.id,sizeof(a.id));i(a.target);i(int(a.status));i(int(a.cause));i(a.statusSequence);f(a.statusAt);i(a.hasSlot);v(a.slot.shelter);v(a.slot.peek);i(a.teamPlan.liftFire);v(a.teamPlan.liftedSector);for(const auto& report:s.taskReports){bytes(&report.id,sizeof(report.id));i(report.serial);i(report.sequence);i(int(report.status));i(int(report.cause));i(report.active);f(report.at);v(report.position);}}i(s.id);v(s.position);v(s.goal);f(s.health);f(s.suppression);f(s.aim);i(s.rounds);i(s.magazineRemaining);f(s.recoil.x);f(s.recoil.y);i(int(s.action));i(int(s.reason));i(int(s.stance));i(s.assignment.teamPlan.route?int(s.assignment.teamPlan.route->id%1000000000ull):0);i(s.assignment.serial);i(int(s.assignment.task));v(s.assignment.position);for(const auto& ct:s.contacts){i(ct.known);i(ct.automaticWeapon);i(ct.visible);v(ct.position);f(ct.observedAt);f(ct.clearedAt);f(ct.emptySince);f(ct.passedAt);f(ct.lastFireAt);}for(const auto& ct:s.reports){i(ct.known);i(ct.automaticWeapon);v(ct.position);f(ct.observedAt);f(ct.clearedAt);f(ct.emptySince);f(ct.passedAt);f(ct.lastFireAt);}}}
    if(r.config.foundations){
        f(r.config.estimateBias);
        auto intent=[&](const GoalIntent& g){i(g.id);i(g.parent);i(int(g.purpose));v(g.objective);f(g.radius);f(g.expiresAt);};
        auto directive=[&](const PlatoonDirective& d){intent(d.intent);i(d.serial);i(int(d.task));v(d.position);v(d.sector);i(d.hasAlternative);i(int(d.alternativeTask));v(d.alternativePosition);f(d.issuedAt);f(d.expiresAt);};
        for(const auto& frame:r.frames)for(const auto& s:frame.soldiers){
            i(s.directionalSight);v(s.look);f(s.estimateBias);intent(s.assignment.intent);directive(s.platoonOrder);
            for(const auto& receipt:s.taskReports)i(receipt.goalId);
            for(const auto& ct:s.contacts)i(ct.originalObserver);
            for(const auto& ct:s.reports)i(ct.originalObserver);
            for(const auto& report:s.platoonReports){i(report.goalId);i(int(report.goalStatus));f(report.observedAt);
                for(const auto& evidence:report.observations){i(evidence.track);v(evidence.contact.position);f(evidence.contact.observedAt);f(evidence.contact.clearedAt);i(evidence.contact.originalObserver);i(evidence.contact.automaticWeapon);}}
        }
    }
    if(r.config.cognition){
        auto execution=[&](const ExecutionContract& e){i(int(e.completion));i(e.method);i(e.stage);i(e.generation);f(e.deadline);i(e.paused);i(e.unavailable);i(e.rifleSupport);i(e.supportThreat);};
        auto coverage=[&](const ObservationCoverage& e){i(e.observer);i(e.method);i(e.stage);i(e.generation);v(e.position);v(e.sector);f(e.observedAt);f(e.receivedAt);i(int(e.samples));};
        auto failure=[&](const FailedAttempt& e){i(int(e.method));v(e.objective);v(e.destination);bytes(&e.geometry,sizeof(e.geometry));bytes(&e.threats,sizeof(e.threats));f(e.at);i(int(e.cause));};
        for(const auto& frame:r.frames){
            for(const auto& s:frame.soldiers){execution(s.assignment.execution);v(s.assignment.statusPosition);for(const auto& e:s.coverage)coverage(e);for(const auto& receipt:s.taskReports){execution(receipt.execution);coverage(receipt.coverage);}
                i(s.platoonOrder.supportWithdrawn);i(s.platoonOrder.supportSoldier);i(s.platoonOrder.supportSquad);
                for(const auto& receipt:s.taskReports)f(receipt.remaining);
                const auto& request=s.supportSector;i(request.shooter);i(request.requester);i(request.stage);v(request.focus);bytes(&request.route,sizeof(request.route));f(request.observedAt);i(request.lifted);i(int(request.threats.size()));
                const auto& progress=s.supportProgress;i(progress.shooter);i(progress.stage);bytes(&progress.assignment,sizeof(progress.assignment));bytes(&progress.route,sizeof(progress.route));v(progress.position);v(progress.sector);f(progress.observedAt);f(progress.statusAt);f(progress.deadline);i(int(progress.status));i(int(progress.cause));
                for(const auto& intent:request.friendlies){i(intent.soldier);v(intent.position);v(intent.destination);f(intent.observedAt);}
                for(const auto& threat:request.threats){i(threat.enemy);v(threat.contact.position);f(threat.contact.observedAt);f(threat.contact.aimHeight);i(threat.contact.originalObserver);}
                for(const auto& report:s.platoonReports){for(const auto& e:report.coverage)coverage(e);for(const auto& e:report.attempts)failure(e);i(report.supportSoldier);i(report.directive);i(int(report.method));i(report.observationComplete);f(report.lastProgress);}}
            for(const auto& cmd:frame.command){const auto& p=cmd.accepted;i(p.executionGeneration);f(p.executionDeadline);f(p.prepareDeadline);i(int(p.supportFailures.size()));for(const auto& loss:p.supportFailures){i(loss.soldier);f(loss.observedAt);i(int(loss.cause));}i(p.scouted);f(p.scoutDeadline);i(p.localSupport);i(p.localThreat);i(p.localUseful);f(p.localAssignedAt);f(p.localDeadline);v(p.localSector);v(p.localPosition);for(int slot=0;slot<SquadSize;++slot){i(p.holders[slot]);f(p.holderDeadline[slot]);const auto& injury=p.injuries[slot];i(injury.generation);f(injury.deadline);f(injury.remaining);f(injury.evidenceAt);f(injury.updatedAt);f(injury.pauseSince);i(injury.pathMetric);i(p.scouts[slot]);}i(p.supportThreat);i(p.requestedThreat);f(p.supportWaitStarted);i(p.supportRetargeted);bytes(&p.awaitedSupportAssignment,sizeof(p.awaitedSupportAssignment));i(p.requiredOccupants);i(p.support);i(p.supportSquad);i(p.supportDeployed);i(p.supportUseful);i(p.informationGained);f(p.stageStarted);f(p.lastProgress);f(p.safetySince);i(p.mission.id);i(int(p.mission.purpose));v(p.mission.objective);f(p.mission.expiresAt);bytes(&p.geometry,sizeof(p.geometry));bytes(&p.threats,sizeof(p.threats));
                for(const auto& e:p.attempts)failure(e);
                bytes(&p.inspectedGeometry,sizeof(p.inspectedGeometry));bytes(&p.inspectedThreats,sizeof(p.inspectedThreats));v(p.inspectedSector);
                for(int n=0;n<SquadSize;++n){i(p.generations[n]);i(p.hasSlot[n]);i(p.unavailable[n]);i(p.slotRetries[n]);v(p.rejectedPositions[n]);v(p.slots[n].shelter);v(p.slots[n].peek);bytes(&p.expected[n],sizeof(p.expected[n]));}}
        }
        i(r.config.cognition);i(r.config.fullVision);f(r.config.reportDelay);f(r.config.officer.judgment);f(r.config.officer.risk);f(r.config.officer.adaptability);
        for(const auto& frame:r.frames){for(const auto& s:frame.soldiers){i(s.cognition);for(const auto& delivery:s.deliveries)i(delivery.supportWeapon);i(s.attentionTrack);f(s.officer.judgment);f(s.officer.risk);f(s.officer.adaptability);}
            for(const auto& cmd:frame.command){const auto& p=cmd.accepted;i(p.intent.id);i(p.intent.parent);i(int(p.method));i(int(p.stage));i(p.revision);i(p.directive);i(p.routeStage);i(p.failedMethods);v(p.failedDestination);v(p.destination);v(p.sector);f(p.started);f(p.committedUntil);f(p.supportSince);f(p.reconsiderAt);i(p.safetyOverride);i(p.requiresSupport);i(p.exhausted);f(p.riskAtCommit);bytes(&p.knowledge,sizeof(p.knowledge));for(int slot=0;slot<SquadSize;++slot){v(p.positions[slot]);v(p.holds[slot]);i(p.movers[slot]);}}
        }
    }
    if(r.config.leaderEffects||r.config.equalTroops){
        i(1501);i(r.config.leaderEffects);i(r.config.equalTroops);
        for(const auto& p:r.config.platoonProfiles){f(p.judgment);f(p.risk);f(p.adaptability);f(p.communication);}
        for(const auto& frame:r.frames){
            for(const auto& unit:frame.soldiers){i(unit.leaderEffects);i(unit.initiativeAllowed);i(unit.platoonOrder.initiativeAllowed);f(unit.officer.judgment);f(unit.officer.risk);f(unit.officer.adaptability);f(unit.officer.communication);}
            for(const auto& command:frame.platoon)for(const auto& order:command.tasks.assigned)i(order.initiativeAllowed);
        }
    }
    if(r.config.drills){
        i(r.config.drills);f(r.config.reportDelay);i(r.config.fullVision);
        auto radio=[&](const SquadBroadcast& message){i(message.serial);i(message.sender);i(message.squad);i(message.enemy);i(message.side);i(int(message.kind));f(message.sentAt);f(message.receivedAt);v(message.position);v(message.objective);f(message.contact.observedAt);v(message.contact.position);};
        for(const auto& frame:r.frames){
            auto directive=[&](const PlatoonDirective& a){f(a.areaRouteRadius);f(a.areaDiscRadius);v(a.areaDiscCenter);i(a.taskNode);i(a.fireMovement);i(a.committedStrength);i(a.mergeInto);i(a.helpSquad);i(a.hasArea);i(a.liftFire);v(a.areaMin);v(a.areaMax);v(a.assaultLane.origin);v(a.assaultLane.target);f(a.assaultLane.observedAt);i(a.intent.id);f(a.expiresAt);if(a.corridor){v(a.corridor->start);v(a.corridor->destination);for(Vec3 point:a.corridor->points)v(point);}};
            for(const auto& command:frame.platoon){const auto& t=command.tasks;i(t.revision);i(t.commander);f(t.nextAssessment);i(t.withdrawing);f(t.believedRatio);
                for(const auto& a:t.assigned)directive(a);
                for(int n=0;n<SquadsPerTeam;++n){i(t.advanceDoneSeen[n]);i(t.advanceExhausted[n]);v(t.advanceDoneObjectives[n]);}
                f(t.observeStarted);v(t.observeObjective);for(float at:t.needSince)f(at);
            }
            for(const auto& command:frame.command){const auto& p=command.battleDrill;f(p.action.assaultFireSince);for(bool present:p.action.assaultRoster)i(present);for(bool present:p.action.baseRoster)i(present);i(p.action.assaultRushRecovered);i(p.action.areaFireOrdered);i(p.action.supportSearchTried);i(p.action.supportSearchExhausted);i(p.action.boundSupportThreat);i(p.action.supportPositionReady);i(p.action.helping);i(p.helpApproach);v(p.helpObjective);i(p.radioLaneRevision);i(p.radioSequence);i(p.radioAttackInstance);i(p.radioSupportSquad);i(p.radioLeadSquad);for(const auto& kind:p.radioConsumed)for(int serial:kind)i(serial);i(p.arrivalCheckPending);f(p.radioFireSince);f(p.radioPhaseAt);f(p.radioDoneAt);i(p.radioFixing);i(p.radioNeed);v(p.radioObjective);v(p.radioSupportPosition);for(const auto& message:p.broadcasts)radio(message);}
            for(const auto& unit:frame.soldiers){i(unit.organisation);for(const auto& message:unit.squadRadio)radio(message);directive(unit.platoonOrder);for(const auto& r:unit.platoonReports){i(r.drillSuperiority);f(r.phaseLineAt);f(r.completedAssaultLineAt);v(r.assaultObjective);v(r.assaultOrigin);for(Vec3 at:r.drillMemberPositions)v(at);}}
            for(const auto& unit:frame.soldiers){const auto& a=unit.assignment;i(a.teamPlan.assaultAreaFire);v(a.teamPlan.assaultFireArea);i(a.teamPlan.assaultFireEnemy);for(const auto& lane:a.teamPlan.friendlyAssaultLanes){v(lane.origin);v(lane.target);f(lane.observedAt);}f(a.areaRouteRadius);if(a.areaRoute){v(a.areaRoute->start);for(Vec3 point:a.areaRoute->points)v(point);}i(a.drillInstance);i(a.element);i(a.baseOfFire);v(a.areaMin);v(a.areaMax);v(a.areaDiscCenter);f(a.areaDiscRadius);i(a.execution.method);i(a.execution.stage);i(a.execution.generation);i(int(a.execution.completion));f(a.execution.deadline);i(a.execution.paused);f(a.execution.rushSeconds);i(a.execution.arrivalCheck);f(a.drillRushPausedAt);f(a.drillRushPausedSeconds);
                for(const auto& report:unit.platoonReports){i(report.drillInstance);i(report.drillKind);i(int(report.drillCause));i(report.drillRecovering);bytes(report.drillNote.data(),report.drillNote.size());}
            }
            for(const auto& cmd:frame.command){const auto& p=cmd.battleDrill;
            directive(p.acceptedDirective);i(p.directiveBoundary);i(p.platoonArea);i(p.platoonLift);i(p.platoonTaskNode);f(p.directiveUntil);f(p.believedEnemy);const auto& a=p.action;for(int n=0;n<SquadSize;++n){i(a.pauseHasSlot[n]);i(a.resumeMovers[n]);v(a.pauseSlots[n].shelter);v(a.pauseSlots[n].peek);i(a.pauseSlots[n].id);}i(a.coveringBound);i(a.coveringAttempted);i(a.closureFallback);i(a.active);i(a.established);i(a.everEstablished);i(a.lifted);i(a.paused);i(a.attack);i(a.completed);f(a.acceptedAt);f(a.lastEvidence);f(a.lostAt);f(a.phaseLineAt);f(a.clearSince);f(a.angle);v(a.objective);v(a.base);v(a.assault);v(a.rally);i(a.buddy);i(a.alternates);i(a.initialStrength);i(int(a.routeStep));i(int(a.cause));
            for(bool known:a.threats)i(known);
            for(int n=0;n<SquadSize;++n){i(a.pausedOrders[n]);i(a.liftOrders[n]);i(a.supportOrders[n]);i(a.rushOrders[n]);i(int(a.tasks[n]));i(int(a.completions[n]));}
            if(a.route){v(a.route->start);v(a.route->destination);for(Vec3 point:a.route->points)v(point);}
            f(p.stageElapsed);f(p.clockAt);i(p.stalledExpiries);v(p.expiryPosition);i(p.forceColumn);i(p.noProgressBlocked);for(bool waiting:p.slotWaiting)i(waiting);for(bool active:p.memberWasActive)i(active);for(float at:p.lossTimes)f(at);
            i(int(p.stage));f(p.arrivalQuorumAt);f(p.contactLostAt);f(p.fireCandidateAt);f(p.superiorityCandidateAt);
            i(p.arrivalConsumed);i(p.coverComplete);i(p.closeAfterCover);i(p.effectiveFire);i(p.fireCandidate);i(p.superiority);i(p.superiorityCandidate);
            for(int n=0;n<SquadSize;++n){i(p.issue[n]);i(p.waiting[n]);i(p.arrivals[n]);i(p.orderMethods[n]);i(p.orderGenerations[n]);bytes(&p.slotGeometry[n],sizeof(p.slotGeometry[n]));}
            for(int n=0;n<UnitCount;++n){i(p.contactInside[n]);f(p.contactLastKnown[n]);}for(int count:p.strength)i(count);
            i(p.initialized);i(p.assessed);i(p.retreat);i(p.closing);f(p.nextStage);f(p.lastProgress);f(p.assessmentAt);f(p.interval);v(p.deployment);i(p.intent.id);i(p.intent.parent);v(p.intent.objective);
            for(const auto& member:p.members){i(member.known);v(member.position);f(member.health);f(member.suppression);f(member.observedAt);i(int(member.role));i(member.machineGun);}
            for(const auto& route:p.memberRoutes)if(route){bytes(&route->id,sizeof(route->id));v(route->destination);for(Vec3 point:route->points)v(point);}
            for(const auto& attempt:p.attempts){v(attempt.destination);f(attempt.at);i(int(attempt.cause));}

            i(p.instance);i(p.generation);i(int(p.kind));i(int(p.technique));i(p.leg);i(p.movingElement);i(p.target);i(p.support);
            f(p.started);f(p.deadline);i(p.blocked);i(p.paused);i(p.exhausted);i(p.localRetries);f(p.completedAssaultLineAt);bytes(p.lastRejection.data(),p.lastRejection.size());v(p.destination);v(p.sector);v(p.center);v(p.areaMin);v(p.areaMax);
            for(int n=0;n<SquadSize;++n){i(p.elements[n]);v(p.positions[n]);i(p.hasSlot[n]);v(p.slots[n].shelter);v(p.slots[n].peek);i(p.movers[n]);bytes(&p.expected[n],sizeof(p.expected[n]));}
        }}
    }
    if(r.config.family!=ScenarioFamily::None){
        i(int(r.config.family));bytes(&r.config.genSeed,sizeof(r.config.genSeed));
        const uint64_t generated=r.generated?ScenarioDigest(*r.generated):0;bytes(&generated,sizeof(generated));
    }
    if(r.config.battlefield)bytes(&r.config.battlefield->digest,sizeof(r.config.battlefield->digest));
    for(const auto& s:r.shots){f(s.time);f(s.impactTime);i(s.owner);i(s.target);i(int(s.impact));v(s.start);v(s.end);for(const auto& p:s.flight){f(p.time);v(p.position);}}
    for(const auto& e:r.events){f(e.time);i(int(e.kind));i(e.actor);i(e.target);bytes(e.text.data(),e.text.size());}return h;
}
// Offline observer sampling. This runs after simulation and never feeds policy.
void ExportEvaluation(const Record& r,const std::string& directory) {
    std::ofstream out(std::filesystem::path(directory)/"evaluation.jsonl");
    for(const auto& f:r.frames) {
        const auto& map=GeometryAt(r,f.time);
        out<<"{\"schema\":2,\"time\":"<<f.time<<",\"soldiers\":[";bool first=true;
        for(const auto& s:f.soldiers) {
            if(!first)out<<',';
            first=false;
            auto actor=s;actor.health=s.understoodHealth;actor.suppression=s.understoodSuppression;
            const auto solution=SelectFireSolution(actor,map,f.time);
            auto knowledge=WithTracks(actor,f.time);float nearest=1e9f;int enemy=-1;
            for(int i=0;i<UnitCount;++i)if(knowledge.contacts[i].known&&Distance(s.position,knowledge.contacts[i].position)<nearest){nearest=Distance(s.position,knowledge.contacts[i].position);enemy=i;}
            out<<"{\"id\":"<<s.id<<",\"alive\":"<<s.Active()<<",\"position\":";V(out,s.position);
            out<<",\"route\":"<<(s.assignment.teamPlan.route?s.assignment.teamPlan.route->id:0)<<",\"action\":"<<int(s.action)<<",\"task\":"<<int(s.assignment.task)<<",\"rounds\":"<<s.rounds<<",\"solution\":"<<(solution.enemy>=0)<<",\"enemy\":"<<enemy<<",\"distance\":"<<(enemy>=0?nearest:-1)<<",\"track\":";V(out,enemy>=0?knowledge.contacts[enemy].position:Vec3{});
            out<<",\"observer_targets\":[";bool firstTarget=true;
            for(const auto& observedEnemy:f.soldiers)if(s.Active()&&observedEnemy.Active()&&observedEnemy.team!=s.team&&Distance(s.position,observedEnemy.position)<SightRange(s)&&ClearLine3D(map,s.position+Vec3{0,0,s.stance==Stance::Crouched?.72f:1.5f},observedEnemy.position+Vec3{0,0,BodyHeight(observedEnemy.stance)*.75f})){
                if(!firstTarget)out<<',';
                firstTarget=false;out<<observedEnemy.id;}
            bool incoming=false;for(const auto& other:f.soldiers)if(s.Active()&&other.Active()&&other.team!=s.team&&Distance(other.position,s.position)<SightRange(other)&&ClearLine3D(map,other.position+Vec3{0,0,other.stance==Stance::Crouched?.72f:1.5f},s.position+Vec3{0,0,BodyHeight(s.stance)*.75f})){incoming=true;break;}
            out<<"],\"observer_exposed\":"<<incoming<<",\"support\":"<<(CommandSupport(f.command[s.squad],TypedController(r.config)));
            out<<",\"squad\":"<<s.squad<<",\"team\":"<<s.team<<",\"stance\":"<<int(s.stance)<<",\"health\":"<<s.health<<",\"suppression\":"<<s.suppression;
            out<<",\"sector\":";V(out,s.assignment.sector);
            out<<",\"order\":"<<s.assignment.serial<<",\"order_issued\":"<<s.assignment.issuedAt<<",\"assignment_id\":"<<s.assignment.id;
            out<<",\"platoon_order\":"<<s.platoonOrder.serial<<",\"platoon_order_issued\":"<<s.platoonOrder.issuedAt;
            out<<",\"machine_gun\":"<<s.machineGun<<",\"role\":"<<int(s.role);
            const Vec3 sway=SwayOffset(s,f.time);
            out<<",\"sway_yaw\":"<<sway.x<<",\"sway_pitch\":"<<sway.y<<",\"recoil_yaw\":"<<s.recoil.x<<",\"recoil_pitch\":"<<s.recoil.y;
            out<<",\"weapon\":"<<Q(s.gun.name)<<",\"magazine\":"<<s.magazineRemaining<<",\"max_health\":"<<s.maxHealth<<",\"stats\":[";
            for(size_t k=0;k<StatCount;++k){if(k)out<<',';out<<s.stats.value[k];}out<<']';
            // No drill element or area exists in legacy/cognition; never invent one.
            if(r.config.drills&&s.assignment.element>=0){const auto& a=s.assignment;const auto& p=f.command[s.squad].battleDrill;
                out<<",\"element\":"<<a.element<<",\"element_role\":"<<Q(!p.movers[s.id%SquadSize]?"base_of_fire":"moving")<<",\"base_of_fire\":"<<!p.movers[s.id%SquadSize];
                out<<",\"area_of_operation\":{\"min\":";V(out,a.areaMin);out<<",\"max\":";V(out,a.areaMax);out<<",\"disc_center\":";V(out,a.areaDiscCenter);out<<",\"disc_radius\":"<<a.areaDiscRadius<<",\"route_buffer\":"<<a.areaRouteRadius<<",\"route_points\":[";if(a.areaRoute){V(out,a.areaRoute->start);for(Vec3 point:a.areaRoute->points){out<<',';V(out,point);}}out<<"]}";
                out<<",\"drill_stage\":"<<int(p.stage)<<",\"drill_generation\":"<<p.generation<<",\"drill_moving_element\":"<<p.movingElement<<",\"drill_arrival_latched\":"<<p.arrivals[s.id%SquadSize];
                out<<",\"assault_base\":";V(out,p.action.base);out<<",\"assault_objective\":";V(out,p.action.objective);
                out<<",\"believed_enemy_strength\":"<<p.believedEnemy<<",\"believed_own_strength\":"<<(p.strength[0]+p.strength[1])<<",\"fire_superiority\":"<<p.superiority<<",\"break_contact_selected\":"<<(p.kind==BattleDrill::BreakContact);
                out<<",\"support_established\":"<<p.action.established<<",\"assault_angle\":"<<p.action.angle<<",\"assault_phase_line\":"<<p.action.phaseLineAt<<",\"attack_committed\":"<<p.action.attack<<",\"support_ever_established\":"<<p.action.everEstablished;
                out<<",\"drill_instance\":"<<p.instance<<",\"drill_started\":"<<p.started<<",\"drill_kind\":"<<int(p.kind)<<",\"drill_movement\":"<<p.movers[s.id%SquadSize]<<",\"known_threat_sector\":"<<(p.target>=0)<<",\"squad_leader\":"<<f.command[s.squad].leader;
            }else out<<",\"element\":null,\"element_role\":null,\"base_of_fire\":false,\"area_of_operation\":null";
            out<<",\"plan\":"<<f.command[s.squad].planId<<",\"goal\":";V(out,s.assignment.position);out<<'}';
        }
        out<<"]}\n";
    }
}
std::string ExportBattle(const Record& r,const std::string& root,const std::string& build,uint64_t digest){
    if(digest==0)digest=GameplayDigest(r);
    namespace fs=std::filesystem;std::error_code ec;fs::create_directories(root,ec);if(ec)return {};
    auto stamp=std::chrono::system_clock::now().time_since_epoch().count();std::string name="battle-"+std::to_string(r.config.seed)+"-"+std::to_string(stamp);
    fs::path dir=fs::path(root)/name;fs::create_directory(dir,ec);if(ec)return {};auto write=[&](const char* file){return std::ofstream(dir/file);};
    auto geometry=write("geometry.jsonl");
    auto geometryRow=[&](const Map& map,float time,const std::string& reason){geometry<<"{\"time\":"<<time<<",\"revision\":"<<map.revision<<",\"reason\":"<<Q(reason)<<",\"obstacles\":[";bool first=true;
        for(const auto& o:map.obstacles){if(!first)geometry<<',';first=false;geometry<<"{\"id\":"<<o.id<<",\"center\":";V(geometry,o.center);geometry<<",\"half\":";V(geometry,o.half);geometry<<",\"height\":"<<ObstacleHeight(o)<<",\"blocks_movement\":"<<o.blocksMovement<<'}';}geometry<<"],\"covers\":[";first=true;for(const auto& c:CoverPositions(map)){if(!first)geometry<<',';first=false;geometry<<"{\"id\":"<<c.id<<",\"source\":"<<c.source<<",\"shelter\":";V(geometry,c.shelter);geometry<<",\"peek\":";V(geometry,c.peek);geometry<<",\"crouch\":"<<c.crouch<<",\"window\":"<<c.window<<'}';}
        geometry<<"],\"buildings\":[";first=true;for(const auto& b:map.buildings){if(!first)geometry<<',';first=false;geometry<<"{\"center\":";V(geometry,b.center);geometry<<",\"half\":";V(geometry,b.half);geometry<<",\"first_obstacle\":"<<b.firstObstacle<<",\"obstacle_count\":"<<b.obstacleCount<<'}';}geometry<<"],\"surfaces\":[";first=true;for(const auto& s:map.surfaces){if(!first)geometry<<',';first=false;geometry<<"{\"id\":"<<s.id<<",\"center\":";V(geometry,s.center);geometry<<",\"half\":";V(geometry,s.half);geometry<<",\"slope\":";V(geometry,s.slope);geometry<<'}';}
        geometry<<"],\"surface_links\":[";first=true;for(const auto& link:map.surfaceLinks){if(!first)geometry<<',';first=false;geometry<<"{\"id\":"<<link.id<<",\"from\":";V(geometry,link.from);geometry<<",\"to\":";V(geometry,link.to);geometry<<'}';}
        geometry<<"],\"ground_base\":"<<map.groundBase<<",\"half_width\":"<<map.halfWidth<<",\"half_height\":"<<map.halfHeight<<"}\n";};
    if(r.geometryVersions.empty())geometryRow(r.map,0,"initial");else for(const auto& version:r.geometryVersions)geometryRow(version.map,version.time,version.reason);
    auto summary=write("summary.md");summary<<"# Battle "<<r.config.seed<<"\n\nDuration: "<<r.duration<<" seconds. Shots: "<<r.shots.size()<<". Winner: "<<r.winner<<".\n\nStructured decision evidence: trace.jsonl. Command/report transport: events.jsonl. Geometry history: geometry.jsonl.\nUse tools/analyze_battle.py on this directory for ranked episodes and unit timelines.\n";
    auto trace=write("trace.jsonl");if(r.diagnostics)for(const auto& e:r.diagnostics->entries)trace<<TraceJson(e)<<'\n';
    auto routes=write("routes.jsonl");if(r.diagnostics)for(const auto& ptr:r.diagnostics->routes){const auto& q=*ptr;
        routes<<"{\"schema\":1,\"id\":"<<q.id<<",\"owner\":"<<q.owner<<",\"plan\":"<<q.plan<<",\"geometry\":"<<q.geometry<<",\"knowledge\":"<<q.knowledge<<",\"time\":"<<q.evaluatedAt<<",\"status\":"<<Q(RouteStatusName(q.status))<<",\"expanded\":"<<q.expanded<<",\"exposed_seconds\":"<<q.exposedSeconds<<",\"cost\":{\"travel\":"<<q.cost.travel<<",\"exposure\":"<<q.cost.exposure<<",\"fire\":"<<q.cost.fire<<",\"lanes\":"<<q.cost.lanes<<",\"congestion\":"<<q.cost.congestion<<",\"uncertainty\":"<<q.cost.uncertainty<<"},\"start\":";V(routes,q.start);routes<<",\"destination\":";V(routes,q.destination);routes<<",\"points\":[";bool first=true;for(auto p:q.points){if(!first)routes<<',';first=false;V(routes,p);}routes<<"],\"stages\":[";first=true;for(const auto& stage:q.stages){if(!first)routes<<',';first=false;routes<<"{\"begin\":"<<stage.begin<<",\"end\":"<<stage.end<<",\"seconds\":"<<stage.seconds<<",\"exposed_seconds\":"<<stage.exposedSeconds<<",\"destination\":";V(routes,stage.destination);routes<<'}';}routes<<"]}\n";
    }
    auto paths=write("paths.jsonl");if(r.diagnostics)for(const auto& p:r.diagnostics->paths){
        paths<<"{\"schema\":1,\"decision\":"<<p.decision<<",\"geometry\":"<<p.geometry<<",\"route\":"<<p.route<<",\"time\":"<<p.time<<",\"soldier\":"<<p.soldier<<",\"squad\":"<<p.squad<<",\"order\":"<<p.order<<",\"kind\":"<<Q(p.kind)<<",\"status\":"<<Q(p.status)<<",\"start\":";V(paths,p.start);paths<<",\"goal\":";V(paths,p.goal);paths<<",\"points\":[";bool first=true;for(auto v:p.points){if(!first)paths<<',';first=false;V(paths,v);}paths<<"]}\n";}
    auto events=write("events.jsonl");for(const auto& e:r.events)events<<"{\"time\":"<<e.time<<",\"kind\":"<<int(e.kind)<<",\"actor\":"<<e.actor<<",\"target\":"<<e.target<<",\"text\":"<<Q(e.text)<<"}\n";
    auto shots=write("shots.jsonl");
    for(const auto& shot:r.shots){auto sample=std::upper_bound(r.frames.begin(),r.frames.end(),shot.time,[](float time,const Frame& frame){return time<frame.time;});const auto& ownerFrame=sample==r.frames.begin()?r.frames.front():*(sample-1);const auto& owner=ownerFrame.soldiers[shot.owner];
        shots<<"{\"schema\":1,\"time\":"<<shot.time<<",\"impact_time\":"<<shot.impactTime<<",\"owner\":"<<shot.owner<<",\"team\":"<<owner.team<<",\"squad\":"<<owner.squad<<",\"aimed_enemy\":"<<shot.aimedEnemy<<",\"aimed_point\":";V(shots,shot.aimedAt);
        shots<<",\"start\":";V(shots,shot.start);shots<<",\"end\":";V(shots,shot.end);
        shots<<",\"muzzle_velocity\":"<<owner.gun.muzzleVelocity<<",\"impact_kind\":"<<int(shot.impact)<<",\"hit\":"<<shot.hit<<",\"target\":"<<shot.target<<",\"suppressive\":"<<shot.suppressive<<",\"support_weapon\":"<<owner.machineGun<<",\"element_role\":"<<(r.config.drills&&owner.assignment.element>=0?Q(!ownerFrame.command[owner.squad].battleDrill.movers[owner.id%SquadSize]?"base_of_fire":"moving"):"null");
        shots<<",\"impact_energy\":"<<(shot.victims.empty()?0.f:shot.victims.front().energy)<<",\"victims\":[";
        for(size_t v=0;v<shot.victims.size();++v){const auto& victim=shot.victims[v];if(v)shots<<',';shots<<"{\"soldier\":"<<victim.soldier<<",\"time\":"<<victim.time<<",\"energy\":"<<victim.energy<<'}';}
        shots<<"]}\n";
    }
    if(r.generated){const auto& g=*r.generated;auto scenario=write("scenario.json");
        scenario<<"{\"schema\":1,\"family\":"<<Q(ScenarioFamilyName(g.family))<<",\"gen_seed\":"<<g.genSeed<<",\"digest\":"<<Q(std::to_string(ScenarioDigest(g)))<<",\"description\":"<<Q(g.description)<<",\"objective\":";V(scenario,g.objective);
        scenario<<",\"objective_radius\":"<<g.objectiveRadius<<",\"half_width\":"<<g.map.halfWidth<<",\"half_height\":"<<g.map.halfHeight<<",\"deployment\":[";V(scenario,g.deployment[0]);scenario<<',';V(scenario,g.deployment[1]);
        scenario<<"],\"squads\":[";for(int q=0;q<SquadCount;++q){if(q)scenario<<',';scenario<<int(g.squads[q]);}
        scenario<<"],\"machine_gun\":["<<g.machineGun[0]<<','<<g.machineGun[1]<<"],\"corridors\":"<<g.corridors<<",\"corridor_width\":"<<g.corridorWidth<<",\"screen_pieces\":"<<g.screenPieces<<",\"low_cover\":"<<g.lowCover<<",\"tall_cover\":"<<g.tallCover<<",\"positions\":[";
        for(int id=0;id<UnitCount;++id){if(id)scenario<<',';V(scenario,g.positions[id]);}
        scenario<<"],\"soldier_weapons\":[";
        for(int id=0;id<UnitCount;++id){if(id)scenario<<',';scenario<<int(r.frames.front().soldiers[id].weapon.def);}
        scenario<<"],\"soldier_stats\":[";
        for(int id=0;id<UnitCount;++id){if(id)scenario<<',';scenario<<'[';const auto& st=r.frames.front().soldiers[id].stats;
            for(size_t k=0;k<StatCount;++k){if(k)scenario<<',';scenario<<st.value[k];}scenario<<']';}
        scenario<<"],\"obstacles\":[";bool first=true;for(const auto& o:g.map.obstacles){if(!first)scenario<<',';first=false;scenario<<"{\"id\":"<<o.id<<",\"center\":";V(scenario,o.center);scenario<<",\"half\":";V(scenario,o.half);scenario<<",\"height\":"<<o.height<<",\"blocks_movement\":"<<o.blocksMovement<<",\"half_cover\":"<<o.halfCover<<'}';}scenario<<"]}";
    }
    if(r.config.battlefield){auto imported=write("battlefield.army");imported<<r.config.battlefield->source;}
    auto manifest=write("manifest.json");manifest<<"{\"evaluation_schema\":2,\"shots_schema\":1,\"scenario_family\":"<<Q(ScenarioFamilyName(r.config.family))<<",\"gen_seed\":"<<r.config.genSeed<<",\"schema\":1,\"route_schema\":1,\"geometry_schema\":2,\"build\":"<<Q(build)<<",\"terrain\":"<<int(r.config.terrain)<<",\"cognition_policy\":"<<r.config.cognition<<",\"drills_policy\":"<<r.config.drills<<",\"full_vision\":"<<r.config.fullVision<<",\"report_delay\":"<<r.config.reportDelay<<",\"judgment\":"<<r.config.officer.judgment<<",\"risk\":"<<r.config.officer.risk<<",\"adaptability\":"<<r.config.officer.adaptability<<",\"foundations_policy\":"<<r.config.foundations<<",\"estimate_bias\":"<<r.config.estimateBias<<",\"recovery_policy\":"<<r.config.recoveryFixture<<",\"task_schema\":1,\"encounter\":"<<r.encounter<<",\"seed\":"<<r.config.seed<<",\"doctrine\":"<<int(r.config.doctrine)<<",\"ember_doctrine\":"<<int(r.config.emberDoctrine)<<",\"approach\":"<<int(r.config.approach)<<",\"support_weapon\":"<<r.config.supportWeapon<<",\"duration_limit\":"<<r.config.maxSeconds<<",\"duration\":"<<r.duration<<",\"winner\":"<<r.winner<<",\"shots\":"<<r.shots.size()<<",\"gameplay_digest\":"<<Q(std::to_string(digest))<<",\"trace_enabled\":"<<(r.diagnostics&&r.diagnostics->options.enabled)<<",\"roster_seed\":"<<r.config.rosterSeed<<",\"stat_profile_azure\":["<<r.config.statProfiles[0].baseShare<<','<<r.config.statProfiles[0].lowShare<<','<<r.config.statProfiles[0].highShare<<','<<r.config.statProfiles[0].baseHalfWidth<<','<<r.config.statProfiles[0].lowEdge<<','<<r.config.statProfiles[0].highEdge<<','<<r.config.statProfiles[0].shape<<']'<<",\"stat_profile_ember\":["<<r.config.statProfiles[1].baseShare<<','<<r.config.statProfiles[1].lowShare<<','<<r.config.statProfiles[1].highShare<<','<<r.config.statProfiles[1].baseHalfWidth<<','<<r.config.statProfiles[1].lowEdge<<','<<r.config.statProfiles[1].highEdge<<','<<r.config.statProfiles[1].shape<<']'<<",\"leader_effects\":"<<r.config.leaderEffects<<",\"equal_troops\":"<<r.config.equalTroops<<",\"platoon_profiles\":[";
    for(int team=0;team<2;++team){const auto& p=r.config.platoonProfiles[team];if(team)manifest<<",";manifest<<"["<<p.judgment<<","<<p.risk<<","<<p.adaptability<<","<<p.communication<<"]";}manifest<<"]";if(r.config.battlefield)manifest<<",\"battlefield_file\":\"battlefield.army\",\"battlefield_digest\":"<<Q(std::to_string(r.config.battlefield->digest));manifest<<"}";
    auto profile=write("profile.json");if(r.diagnostics){const auto& d=*r.diagnostics;profile<<"{\"total\":"<<d.total<<",\"perception\":"<<d.perception<<",\"commands\":"<<d.commands<<",\"decisions\":"<<d.decisions<<",\"movement\":"<<d.movement<<",\"ballistics\":"<<d.ballistics<<",\"firing\":"<<d.firing<<",\"recording\":"<<d.recording<<",\"trace\":"<<d.trace<<",\"navigation_inclusive\":"<<(r.map.queryProfile?r.map.queryProfile->navigationSeconds:0)<<",\"tactical_seconds\":"<<(r.map.queryProfile?r.map.queryProfile->tacticalSeconds:0)<<",\"corridor_seconds\":"<<(r.map.queryProfile?r.map.queryProfile->corridorSeconds:0)<<",\"tactical_queries\":"<<(r.map.queryProfile?r.map.queryProfile->tacticalQueries:0)<<",\"tactical_expanded\":"<<(r.map.queryProfile?r.map.queryProfile->tacticalExpanded:0)<<",\"path_queries\":"<<(r.map.queryProfile?r.map.queryProfile->paths:0)<<",\"sight_queries\":"<<(r.map.queryProfile?r.map.queryProfile->sight:0)<<",\"memo_lookups\":"<<(r.map.queryProfile?r.map.queryProfile->memoLookups:0)<<",\"memo_hits\":"<<(r.map.queryProfile?r.map.queryProfile->memoHits:0)<<",\"collision_queries\":"<<(r.map.queryProfile?r.map.queryProfile->collision:0)<<"}";}
    std::ofstream latest(fs::path(root)/"latest.json");latest<<"{\"run\":"<<Q(name)<<"}";return dir.string();
}
}
