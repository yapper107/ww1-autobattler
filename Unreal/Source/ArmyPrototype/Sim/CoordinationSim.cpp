#include "CoordinationSim.h"
#include "CommandSim.h"
#include "ManeuverSim.h"
#include "TacticalRouteSim.h"
#include <algorithm>
#include <cmath>
namespace army {
int FireTeam(int id){return (id%SquadSize)%2==1?0:1;}
bool InWindowTeam(const TeamPlan& p,int id){return p.windowTeam[0]==id||p.windowTeam[1]==id;}
const char* SupportStateName(SupportState s){const char* names[]={"DEPLOYING","WATCHING APPROACH","COVERING ADVANCE","FIRE LANE BLOCKED","CONTACT STALE","NO USEFUL ANGLE","REPOSITIONING"};return names[int(s)];}
float SupportCoverage(const Map& map,Vec3 gun,Vec3 crossing,const Soldier& leader,float time) {
    float best=0;bool known=false;
    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<=8&&Distance(ct.position,crossing)<45) {
        known=true;
        if(Distance(gun,ct.position)<95&&ClearLine3D(map,gun+Vec3{0,0,1.5f},{ct.position.x,ct.position.y,ct.aimHeight}))best=1;
    }
    if(!known&&Distance(gun,crossing)<90&&ClearLine3D(map,gun+Vec3{0,0,1.5f},crossing+Vec3{0,0,1.5f}))best=0.5f;
    return best;
}
// Plan 023 A (3.1): the one allocator. Plan 021's bound slots, generation 16's halt slots and
// the relay's firing-position pass were three searches with three lifetimes; this is one. A
// station is a covered place from the catalogue that belongs to the group's objective: within
// the kind's radius of it, spaced from the stations already given out, protected from the enemy
// the leader knows (from the squad's sector when he knows none) and bearing on him when the
// group is in contact. Each kind keeps the geometry its lineage measured; a hold searches
// around the man himself, as the firing-position pass it replaces did.
bool GroupStation(const Soldier& officer,const Soldier& s,StationKind kind,Vec3 objective,Vec3 sector,
    const std::vector<Vec3>& taken,const Map& map,float time,Vec3& place,float standOff,float minRange) {
    const bool hold=kind==StationKind::Hold;
    // Plan 023 D (3.9): the gun's station is a firing position within supportRange of the rifle
    // group's centre (the objective he is given here) and angled off the group's own line onto the
    // enemy; the staff place is a halt behind the group that the enemy would rather not see.
    const bool gun=kind==StationKind::Support,staff=kind==StationKind::Staff;
    const Vec3 centre=hold?s.position:objective;
    const float radius=kind==StationKind::Bound?GroupConstants.boundRadius:hold?GroupConstants.holdRadius:
        gun?GroupConstants.supportRange:GroupConstants.haltRadius;
    const float spacing=kind==StationKind::Halt||gun||staff?GroupConstants.haltSpacing:GroupConstants.boundSpacing;
    const auto leader=WithTracks(officer,time);const Contact* target=nullptr;float nearest=1e9f;
    for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,centre)<nearest){nearest=Distance(ct.position,centre);target=&ct;}
    const Vec3 threat=target?target->position:sector;
    // Plan 023 B2: the stand-off. No station is laid out inside the band a firing position must
    // satisfy anyway (nor inside the forward men, who are already the closest the group gets):
    // the group fights this position, it does not assault into it. Ground a man already holds is
    // his own affair (3.3); this is about where the relay SENDS him.
    std::vector<Vec3> known;
    if(standOff>0)for(const auto& ct:leader.contacts)if(ct.known)known.push_back(ct.position);
    // Plan 023 D: the angle off the rifles' line is a HARD qualifier for the gun whenever the
    // ground offers one (45 degrees if it does, else 30): generation 19 and stage B2 both scored it
    // and both put the gun back on the rifles' own axis, where its fire adds nothing they have not.
    float best[3]={1e9f,1e9f,1e9f};Vec3 chosen[3]{};
    for(const auto& c:CoverPositions(map)) {
        // Inside the band counts against an enemy who can actually see the place: cover on his
        // flank at twenty metres is a firing position, open ground at twenty metres is the assault
        // this plan does not make. Half the band is too close whatever the ground offers.
        bool inside=false;
        for(Vec3 enemy:known)if(Distance(c.shelter,enemy)<standOff&&
            (Distance(c.shelter,enemy)<standOff*.5f||!ProtectedAt(map,c.shelter,enemy,c.crouch?Stance::Crouched:Stance::Standing)))inside=true;
        if(inside)continue;
        const float travel=Distance(c.shelter,s.position);
        if(Distance(c.shelter,centre)>radius)continue;
        if(!hold&&(c.window||!Walkable(map,c.shelter)))continue;
        if(hold&&(travel<GroupConstants.holdMinTravel||std::abs(c.shelter.z-s.position.z)>.5f))continue;
        if(gun&&!c.crouch)continue;                     // the gun deploys behind cover it can fire over
        bool occupied=false;for(Vec3 p:taken)if(Distance(p,c.shelter)<spacing)occupied=true;
        if(occupied)continue;
        const bool covered=ProtectedAt(map,c.shelter,threat,c.crouch?Stance::Crouched:Stance::Standing);
        const bool bears=target&&Distance(c.peek,target->position)<=(hold?GroupConstants.holdRange:GroupConstants.stationRange)&&
            ClearLine3D(map,c.peek+Vec3{0,0,1.5f},{target->position.x,target->position.y,target->aimHeight});
        if(kind!=StationKind::Bound&&!covered)continue; // a halt and a hold demand real cover
        if((hold||gun)&&!bears)continue;                // a hold station and the gun's are firing positions or nothing
        // Plan 023 D: no nearer the enemy than the rifle group's own lead station: the gun and the
        // platoon officer take the group's fight, they do not go out in front of it.
        if(minRange>0&&target&&Distance(c.shelter,target->position)<minRange)continue;
        if(gun||staff) { // protected from every enemy the leader knows, not only the nearest of them
            bool safe=true;
            for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,c.shelter)<80&&
                !ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing))safe=false;
            if(!safe)continue;
        }
        float score=(hold?0.f:Distance(c.shelter,centre))+travel*(hold?1.f:.1f)+FireDanger(leader,c.shelter,time)*(hold?20.f:10.f);
        if(kind==StationKind::Bound){if(!bears)score+=10;if(!covered)score+=8;}
        // The gun pays for every metre he walks: a gun in transit is a gun that is not firing, so
        // of the positions that qualify he takes the nearest and not the prettiest angle on the map.
        if(gun)score=travel+Distance(c.shelter,centre)*.35f+FireDanger(leader,c.shelter,time)*10;
        // The staff place is the one the enemy cannot look into, where the ground offers it.
        if(staff)for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,c.shelter)<80&&
            ClearLine3D(map,{ct.position.x,ct.position.y,ct.aimHeight},c.shelter+Vec3{0,0,1.2f})){score+=20;break;}
        int tier=0;
        if(gun&&target) {
            Vec3 rifles=objective-target->position,own=c.shelter-target->position;
            const float cosine=(rifles.x*own.x+rifles.y*own.y)/std::max(.01f,Length(rifles)*Length(own));
            // The qualifier is the 30 degrees; the wider angle is a preference inside it, not a
            // second hard tier: a 45 degree place fifty metres away is not one the ground gives.
            tier=cosine<GroupConstants.supportAngleCos?0:1;
            if(cosine<GroupConstants.supportWideCos)score-=6;
        }
        if(score<best[tier]&&!FindPath(map,s.position,c.shelter).empty()){best[tier]=score;chosen[tier]=c.shelter;}
    }
    for(int tier=0;tier<3;++tier)if(best[tier]<1e9f){place=chosen[tier];return true;}
    return false;
}
// Plan 023 A (3.1): a station is given up only when another live man stands on it, or when an
// enemy it was not chosen against now overlooks it. A bound's stations were fixed against the
// enemies the leader knew then (plan 021 A2); a halt's and a hold's against every enemy he knows.
bool StationValid(const Soldier& officer,const Soldier& s,const std::vector<Soldier>& squad,const Map& map,const GroupStations& st,int slot,float time) {
    if(!st.held[slot])return false;
    const Vec3 place=st.station[slot];
    for(const auto& other:squad)if(other.Active()&&other.id!=s.id&&Distance(other.position,place)<1.2f&&Distance(other.position,s.position)>1.2f)return false;
    const auto leader=WithTracks(officer,time);
    for(int id=0;id<UnitCount;++id){const auto& ct=leader.contacts[id];
        if(!ct.known||Distance(ct.position,place)>=80)continue;
        if(st.kind==StationKind::Bound&&(st.known&(uint64_t(1)<<id)))continue;
        if(!ProtectedAt(map,place,ct.position,Stance::Crouched))return false;}
    return true;
}
// Plan 023 B (3.3): a place is protected only when every enemy the leader knows of nearby is
// screened from it. A man ahead keeps his ground only if it is a real position, not merely one
// with a line: generation 17 found nine "forward holders" and not one of them could fire.
bool StationCovered(const Soldier& officer,const Map& map,Vec3 place,float time) {
    const auto leader=WithTracks(officer,time);
    for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,place)<80&&!ProtectedAt(map,place,ct.position,Stance::Crouched))return false;
    return true;
}
// Plan 023 B2: the stand-off line. A place the group is SENT to is pushed back out of the band
// no firing position may sit inside, away from the enemy that makes it too close. Ground a man
// already holds is not touched: this answers "where do I send him", not "where is he".
Vec3 StandOffPoint(const Soldier& officer,Vec3 p,float standOff,float time) {
    if(standOff<=0)return p;
    const auto leader=WithTracks(officer,time);
    const Contact* nearest=nullptr;float best=standOff;
    for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,p)<best){best=Distance(ct.position,p);nearest=&ct;}
    if(!nearest)return p;
    Vec3 back=p-nearest->position;back.z=0;const float length=Length(back);
    if(length<.5f)return p;
    Vec3 out=nearest->position+back*(standOff/length);out.z=p.z;
    return out;
}
// Plan 021 A4: a place is a fighting position only while it still bears on an enemy the squad
// knows; when the fight has moved on the man is released to the ordinary search.
bool StationBears(const Soldier& officer,const Map& map,Vec3 place,float time) {
    const auto leader=WithTracks(officer,time);
    for(const auto& ct:leader.contacts)if(ct.known&&Distance(place,ct.position)<GroupConstants.stationRange&&
        ClearLine3D(map,place+Vec3{0,0,1.5f},{ct.position.x,ct.position.y,ct.aimHeight}))return true;
    return false;
}
// Plan 023 B (3.2): the group's axis. It runs from the group's centre to its objective, or to the
// enemy it is tracking when it is in contact. A man's progress is his projection on it, so behind
// and ahead are directions in the fight and not a distance to the leader, who is a moving point.
GroupAxis MakeGroupAxis(const Soldier& officer,Vec3 centre,Vec3 objective,Vec3 sector,float time) {
    const auto leader=WithTracks(officer,time);
    const Contact* target=nullptr;float nearest=GroupConstants.axisRange;
    for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,centre)<nearest){nearest=Distance(ct.position,centre);target=&ct;}
    GroupAxis axis;axis.origin=centre;
    for(Vec3 to:{target?target->position:objective,objective,sector}) {
        Vec3 d=to-centre;d.z=0;const float length=Length(d);
        if(length>1){axis.direction=d*(1/length);axis.contact=target&&to.x==target->position.x&&to.y==target->position.y;return axis;}
    }
    axis.direction={officer.team?-1.f:1.f,0,0};
    return axis;
}
float AxisProgress(const GroupAxis& axis,Vec3 p) {
    Vec3 d=p-axis.origin;return d.x*axis.direction.x+d.y*axis.direction.y;
}
// Plan 023 B (3.4): the enemy that overlooks a leg, the one a covering element would have to
// answer. Chosen as the covering-fire test chooses it: the nearest to the middle of the crossing,
// automatic weapons first. Only the leader's own knowledge is read.
int OverlookingEnemy(const Soldier& officer,const Map& map,Vec3 from,Vec3 to,float time) {
    const auto leader=WithTracks(officer,time);
    const auto path=FindPath(map,from,to);if(path.empty())return -1;
    int primary=-1;float priority=1e9f;Vec3 middle=(from+to)*.5f;
    for(int id=0;id<UnitCount;++id){const auto& ct=leader.contacts[id];if(!ct.known)continue;
        const float score=Distance(ct.position,middle)-(ct.automaticWeapon?20.f:0.f);
        if(score>=priority)continue;
        bool overlooks=false;Vec3 start=from;
        for(Vec3 end:path){const int n=std::max(1,int(std::ceil(Distance(start,end)/3)));
            for(int k=1;k<=n&&!overlooks;++k){Vec3 p=start+(end-start)*(float(k)/n);
                overlooks=Distance(ct.position,p)<100&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},p+Vec3{0,0,1.3f});}
            if(overlooks)break;start=end;}
        if(overlooks){primary=id;priority=score;}
    }
    return primary;
}
// Plan 023 E (section 11): where a withdrawal ends. The nearest covered ground BEHIND the squad's
// last objective (farther from the enemy it withdrew from by a clear margin) that no enemy the
// leader knows can look into, reachable and not far to walk. A pull-back candidate is only the
// first cover to hand, which is how a withdrawal became an open walk with no end point.
bool OutOfSight(const Soldier& officer,const Map& map,Vec3 place,bool crouch,float time) {
    const auto leader=WithTracks(officer,time);
    for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,place)<GroupConstants.stationRange&&
        (!ProtectedAt(map,place,ct.position,crouch?Stance::Crouched:Stance::Standing)||
         ClearLine3D(map,{ct.position.x,ct.position.y,ct.aimHeight},place+Vec3{0,0,1.3f})))return false;
    return true;
}
bool FallbackPosition(const Soldier& officer,const Map& map,Vec3 objective,Vec3 enemy,Vec3 from,float time,Vec3& place) {
    const auto leader=WithTracks(officer,time);
    const float range=Distance(objective,enemy);
    float best=1e9f;bool found=false;
    for(const auto& c:CoverPositions(map)) {
        const Vec3 p=c.shelter;const float travel=Distance(p,from);
        if(c.window||travel>GroupConstants.fallbackTravel||!Walkable(map,p))continue;
        if(Distance(p,enemy)<range+GroupConstants.behindMargin)continue;
        if(!OutOfSight(officer,map,p,c.crouch,time))continue;
        const float score=travel+Distance(p,objective)*.2f+FireDanger(leader,p,time)*20;
        if(score<best&&!FindPath(map,from,p).empty()){best=score;place=p;found=true;}
    }
    return found;
}
// Plan 021 A1 through the one record: when a bound starts, every rifleman is given ONE station at
// its destination and it is issued once; nothing re-seats him while the bound runs.
void PlanGroupStations(const Soldier& officer,const std::vector<Soldier>& squad,const Map& map,SquadCommand& cmd,const Config& config,float time) {
    const auto leader=WithTracks(officer,time);
    auto& st=cmd.stations;
    // Plan 023 C (3.7, behind config.orderPace): the group is leaving a position. BEFORE the new
    // bound wipes where everyone stood, the two men whose own ground bears on an enemy the leader
    // knows are told to stay and fire on him; they take their place on this new objective when it
    // is reached or after coverPairSeconds. Nobody stays without a line of fire; the pair is the
    // two nearest the enemy they can see, by roster slot on a tie, so no draw is made. Off, this
    // never selects anyone, which is what --no-order-pace needs to reproduce stage B2 exactly.
    std::array<bool,SquadSize> cover{};std::array<Vec3,SquadSize> coverEnemy{};
    if(config.orderPace&&cmd.engaged&&st.serial) {
        std::array<float,SquadSize> rank{};rank.fill(1e9f);
        for(const auto& s:squad) {
            const int slot=s.id%SquadSize;
            if(!s.Active()||IsPlatoonStaff(s)||s.id==cmd.leader||s.id==cmd.support||s.machineGun||KnowsWounded(leader,s))continue;
            if(!st.held[slot]||Distance(s.position,st.station[slot])>BoundConstants.slotArrival)continue;
            if(!StationBears(officer,map,s.position,time))continue;
            float nearest=1e9f;
            for(const auto& ct:leader.contacts)if(ct.known&&Distance(ct.position,s.position)<nearest){nearest=Distance(ct.position,s.position);coverEnemy[slot]=ct.position;}
            rank[slot]=nearest;
        }
        for(int taken=0;taken<GroupConstants.coverPair;++taken) {
            int best=-1;
            for(int slot=0;slot<SquadSize;++slot)if(rank[slot]<1e9f&&(best<0||rank[slot]<rank[best]))best=slot;
            if(best<0)break;
            cover[best]=true;rank[best]=1e9f;
        }
    }
    st.kind=StationKind::Bound;st.bound=true;st.plan=cmd.planId;st.objective=cmd.waypoint;st.committedAt=time;
    ++st.serial;st.coverSerial=st.serial;st.covering=cover;st.coverSector=coverEnemy;st.coverUntil=-1;
    for(int slot=0;slot<SquadSize;++slot)if(cover[slot])st.coverUntil=time+GroupConstants.coverPairSeconds;
    std::array<Vec3,SquadSize> held=st.station;std::array<bool,SquadSize> was=st.held;
    std::array<int,SquadSize> wasIssued=st.issued;
    st.held.fill(false);st.issued.fill(0);st.known=0;
    // Plan 023 D (3.9): a station that belongs to a man and not to the group's objective (the gun's,
    // the platoon staff's: issued 0) is kept while it bears; a new bound is not its business.
    for(int slot=0;slot<SquadSize;++slot)if(was[slot]&&!wasIssued[slot]){st.station[slot]=held[slot];st.held[slot]=true;}
    for(int id=0;id<UnitCount;++id)if(leader.contacts[id].known)st.known|=uint64_t(1)<<id;
    std::vector<Vec3> taken{cmd.waypoint};
    for(const auto& s:squad) {
        if(!s.Active()||IsPlatoonStaff(s)||s.id==cmd.leader||s.id==cmd.support||s.machineGun||
            s.role==Role::Corporal||KnowsWounded(leader,s)||InWindowTeam(cmd.teamPlan,s.id))continue;
        const int slot=s.id%SquadSize;Vec3 place{};
        if(!GroupStation(officer,s,StationKind::Bound,st.objective,cmd.mission,taken,map,time,place,GroupConstants.standOff)) {
            // No cover at the destination: the man still gets his own place in the group there,
            // fixed once, rather than a formation offset recomputed around a walking corporal.
            Vec3 offset{(s.team?1.f:-1.f)*float(s.id%2)*2.5f,float(slot-4)*2.4f};
            if(!ResolveOrderPosition(map,s.position,st.objective+offset,place))continue;
        }
        st.station[slot]=place;st.held[slot]=true;st.issued[slot]=st.serial;taken.push_back(place);
    }
    // The covering pair keeps the ground it is on until it is released (the relay does that).
    for(int slot=0;slot<SquadSize;++slot)if(st.covering[slot]&&was[slot]){st.station[slot]=held[slot];st.held[slot]=true;st.issued[slot]=st.serial;}
}
Order TeamOrder(const Soldier& s,const TeamPlan& p,Vec3) {
    for(int i=0;i<2;++i)if(p.windowTeam[i]==s.id)return {p.windows[i],Action::Cover,Reason::WindowPosition};
    if(FireTeam(s.id)==p.moving&&p.released)return {p.moves[s.id%SquadSize],Action::Advance,Reason::BoundAdvance};
    return {p.holds[s.id%SquadSize],Action::Hold,Reason::BoundSupport};
}
void UpdateCoordination(const Soldier& officer,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<int>& claimed,SquadCommand& cmd,float time) {
    if(cmd.movementBlock.reason!=MoveBlock::None)return;
    const auto leader=WithReports(officer,time);const Soldier* gun=nullptr;
    Vec3 centre{};int healthy=0;bool contact=false;
    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<8)contact=true;
    // Plan 018 gen18b: the same rifle-group succession as elsewhere, so a wounded corporal does
    // not also drag the bound's own origin (below) and window/team assignment to the rear.
    const Soldier* nco=RifleGroupLeader(leader,squad,cmd.support);
    for(const auto& s:squad)if(s.Active()) {
        if(s.id==cmd.support)gun=&s;
        if(s.id!=cmd.leader&&s.id!=cmd.support&&!KnowsWounded(leader,s)){centre=centre+s.position;++healthy;}
    }
    if(healthy)centre=centre*(1.f/healthy);else centre=officer.position;
    const Vec3 mission=cmd.hasWaypoint?cmd.waypoint:cmd.mission;
    if(cmd.teamPlan.bounding&&Distance(mission,cmd.mission)>5){cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;}
    cmd.mission=mission;
    bool releasedTeam=false;
    for(int i=0;i<2;++i)if(cmd.teamPlan.windowTeam[i]>=0) {
        auto it=std::find_if(squad.begin(),squad.end(),[&](const Soldier& s){return s.id==cmd.teamPlan.windowTeam[i];});
        if(it==squad.end()||!it->Active()||KnowsWounded(leader,*it)){cmd.teamPlan.windowTeam[i]=-1;releasedTeam=true;}
    }
    if(cmd.building>=0&&((time>cmd.buildingUntil&&!cmd.engaged)||(!contact&&cmd.searching)||healthy<4||cmd.maneuver==Maneuver::PullBack||Distance(map.buildings[cmd.building].center,centre)>35)) {
        cmd.building=-1;cmd.buildingRetryAt=time+16;cmd.teamPlan.windowTeam={{-1,-1}};releasedTeam=true;
    }
    if(releasedTeam)++cmd.teamPlan.serial;
    // At most two healthy riflemen occupy a building; commanders and the assault
    // group retain their jobs. Another squad's claimed building is left available to it.
    if(cmd.building<0&&time>=cmd.buildingRetryAt&&contact&&healthy>=4&&cmd.advancing&&cmd.maneuver!=Maneuver::PullBack) {
        float best=1e9f;int building=-1;std::array<Vec3,2> windows{};std::array<int,2> members{{-1,-1}};
        for(size_t b=0;b<map.buildings.size();++b) {
            if(std::find(claimed.begin(),claimed.end(),int(b))!=claimed.end()||Distance(map.buildings[b].center,centre)>24)continue;
            std::vector<CoverPosition> options;
            for(const auto& w:map.windows)if(std::abs(w.shelter.x-map.buildings[b].center.x)<5&&std::abs(w.shelter.y-map.buildings[b].center.y)<4&&SupportCoverage(map,w.peek,cmd.mission,leader,time)>0.5f)options.push_back(w);
            if(options.size()<2)continue;
            std::array<int,2> ids{{-1,-1}};std::array<Vec3,2> places{};float score=0;
            for(int slot=0;slot<2;++slot){float nearest=1e9f;
                for(const auto& s:squad)if(s.Active()&&s.role==Role::Rifleman&&s.id!=cmd.support&&s.id!=ids[0]&&!KnowsWounded(leader,s))for(const auto& w:options) {
                    if(slot&&Distance(w.peek,places[0])<2.2f)continue;
                    float value=Distance(s.position,w.peek)+(w.peek.z>1?-2.f:0.f);
                    if(value<nearest&&!FindPath(map,s.position,w.peek).empty()){nearest=value;ids[slot]=s.id;places[slot]=w.peek;}
                }
                score+=nearest;
            }
            if(ids[1]>=0&&score<best){best=score;building=int(b);members=ids;windows=places;}
        }
        if(building>=0){cmd.building=building;cmd.teamPlan.windowTeam=members;cmd.teamPlan.windows=windows;cmd.buildingUntil=time+32;++cmd.teamPlan.serial;}
    }
    const Vec3 crossing=cmd.teamPlan.bounding?cmd.teamPlan.target:cmd.mission;
    const bool reported=time-leader.supportReportAt<5;
    const float coverage=reported?SupportCoverage(map,leader.reportedSupportPosition,crossing,leader,time):0;
    cmd.supportUseful=gun&&reported&&time-leader.supportReadyAt<5&&!leader.supportBlocked&&coverage>0;
    cmd.supportState=!gun?SupportState::Deploying:!reported?SupportState::Deploying:
        leader.supportBlocked?SupportState::Blocked:time-leader.supportReadyAt>=5?SupportState::Moving:
        coverage<=0?SupportState::WrongAngle:contact&&time-leader.supportContactAt>8?SupportState::Stale:
        coverage>0.5f?SupportState::Effective:SupportState::Watching;
    if(cmd.supportState==SupportState::Stale)cmd.supportUseful=false;
    bool bad=cmd.advancing&&reported&&!cmd.supportUseful&&cmd.supportState!=SupportState::Moving;
    if(!bad)cmd.supportProblemSince=-1;else if(cmd.supportProblemSince<0)cmd.supportProblemSince=time;
    if(gun&&bad&&time-cmd.supportProblemSince>=8&&time>=cmd.nextSupportMove&&!KnowsWounded(leader,*gun)) {
        cmd.supportNeedsMove=true;cmd.supportMoveFrom=gun->position;cmd.nextSupportMove=time+16;cmd.supportProblemSince=time;++cmd.supportRepositions;
    }
    int members[2]={0,0};
    for(const auto& s:squad)if(s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!KnowsWounded(leader,s)&&!InWindowTeam(cmd.teamPlan,s.id))++members[FireTeam(s.id)];
    // A committed flank (the corporal's rifle group going around, gun and sergeant covering) moves
    // as one body rather than bounding internally in two halves; splitting it just thins the line
    // and turns the flank into another short-bound frontal approach.
    const bool committedFlank=(cmd.maneuver==Maneuver::FlankNorth||cmd.maneuver==Maneuver::FlankSouth)&&cmd.hasWaypoint;
    if(committedFlank||(cmd.engaged&&!cmd.hasWaypoint&&!(cmd.teamPlan.bounding&&cmd.teamPlan.released))||!cmd.advancing||(!contact&&!(cmd.teamPlan.bounding&&cmd.teamPlan.released))||!nco||!members[0]||!members[1]||(cmd.maneuver==Maneuver::PullBack&&!cmd.route)||time<cmd.boundRetryAt) {
        if(cmd.teamPlan.bounding){cmd.teamPlan.bounding=false;++cmd.teamPlan.serial;}return;
    }
    if(cmd.teamPlan.bounding&&cmd.teamPlan.released) {
        bool arrived=true;
        for(const auto& s:squad)if(s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!KnowsWounded(leader,s)&&!InWindowTeam(cmd.teamPlan,s.id)&&FireTeam(s.id)==cmd.teamPlan.moving) {
            const auto order=TeamOrder(s,cmd.teamPlan,cmd.mission);
            if(Distance(s.position,order.goal)>3)arrived=false;
        }
        if(arrived&&time-cmd.boundReleasedAt>3){++cmd.boundsCompleted;cmd.teamPlan.moving=1-cmd.teamPlan.moving;cmd.teamPlan.bounding=false;
            if(cmd.engaged&&!cmd.route){cmd.teamPlan.released=false;++cmd.teamPlan.serial;return;}}
        else if(time-cmd.boundReleasedAt>18){PauseSquadMovement(officer,squad,cmd,MoveBlock::Execution,time);return;}
    }
    if(!cmd.teamPlan.bounding) {
        cmd.boundOrigin=centre;Vec3 from=nco->position;auto path=cmd.route?FollowCorridor(map,*cmd.route,from,cmd.mission):FindPath(map,from,cmd.mission);if(path.empty())return;
        Vec3 goal=from;float left=10;
        for(Vec3 p:path){float d=Distance(goal,p);if(d>left){goal=goal+(p-goal)*(left/d);break;}goal=p;left-=d;}
        if(cmd.hasWaypoint)goal=cmd.waypoint;
        if(!Walkable(map,goal)||Distance(goal,from)<3)return;
        cmd.teamPlan.route=cmd.route;cmd.teamPlan.target=goal;cmd.teamPlan.bounding=true;cmd.teamPlan.released=false;cmd.boundStarted=time;cmd.boundReleasedAt=-1;
        std::vector<Vec3> reserved, moveReservations;
        const auto& cover=CoverPositions(map);
        for(const auto& s:squad) {
            const int slot=s.id%SquadSize;Vec3 resolved=s.position;
            Vec3 offset{(s.team?1.f:-1.f)*float(s.id%2)*1.5f,float(slot-3)*1.7f,0};
            ResolveOrderPosition(map,s.position,goal+offset,resolved);
            if((cmd.maneuver==Maneuver::Press||cmd.maneuver==Maneuver::FlankNorth||cmd.maneuver==Maneuver::FlankSouth)&&s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!InWindowTeam(cmd.teamPlan,s.id)) {
                float bestMove=1e9f;Vec3 covered=s.position;
                // Sheltered terrain is a valid travel-stage destination even without a manufactured cover slot.
                if(cmd.route&&CorridorDistance(*cmd.route,resolved)<3){bool safe=true;
                    for(const auto& ct:leader.contacts)if(ct.known&&!ProtectedAt(map,resolved,ct.position,Stance::Standing))safe=false;
                    for(Vec3 p:moveReservations)if(Distance(p,resolved)<1.2f)safe=false;
                    if(safe&&!FollowCorridor(map,*cmd.route,s.position,resolved).empty()){covered=resolved;bestMove=8;}
                }
                for(const auto& c:cover) {
                    if((cmd.route&&CorridorDistance(*cmd.route,c.shelter)>4)||c.window||Distance(c.shelter,resolved)>7||Distance(c.shelter,s.position)>38)continue;
                    bool safe=true;
                    for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<10&&
                        (!ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing)||Distance(c.shelter,ct.position)<3))safe=false;
                    for(Vec3 p:moveReservations)if(Distance(p,c.shelter)<2)safe=false;
                    float cost=Distance(c.shelter,resolved)+Distance(c.shelter,s.position)*0.2f;
                    if(safe&&cost<bestMove&&!(cmd.route?FollowCorridor(map,*cmd.route,s.position,c.shelter):FindPath(map,s.position,c.shelter)).empty()){bestMove=cost;covered=c.shelter;}
                }
                resolved=covered;moveReservations.push_back(covered);
            }
            cmd.teamPlan.moves[slot]=resolved;
            Vec3 hold=s.position;float best=1e9f;
            if(s.Active()&&s.id!=cmd.leader&&s.id!=cmd.support&&!InWindowTeam(cmd.teamPlan,s.id))for(const auto& c:cover) {
                if(c.window||Distance(s.position,c.shelter)>10||!Walkable(map,c.shelter))continue;
                bool protectedPosition=true,occupied=false;
                for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<8&&!ProtectedAt(map,c.shelter,ct.position,c.crouch?Stance::Crouched:Stance::Standing))protectedPosition=false;
                for(Vec3 p:reserved)if(Distance(p,c.shelter)<2)occupied=true;
                const float cost=Distance(s.position,c.shelter)+(SupportCoverage(map,c.peek,goal,leader,time)>0.5f?0:8);
                if(protectedPosition&&!occupied&&cost<best&&!FindPath(map,s.position,c.shelter).empty()){best=cost;hold=c.shelter;}
            }
            cmd.teamPlan.holds[slot]=hold;reserved.push_back(hold);
        }
        ++cmd.teamPlan.serial;
    }
    {
        int ready=0;
        for(const auto& s:squad)if(s.Active()&&s.id!=cmd.support&&s.id!=cmd.leader&&!InWindowTeam(cmd.teamPlan,s.id)&&!KnowsWounded(leader,s)&&FireTeam(s.id)!=cmd.teamPlan.moving&&s.assignment.task==Task::BoundCover&&s.suppression<0.5f&&Distance(s.position,cmd.teamPlan.holds[s.id%SquadSize])<8&&SupportCoverage(map,s.position,cmd.teamPlan.target,leader,time)>0) {
            bool sheltered=false;
            for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,cmd.teamPlan.holds[s.id%SquadSize])<0.6f&&
                (Distance(s.position,cover.shelter)<1.5f||Distance(s.position,cover.peek)<1.5f)) {
                bool safe=true;
                for(const auto& ct:leader.contacts)if(ct.known&&time-ct.observedAt<8&&!ProtectedAt(map,cover.shelter,ct.position,cover.crouch?Stance::Crouched:Stance::Standing))safe=false;
                sheltered|=safe;
            }
            if(sheltered)++ready;
        }
        std::vector<Vec3> crossingPath;
        if(cmd.route)crossingPath=BoundCrossing(*cmd.route,cmd.routeStage,std::max(cmd.routeStage,cmd.boundStage));
        bool covering=!crossingPath.empty()?CoveringPath(officer,map,cmd.boundOrigin,crossingPath,time):CoveringCrossing(officer,map,cmd.boundOrigin,cmd.teamPlan.target,time);
        if(cmd.moveExposure>=.2f&&!covering)cmd.opportunitySince=-1;
        if(cmd.moveExposure>=.2f&&covering&&cmd.opportunitySince<0)cmd.opportunitySince=time;
        cmd.coveringReady=cmd.moveExposure<.2f?time-cmd.boundStarted>=2:covering&&cmd.opportunitySince>=0&&time-cmd.opportunitySince>=8;
        if(!cmd.teamPlan.released&&cmd.coveringReady){cmd.teamPlan.released=true;cmd.boundReleasedAt=time;++cmd.teamPlan.serial;}
        else if(!cmd.teamPlan.released&&time-cmd.boundStarted>12)PauseSquadMovement(officer,squad,cmd,MoveBlock::Support,time);
    }
}
}
