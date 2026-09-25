#include "FireMovementSim.h"
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "ManeuverSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <sstream>
namespace army {
const char* FireAndMovementName(int teams){return teams==3?"both":teams==1?"azure":teams==2?"ember":"off";}
bool FmGatedTask(Task task){return task!=Task::None&&task!=Task::PullBack;}
namespace {
const FireMovementTuning& K(){return FireMovementConstants;}
float Plan2D(Vec3 a,Vec3 b){return std::hypot(a.x-b.x,a.y-b.y);}
float SegmentGap2D(Vec3 a,Vec3 b,Vec3 p){
    const float dx=b.x-a.x,dy=b.y-a.y,square=dx*dx+dy*dy;
    const float t=square>1e-6f?std::clamp(((p.x-a.x)*dx+(p.y-a.y)*dy)/square,0.f,1.f):0.f;
    return std::hypot(p.x-(a.x+dx*t),p.y-(a.y+dy*t));
}
float PathLength(Vec3 from,const std::vector<Vec3>& path){float length=0;Vec3 p=from;for(Vec3 q:path){length+=Distance(p,q);p=q;}return length;}
// The men the drill moves: the rifle group (not the leader, the support, the platoon staff, a man known wounded or the
// window team).
bool RifleMan(const Soldier& s,const Soldier& leader,const SquadCommand& cmd){
    return s.Active()&&!IsPlatoonStaff(s)&&s.id!=cmd.leader&&s.id!=cmd.support&&!s.machineGun&&!KnowsWounded(leader,s)&&!InWindowTeam(cmd.teamPlan,s.id);
}
// Points along a path from `from`, about every `step` metres (the ends included).
std::vector<Vec3> Samples(Vec3 from,const std::vector<Vec3>& path,float step){
    std::vector<Vec3> out{from};Vec3 start=from;
    for(Vec3 end:path){
        const int n=std::max(1,int(std::ceil(Distance(start,end)/step)));
        for(int i=1;i<=n;++i)out.push_back(start+(end-start)*(float(i)/float(n)));
        start=end;
    }
    return out;
}
// Whether a firing point bears on a track: within gunReach, a clear line from the muzzle (1.5 m over the point, as the
// station allocator tests it) onto his aim point or 1.5 m over his place (the edge SelectFireSolution fires at), and the
// line clear of the movers (laneClear from every point of `lane`).
bool Bears(const Map& map,Vec3 peek,const Contact& track,const std::vector<Vec3>& lane){
    if(Distance(peek,track.position)>K().gunReach)return false;
    const Vec3 muzzle=peek+Vec3{0,0,1.5f};
    if(!ClearLine3D(map,muzzle,{track.position.x,track.position.y,track.aimHeight})&&!ClearLine3D(map,muzzle,track.position+Vec3{0,0,1.5f}))return false;
    for(Vec3 p:lane)if(SegmentGap2D(peek,track.position,p)<K().laneClear)return false;
    return true;
}
// The firing point of a station: the peek of the catalogue cover whose shelter it is, else the station itself.
Vec3 PeekOf(const Map& map,Vec3 station){
    for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,station)<.1f)return cover.peek;
    return station;
}
struct GunPlace { Vec3 shelter{},peek{}; int bears=0; float travel=0; };
// Plan 031 D (3): a station for the gun. Crouch cover (he fires over it), no window, within stationRadius of him or of the
// group, within leash of the leg's end, off the movers' lane and spaced from their stations, bearing on at least one
// threat. Scored: 1.5 for every metre he walks, ten for each threat it bears on, six for each of those it shelters him
// from, four for each other enemy the leader knows within 80 m it does not shelter him from, and the fire reported there:
// protection from every known enemy is preferred, never demanded. The best few are asked for a path; the first with one
// wins. The leader's knowledge only.
bool FindGunStation(const Soldier& known,const Soldier& gun,const Map& map,const std::vector<int>& threats,const std::vector<Vec3>& lane,
    Vec3 legStart,Vec3 legEnd,const std::vector<Vec3>& taken,float time,GunPlace& out){
    struct Candidate { float score; GunPlace place; };
    std::vector<Candidate> candidates;
    for(const auto& c:CoverPositions(map)){
        if(!c.crouch||c.window)continue;
        const float travel=Distance(c.shelter,gun.position);
        if(travel>K().stationRadius&&Distance(c.shelter,legStart)>K().stationRadius)continue;
        if(Distance(c.shelter,legEnd)>K().leash||!Walkable(map,c.shelter))continue;
        bool clear=true;
        for(Vec3 p:taken)if(Plan2D(p,c.shelter)<K().spacing){clear=false;break;}
        for(size_t i=0;clear&&i<lane.size();++i)if(Plan2D(lane[i],c.shelter)<K().laneClear)clear=false;
        if(!clear)continue;
        const Stance posture=CoverStance(c);
        int bears=0,sheltered=0;
        for(int id:threats){const auto& track=known.contacts[size_t(id)];
            if(!Bears(map,c.peek,track,lane))continue;
            ++bears;sheltered+=ProtectedAt(map,c.shelter,track.position,posture);}
        if(!bears)continue;
        int open=0;
        for(int id=0;id<UnitCount;++id){const auto& ct=known.contacts[size_t(id)];
            if(!ct.known||std::find(threats.begin(),threats.end(),id)!=threats.end()||Distance(ct.position,c.shelter)>=80)continue;
            open+=!ProtectedAt(map,c.shelter,ct.position,posture);}
        const float score=1.5f*travel-10.f*float(bears)-6.f*float(sheltered)+4.f*float(open)+FireDanger(known,c.shelter,time)*10;
        candidates.push_back({score,{c.shelter,c.peek,bears,travel}});
    }
    std::stable_sort(candidates.begin(),candidates.end(),[](const Candidate& a,const Candidate& b){return a.score<b.score;});
    int tried=0;
    for(const auto& candidate:candidates){
        if(++tried>8)break;
        if(FindPath(map,gun.position,candidate.place.shelter).empty())continue;
        out=candidate.place;return true;
    }
    return false;
}
// The watchers of the group in a hold spell: the leader's known tracks seen within threatAge with a clear line from their
// eye to a man's chest at one of `points` (where the group's men stand and where they were sent) within threatReach,
// loudest first (his last sighting or report of their fire), then nearest the group, then id; at most PinTable::sectorMax.
std::vector<int> GroupThreats(const Soldier& leader,const Map& map,const std::vector<Vec3>& points,Vec3 centre,float time){
    std::vector<int> out;if(points.empty())return out;
    const auto known=WithTracks(leader,time);
    struct Entry { float fired,range;int id; };std::vector<Entry> set;
    for(int id=0;id<UnitCount;++id){const auto& ct=known.contacts[size_t(id)];
        if(!ct.known||time-ct.observedAt>K().threatAge)continue;
        const Vec3 eye=ct.position+Vec3{0,0,1.5f};bool watches=false;
        for(size_t i=0;i<points.size()&&!watches;++i)watches=Distance(ct.position,points[i])<K().threatReach&&ClearLine3D(map,eye,points[i]+Vec3{0,0,1.3f});
        if(watches)set.push_back({std::max(leader.contacts[size_t(id)].lastFireAt,leader.reports[size_t(id)].lastFireAt),Distance(ct.position,centre),id});
    }
    std::stable_sort(set.begin(),set.end(),[](const Entry& a,const Entry& b){
        return a.fired>b.fired||(a.fired==b.fired&&(a.range<b.range||(a.range==b.range&&a.id<b.id)));});
    for(const auto& e:set){if(int(out.size())>=PinRules().sectorMax)break;out.push_back(e.id);}
    return out;
}
// The drill's own cover memory at a catalogue cover, as a man arriving at his bound station takes it (plan 021): at a
// tall wall the peek is the first point along it with a line onto `enemy`. His ready time, prone clock and rush are his own.
void TakeCover(Tactics& memory,const Map& map,const CoverPosition& cover,Vec3 at,Vec3 enemy,float time,float expires){
    const float ready=memory.readyAt,since=memory.proneSince,held=memory.fmHeldAt;const int rush=memory.fmRushLeg;
    memory={};memory.readyAt=ready;memory.proneSince=since;memory.fmRushLeg=rush;memory.fmHeldAt=held;
    memory.assigned=true;memory.halfCover=cover.crouch;memory.proneCover=cover.prone;memory.shelter=cover.shelter;memory.peek=cover.peek;
    memory.coverId=cover.id;memory.geometryRevision=map.revision;memory.lastProgress=time;memory.expires=time+expires;memory.travelPosition=at;
    if(!cover.crouch)for(int step=1;step<=60;++step){Vec3 trial=cover.shelter+(cover.peek-cover.shelter)*(float(step)/60.f);
        if(ClearLine3D(map,trial+Vec3{0,0,1.5f},enemy+Vec3{0,0,1.45f})){memory.peek=trial;break;}}
}
// The enemy he watches: the nearest he knows of seen within 10 s (ChooseOrderBase's own choice), else his sector.
Vec3 Watched(const Soldier& s,float time){
    Vec3 enemy=s.assignment.sector;float nearest=1e9f;
    for(const auto& ct:s.contacts)if(ct.known&&time-ct.observedAt<=10&&Distance(ct.position,s.position)<nearest){nearest=Distance(ct.position,s.position);enemy=ct.position;}
    return enemy;
}
// A man he sees with a clear line from `at` in `stance` (his own sight; within a rifle's 100 m).
bool LineOnSeen(const Soldier& s,const Map& map,Vec3 at,Stance stance){
    const Vec3 muzzle=at+Vec3{0,0,Posture(stance).muzzle};
    for(const auto& ct:s.contacts)if(ct.known&&ct.visible&&Distance(at,ct.position)<=100&&
        ClearLine3D(map,muzzle,{ct.position.x+ct.aimOffset.x,ct.position.y+ct.aimOffset.y,ct.aimHeight}))return true;
    return false;
}
// A decision that leaves for where he was sent: a move of his order, not a step, a peek, a duck or a move for his own
// safety (EmergencyCover, Suppressed, Flanked, Relocate: plan 020's better cover under fire, a retreat).
bool Departure(const Soldier& s,const Order& d,Vec3 objective){
    if(Distance(s.position,d.goal)<K().departMin)return false;
    if(d.action==Action::Advance)
        return d.reason==Reason::BoundAdvance||d.reason==Reason::SquadFlank||d.reason==Reason::OrderedAdvance||d.reason==Reason::Search||
            d.reason==Reason::LostContact||d.reason==Reason::Regroup;
    if(d.action==Action::Cover) {
        if(d.reason==Reason::ClearLane||d.reason==Reason::RearPosition||d.reason==Reason::RearFire||d.reason==Reason::Overwatch)return true;
        // A move to a firing position of his own choosing: on an advance only one that gains ground toward where he was sent.
        if(d.reason==Reason::Contact)return s.assignment.task!=Task::Advance||Distance(d.goal,objective)<Distance(s.position,objective)-1;
    }
    return false;
}
// Plan 031 D (5): the wait for the gate. In the catalogue cover he holds or that lies within waitCover of him he is down
// behind it and fires from its peek at a man he sees while he is not pressed. With none that close he goes to the nearest
// cover within waitReach that shelters him from the enemy he watches, not taken by a friend, and waits there; with none,
// crouched where he stands. `friends` are the friendly places the decision loop reserves (ChooseOrder's own).
Order Wait(const Soldier& s,const Map& map,const Config& c,const std::vector<Vec3>& friends,Tactics& memory,float time){
    memory.fmHeldAt=time;
    const bool at=memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<K().waitCover;
    const bool going=memory.assigned&&memory.fmWait&&Distance(s.position,memory.shelter)<K().waitReach;
    if(!at&&!going){
        const Vec3 enemy=Watched(s,time);
        const CoverPosition* best=nullptr;float nearest=K().waitCover;
        for(const auto& cover:CoverPositions(map)){
            if(cover.window||std::abs(cover.shelter.z-s.position.z)>.5f)continue;
            const float gap=Distance(cover.shelter,s.position);
            if(gap<nearest&&ClearLine(map,cover.shelter,cover.peek,.48f)){nearest=gap;best=&cover;}
        }
        if(!best){nearest=K().waitReach;
            for(const auto& cover:CoverPositions(map)){
                if(cover.window||std::abs(cover.shelter.z-s.position.z)>.5f)continue;
                const float gap=Distance(cover.shelter,s.position);
                if(gap>=nearest||!Walkable(map,cover.shelter)||!ClearLine(map,cover.shelter,cover.peek,.48f)||!ProtectedAt(map,cover.shelter,enemy,CoverStance(cover)))continue;
                bool taken=false;for(Vec3 p:friends)if(Distance(p,cover.shelter)<2.f){taken=true;break;}
                if(taken||FindPath(map,s.position,cover.shelter).empty())continue;
                nearest=gap;best=&cover;
            }}
        if(best){TakeCover(memory,map,*best,s.position,enemy,time,60);memory.fmWait=true;}
    }
    if(memory.assigned&&memory.fmWait&&Distance(s.position,memory.shelter)>=K().waitCover&&Distance(s.position,memory.peek)>=K().waitCover)
        return {memory.shelter,Action::Cover,Reason::Contact,memory.halfCover&&Distance(s.position,memory.shelter)<1.5f?Stance::Crouched:Stance::Standing};
    const bool threatened=s.suppression>DuckThreshold(c,s.team)||s.reloadUntil>time||NervePinned(s,c);
    if(memory.assigned&&std::min(Distance(s.position,memory.shelter),Distance(s.position,memory.peek))<K().waitCover){
        memory.fmWait=true;memory.expires=std::max(memory.expires,time+60);
        if(!threatened&&LineOnSeen(s,map,memory.peek,PeekStance(memory)))
            return {memory.peek,Action::Fire,memory.halfCover?Reason::PopUp:Reason::CoverFire,PeekStance(memory)};
        return {memory.shelter,Action::Hold,memory.halfCover?Reason::Duck:Reason::Settle,ShelterStance(memory)};
    }
    const bool line=!threatened&&LineOnSeen(s,map,s.position,Stance::Crouched);
    return {s.position,line?Action::Fire:Action::Hold,Reason::BoundSupport,Stance::Crouched};
}
// Trace rows (kind fire_movement), traced runs only: the leg, its kind, then the row's own fields.
void Row(Diagnostics* d,const Soldier& leader,const SquadCommand& cmd,float time,const char* what,const std::string& extra){
    if(!d||!d->options.enabled)return;
    const char* kind=cmd.fm.kind==FmKind::Route?"route":cmd.fm.kind==FmKind::Advance?"advance":cmd.fm.kind==FmKind::Hold?"hold":"none";
    std::ostringstream o;o<<std::setprecision(6)<<",\"leg\":"<<cmd.fm.leg<<",\"leg_kind\":\""<<kind<<'"'<<extra;
    TraceCoverSupply(d,leader,cmd,time,"fire_movement",what,o.str());
}
std::string Json(Vec3 p){std::ostringstream o;o<<std::setprecision(6)<<'['<<p.x<<','<<p.y<<','<<p.z<<']';return o.str();}
std::string Json(const std::vector<int>& ids){std::string o="[";for(size_t i=0;i<ids.size();++i){if(i)o+=',';o+=std::to_string(ids[i]);}return o+"]";}
}
int FmLegStage(const TacticalRoute& route,int from,float length){
    const int count=int(route.stages.size());const int first=std::max(0,from);
    if(first>=count)return std::max(0,count-1);
    int last=first;float travel=0;
    for(int i=first;i<count;++i){travel+=route.stages[size_t(i)].seconds*route.speed;if(i>first&&travel>length)break;last=i;}
    return last;
}
int FmBoundStage(const Soldier& leader,const Map& map,const Config& config,const TacticalRoute& route,int from,Vec3 origin,float time){
    const int legacy=MergeBoundStage(route,from,BoundConstants.boundLength);
    const auto crossing=BoundCrossing(route,from,legacy);
    if(crossing.empty()||FmLegThreats(leader,map,origin,crossing,time).empty())return legacy;
    return std::min(legacy,FmLegStage(route,from,config.fmLeg));
}
std::vector<int> FmLegThreats(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time){
    std::vector<int> out;if(path.empty())return out;
    const auto known=WithTracks(leader,time);
    const Vec3 middle=(from+path.back())*.5f;
    struct Entry { float fired,range;int id; };std::vector<Entry> set;
    for(int id=0;id<UnitCount;++id){const auto& ct=known.contacts[size_t(id)];
        if(!ct.known||time-ct.observedAt>K().threatAge)continue;
        const Vec3 eye=ct.position+Vec3{0,0,1.5f};
        bool overlooks=false;Vec3 start=from;
        for(size_t i=0;i<path.size()&&!overlooks;++i){const Vec3 end=path[i];const int n=std::max(1,int(std::ceil(Distance(start,end)/3)));
            for(int step=1;step<=n&&!overlooks;++step){const Vec3 p=start+(end-start)*(float(step)/float(n));
                overlooks=Distance(ct.position,p)<K().threatReach&&ClearLine3D(map,eye,p+Vec3{0,0,1.3f});}
            start=end;}
        if(overlooks)set.push_back({std::max(leader.contacts[size_t(id)].lastFireAt,leader.reports[size_t(id)].lastFireAt),Distance(ct.position,middle),id});
    }
    std::stable_sort(set.begin(),set.end(),[](const Entry& a,const Entry& b){
        return a.fired>b.fired||(a.fired==b.fired&&(a.range<b.range||(a.range==b.range&&a.id<b.id)));});
    for(const auto& e:set){if(int(out.size())>=PinRules().sectorMax)break;out.push_back(e.id);}
    return out;
}
FireMovementOrder FmGroupMarker(const SquadCommand& cmd){
    FireMovementOrder marker;
    if(cmd.fm.kind!=FmKind::None&&cmd.fm.gated){marker.gun=cmd.fm.gun;marker.leg=cmd.fm.leg;}
    return marker;
}
void UpdateFireMovement(const Soldier& view,const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,SquadCommand& cmd,float time,Diagnostics* diagnostics){
    auto& fm=cmd.fm;
    const Soldier* point=RifleGroupLeader(leader,squad,cmd.support);
    const Soldier* gun=nullptr;
    for(const auto& s:squad)if(s.id==cmd.support&&s.Active()&&s.machineGun&&!KnowsWounded(leader,s))gun=&s;
    const bool blocked=cmd.movementBlock.reason!=MoveBlock::None;
    const auto known=WithTracks(view,time);
    // 1. What the drill governs now. A running bound of a committed route is the leg the manoeuvre cut (FmBoundStage); an
    // advance in contact is cut here, leg by leg, each to be reached before the next; otherwise, in contact, the group
    // holds a spell (FmKind::Hold) in which every move of its men waits for the gun just as a leg does.
    FmKind kind=FmKind::None;Vec3 from{},to{};std::vector<Vec3> path;bool newLeg=false;
    std::vector<int> watchers;
    if(point&&cmd.advancing&&!blocked&&cmd.hasWaypoint&&cmd.route&&cmd.maneuver!=Maneuver::PullBack&&cmd.attachedTo<0&&cmd.mergedInto<0){
        kind=FmKind::Route;const int last=std::max(cmd.routeStage,cmd.boundStage);
        const auto& stages=cmd.route->stages;
        from=cmd.routeStage>0&&size_t(cmd.routeStage-1)<stages.size()?stages[size_t(cmd.routeStage-1)].destination:cmd.route->start;
        path=BoundCrossing(*cmd.route,cmd.routeStage,last);to=cmd.waypoint;
        newLeg=fm.kind!=FmKind::Route||fm.route!=cmd.route->id||fm.routeStage!=cmd.routeStage||fm.boundStage!=last;
        if(newLeg){fm.route=cmd.route->id;fm.routeStage=cmd.routeStage;fm.boundStage=last;}
        if(path.empty())kind=FmKind::None;
    } else if(point&&cmd.advancing&&!blocked&&!cmd.hasWaypoint&&!cmd.engaged&&!cmd.searching&&cmd.attachedTo<0&&cmd.mergedInto<0&&
        !(cmd.fallbackAt>=0&&cmd.ableRiflemen<GroupConstants.shatteredRiflemen)) {
        // PlanSquad's advance: not held by a platoon Support task in contact.
        float recent=-100;for(const auto& ct:known.contacts)if(ct.known&&time-ct.observedAt<=120&&ct.observedAt>recent)recent=ct.observedAt;
        const bool supporting=cmd.platoonTask==PlatoonTask::Support&&time<cmd.platoonUntil&&recent>=time-10;
        if(!supporting) {
            bool reached=false;
            if(fm.kind==FmKind::Advance){int men=0,atEnd=0;
                for(const auto& s:squad)if(RifleMan(s,leader,cmd)){++men;atEnd+=Distance(s.position,fm.to)<K().arriveRadius;}
                reached=atEnd>=std::max(1,(men+1)/2);}
            const bool moved=fm.kind==FmKind::Advance&&Distance(fm.mission,cmd.mission)>GroupConstants.haltRadius;
            if(fm.kind==FmKind::Advance&&!reached&&!moved&&fm.path){kind=FmKind::Advance;from=fm.from;to=fm.to;path=*fm.path;}
            else {
                const Vec3 head=point->position;
                const auto way=FindPath(map,head,cmd.mission);
                const float length=PathLength(head,way);
                if(!way.empty()&&length>=K().advanceMin) {
                    // The point legLength along the way to the mission; then the nearest cover within 5 m of it on his
                    // level that shelters him from the most leg threats, if the ground offers one (cover to cover).
                    Vec3 end=way.back();std::vector<Vec3> leg;
                    if(length>config.fmLeg){float left=config.fmLeg;Vec3 p=head;
                        for(Vec3 q:way){const float d=Distance(p,q);if(d>=left){end=p+(q-p)*(left/std::max(d,1e-4f));leg.push_back(end);break;}leg.push_back(q);left-=d;p=q;}}
                    else leg=way;
                    auto threats=FmLegThreats(view,map,head,leg,time);
                    if(!threats.empty()) {
                        if(length>config.fmLeg){
                            const CoverPosition* best=nullptr;int bestShelter=-1;float bestGap=1e9f;
                            for(const auto& c:CoverPositions(map)){
                                if(c.window||std::abs(c.shelter.z-end.z)>.5f)continue;
                                const float gap=Distance(c.shelter,end);if(gap>5||!Walkable(map,c.shelter))continue;
                                int sheltered=0;for(int id:threats)sheltered+=ProtectedAt(map,c.shelter,known.contacts[size_t(id)].position,CoverStance(c));
                                if(sheltered>bestShelter||(sheltered==bestShelter&&gap<bestGap)){bestShelter=sheltered;bestGap=gap;best=&c;}
                            }
                            if(best&&bestShelter>0){const auto way2=FindPath(map,head,best->shelter);
                                if(!way2.empty()){end=best->shelter;leg=way2;threats=FmLegThreats(view,map,head,leg,time);}}
                        }
                        if(!threats.empty()){kind=FmKind::Advance;from=head;to=end;path=leg;newLeg=true;fm.mission=cmd.mission;}
                    }
                }
            }
        }
    }
    if(kind==FmKind::None&&point&&cmd.advancing&&!(cmd.hasWaypoint&&cmd.maneuver==Maneuver::PullBack)) {
        // A hold spell: the enemies the leader knows watching where his men stand or were sent.
        std::vector<Vec3> ground;Vec3 centre{};int men=0;
        for(const auto& s:squad)if(RifleMan(s,leader,cmd)){ground.push_back(s.position);if(FmGatedTask(s.assignment.task))ground.push_back(s.assignment.position);
            centre=centre+s.position;++men;}
        if(men) {
            centre=centre*(1.f/float(men));
            watchers=GroupThreats(view,map,ground,centre,time);
            if(!watchers.empty()){kind=FmKind::Hold;from=to=centre;newLeg=fm.kind!=FmKind::Hold;}
        }
    }
    // 2. The leg's identity, and the end of the one before it.
    auto endLeg=[&](const char* why){
        std::ostringstream o;o<<std::setprecision(6)<<",\"why\":\""<<why<<"\",\"seconds\":"<<(time-fm.plannedAt)<<",\"started\":"<<(fm.startedAt>=0)
            <<",\"fallback\":\""<<fm.fallbackWhy<<'"';
        Row(diagnostics,leader,cmd,time,"leg_ended",o.str());
    };
    if(kind==FmKind::None){
        if(fm.kind!=FmKind::None)endLeg(blocked?"paused":cmd.maneuver==Maneuver::PullBack&&cmd.hasWaypoint?"withdraw":cmd.engaged&&fm.kind==FmKind::Advance?"engaged":
            !cmd.hasWaypoint&&fm.kind==FmKind::Route?"arrived":fm.kind==FmKind::Hold?"no_contact":"ended");
        // Out of contact the Legacy plan places the gun (with the must-move defect repaired, PlanSim, and his station kept
        // while it bears, PlanSquad); the next spell keeps it if it still bears.
        fm.kind=FmKind::None;fm.gated=fm.open=fm.governsGun=fm.hasStation=fm.displacing=false;fm.threats.clear();fm.closedSince=-1;
        return;
    }
    if(kind!=fm.kind)newLeg=true;
    if(newLeg){
        if(fm.kind!=FmKind::None)endLeg("next");
        ++fm.leg;fm.kind=kind;fm.from=from;fm.to=to;fm.path=std::make_shared<const std::vector<Vec3>>(path);
        // The gate's clock (closedSince) is not the leg's: it runs while men wait and the gun is not heard, across legs.
        fm.plannedAt=time;fm.startedAt=-1;fm.fallback=false;fm.fallbackWhy="";fm.fallbackAt=-1;fm.open=false;
    }
    if(kind==FmKind::Hold){fm.from=fm.to=from;}   // a hold spell follows the group
    // 3. Its threats, from what the leader knows now.
    fm.threats=kind==FmKind::Hold?watchers:FmLegThreats(view,map,fm.from,*fm.path,time);
    // 4. The base of fire. The movers' lane: the leg's path (a station is kept while its line keeps off it), or in a hold
    // spell the ground the men stand on; for a new station also their ways to their stations (the gun's friendly-fire
    // hold reads those intents).
    fm.gun=gun?gun->id:-1;
    std::vector<Vec3> pathLane=kind==FmKind::Hold?std::vector<Vec3>{}:Samples(fm.from,*fm.path,2);
    std::vector<Vec3> lane,taken;
    int going=0; // men of the group on a rush now: the gun stays set until they are in
    for(const auto& s:squad)if(RifleMan(s,leader,cmd)){const int slot=s.id%SquadSize;
        if(kind==FmKind::Hold)pathLane.push_back(s.position);
        if(cmd.stations.held[size_t(slot)]&&cmd.stations.issued[size_t(slot)]){const Vec3 station=cmd.stations.station[size_t(slot)];taken.push_back(station);
            const auto way=Samples(s.position,{station},3);lane.insert(lane.end(),way.begin(),way.end());}
        else lane.push_back(s.position);
        // On his way somewhere he was sent (not waiting, not a move for his own safety).
        going+=s.fmWaitSince<0&&(s.action==Action::Advance||(s.action==Action::Cover&&(s.reason==Reason::ClearLane||s.reason==Reason::Contact||
            s.reason==Reason::Overwatch||s.reason==Reason::RearPosition||s.reason==Reason::RearFire)))&&Distance(s.position,s.goal)>K().departMin;}
    lane.insert(lane.end(),pathLane.begin(),pathLane.end());
    // Men holding for the gate now (he sees them stay where they are instead of going where he sent them).
    int waiting=0;
    for(const auto& s:squad)if(RifleMan(s,leader,cmd))waiting+=s.fmWaitSince>=0&&s.assignment.fm.gun>=0;
    auto fallBack=[&](const char* why){
        if(fm.fallback)return;
        fm.fallback=true;fm.fallbackWhy=why;fm.fallbackAt=time;
        std::ostringstream o;o<<std::setprecision(6)<<",\"why\":\""<<why<<"\",\"waited\":"<<(fm.closedSince>=0?time-fm.closedSince:0.f)<<",\"threats\":"<<Json(fm.threats);
        Row(diagnostics,leader,cmd,time,"fallback",o.str());
    };
    fm.governsGun=false;
    if(!fm.threats.empty()&&!gun)fallBack("no_gun");
    // A leg that found no station has fallen back; it is not searched again (the next leg is, and a hold spell after it re-arms).
    if(!fm.threats.empty()&&gun&&!(fm.fallback&&!fm.hasStation)) {
        const int gunSlot=gun->id%SquadSize;const auto& st=cmd.stations;
        // The station he holds now: the drill's own once it governs him; before that the Legacy plan's, if he is on it.
        // A gun off his station (on his way to it, or held up) whose ground bears on a threat is set where he is: that
        // ground becomes his station (the leader sees his gun there; a gun that moves is a gun that is silent). His firing
        // point is the peek of the catalogue cover he is at, else where he stands.
        const bool drillStation=fm.hasStation&&fm.stationGun==gun->id;
        Vec3 current{},currentPeek{};bool have=false,here=false;
        if(drillStation){current=fm.station;currentPeek=fm.stationPeek;have=true;}
        else if(st.held[size_t(gunSlot)]&&st.supportStationFor==gun->id&&Distance(gun->position,st.station[size_t(gunSlot)])<=K().setRadius)
            {current=st.station[size_t(gunSlot)];currentPeek=PeekOf(map,current);have=true;}
        if(!(have&&Distance(gun->position,current)<=K().setRadius)&&Distance(gun->position,fm.to)<=K().leash) {
            Vec3 at=gun->position,peek=gun->position;
            for(const auto& cover:CoverPositions(map))if(!cover.window&&(Distance(cover.shelter,gun->position)<1.5f||Distance(cover.peek,gun->position)<1.5f)){at=cover.shelter;peek=cover.peek;break;}
            int where=0;for(int id:fm.threats)where+=Bears(map,peek,known.contacts[size_t(id)],pathLane)||Bears(map,gun->position,known.contacts[size_t(id)],pathLane);
            if(where>0){current=at;currentPeek=peek;have=true;here=true;}
        }
        int bears=0;
        if(have)for(int id:fm.threats)bears+=Bears(map,currentPeek,known.contacts[size_t(id)],pathLane)||(here&&Bears(map,gun->position,known.contacts[size_t(id)],pathLane));
        if(bears>0&&drillStation&&!here)fm.bearsAt=time;
        const bool leashed=have&&Distance(current,fm.to)<=K().leash;
        // Kept while it bears on a threat; within a leg (not at a new one) it is kept through keepGrace of not bearing, so a
        // threat re-sighted a few metres away or dropped from the set for a moment does not move him; and set, he stays
        // while the group is on a rush.
        const bool grace=drillStation&&!here&&((!newLeg&&time-fm.bearsAt<K().keepGrace)||(going>0&&Distance(gun->position,fm.station)<=K().setRadius));
        if((bears>0||grace)&&leashed) {
            const bool adopted=!drillStation||here;
            if(adopted){fm.station=current;fm.stationPeek=currentPeek;fm.hasStation=true;fm.stationGun=gun->id;fm.stationAt=time;fm.displacing=false;fm.bearsAt=time;}
            if(adopted||newLeg){std::ostringstream o;o<<std::setprecision(6)<<",\"what\":\""<<(adopted?"set":"kept")<<"\",\"why\":\""<<(here?"where_he_is":"bears")<<"\",\"gun\":"<<gun->id
                <<",\"station\":"<<Json(current)<<",\"travel\":"<<Distance(gun->position,current)<<",\"bears\":"<<bears<<",\"threats\":"<<Json(fm.threats);
                Row(diagnostics,leader,cmd,time,"gun_station",o.str());}
        } else {
            GunPlace place;
            if(FindGunStation(known,*gun,map,fm.threats,lane,fm.from,fm.to,taken,time,place)) {
                const bool first=!drillStation;
                std::ostringstream o;o<<std::setprecision(6)<<",\"what\":\""<<(first?"set":"displaced")<<"\",\"why\":\""<<(!have?"none":bears==0?"no_line":"too_far")
                    <<"\",\"gun\":"<<gun->id<<",\"station\":"<<Json(place.shelter)<<",\"travel\":"<<place.travel<<",\"bears\":"<<place.bears<<",\"threats\":"<<Json(fm.threats);
                fm.station=place.shelter;fm.stationPeek=place.peek;fm.hasStation=true;fm.stationGun=gun->id;fm.stationAt=time;fm.displacing=true;fm.bearsAt=time;
                Row(diagnostics,leader,cmd,time,"gun_station",o.str());
            } else {fm.hasStation=false;fallBack("no_station");}
        }
        if(fm.hasStation&&fm.stationGun==gun->id) {
            fm.governsGun=true;
            if(fm.displacing&&Distance(gun->position,fm.station)<=K().setRadius)fm.displacing=false;
            // Plan 031 D (4): the payload, the threats his station bears on (all of them while he is on his way).
            std::vector<int> sector;
            for(int id:fm.threats)if(Bears(map,fm.stationPeek,known.contacts[size_t(id)],pathLane))sector.push_back(id);
            if(sector.empty())sector=fm.threats;
            const int primary=sector.front();
            auto& p=fm.payload;
            if(!(CoverRequestLive(p,time)&&p.enemy==primary)){const int serial=p.serial;p=CoverRequest{};p.serial=serial+1;p.startedAt=time;}
            p.enemy=primary;p.contact=known.contacts[size_t(primary)];p.contact.visible=false;p.requester=leader.id;
            p.from=fm.from;p.to=fm.to;p.until=time+K().payloadSeconds;p.gate="drill";p.crossing=fm.path;
            auto set=std::make_shared<std::vector<SupportThreat>>();
            for(int id:sector){Contact ct=known.contacts[size_t(id)];ct.visible=false;set->push_back({id,ct});}
            p.sector=set;p.gunSector=set;
            // The men's ordered places, for his friendly-fire hold (plan 028 1e): the rifle group to its stations.
            auto movers=std::make_shared<std::vector<FriendlyIntent>>();
            for(const auto& s:squad)if(RifleMan(s,leader,cmd)){const int slot=s.id%SquadSize;
                const Vec3 destination=cmd.stations.held[size_t(slot)]&&cmd.stations.issued[size_t(slot)]?cmd.stations.station[size_t(slot)]:s.assignment.position;
                movers->push_back({s.id,s.position,destination,time});}
            p.friendlies=std::move(movers);
        }
    }
    // 5. The gate, as the leader hears the gun, and the deadline: deadline seconds without the gun heard since men first
    // held for it (he sees them stay), whatever legs came and went meanwhile. Until the gun is heard again, every leg that
    // has men waiting falls back at once: the drill needs its gun working. A hold spell that fell back re-arms once the gun
    // is heard again or deadline seconds after it fell back.
    const bool open=time-leader.fmHeardAt<=config.fmFireWindow;
    if(kind==FmKind::Hold&&fm.fallback&&gun&&(open||time-fm.fallbackAt>=config.fmDeadline)){
        fm.fallback=false;fm.fallbackWhy="";fm.fallbackAt=-1;fm.closedSince=-1;
        Row(diagnostics,leader,cmd,time,"rearmed",std::string(",\"why\":\"")+(open?"heard":"deadline")+"\"");
    }
    fm.gated=fm.governsGun&&!fm.threats.empty()&&!fm.fallback;
    int legGoing=0;
    for(const auto& s:squad)if(RifleMan(s,leader,cmd)) {
        // A man of this leg on his way: his order carries its marker, or (ungated) is a place at its end.
        if(kind==FmKind::Hold||!AttackMovementTask(s.assignment.task))continue;
        const bool moving=s.action==Action::Advance||(s.action==Action::Cover&&s.reason==Reason::ClearLane);
        const bool ofLeg=s.assignment.fm.gun>=0?s.assignment.fm.leg==fm.leg:Distance(s.assignment.position,fm.to)<=GroupConstants.haltRadius;
        if(moving&&ofLeg&&Distance(s.position,s.assignment.position)>BoundConstants.slotArrival)++legGoing;
    }
    if(kind!=FmKind::Hold&&fm.startedAt<0&&legGoing>0) {
        fm.startedAt=time;
        std::ostringstream o;o<<std::setprecision(6)<<",\"waited\":"<<(time-fm.plannedAt)<<",\"gate\":\""<<(fm.gated?(open?"open":"closed"):fm.fallback?"fallback":"ungated")<<'"'
            <<",\"going\":"<<legGoing<<",\"threats\":"<<Json(fm.threats);
        Row(diagnostics,leader,cmd,time,"leg_started",o.str());
    }
    if(fm.gated) {
        if(open!=fm.open||newLeg) {
            const bool set=gun&&Distance(gun->position,fm.station)<=K().setRadius&&gun->action!=Action::Advance&&gun->action!=Action::Retreat;
            std::ostringstream o;o<<std::setprecision(6)<<",\"why\":\""<<(open?"heard":!set?"gun_not_set":"gun_silent")<<"\",\"heard_age\":"<<(time-leader.fmHeardAt)
                <<",\"waiting\":"<<waiting<<",\"threats\":"<<Json(fm.threats);
            Row(diagnostics,leader,cmd,time,open?"gate_open":"gate_closed",o.str());
        }
        fm.open=open;
        if(open)fm.closedSince=-1;
        else if(waiting>0&&fm.closedSince<0)fm.closedSince=time;
        if(!open&&waiting>0&&fm.closedSince>=0&&time-fm.closedSince>=config.fmDeadline){fallBack("deadline");fm.gated=false;}
    } else {fm.open=false;if(open)fm.closedSince=-1;}
    if(newLeg) {
        std::ostringstream o;o<<std::setprecision(6)<<",\"from\":"<<Json(fm.from)<<",\"to\":"<<Json(fm.to)<<",\"length\":"<<(kind==FmKind::Hold?0.f:PathLength(fm.from,*fm.path))
            <<",\"threats\":"<<Json(fm.threats)<<",\"gated\":"<<fm.gated<<",\"gun\":"<<fm.gun<<",\"station\":"<<(fm.governsGun?Json(fm.station):std::string("null"));
        Row(diagnostics,leader,cmd,time,"leg_planned",o.str());
    }
}
Order ApplyFireMovement(const Soldier& s,const Map& map,const Config& c,const std::vector<Vec3>& friends,Tactics& memory,float time,DecisionAlternatives* alternatives){
    const auto& a=s.assignment;
    // The drill's own marks on his memory are his, whatever the decision below does to the cover he holds.
    auto plain=[&]{const int rush=memory.fmRushLeg;const float held=memory.fmHeldAt;
        const Order d=ChooseOrderPlain(s,map,c,friends,memory,time,alternatives);
        memory.fmRushLeg=rush;memory.fmHeldAt=held;return d;};
    if(!FireAndMovement(c,s.team))return plain();
    // The gun on his drill station takes the station's catalogue cover (its shelter is the station), as a man arriving on
    // his bound station does (plan 021), so his peek-and-fire cycle runs there whatever other enemy he knows of.
    if(a.fm.gun==s.id){
        // Displacing (plan 031 D (6)): a cover he took on the way, or held before he was sent, does not keep him (the
        // Legacy gun stays in any cover with an angle on an enemy, whatever his order); pinned, or in emergency cover
        // under fire, he stays until it lets him go, as any man does.
        if(a.fm.displace&&memory.assigned&&!memory.emergency&&s.suppression<DuckThreshold(c,s.team)&&Distance(s.position,a.position)>FireMovementConstants.setRadius)
            {const float ready=memory.readyAt,since=memory.proneSince;memory={};memory.readyAt=ready;memory.proneSince=since;}
        if(a.task==Task::Overwatch&&!memory.assigned&&Distance(s.position,a.position)<1.5f)
            for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,a.position)<.75f&&ClearLine(map,cover.shelter,cover.peek,.48f)){
                TakeCover(memory,map,cover,s.position,Watched(s,time),time,180);break;}
        return plain();
    }
    if(!FmGatedTask(a.task))return plain();
    const Vec3 objective=a.position;
    // The gate: his gun heard at work on its sector within the window, or he has waited so long that his leader's deadline
    // cannot have reached him (the backstop). Open, the cover he waited in is given up and he decides as he always does.
    const bool open=time-s.fmHeardAt<=c.fmFireWindow||(s.fmWaitSince>=0&&time-s.fmWaitSince>=c.fmDeadline*FireMovementConstants.backstop);
    if(open&&memory.assigned&&memory.fmWait){const float ready=memory.readyAt,since=memory.proneSince;const int rush=memory.fmRushLeg;
        memory={};memory.readyAt=ready;memory.proneSince=since;memory.fmRushLeg=rush;}
    Order d=plain();
    const bool departure=Departure(s,d,objective);
    // A move of this leg (or hold spell) he started through the open gate he finishes, whatever he hears after; one he was
    // already making under another order is not: he stops and waits like the rest. Any decision that is not a move ends it.
    if(!departure)memory.fmRushLeg=0;
    else if(open)memory.fmRushLeg=a.fm.leg;
    if(departure&&!open&&memory.fmRushLeg!=a.fm.leg)return Wait(s,map,c,friends,memory,time);
    // At the leg's end he gets down: behind catalogue cover within downReach of his place if it shelters him from the enemy
    // he watches, otherwise crouched where he stands.
    auto standing=[&](const Order& o){return (o.action==Action::Hold||o.action==Action::Fire)&&o.stance==Stance::Standing&&Distance(o.goal,objective)<1.5f;};
    if(AttackMovementTask(a.task)&&Distance(s.position,objective)<1.5f&&!memory.assigned&&standing(d)) {
        const Vec3 enemy=Watched(s,time);
        const CoverPosition* best=nullptr;float nearest=FireMovementConstants.downReach;
        for(const auto& cover:CoverPositions(map)){
            if(cover.window||std::abs(cover.shelter.z-s.position.z)>.5f)continue;
            const float gap=Distance(cover.shelter,objective);
            if(gap<nearest&&Walkable(map,cover.shelter)&&ClearLine(map,cover.shelter,cover.peek,.48f)&&ProtectedAt(map,cover.shelter,enemy,CoverStance(cover))){nearest=gap;best=&cover;}
        }
        // The cover cycle takes him down behind it; an order that keeps him on his place (a lane clearance) he holds crouched.
        if(best){TakeCover(memory,map,*best,s.position,enemy,time,180);d=plain();}
        if(standing(d))d.stance=Stance::Crouched;
    }
    return d;
}
bool FmGunRound(const Soldier& g,int enemy,float time){
    const auto& a=g.assignment;
    if(a.fm.gun!=g.id||enemy<0||!FirePayloadLive(g,time)||Distance(g.position,a.position)>FireMovementConstants.setRadius)return false;
    if(enemy==a.fireEnemy)return true;
    if(a.fireSector)for(const auto& t:*a.fireSector)if(t.enemy==enemy)return true;
    return false;
}
}
