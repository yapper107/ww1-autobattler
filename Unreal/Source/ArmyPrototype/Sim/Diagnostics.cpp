#include "Diagnostics.h"
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
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=s.id;e.squad=s.squad;e.issuer=a.issuer;e.order=a.serial;e.kind=kind;e.reason=TaskName(a.task);
    e.taskTarget=a.target;e.geometry=a.geometry;e.taskId=a.id;e.taskStatus=int(a.status);e.taskCause=int(a.cause);e.taskSequence=a.statusSequence;e.taskSubject=s.id;e.taskObservedAt=a.statusAt;
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
    o<<",\"task_id\":"<<e.taskId<<",\"task_status\":"<<e.taskStatus<<",\"task_cause\":"<<e.taskCause<<",\"task_sequence\":"<<e.taskSequence<<",\"task_subject\":"<<e.taskSubject<<",\"task_target\":"<<e.taskTarget<<",\"task_observed_at\":"<<e.taskObservedAt;
    o<<",\"route\":"<<e.routeId<<",\"route_stage\":"<<e.routeStage;
    o<<",\"position\":";V(o,e.position);o<<",\"goal\":";V(o,e.goal);o<<",\"cover\":";V(o,e.cover);
    o<<",\"movement_block\":"<<e.movementBlock<<",\"role\":"<<e.role<<",\"order_goal\":";V(o,e.orderGoal);o<<",\"cover_id\":"<<e.coverId<<",\"assigned\":"<<e.assigned<<",\"protected\":"<<e.protectedPosition<<",\"near_shelter\":"<<e.nearShelter<<",\"support_ready\":"<<e.supportReady<<",\"blocked\":"<<e.blocked<<",\"alive\":"<<e.alive<<",\"action\":"<<e.action<<",\"task\":"<<e.task<<",\"stance\":"<<e.stance<<",\"rounds\":"<<e.rounds<<",\"aim\":"<<e.aim<<",\"suppression\":"<<e.suppression<<",\"health\":"<<e.health<<",\"danger\":"<<e.danger<<",\"order_issued\":"<<e.orderIssued<<",\"order_received\":"<<e.orderReceived;
    o<<",\"knowledge\":[";bool first=true;for(const auto& k:e.knowledge){if(!first)o<<',';first=false;o<<"{\"enemy\":"<<k.id<<",\"personal\":"<<k.personal<<",\"observed_at\":"<<k.contact.observedAt<<",\"automatic_weapon\":"<<k.contact.automaticWeapon<<",\"confidence\":"<<TrackConfidence(k.contact,e.time)<<",\"uncertainty\":"<<TrackUncertainty(k.contact,e.time)<<",\"cleared_at\":"<<k.contact.clearedAt<<",\"last_fire_at\":"<<k.contact.lastFireAt<<",\"report_source\":"<<k.contact.reportSource<<",\"received_at\":"<<k.contact.registeredAt<<",\"position\":";V(o,k.contact.position);o<<'}';}o<<"],\"movement_reports\":[";first=true;for(const auto& r:e.movementReports){if(!first)o<<',';first=false;o<<"{\"soldier\":"<<r.soldier<<",\"order\":"<<r.order<<",\"observed_at\":"<<r.observedAt<<",\"destination\":";V(o,r.destination);o<<'}';}o<<"],\"covering_fire\":[";first=true;for(const auto& r:e.deliveries){if(!first)o<<',';first=false;o<<"{\"shooter\":"<<r.shooter<<",\"enemy\":"<<r.enemy<<",\"rounds\":"<<r.rounds<<",\"observed_at\":"<<r.observedAt<<",\"target\":";V(o,r.target);o<<",\"times\":[";for(int i=0;i<8;++i){if(i)o<<',';o<<r.times[i];}o<<"],\"delivered\":[";for(size_t j=0;j<r.history.size();++j){if(j)o<<',';o<<"{\"at\":"<<r.history[j].at<<",\"target\":";V(o,r.history[j].target);o<<'}';}o<<"]}";}o<<"],\"alternatives\":[";first=true;for(const auto& a:e.alternatives){if(!first)o<<',';first=false;o<<"{\"position\":";V(o,a.position);o<<",\"score\":"<<a.score<<",\"reason\":"<<Q(a.reason)<<'}';}o<<"]}";return o.str();}
uint64_t GameplayDigest(const Record& r){ // Stable field hashing, never raw struct padding or wall clocks.
    uint64_t h=1469598103934665603ull;auto bytes=[&](const void* p,size_t n){auto b=static_cast<const unsigned char*>(p);for(size_t i=0;i<n;++i)h=(h^b[i])*1099511628211ull;};
    auto f=[&](float v){uint32_t b;std::memcpy(&b,&v,4);bytes(&b,4);};auto i=[&](int v){bytes(&v,4);};auto v=[&](Vec3 p){f(p.x);f(p.y);f(p.z);};i(r.winner);f(r.duration);
    for(const auto& frame:r.frames){f(frame.time);for(const auto& s:frame.soldiers){f(s.lastShotAt);for(const auto& d:s.deliveries){i(d.shooter);i(d.enemy);i(d.rounds);v(d.origin);v(d.target);f(d.observedAt);for(float t:d.times)f(t);if(r.config.recoveryFixture){i(int(d.history.size()));for(const auto& round:d.history){f(round.at);v(round.target);}}}if(r.config.recoveryFixture){const auto& a=s.assignment;bytes(&a.id,sizeof(a.id));i(a.target);i(int(a.status));i(int(a.cause));i(a.statusSequence);f(a.statusAt);i(a.hasSlot);v(a.slot.shelter);v(a.slot.peek);i(a.teamPlan.liftFire);v(a.teamPlan.liftedSector);for(const auto& report:s.taskReports){bytes(&report.id,sizeof(report.id));i(report.serial);i(report.sequence);i(int(report.status));i(int(report.cause));i(report.active);f(report.at);v(report.position);}}i(s.id);v(s.position);v(s.goal);f(s.health);f(s.suppression);f(s.aim);i(s.rounds);i(int(s.action));i(int(s.reason));i(int(s.stance));i(s.assignment.teamPlan.route?int(s.assignment.teamPlan.route->id%1000000000ull):0);i(s.assignment.serial);i(int(s.assignment.task));v(s.assignment.position);for(const auto& ct:s.contacts){i(ct.known);i(ct.automaticWeapon);i(ct.visible);v(ct.position);f(ct.observedAt);f(ct.clearedAt);f(ct.emptySince);f(ct.passedAt);f(ct.lastFireAt);}for(const auto& ct:s.reports){i(ct.known);i(ct.automaticWeapon);v(ct.position);f(ct.observedAt);f(ct.clearedAt);f(ct.emptySince);f(ct.passedAt);f(ct.lastFireAt);}}}
    for(const auto& s:r.shots){f(s.time);f(s.impactTime);i(s.owner);i(s.target);i(int(s.impact));v(s.start);v(s.end);for(const auto& p:s.flight){f(p.time);v(p.position);}}
    for(const auto& e:r.events){f(e.time);i(int(e.kind));i(e.actor);i(e.target);bytes(e.text.data(),e.text.size());}return h;
}
// Offline observer sampling. This runs after simulation and never feeds policy.
void ExportEvaluation(const Record& r,const std::string& directory) {
    std::ofstream out(std::filesystem::path(directory)/"evaluation.jsonl");
    for(const auto& f:r.frames) {
        const auto& map=GeometryAt(r,f.time);
        out<<"{\"schema\":1,\"time\":"<<f.time<<",\"soldiers\":[";bool first=true;
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
            out<<"],\"observer_exposed\":"<<incoming<<",\"support\":"<<f.command[s.squad].support;
            out<<",\"plan\":"<<f.command[s.squad].planId<<",\"goal\":";V(out,s.assignment.position);out<<'}';
        }
        out<<"]}\n";
    }
}
std::string ExportBattle(const Record& r,const std::string& root,const std::string& build){
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
    auto manifest=write("manifest.json");manifest<<"{\"schema\":1,\"route_schema\":1,\"geometry_schema\":2,\"build\":"<<Q(build)<<",\"terrain\":"<<int(r.config.terrain)<<",\"recovery_policy\":"<<r.config.recoveryFixture<<",\"task_schema\":1,\"encounter\":"<<r.encounter<<",\"seed\":"<<r.config.seed<<",\"doctrine\":"<<int(r.config.doctrine)<<",\"ember_doctrine\":"<<int(r.config.emberDoctrine)<<",\"approach\":"<<int(r.config.approach)<<",\"support_weapon\":"<<r.config.supportWeapon<<",\"duration_limit\":"<<r.config.maxSeconds<<",\"duration\":"<<r.duration<<",\"winner\":"<<r.winner<<",\"shots\":"<<r.shots.size()<<",\"gameplay_digest\":"<<Q(std::to_string(GameplayDigest(r)))<<",\"trace_enabled\":"<<(r.diagnostics&&r.diagnostics->options.enabled)<<"}";
    auto profile=write("profile.json");if(r.diagnostics){const auto& d=*r.diagnostics;profile<<"{\"total\":"<<d.total<<",\"perception\":"<<d.perception<<",\"commands\":"<<d.commands<<",\"decisions\":"<<d.decisions<<",\"movement\":"<<d.movement<<",\"ballistics\":"<<d.ballistics<<",\"firing\":"<<d.firing<<",\"recording\":"<<d.recording<<",\"trace\":"<<d.trace<<",\"navigation_inclusive\":"<<(r.map.queryProfile?r.map.queryProfile->navigationSeconds:0)<<",\"tactical_seconds\":"<<(r.map.queryProfile?r.map.queryProfile->tacticalSeconds:0)<<",\"corridor_seconds\":"<<(r.map.queryProfile?r.map.queryProfile->corridorSeconds:0)<<",\"tactical_queries\":"<<(r.map.queryProfile?r.map.queryProfile->tacticalQueries:0)<<",\"tactical_expanded\":"<<(r.map.queryProfile?r.map.queryProfile->tacticalExpanded:0)<<",\"path_queries\":"<<(r.map.queryProfile?r.map.queryProfile->paths:0)<<",\"sight_queries\":"<<(r.map.queryProfile?r.map.queryProfile->sight:0)<<",\"collision_queries\":"<<(r.map.queryProfile?r.map.queryProfile->collision:0)<<"}";}
    std::ofstream latest(fs::path(root)/"latest.json");latest<<"{\"run\":"<<Q(name)<<"}";return dir.string();
}
}
