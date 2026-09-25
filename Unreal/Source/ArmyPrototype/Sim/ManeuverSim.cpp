#include "ManeuverSim.h"
#include "BeliefSim.h"
#include "CommandSim.h"
#include "CoordinationSim.h"
#include "TacticalRouteSim.h"
#include "Diagnostics.h"
#include "SquadRaster.h"
#include "FireMovementSim.h"
#include <algorithm>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <stdexcept>
namespace army {
void RememberDelivery(Soldier& soldier,const FireDelivery& report,bool perEnemy) {
    if(report.shooter<0)return;
    auto* slot=&soldier.deliveries[0];
    for(auto& e:soldier.deliveries){if(e.shooter==report.shooter&&(!(soldier.cognition||perEnemy)||e.enemy==report.enemy)){if(report.observedAt>e.observedAt)e=report;return;}if(e.observedAt<slot->observedAt)slot=&e;}
    *slot=report;
}
static bool Overlooks(const Contact& ct,Vec3 p,const Map& map){return Distance(ct.position,p)<100&&ClearLine3D(map,ct.position+Vec3{0,0,1.5f},p+Vec3{0,0,1.3f});}
float CrossingExposure(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time) {
    auto knowledge=WithTracks(leader,time);auto path=FindPath(map,from,to);if(path.empty())return 1;
    float exposed=0,length=0;Vec3 start=from;
    for(Vec3 end:path){float d=Distance(start,end);int n=std::max(1,int(std::ceil(d/3)));for(int k=1;k<=n;++k){Vec3 p=start+(end-start)*(float(k)/n);bool seen=false;for(const auto& ct:knowledge.contacts)if(ct.known&&Overlooks(ct,p,map))seen=true;length+=d/n;if(seen)exposed+=d/n;}start=end;}
    return exposed/std::max(.01f,length);
}
bool CoveringCrossing(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time,float primaryAge) {
    return CoveringPath(leader,map,from,FindPath(map,from,to),time,primaryAge);
}
static bool PathOverlooked(const Contact& ct,Vec3 from,const std::vector<Vec3>& path,const Map& map){
    Vec3 start=from;
    for(Vec3 end:path){int n=std::max(1,int(std::ceil(Distance(start,end)/3)));for(int k=1;k<=n;++k)if(Overlooks(ct,start+(end-start)*(float(k)/n),map))return true;start=end;}
    return false;
}
int CoveringPrimary(const Soldier& knowledge,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge){
    Vec3 to=path.back();
    int primary=-1;float priority=1e9f;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(!ct.known)continue;
        if(primaryAge>=0&&time-ct.observedAt>primaryAge)continue; // plan 028 3c: a stale sighting is not waited on
        float score=Distance(ct.position,(from+to)*.5f)-(ct.automaticWeapon?20.f:0.f)+std::max(0.f,time-ct.observedAt)*.1f;
        if(score>=priority)continue;
        bool overlooks=false;Vec3 start=from;
        for(Vec3 end:path){int n=std::max(1,int(std::ceil(Distance(start,end)/3)));for(int k=1;k<=n;++k)if(Overlooks(ct,start+(end-start)*(float(k)/n),map)){overlooks=true;break;}if(overlooks)break;start=end;}
        if(overlooks){primary=id;priority=score;}
    }
    return primary;
}
std::vector<int> SectorThreats(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge){
    std::vector<int> out;if(path.empty())return out;
    const auto knowledge=WithTracks(leader,time);
    std::vector<std::pair<float,int>> set;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];
        if(!ct.known||(primaryAge>=0&&time-ct.observedAt>primaryAge)||!PathOverlooked(ct,from,path,map))continue;
        set.push_back({std::max(leader.contacts[id].lastFireAt,leader.reports[id].lastFireAt),id});}
    std::stable_sort(set.begin(),set.end(),[](const std::pair<float,int>& a,const std::pair<float,int>& b){return a.first>b.first||(a.first==b.first&&a.second<b.second);});
    for(const auto& e:set){if(int(out.size())>=PinRules().sectorMax)break;out.push_back(e.second);}
    return out;
}
// Plan 030 M-S7 P4: the credited rounds (CoveringPath's match: the leader's delivery reports on this enemy or within 6 m
// of his track, within 10 m of it, in the last 6 s) on one track.
static int CreditedRounds(const Soldier& leader,int id,const Contact& ct,float time){
    int rounds=0;
    for(const auto& e:leader.deliveries)if((e.enemy==id||Distance(e.target,ct.position)<6)&&time-e.observedAt<=6&&Distance(e.target,ct.position)<10){
        if(e.times[0]<0)rounds+=e.rounds;else for(float delivered:e.times)rounds+=time-delivered<=6;
    }
    return rounds;
}
bool CoveringPath(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge,bool sector){
    if(path.empty())return false;
    bool fresh=false;for(const auto& delivery:leader.deliveries)if(delivery.shooter>=0&&delivery.rounds>0&&time-delivery.observedAt<=6)fresh=true;
    if(!fresh)return false;
    auto knowledge=WithTracks(leader,time);
    // Plan 030 M-S7 P4 (Config::coverSector): the whole set, each loud threat under fire of its own.
    if(sector){
        const auto set=SectorThreats(leader,map,from,path,time,primaryAge);
        if(set.empty())return false;
        int total=0;
        for(int id:set){const int rounds=CreditedRounds(leader,id,knowledge.contacts[id],time);total+=rounds;
            const float fired=std::max(leader.contacts[id].lastFireAt,leader.reports[id].lastFireAt);
            if(rounds==0&&time-fired<CoverQuietConstants.quietSeconds)return false;}
        return total>=CoverRequestConstants.creditRounds;
    }
    int primary=CoveringPrimary(knowledge,map,from,path,time,primaryAge);
    if(primary<0)return false;
    // Cover the dominant position overlooking this route. Other known threats
    // still contribute exposure/risk; readiness is not a claim that every enemy is pinned.
    const auto& ct=knowledge.contacts[primary];int rounds=0;
    for(const auto& e:leader.deliveries)if((e.enemy==primary||Distance(e.target,ct.position)<6)&&time-e.observedAt<=6&&Distance(e.target,ct.position)<10){
        if(e.times[0]<0)rounds+=e.rounds;else for(float delivered:e.times)rounds+=time-delivered<=6;
    }
    return rounds>=3;
}
CoveringExplanation CoveringExplain(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge,bool sector){
    CoveringExplanation x;
    // Plan 030 M-S7 P4: the explanation of the primary as before, its verdict the sector's (pass equals CoveringPath).
    if(sector&&!path.empty()){x=CoveringExplain(leader,map,from,path,time,primaryAge);x.pass=CoveringPath(leader,map,from,path,time,primaryAge,true);return x;}
    if(path.empty()){x.pathEmpty=true;return x;}
    for(const auto& delivery:leader.deliveries)if(delivery.shooter>=0&&delivery.rounds>0&&time-delivery.observedAt<=6)x.fresh=true;
    auto knowledge=WithTracks(leader,time);
    // Every known track that overlooks the crossing: the danger of the crossing, not its gate.
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(!ct.known)continue;
        bool overlooks=false;Vec3 start=from;
        for(Vec3 end:path){int n=std::max(1,int(std::ceil(Distance(start,end)/3)));for(int k=1;k<=n;++k)if(Overlooks(ct,start+(end-start)*(float(k)/n),map)){overlooks=true;break;}if(overlooks)break;start=end;}
        if(overlooks){++x.overlooking;x.mgOverlooks|=ct.automaticWeapon;if(time-ct.observedAt<=10){++x.overlookingFresh;x.mgFresh|=ct.automaticWeapon;}}
    }
    x.primary=CoveringPrimary(knowledge,map,from,path,time,primaryAge);
    if(x.primary<0){
        for(const auto& e:leader.deliveries)if(e.shooter>=0&&time-e.observedAt<=6){if(e.times[0]<0)x.otherRounds+=e.rounds;else for(float t:e.times)x.otherRounds+=time-t<=6;}
        return x;
    }
    const auto& ct=knowledge.contacts[x.primary];
    x.primaryAge=time-ct.observedAt;x.primaryUncertainty=TrackUncertainty(ct,time);x.primaryMG=ct.automaticWeapon;x.primaryPosition=ct.position;
    for(const auto& e:leader.deliveries){if(e.shooter<0)continue;
        const bool matches=(e.enemy==x.primary||Distance(e.target,ct.position)<6)&&Distance(e.target,ct.position)<10;
        if(matches&&time-e.observedAt<=6){
            if(e.times[0]<0)x.rounds+=e.rounds;else for(float t:e.times)x.rounds+=time-t<=6;
            const float newest=time-(e.times[0]<0?e.observedAt:e.times[0]);
            if(newest<=6&&(x.creditAge<0||newest<x.creditAge))x.creditAge=newest;
        }
        if(matches){
            if(e.times[0]<0){if(time-e.observedAt>6&&time-e.observedAt<=20)x.lateRounds+=e.rounds;}
            else for(float t:e.times)x.lateRounds+=time-t>6&&time-t<=20;
        }
        else if(time-e.observedAt<=6){if(e.times[0]<0)x.otherRounds+=e.rounds;else for(float t:e.times)x.otherRounds+=time-t<=6;}
    }
    x.pass=x.fresh&&x.rounds>=3;
    return x;
}
CoverGrade GradeCrossing(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float exposure,float time,bool danger){
    CoverGrade g;
    if(path.empty())return g; // no crossing to overlook: nothing known is waited on
    const auto knowledge=WithTracks(leader,time);
    g.freshPrimary=CoveringPrimary(knowledge,map,from,path,time,CoverGradeConstants.primaryAge)>=0;
    if(!g.freshPrimary||!danger)return g;
    g.graded=true;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];
        if(!ct.known||time-ct.observedAt>CoverGradeConstants.dangerAge||!PathOverlooked(ct,from,path,map))continue;
        ++g.overlookingFresh;g.mgFresh|=ct.automaticWeapon;}
    g.high=g.mgFresh||g.overlookingFresh>=CoverGradeConstants.highTracks||exposure>=CoverGradeConstants.highExposure;
    return g;
}
bool OnlyFallenOverlook(const Soldier& living,const Soldier& known,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time){
    return !path.empty()&&CoveringPrimary(WithTracks(living,time),map,from,path,time)<0&&CoveringPrimary(WithTracks(known,time),map,from,path,time)>=0;
}
QuietVerdict QuietCrossing(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge){
    QuietVerdict v;
    if(path.empty())return v;
    const auto knowledge=WithTracks(leader,time);
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];
        if(!ct.known||(primaryAge>=0&&time-ct.observedAt>primaryAge)||!PathOverlooked(ct,from,path,map))continue;
        ++v.overlooking;
        // When he was last seen firing, by the leader himself or in a report he holds.
        const float fired=std::max(leader.contacts[id].lastFireAt,leader.reports[id].lastFireAt),silent=time-fired;
        if(silent>=CoverQuietConstants.quietSeconds)continue;
        // Under credited fire: the leader's delivery reports on him (CoveringPath's match), the first of
        // those rounds after his last shot, and quiet since for at least creditedQuiet.
        float first=1e9f;
        for(const auto& e:leader.deliveries){
            if(e.shooter<0||!(e.enemy==id||Distance(e.target,ct.position)<6)||Distance(e.target,ct.position)>=10||time-e.observedAt>CoverQuietConstants.creditWindow)continue;
            if(e.times[0]<0){if(e.rounds>0)first=std::min(first,e.observedAt);}
            else for(float t:e.times)if(t<=time&&time-t<=CoverQuietConstants.creditWindow)first=std::min(first,t);
        }
        if(first<1e9f&&first>fired&&silent>=CoverQuietConstants.creditedQuiet)continue;
        ++v.loud;
    }
    v.pass=v.overlooking>0&&v.loud==0;
    return v;
}
bool BearsOnTrack(const Map& map,Vec3 place,const Contact& track){
    return Distance(place,track.position)<GroupConstants.stationRange&&
        ClearLine3D(map,place+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight});
}
// Plan 028 Stage 4: the crossing as it matters to a man kept off it: the path from its origin, less
// its first `skip` metres (the ground the group stands on as it waits to go).
static std::vector<Vec3> CrossingBeyond(const std::vector<Vec3>& path,float skip) {
    std::vector<Vec3> out;if(path.size()<2)return out;
    float walked=0;
    for(size_t i=1;i<path.size();++i) {
        const float length=Distance(path[i-1],path[i]);
        if(out.empty()&&walked+length>=skip){const float k=length>1e-4f?(skip-walked)/length:0.f;out.push_back(path[i-1]+(path[i]-path[i-1])*std::clamp(k,0.f,1.f));}
        walked+=length;
        if(!out.empty())out.push_back(path[i]);
    }
    return out;
}
static float SegmentDistance2D(Vec3 a,Vec3 b,Vec3 p) {
    const float dx=b.x-a.x,dy=b.y-a.y,length=dx*dx+dy*dy;
    const float t=length>1e-6f?std::clamp(((p.x-a.x)*dx+(p.y-a.y)*dy)/length,0.f,1.f):0.f;
    return std::hypot(p.x-(a.x+dx*t),p.y-(a.y+dy*t));
}
static bool SegmentsCross2D(Vec3 a,Vec3 b,Vec3 c,Vec3 d) {
    auto side=[](Vec3 p,Vec3 q,Vec3 r){return (q.x-p.x)*(r.y-p.y)-(q.y-p.y)*(r.x-p.x);};
    const float d1=side(a,b,c),d2=side(a,b,d),d3=side(c,d,a),d4=side(c,d,b);
    return ((d1>0)!=(d2>0))&&((d3>0)!=(d4>0));
}
bool OffCrossing(const std::vector<Vec3>& crossing,Vec3 from,Vec3 to) {
    const auto beyond=CrossingBeyond(crossing,CoverSupplyConstants.crossingClear+2);
    for(size_t i=1;i<beyond.size();++i)
        if(SegmentDistance2D(beyond[i-1],beyond[i],to)<CoverSupplyConstants.crossingClear||SegmentsCross2D(beyond[i-1],beyond[i],from,to))return false;
    return true;
}
bool CoveredWay(const Soldier& walker,const Map& map,Vec3 from,Vec3 to,float maxLength,float revealed,float time,float* seconds) {
    const auto path=FindPath(map,from,to);
    if(path.empty())return false;
    float length=0;Vec3 previous=from;for(Vec3 p:path){length+=Distance(previous,p);previous=p;}
    if(length>maxLength)return false;
    const float exposed=PathRevealedSeconds(map,walker,from,path,time);
    if(seconds)*seconds=exposed;
    return exposed<=revealed;
}
// Plan 028 Stage 4: a place the leader would shift a covering man to: crouch cover within shiftRange of
// him, its own firing point bearing on the threat, protected from every enemy the leader knows near it,
// on the near side, off the crossing, not taken, and reached by a covered way. Leader's knowledge only.
static bool ShiftPlace(const Soldier& knowledge,const Soldier& man,const CoverRequest& r,const Map& map,
    const std::vector<Vec3>& taken,float time,Vec3& place,float& travelOut,float& revealedOut) {
    const Contact& track=r.contact;
    Vec3 axis=r.to-r.from;axis.z=0;const float axisLength=Length(axis);
    auto along=[&](Vec3 p){return axisLength<.5f?0.f:((p.x-r.from.x)*axis.x+(p.y-r.from.y)*axis.y)/axisLength;};
    const float limit=std::max(along(man.position),0.f)+1.f;
    struct Candidate{float score,travel;const CoverPosition* c;};std::vector<Candidate> candidates;
    for(const auto& c:CoverPositions(map)) {
        const float travel=Distance(c.shelter,man.position);
        if(travel<CoverSupplyConstants.shiftMin||travel>CoverSupplyConstants.shiftRange||c.window)continue;
        if(std::abs(c.shelter.z-man.position.z)>.5f||!Walkable(map,c.shelter))continue;
        bool occupied=false;for(Vec3 p:taken)if(Distance(p,c.shelter)<1.5f){occupied=true;break;}
        if(occupied||along(c.shelter)>limit)continue;
        if(r.crossing&&!OffCrossing(*r.crossing,man.position,c.shelter))continue;
        // His firing point is the cover's peek: over a low wall the shelter itself, at a tall one its edge.
        if(Distance(c.peek,track.position)>=GroupConstants.stationRange||
            !ClearLine3D(map,c.peek+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight}))continue;
        const Stance posture=CoverStance(c);
        bool safe=ProtectedAt(map,c.shelter,track.position,posture);
        for(const auto& ct:knowledge.contacts)if(safe&&ct.known&&Distance(ct.position,c.shelter)<80&&!ProtectedAt(map,c.shelter,ct.position,posture))safe=false;
        if(!safe)continue;
        candidates.push_back({travel+FireDanger(knowledge,c.shelter,time)*10,travel,&c});
    }
    std::stable_sort(candidates.begin(),candidates.end(),[](const Candidate& a,const Candidate& b){return a.score<b.score;});
    Soldier walker=knowledge;walker.position=man.position;walker.machineGun=false;walker.understoodHealth=100;
    for(const auto& candidate:candidates) {
        float seconds=0;
        if(!CoveredWay(walker,map,man.position,candidate.c->shelter,CoverSupplyConstants.shiftRange*1.5f,CoverSupplyConstants.shiftRevealed,time,&seconds))continue;
        place=candidate.c->shelter;travelOut=candidate.travel;revealedOut=seconds;return true;
    }
    return false;
}
void RaiseCoverRequest(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,SquadCommand& cmd,
    int primary,Vec3 from,Vec3 to,int mode,const char* gate,float time,Diagnostics* diagnostics,const std::vector<Vec3>* crossing,bool shift,bool rifleBase,
    bool sector,float primaryAge) {
    if(primary<0||primary>=UnitCount)return;
    const auto knowledge=WithTracks(leader,time);
    if(!knowledge.contacts[primary].known)return;
    auto& r=cmd.coverRequest;
    const bool renew=CoverRequestLive(r,time)&&r.enemy==primary;
    const auto before=r.tasked;
    const auto beforeShift=r.shift;const auto beforeShiftTo=r.shiftTo;
    const auto beforeSector=r.sectorEnemy; // plan 030 M-S7 P4
    if(!renew){const int serial=r.serial;r=CoverRequest{};r.serial=serial+1;r.startedAt=time;}
    r.enemy=primary;r.contact=knowledge.contacts[primary];r.contact.visible=false;r.requester=leader.id;
    r.from=from;r.to=to;r.until=time+CoverRequestConstants.lifetime;r.gate=gate;
    // Plan 028 Stage 4: the crossing's path, for the gun and the shifted men to keep off.
    if(crossing){auto path=std::make_shared<std::vector<Vec3>>();path->push_back(from);path->insert(path->end(),crossing->begin(),crossing->end());r.crossing=std::move(path);}
    const Contact& track=r.contact;
    // Who may answer: a rifleman standing on his own ordered place, going nowhere, whose own spot
    // already has a line onto the threat. Nobody is moved to get one.
    const Soldier* point=RifleGroupLeader(leader,squad,cmd.support);
    std::array<float,SquadSize> range{};range.fill(-1);
    for(const auto& s:squad) {
        const int slot=s.id%SquadSize;const Task task=s.assignment.task;
        if(!s.Active()||IsPlatoonStaff(s)||s.id==leader.id||s.id==cmd.support||s.machineGun||(point&&s.id==point->id)||KnowsWounded(leader,s))continue;
        if(task==Task::None||AttackMovementTask(task)||task==Task::Rally||task==Task::PullBack||task==Task::RearGuard)continue;
        if(s.action==Action::Advance||s.action==Action::Retreat||Distance(s.position,s.assignment.position)>BoundConstants.slotArrival||
            Distance(s.position,s.goal)>BoundConstants.slotArrival)continue;
        if(!BearsOnTrack(map,s.position,track))continue;
        range[slot]=Distance(s.position,track.position);
    }
    // Plan 030 M-S5 (Config::coverRifleBase): with no gun station bearing on the threat (the gun's own station
    // test of the shift rule below, or no able gun), a rifleman settled in the cover he holds (going nowhere,
    // not pinned, never a mover or a flank leg), off his ordered place or without a line from where he stands,
    // is taken as the base of fire when that cover's firing point bears on it. Behind those that qualify anyway.
    std::array<float,SquadSize> baseRange{};baseRange.fill(-1);
    const auto beforeBase=r.rifleBase;
    if(rifleBase) {
        bool gunBears=false;const auto& st=cmd.stations;
        for(const auto& s:squad)if(s.id==cmd.support&&s.Active()&&!KnowsWounded(leader,s)){const int gunSlot=s.id%SquadSize;
            gunBears=st.held[gunSlot]&&st.supportStationFor==s.id&&Distance(st.station[gunSlot],track.position)<=CoverSupplyConstants.gunReach&&
                ClearLine3D(map,st.station[gunSlot]+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight});}
        if(!gunBears)for(const auto& s:squad) {
            const int slot=s.id%SquadSize;const Task task=s.assignment.task;
            if(range[slot]>=0||!s.Active()||IsPlatoonStaff(s)||s.id==leader.id||s.id==cmd.support||s.machineGun||(point&&s.id==point->id)||KnowsWounded(leader,s))continue;
            if(task==Task::None||AttackMovementTask(task)||task==Task::Rally||task==Task::PullBack||task==Task::RearGuard)continue;
            if(s.action==Action::Advance||s.action==Action::Retreat||Distance(s.position,s.goal)>BoundConstants.slotArrival)continue;
            if(s.understoodSuppression>=CoverSupplyConstants.pinnedSuppression||s.reason==Reason::Suppressed||s.reason==Reason::Prone)continue;
            bool bears=BearsOnTrack(map,s.position,track);
            if(!bears)for(const auto& c:CoverPositions(map))
                if((Distance(c.shelter,s.position)<CoverRifleBaseConstants.coverSnap||Distance(c.peek,s.position)<CoverRifleBaseConstants.coverSnap)&&
                    Distance(c.peek,track.position)<GroupConstants.stationRange&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight})){bears=true;break;}
            if(bears)baseRange[slot]=Distance(s.position,track.position);
        }
    }
    std::array<bool,SquadSize> tasked{};int count=0;
    // Plan 030 M-S7 P4 (Config::coverSector): the crossing's whole set, loudest first, the primary always in it. Above the
    // gun's capacity the covering pair takes the nearest threats other than the primary, each the nearest rifleman settled
    // in cover (the rifle-base rule: going nowhere, not pinned, never a mover, a flank leg, the gun, the leader or the rifle
    // group's leader) whose place or held cover bears on it; a man keeps his threat while he still bears on it. They are
    // the rifle base (held where they are by the relay); the gun works the rest.
    std::array<int,SquadSize> sectorEnemy;sectorEnemy.fill(-1);
    std::array<bool,SquadSize> sectorBased{};
    if(sector) {
        auto ids=crossing?SectorThreats(leader,map,from,*crossing,time,primaryAge):std::vector<int>{};
        if(std::find(ids.begin(),ids.end(),primary)==ids.end()){ids.insert(ids.begin(),primary);if(int(ids.size())>PinRules().sectorMax)ids.pop_back();}
        auto set=std::make_shared<std::vector<SupportThreat>>();
        for(int id:ids){Contact ct=knowledge.contacts[id];ct.visible=false;set->push_back({id,ct});}
        std::vector<int> taken;
        const int excess=int(ids.size())-PinRules().sectorGunCapacity;
        if(excess>0) {
            std::vector<std::pair<float,int>> near;
            for(int id:ids)if(id!=primary)near.push_back({Distance(knowledge.contacts[id].position,from),id});
            std::stable_sort(near.begin(),near.end(),[](const std::pair<float,int>& a,const std::pair<float,int>& b){return a.first<b.first||(a.first==b.first&&a.second<b.second);});
            const int want=std::min({excess,CoverRequestConstants.riflemen,int(near.size())});
            auto bears=[&](const Soldier& s,const Contact& t){
                if(BearsOnTrack(map,s.position,t))return true;
                for(const auto& c:CoverPositions(map))
                    if((Distance(c.shelter,s.position)<CoverRifleBaseConstants.coverSnap||Distance(c.peek,s.position)<CoverRifleBaseConstants.coverSnap)&&
                        Distance(c.peek,t.position)<GroupConstants.stationRange&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},{t.position.x,t.position.y,t.aimHeight}))return true;
                return false;};
            auto eligible=[&](const Soldier& s){const Task task=s.assignment.task;
                if(!s.Active()||IsPlatoonStaff(s)||s.id==leader.id||s.id==cmd.support||s.machineGun||(point&&s.id==point->id)||KnowsWounded(leader,s))return false;
                if(task==Task::None||AttackMovementTask(task)||task==Task::Rally||task==Task::PullBack||task==Task::RearGuard)return false;
                if(s.action==Action::Advance||s.action==Action::Retreat||Distance(s.position,s.goal)>BoundConstants.slotArrival)return false;
                return !(s.understoodSuppression>=CoverSupplyConstants.pinnedSuppression||s.reason==Reason::Suppressed||s.reason==Reason::Prone);};
            for(int n=0;n<want;++n) {
                const int id=near[size_t(n)].second;const Contact& t=knowledge.contacts[id];
                int best=-1;float bestRange=1e9f;
                for(const auto& s:squad){const int slot=s.id%SquadSize;
                    if(tasked[slot]||!eligible(s)||!bears(s,t))continue;
                    // A man already on this threat keeps it; otherwise the nearest, roster slot on a tie.
                    const float slotRange=renew&&before[slot]&&beforeSector[slot]==id?-1.f:Distance(s.position,t.position); // named apart from the outer `range` (MSVC C4456)
                    if(slotRange<bestRange){bestRange=slotRange;best=slot;}}
                if(best<0)continue;
                tasked[best]=true;sectorEnemy[best]=id;sectorBased[best]=true;++count;taken.push_back(id);
            }
        }
        auto gun=std::make_shared<std::vector<SupportThreat>>();
        for(const auto& t:*set)if(std::find(taken.begin(),taken.end(),t.enemy)==taken.end())gun->push_back(t);
        r.sector=std::move(set);r.gunSector=std::move(gun);
    }
    r.sectorEnemy=sectorEnemy;
    if(renew)for(int slot=0;slot<SquadSize;++slot)if(before[slot]&&!tasked[slot]&&range[slot]>=0&&count<CoverRequestConstants.riflemen){tasked[slot]=true;++count;}
    if(renew)for(int slot=0;slot<SquadSize;++slot)if(before[slot]&&beforeBase[slot]&&!tasked[slot]&&baseRange[slot]>=0&&count<CoverRequestConstants.riflemen){tasked[slot]=true;++count;}
    // Plan 028 Stage 4 (Config::coverShift, the commit wait only): a man already shifted for this request
    // and still on his way to a place that still bears keeps it, ahead of any new bearer.
    std::array<bool,SquadSize> shifted{};std::array<Vec3,SquadSize> shiftTo{};
    const bool shifting=shift&&mode==0;
    auto pinned=[&](const Soldier& s){return s.understoodSuppression>=CoverSupplyConstants.pinnedSuppression||s.reason==Reason::Suppressed||s.reason==Reason::Prone;};
    // A place he was shifted to still serves while its cover still bears on the threat and shelters him.
    auto safePlace=[&](Vec3 p){
        for(const auto& c:CoverPositions(map))if(Distance(c.shelter,p)<.1f) {
            const Stance posture=CoverStance(c);
            if(Distance(c.peek,track.position)>=GroupConstants.stationRange||!ClearLine3D(map,c.peek+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight}))return false;
            for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,p)<80&&!ProtectedAt(map,p,ct.position,posture))return false;
            return ProtectedAt(map,p,track.position,posture);
        }
        return false;};
    if(shifting&&renew)for(const auto& s:squad) {
        const int slot=s.id%SquadSize;
        if(!beforeShift[slot]||tasked[slot]||count>=CoverRequestConstants.riflemen)continue;
        if(!s.Active()||KnowsWounded(leader,s)||pinned(s)||s.id==cmd.support||s.machineGun||(point&&s.id==point->id))continue;
        const bool onHisWay=Distance(s.assignment.position,beforeShiftTo[slot])<1.f||
            (s.action!=Action::Advance&&Distance(s.position,s.assignment.position)<=BoundConstants.slotArrival);
        if(!onHisWay||!safePlace(beforeShiftTo[slot]))continue;
        tasked[slot]=true;shifted[slot]=true;shiftTo[slot]=beforeShiftTo[slot];++count;
    }
    while(count<CoverRequestConstants.riflemen) {
        int best=-1;
        for(int slot=0;slot<SquadSize;++slot)if(!tasked[slot]&&range[slot]>=0&&(best<0||range[slot]<range[best]))best=slot;
        if(best<0)break;
        tasked[best]=true;++count;
    }
    std::array<bool,SquadSize> based{};
    for(int slot=0;slot<SquadSize;++slot)based[slot]=(tasked[slot]&&baseRange[slot]>=0)||sectorBased[slot];
    while(rifleBase&&count<CoverRequestConstants.riflemen) {
        int best=-1;
        for(int slot=0;slot<SquadSize;++slot)if(!tasked[slot]&&baseRange[slot]>=0&&(best<0||baseRange[slot]<baseRange[best]))best=slot;
        if(best<0)break;
        tasked[best]=true;based[best]=true;++count;
    }
    // Plan 028 Stage 4 (Config::coverShift, Jordan's ruling "finish the supply side"): when still short of
    // two and the gun does not already bear on the threat, a rifleman in cover from it without a line,
    // standing on his post, not pinned, never a mover or a flank leg, may shift up to shiftRange to
    // cover whose firing point bears on it (plan 020's better cover close by). Nearest move first.
    // Only for a threat he saw lately (a man shifted onto an old track would have nothing to fire at).
    if(shifting&&count<CoverRequestConstants.riflemen&&time-track.observedAt<=CoverSupplyConstants.shiftTrackAge) {
        const auto& st=cmd.stations;bool gunBears=false;
        for(const auto& s:squad)if(s.id==cmd.support&&s.Active()&&!KnowsWounded(leader,s)){const int gunSlot=s.id%SquadSize;
            gunBears=st.held[gunSlot]&&st.supportStationFor==s.id&&Distance(st.station[gunSlot],track.position)<=CoverSupplyConstants.gunReach&&
                ClearLine3D(map,st.station[gunSlot]+Vec3{0,0,1.5f},{track.position.x,track.position.y,track.aimHeight});}
        if(!gunBears) {
            std::vector<Vec3> taken;
            for(const auto& s:squad)if(s.Active())taken.push_back(s.position);
            for(int slot=0;slot<SquadSize;++slot)if(shifted[slot])taken.push_back(shiftTo[slot]);
            struct Move{int slot;float travel,revealed;Vec3 place;int id;};std::vector<Move> moves;
            for(const auto& s:squad) {
                const int slot=s.id%SquadSize;const Task task=s.assignment.task;
                if(tasked[slot]||!s.Active()||IsPlatoonStaff(s)||s.id==leader.id||s.id==cmd.support||s.machineGun||(point&&s.id==point->id)||KnowsWounded(leader,s)||pinned(s))continue;
                if(time-st.shiftedAt[slot]<CoverSupplyConstants.shiftCooldown)continue;
                if(task==Task::None||AttackMovementTask(task)||task==Task::Rally||task==Task::PullBack||task==Task::RearGuard)continue;
                if(s.action==Action::Advance||s.action==Action::Retreat||Distance(s.position,s.assignment.position)>BoundConstants.slotArrival||
                    Distance(s.position,s.goal)>BoundConstants.slotArrival)continue;
                if(!ProtectedAt(map,s.position,track.position,Stance::Crouched))continue; // in cover from it now
                Vec3 place{};float travel=0,revealed=0;
                if(ShiftPlace(knowledge,s,r,map,taken,time,place,travel,revealed))moves.push_back({slot,travel,revealed,place,s.id});
            }
            std::stable_sort(moves.begin(),moves.end(),[](const Move& a,const Move& b){return a.travel<b.travel||(a.travel==b.travel&&a.slot<b.slot);});
            for(const auto& m:moves) {
                if(count>=CoverRequestConstants.riflemen)break;
                bool clash=false;for(int slot=0;slot<SquadSize;++slot)if(shifted[slot]&&Distance(shiftTo[slot],m.place)<1.5f)clash=true;
                if(clash)continue;
                tasked[m.slot]=true;shifted[m.slot]=true;shiftTo[m.slot]=m.place;++count;
                if(diagnostics&&diagnostics->options.enabled&&!(renew&&beforeShift[m.slot]&&Distance(beforeShiftTo[m.slot],m.place)<.1f)) {
                    const Soldier* man=nullptr;for(const auto& s:squad)if(s.id==m.id)man=&s;
                    std::ostringstream o;o<<std::setprecision(6)<<",\"request\":"<<r.serial<<",\"enemy\":"<<r.enemy<<",\"gate\":\""<<gate<<"\",\"man\":"<<m.id
                        <<",\"travel\":"<<m.travel<<",\"revealed\":"<<m.revealed<<",\"from\":["<<man->position.x<<','<<man->position.y<<','<<man->position.z
                        <<"],\"to\":["<<m.place.x<<','<<m.place.y<<','<<m.place.z<<"],\"suppression\":"<<man->understoodSuppression;
                    TraceCoverSupply(diagnostics,leader,cmd,time,"cover_shift","start",o.str());
                }
            }
        }
    }
    r.tasked=tasked;
    if(shift){r.shift=shifted;r.shiftTo=shiftTo;}
    if(rifleBase||sector)r.rifleBase=based;
    // The movers' ordered stations, for the covering shooters' friendly-fire hold (1e).
    auto movers=std::make_shared<std::vector<FriendlyIntent>>();
    for(const auto& s:squad) {
        const int slot=s.id%SquadSize;
        if(!s.Active()||IsPlatoonStaff(s)||s.id==leader.id||s.id==cmd.support||s.machineGun||KnowsWounded(leader,s)||tasked[slot])continue;
        Vec3 destination=to;
        if(mode==1&&cmd.stations.bound&&cmd.stations.held[slot])destination=cmd.stations.station[slot];
        if(mode==2){if(FireTeam(s.id)!=cmd.teamPlan.moving||InWindowTeam(cmd.teamPlan,s.id))continue;destination=cmd.teamPlan.moves[slot];}
        movers->push_back({s.id,s.position,destination,time});
    }
    r.friendlies=std::move(movers);
    if(!renew||tasked!=before)TraceCoverRequest(diagnostics,leader,cmd,time,renew?"retask":"start");
}
void RememberFireArea(Soldier& s,const FireArea& area) {
    if(area.intensity<=0)return;
    auto* slot=&s.fireAreas[0];
    for(auto& a:s.fireAreas) {
        if(a.intensity>0&&Distance(a.position,area.position)<6) {
            if(area.observedAt>a.observedAt)a=area;
            return;
        }
        if(a.observedAt<slot->observedAt)slot=&a;
    }
    *slot=area;
}
float FireDanger(const Soldier& s,Vec3 p,float time) {
    float danger=0;
    for(const auto& area:s.fireAreas) {
        float age=time-area.observedAt;
        if(age<0||age>18)continue;
        danger+=area.intensity*std::max(0.f,1-age/18)*std::max(0.f,1-Distance(p,area.position)/12);
    }
    return std::min(1.f,danger);
}
float MovementPressure(const Soldier& leader,const std::vector<Soldier>& squad,float time) {
    float pressure=FireDanger(leader,leader.position,time);
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)&&!KnowsWounded(leader,s))
        pressure=std::max(pressure,std::max(s.understoodSuppression,FireDanger(leader,s.position,time)));
    return pressure;
}
void PauseSquadMovement(const Soldier& leader,const std::vector<Soldier>& squad,SquadCommand& cmd,MoveBlock reason,float time) {
    if(cmd.movementBlock.reason!=MoveBlock::None)return;
    auto& b=cmd.movementBlock;b.reason=reason;b.started=time;b.pressure=MovementPressure(leader,squad,time);
    b.origin=leader.position;b.target=cmd.hasWaypoint?cmd.waypoint:cmd.mission;
    cmd.failedMoves[cmd.failedMoveCount%4]=b.target;++cmd.failedMoveCount;
    if(reason==MoveBlock::Support){cmd.supportNeedsMove=true;cmd.supportMoveFrom=leader.reportedSupportPosition;}
    b.support=cmd.support;b.supportPosition=leader.reportedSupportPosition;
    b.hadSupport=cmd.supportUseful&&time-leader.supportActivityAt<6;b.improvedSince=-1;
    cmd.hasWaypoint=true;cmd.waypoint=b.target;
    cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;++cmd.teamPlan.serial;
    cmd.coveringReady=false;cmd.opportunitySince=-1;cmd.policyRelease=false;
    cmd.planReason=reason==MoveBlock::Fire?"movement paused: reported fire stopped execution":
        reason==MoveBlock::Support?"movement paused: covering element not ready":"movement paused: crossing failed to reach shelter";
}
bool PolicyReleased(const SquadCommand& cmd,float time) {
    if(!cmd.policyRelease||time>cmd.policyReleaseUntil||!cmd.hasWaypoint||!cmd.route||cmd.route->id!=cmd.policyReleaseRoute)return false;
    // A waypoint set by anything else (a platoon directive, a recovery move) on top of the old
    // route is not the released bound.
    if(cmd.boundStage<0||size_t(cmd.boundStage)>=cmd.route->stages.size())return false;
    const Vec3 d=cmd.route->stages[size_t(cmd.boundStage)].destination;
    return d.x==cmd.waypoint.x&&d.y==cmd.waypoint.y&&d.z==cmd.waypoint.z;
}
// Plan 021 A3: the route planner cuts a path into twelve-metre segments. A bound is a normal
// infantry bound, so consecutive segments are merged up to the bound length and the remaining
// segments stay queued behind it: the next bound starts the moment this one is reached.
int MergeBoundStage(const TacticalRoute& route,int from,float length) {
    float travel=0;int last=std::max(0,from);
    for(int i=std::max(0,from);i<int(route.stages.size());++i){travel+=route.stages[i].seconds*route.speed;last=i;if(travel>=length)break;}
    return last;
}
float BoundSeconds(const TacticalRoute& route,int from,int to,float* exposed) {
    float seconds=0;if(exposed)*exposed=0;
    for(int i=std::max(0,from);i<=to&&i<int(route.stages.size());++i){seconds+=route.stages[i].seconds;if(exposed)*exposed+=route.stages[i].exposedSeconds;}
    return seconds;
}
float BoundExposure(const TacticalRoute& route,int from,int to) {
    float exposed=0,seconds=BoundSeconds(route,from,to,&exposed);
    return exposed/std::max(.01f,seconds);
}
std::vector<Vec3> BoundCrossing(const TacticalRoute& route,int from,int to) {
    if(from<0||from>=int(route.stages.size()))return {};
    const size_t begin=route.stages[from].begin,end=route.stages[std::min(to,int(route.stages.size())-1)].end;
    if(begin>=end||end>route.points.size())return {};
    return std::vector<Vec3>(route.points.begin()+begin,route.points.begin()+end);
}
bool HasMachineGun(const std::vector<Soldier>& squad) {
    return std::any_of(squad.begin(),squad.end(),[](const Soldier& s){return s.Active()&&s.machineGun;});
}
bool RifleCoverReady(const Soldier& officer,const std::vector<Soldier>&,const Map& map,float time) {
    const auto leader=WithTracks(officer,time);
    for(const auto& ct:leader.contacts)if(ct.known&&CoveringCrossing(officer,map,officer.position,ct.position+(officer.position-ct.position)*.4f,time))return true;
    return false;
}
const char* ManeuverName(Maneuver m) {
    const char* names[]={"SPREAD ADVANCE","FLANK NORTH","FLANK SOUTH","PULL BACK / REGROUP","REPOSITION","PRESS TO COVER"};return names[int(m)];
}
const char* ProgressName(SquadProgress p) {
    const char* names[]={"DEPLOYING","MOVING","SUPPORTING","UNDER FIRE","REGROUPING","NO PROGRESS","REVISING PLAN","REAR GUARD"};return names[int(p)];
}
void UpdateSquadProgress(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<Vec3>& friendlyApproaches,SquadCommand& cmd,ProgressRuntime& rt,float time,bool recover) {
    if(!cmd.advancing){cmd.progress=SquadProgress::Deploying;return;}
    Vec3 centre{};int count=0;const Soldier* point=nullptr;const Soldier* support=nullptr;
    for(const auto& s:squad)if(s.Active()) {
        if(s.id==cmd.support)support=&s;
        if(s.id==cmd.leader||s.id==cmd.support||KnowsWounded(leader,s)||InWindowTeam(cmd.teamPlan,s.id))continue;
        centre=centre+s.position;++count;
        if(!point||s.role==Role::Corporal)point=&s;
    }
    if(!count){cmd.progress=SquadProgress::RearGuard;cmd.idleSeconds=0;rt.initialized=false;return;}
    centre=centre*(1.f/count);
    Vec3 target=cmd.hasWaypoint?cmd.waypoint:cmd.mission;
    float distance=Distance(centre,target);
    if(!rt.initialized){rt.initialized=true;rt.lastProgressAt=rt.lastMotionAt=time;rt.distance=distance;rt.target=target;rt.members=count;}
    if(Distance(rt.target,target)>2||rt.members!=count){rt.distance=distance;rt.target=target;rt.members=count;}
    else if(distance<rt.distance-2.5f){rt.distance=distance;rt.lastProgressAt=rt.lastMotionAt=time;}
    cmd.idleSeconds=std::max(0.f,time-rt.lastMotionAt);
    int rounds=0;for(const auto& s:squad)rounds+=s.rounds;
    if(rounds>rt.rounds)rt.lastFireAt=time;
    rt.rounds=rounds;
    const bool firing=time-rt.lastFireAt<6||(cmd.supportUseful&&time-leader.supportActivityAt<6);
    const bool danger=FireDanger(leader,centre,time)>0.3f;
    cmd.progress=cmd.idleSeconds<6?SquadProgress::Moving:danger?SquadProgress::UnderFire:
        point->regrouping?SquadProgress::Regrouping:firing?SquadProgress::Supporting:
        cmd.hasWaypoint&&cmd.maneuver==Maneuver::Reposition?SquadProgress::Recovering:SquadProgress::Waiting;
    if(cmd.supportNeedsMove&&support&&Distance(support->position,support->assignment.position)<0.7f&&Distance(support->position,cmd.supportMoveFrom)>6)cmd.supportNeedsMove=false;
    if(firing&&!cmd.teamPlan.bounding&&!cmd.hasWaypoint){
        cmd.progress=SquadProgress::Supporting;rt.lastProgressAt=time;return;
    }
    if(!recover)return;
    const float deadline=cmd.engaged?65.f:firing?40.f:danger?30.f:point->regrouping?26.f:18.f;
    if(time-rt.lastProgressAt<deadline||time<rt.nextRecovery)return;
    ++cmd.recoveries;cmd.progress=SquadProgress::Recovering;
    const float sign=leader.team?-1.f:1.f;const Vec3 origin=point->position;
    Vec3 best{};float bestScore=1e9f;Maneuver chosen=Maneuver::Reposition;
    // Recovery is local and uses reported danger. Prefer a different approach;
    // if both sides are unsafe, look for a reachable withdrawal instead.
    for(int pass=0;pass<2&&bestScore==1e9f;++pass) {
        for(float side:{-1.f,1.f})for(float width:{12.f,22.f}) {
            Vec3 candidate{origin.x+sign*(pass?-12.f:8.f),origin.y+side*width};
            Vec3 p;if(!ResolveOrderPosition(map,origin,candidate,p)||Distance(p,origin)<6)continue;
            auto path=FindPath(map,origin,p);float risk=0,length=0;Vec3 start=origin;
            for(Vec3 end:path){float segment=Distance(start,end);length+=segment;int steps=std::max(1,int(std::ceil(segment/2)));
                for(int k=1;k<=steps;++k){Vec3 sample=start+(end-start)*(float(k)/steps);if(Distance(sample,origin)>10)risk=std::max(risk,FireDanger(leader,sample,time));}start=end;}
            if(risk>(pass?0.6f:0.22f))continue;
            float score=risk*100+length*0.2f+Distance(p,target)*0.15f;
            if(cmd.recoveries>1)score+=std::max(0.f,15-Distance(p,rt.lastRecovery))*3;
            for(Vec3 other:friendlyApproaches)score+=std::max(0.f,14-Distance(p,other))*2;
            if(score<bestScore){bestScore=score;best=p;chosen=pass?Maneuver::PullBack:Maneuver::Reposition;}
        }
    }
    if(bestScore<1e8f){cmd.hasWaypoint=true;cmd.waypoint=best;cmd.maneuver=chosen;cmd.maneuverUntil=time+20;cmd.policyRelease=false;rt.lastRecovery=best;rt.target=best;rt.distance=Distance(centre,best);}
    else cmd.progress=SquadProgress::UnderFire;
    if(support&&!firing&&!KnowsWounded(leader,*support)) {cmd.supportNeedsMove=true;cmd.supportMoveFrom=support->position;}
    rt.lastProgressAt=time;rt.nextRecovery=time+18;
}
void UpdateManeuver(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,const std::vector<Vec3>& friendlyApproaches,SquadCommand& cmd,float time,Diagnostics* diagnostics,const Soldier* fallen) {
    if(config.externalPolicy&&(!diagnostics||!diagnostics->options.squadActionCallback))
        throw std::invalid_argument("External policy callback is missing");
    if(!cmd.advancing)return;
    // Plan 028 Stage 0: evidence of every covering-clock reset; writes diagnostics only.
    const bool coverTrace=diagnostics&&diagnostics->options.enabled;
    auto clockReset=[&](float before,const char* source){if(coverTrace)TraceCoveringClock(diagnostics,leader,cmd,before,time,source);};
    // Plan 021 is legacy command policy only; the foundations/recovery controllers keep the
    // planner's own twelve-metre stage as their bound.
    const bool legacyBounds=!config.foundations;
    // Plan 028 Stage 3c (Config::coverGraduated, Legacy only): the gate's primary must have been seen
    // within 20 s, and a crossing nobody covers is graded instead of waiting on the 20 s override.
    const bool graduated=config.coverGraduated&&legacyBounds;
    const float primaryAge=graduated?CoverGradeConstants.primaryAge:-1.f;
    // Plan 028 Stage 1 (Config::coverRequests, Legacy only): the leader calls for fire on the primary of
    // the crossing he waits on (the commit wait) or runs (the active bound). It adds no wait.
    // Plan 030 M-S6 (Config::noCoveringFire, Legacy only): no covering-fire wait and no request anywhere below. Off,
    // nothing below reads it.
    const bool noCovering=NoCoveringFire(config);
    const bool requests=config.coverRequests&&legacyBounds&&!config.recoveryFixture&&!noCovering;
    // Plan 030 M-S5 (S5, Config::coverQuietRelease, Legacy only): the gates also release a crossing whose
    // overlooking threats have gone quiet (QuietCrossing); at the commit wait the credited-delivery test
    // alone then releases only after fallbackSeconds. Off, nothing below reads it.
    const bool quietRelease=config.coverQuietRelease&&legacyBounds&&!config.recoveryFixture;
    const bool rifleBase=config.coverRifleBase&&requests;
    // Plan 030 M-S7 P4 (Config::coverSector, Legacy only): requests carry the crossing's whole set and the credited-
    // delivery gate reads it. Off, nothing below reads it.
    const bool sector=CoverSector(config)&&legacyBounds;
    // Plan 031 Stage D (Config::fireAndMovement for this team, Legacy only): no covering-fire wait at the commit and no
    // covering pause on a running bound: the drill's leg gate replaces both (ApplyFireMovement). A running bound in
    // contact is cut to a leg (FmBoundStage). Off, nothing below reads it.
    const bool drill=FireAndMovement(config,leader.team)&&legacyBounds;
    cmd.candidateScores.clear();
    const auto knowledge=WithTracks(leader,time);
    // A corporal down or known wounded no longer anchors the rifle group's next candidate
    // search on the leader kept to the rear: the senior surviving rifleman (plan 018 gen18b:
    // RifleGroupLeader, the same recursive hand-off used everywhere else) takes over the
    // reference where he stands, so a group already forward is not recalled to the leader's
    // position to start a fresh manoeuvre.
    const Soldier* point=RifleGroupLeader(leader,squad,cmd.support);
    if(!point)point=&leader;
    const Vec3 origin=point->position;
    Vec3 gunPos=origin;for(const auto& s:squad)if(s.Active()&&s.machineGun){gunPos=s.position;break;}
    const auto doctrine=leader.team?config.emberDoctrine:config.doctrine;
    const float caution=doctrine==Doctrine::Cautious?1.4f:doctrine==Doctrine::Aggressive?.7f:1.f;
    cmd.friendlyStrength=cmd.enemyStrength=0;cmd.danger=FireDanger(leader,origin,time);
    float nearest=1e9f,priority=1e9f;int enemy=-1,solutions=0,mobile=0;
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(!ct.known)continue;
        float d=Distance(origin,ct.position);if(d>120)continue;
        // Resistance is estimated around this engagement, not summed across the entire platoon front.
        float score=d-(ct.automaticWeapon?15.f:0.f);
        if(score<priority){priority=score;nearest=d;enemy=id;}
        cmd.lastContactAt=std::max(cmd.lastContactAt,ct.observedAt);
    }
    if(enemy>=0)for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,knowledge.contacts[enemy].position)<24&&Distance(origin,ct.position)<85)
        cmd.enemyStrength+=1.25f*TrackConfidence(ct,time);
    if(config.foundations&&enemy>=0)cmd.enemyStrength=BelievedStrength(leader,knowledge.contacts[enemy].position,24,time);
    for(const auto& s:squad)if(s.Active()&&!IsPlatoonStaff(s)) {
        cmd.friendlyStrength+=(s.machineGun?1.6f:1.f)*(KnowsWounded(leader,s)?.55f:1.f)*(1-.65f*s.understoodSuppression);
        if(!KnowsWounded(leader,s))++mobile;
        solutions+=SelectFireSolution(s,map,time).enemy>=0&&!s.holdingFire&&s.reloadUntil<=time;
    }
    bool delivery=false;for(const auto& e:leader.deliveries)if(e.shooter/SquadSize==leader.squad&&e.shooter>=0&&time-e.observedAt<6)delivery=true;
    cmd.engaged=solutions>=2||delivery;
    if(cmd.engaged)cmd.lastEffectiveAt=time;
    const bool quiet=enemy<0;
    if(quiet&&!cmd.searching)++cmd.searchesResumed;
    cmd.searching=quiet;
    const float pressure=MovementPressure(leader,squad,time);
    const float ratio=cmd.friendlyStrength/std::max(1.f,cmd.enemyStrength);
    if(!quiet&&ratio<.7f){if(cmd.unfavorableSince<0)cmd.unfavorableSince=time;}else cmd.unfavorableSince=-1;
    const bool emergency=cmd.unfavorableSince>=0&&time-cmd.unfavorableSince>=6&&pressure>.3f;
    if(quiet) {
        if(cmd.movementBlock.reason!=MoveBlock::None){cmd.movementBlock={};cmd.hasWaypoint=false;cmd.policyRelease=false;cmd.planReason="searched or expired track; resume search";}
        if(!cmd.hasWaypoint)return;
    }
    if(cmd.hasWaypoint&&cmd.movementBlock.reason==MoveBlock::None) {
        int arrived=0,participants=0,coming=0;
        // A bounding rifleman has arrived when he is on his own station, not only when he is
        // near the raw destination: the stations are spread around it by construction.
        for(const auto& s:squad)if(s.Active()&&!s.machineGun&&!IsPlatoonStaff(s)&&!KnowsWounded(leader,s)&&s.id!=cmd.leader&&s.id!=cmd.support){++participants;
            const bool here=Distance(s.position,cmd.waypoint)<8||(cmd.stations.bound&&cmd.stations.held[s.id%SquadSize]&&Distance(s.position,cmd.stations.station[s.id%SquadSize])<BoundConstants.slotArrival);
            arrived+=here;
            // Plan 021 B: a man who is neither here nor pinned is still coming. The bound is
            // not over while the group can still be whole; a man under fire holds his cover.
            if(!here&&s.understoodSuppression<BoundConstants.stragglerSuppression&&FireDanger(leader,s.position,time)<.3f)++coming;}
        const bool majority=arrived>=std::max(1,(participants+1)/2);
        if(!legacyBounds)cmd.boundMajorityAt=time;
        else if(majority&&cmd.boundMajorityAt<0){cmd.boundMajorityAt=time;cmd.maneuverUntil=std::max(cmd.maneuverUntil,time+BoundConstants.boundGrace+2);
            if(cmd.policyRelease)cmd.policyReleaseUntil=std::max(cmd.policyReleaseUntil,cmd.maneuverUntil);}
        bool done=majority&&(!legacyBounds||coming==0||time-cmd.boundMajorityAt>=BoundConstants.boundGrace)&&(cmd.route||Distance(origin,cmd.waypoint)<5);
        const int boundEnd=legacyBounds?std::max(cmd.routeStage,cmd.boundStage):cmd.routeStage;
        if(done&&time-cmd.planStarted>3&&cmd.route&&size_t(boundEnd+1)<cmd.route->stages.size()){
            // The next bound of the chain starts at once: no fresh assessment and no re-pick.
            cmd.routeStage=boundEnd+1;cmd.boundStage=drill?FmBoundStage(leader,map,config,*cmd.route,cmd.routeStage,origin,time):
                legacyBounds?MergeBoundStage(*cmd.route,cmd.routeStage,BoundConstants.boundLength):cmd.routeStage;cmd.boundMajorityAt=-1;
            const auto& stage=cmd.route->stages[cmd.boundStage];cmd.waypoint=stage.destination;
            const float seconds=BoundSeconds(*cmd.route,cmd.routeStage,cmd.boundStage);
            cmd.moveExposure=BoundExposure(*cmd.route,cmd.routeStage,cmd.boundStage);cmd.teamPlan.moving=1-cmd.teamPlan.moving;++cmd.boundsCompleted;cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;
            {const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=time;clockReset(clockBefore,"stage");}
            cmd.planReason="route stage reached; retain approach and prepare next segment";
            cmd.maneuverUntil=time+std::max(30.f,seconds*2+15)+(drill?config.fmDeadline:0.f); // plan 031 D: plus the drill's own wait
            if(cmd.policyRelease)cmd.policyReleaseUntil=cmd.maneuverUntil; // chained segments keep a go-now release
            return;
        }
        if(done&&time-cmd.planStarted>3){cmd.hasWaypoint=false;cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;cmd.planReason="movement destination reached";
            {const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=-1;clockReset(clockBefore,"arrived");}cmd.policyRelease=false;
            // Plan 021 A5: the rifle group fights from its slots; if the gun has lost its line
            // onto the enemy it makes the next bound while they cover.
            if(cmd.support>=0&&!cmd.supportUseful&&time>=cmd.nextSupportMove){cmd.supportNeedsMove=true;cmd.supportMoveFrom=leader.reportedSupportPosition;cmd.nextSupportMove=time+16;++cmd.supportRepositions;}
            return;}
        std::vector<Vec3> crossing;
        if(cmd.route)crossing=BoundCrossing(*cmd.route,cmd.routeStage,boundEnd);
        bool support=cmd.moveExposure<.2f||(!crossing.empty()?CoveringPath(leader,map,origin,crossing,time,primaryAge,sector):
            sector?CoveringPath(leader,map,origin,FindPath(map,origin,cmd.waypoint),time,primaryAge,true):CoveringCrossing(leader,map,origin,cmd.waypoint,time,primaryAge));
        // Plan 030 M-S5: a running bound whose overlooking threats are quiet is not held for credited fire.
        const char* release=support&&cmd.moveExposure>=.2f?"credit":"";
        if(quietRelease&&!support&&QuietCrossing(leader,map,origin,!crossing.empty()?crossing:FindPath(map,origin,cmd.waypoint),time,primaryAge).pass){support=true;release="quiet";}
        // Plan 030 K-1 (Config::retireFallen): the bound's exposure was judged when it was committed; if every man then
        // watching the crossing has since been seen to fall, it is no longer exposed and is not held for covering fire.
        if(fallen&&!support&&cmd.moveExposure>=.2f&&OnlyFallenOverlook(leader,*fallen,map,origin,!crossing.empty()?crossing:FindPath(map,origin,cmd.waypoint),time)){support=true;release="fallen";}
        // Plan 030 M-S6 (Config::noCoveringFire): the running bound is never held for covering fire; `support` keeps
        // the credited value (the trace's covering field), only the pause below is lifted.
        if(noCovering&&!support&&cmd.moveExposure>=.2f)release="off";
        if(drill&&!support&&cmd.moveExposure>=.2f)release="drill"; // plan 031 D: the leg gate holds the men, not this pause
        if(requests&&cmd.moveExposure>=.2f&&cmd.maneuver!=Maneuver::PullBack) {
            const auto path=!crossing.empty()?crossing:FindPath(map,origin,cmd.waypoint);
            const int primary=path.empty()?-1:CoveringPrimary(knowledge,map,origin,path,time,primaryAge);
            if(primary>=0)RaiseCoverRequest(leader,squad,map,cmd,primary,origin,path.back(),1,"bound",time,diagnostics,&path,config.coverShift,rifleBase,sector&&requests,primaryAge);
        }
        int refusals=0;
        for(const auto& report:leader.movementReports)if(report.soldier>=0&&time-report.observedAt<8)
            for(const auto& s:squad)if(s.id==report.soldier&&s.Active()&&s.assignment.serial==report.order)++refusals;
        float crossingPressure=pressure;
        if(cmd.route){crossingPressure=0;for(const auto& member:squad)if(member.Active()&&member.assignment.teamPlan.route&&member.assignment.teamPlan.route->id==cmd.route->id&&member.assignment.task==Task::BoundMove)
            crossingPressure=std::max(crossingPressure,std::max(member.understoodSuppression,FireDanger(leader,member.position,time)));}
        // Plan 026 P4b: a go-now bound is not held for covering fire; reported fire, refusals and
        // the manoeuvre deadline still stop it.
        // Plan 028 Stage 3c: on a running bound only a fresh, high-danger threat nobody covers still
        // pauses it; a stale one (nothing seen within 20 s) or a low-danger one no longer does.
        CoverGrade grade;const char* graduatedOutcome="";
        if(graduated&&!support&&!noCovering&&!PolicyReleased(cmd,time)){
            grade=GradeCrossing(leader,map,origin,!crossing.empty()?crossing:FindPath(map,origin,cmd.waypoint),cmd.moveExposure,time,true);
            graduatedOutcome=!grade.freshPrimary?"stale_cross":grade.high?"high_pause":"low_cross";
        }
        const bool supportBlock=!support&&!noCovering&&!drill&&!PolicyReleased(cmd,time)&&(!graduated||(grade.freshPrimary&&grade.high));
        const bool boundPause=cmd.maneuver!=Maneuver::PullBack&&(crossingPressure>.72f||(supportBlock&&cmd.moveExposure>=.2f)||refusals>=2);
        if(coverTrace&&cmd.moveExposure>=.2f){
            // Plan 028 Stage 0: the active-bound gate, as the leader judged it this tick.
            CoveringGateState g;g.covering=support;g.pass=!supportBlock;g.exposure=cmd.moveExposure;g.opportunitySince=cmd.opportunitySince;
            g.waited=cmd.opportunitySince<0?-1:time-cmd.opportunitySince;g.hasWaypoint=cmd.hasWaypoint;g.routePresent=bool(cmd.route);g.staleRoute=!cmd.hasWaypoint;
            g.policyReleased=PolicyReleased(cmd,time);g.pressure=crossingPressure;g.refusals=refusals;g.paused=boundPause;
            g.graduated=graduated;g.danger=!graduated||support?"":!grade.freshPrimary?"stale":grade.high?"high":"low";g.outcome=graduatedOutcome;
            if(quietRelease||fallen||noCovering||drill)g.release=release; // plan 030 K-1: "fallen" too; M-S6: "off"; plan 031 D: "drill"
            const auto explanation=CoveringExplain(leader,map,origin,!crossing.empty()?crossing:FindPath(map,origin,cmd.waypoint),time,primaryAge,sector);g.platoonFiring=explanation.fresh;
            TraceCoveringCheck(diagnostics,leader,cmd,time,"bound",explanation,g);
        }
        if(boundPause){
            const float clockBefore=cmd.opportunitySince;const bool hadWaypoint=cmd.hasWaypoint,gunMoveBefore=cmd.supportNeedsMove;
            PauseSquadMovement(leader,squad,cmd,supportBlock?MoveBlock::Support:MoveBlock::Fire,time);
            if(coverTrace){NoteCoveringPause(diagnostics,leader.squad,supportBlock?"maneuver_bound_support":"maneuver_bound_fire",hadWaypoint,!gunMoveBefore&&cmd.supportNeedsMove);clockReset(clockBefore,"pause");}
        }
        else if(time>cmd.maneuverUntil&&!done){
            const float clockBefore=cmd.opportunitySince;const bool hadWaypoint=cmd.hasWaypoint,gunMoveBefore=cmd.supportNeedsMove;
            PauseSquadMovement(leader,squad,cmd,MoveBlock::Execution,time);
            if(coverTrace){NoteCoveringPause(diagnostics,leader.squad,"maneuver_deadline",hadWaypoint,!gunMoveBefore&&cmd.supportNeedsMove);clockReset(clockBefore,"pause");}
        }
        else if(!emergency||cmd.maneuver==Maneuver::PullBack)return;
    }
    if(quiet)return;
    // Plan 023 E (section 11): a shattered squad no longer fights on its own account, and one
    // attached to another squad has its host's fight and not one of its own. mobile<2 already
    // stopped most of them without ever saying so: the traced squad scored a flank at 36 to 65
    // against a hold of -8 for four minutes and never moved, and nothing in its record said why.
    // A remnant with nobody to join keeps its own initiative: the rule is that it fights under
    // another squad, not that it stops. The lab's single-squad encounter proved the difference
    // (a shattered squad that may not attack leaves the last fixed defender in place, 2 of 3).
    const bool shattered=legacyBounds&&cmd.ableRiflemen<GroupConstants.shatteredRiflemen&&cmd.attachedTo>=0;
    if(legacyBounds&&(cmd.attachedTo>=0||cmd.mergedInto>=0)) {
        {const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=-1;clockReset(clockBefore,"attached");}cmd.candidateScores.clear();
        cmd.planReason=cmd.mergedInto>=0?"merged into another squad: its leader plans for these men":
            cmd.attachBaseOfFire?"attached as a base of fire: it holds and fires for its host":
            "attached as support: it follows its host";
        return;
    }
    // A flank that has arrived and is delivering effective fire holds and keeps shooting;
    // the sergeant does not plan another leg out from under it while it is working. A
    // defender who ducks for a few seconds does not cost the position: the squad keeps
    // holding for a bounded grace period after its last effective fire so riflemen who
    // are still settling into a firing slot are not uprooted by a fresh candidate search.
    const bool recentlyEffective=cmd.lastEffectiveAt>0&&time-cmd.lastEffectiveAt<25.f;
    if((cmd.maneuver==Maneuver::FlankNorth||cmd.maneuver==Maneuver::FlankSouth)&&!cmd.hasWaypoint&&(cmd.engaged||(recentlyEffective&&!emergency))) {
        {const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=-1;clockReset(clockBefore,"flank_hold");}cmd.planReason=cmd.engaged?"flank position delivering fire; hold and keep firing":"flank position recently effective; hold for the defender to reappear";return;
    }
    const auto& track=knowledge.contacts[enemy];cmd.trackedEnemy=enemy;cmd.enemyReference=track.position;
    const bool mg=HasMachineGun(squad),supportAssignment=cmd.platoonTask==PlatoonTask::Support&&time<cmd.platoonUntil;
    float idle=std::max(0.f,time-cmd.lastEffectiveAt);
    float hold=4+(mg?7.f:0.f)+(cmd.engaged?3.f:0.f)+pressure*8*caution-std::min(12.f,idle*.3f);
    if(supportAssignment&&delivery)hold+=8;
    if(emergency)hold-=12;
    const bool policySide=leader.team==0&&!config.foundations;
    const bool keepPolicy=policySide&&(config.externalPolicy||(config.neuralPolicy&&config.neuralPolicy->schema>=3));
    const bool policyFeatures=policySide&&(config.externalPolicy||config.neuralPolicy||config.policyCandidates||
        (diagnostics&&diagnostics->options.squadDecisionSink));
    // Plan 026 P4: schema-4 rows always carry the KEEP row (index 1) and a go-now timing per row.
    const bool schema4=policySide&&config.policySchema>=4;
    const bool keepRow=keepPolicy||schema4;
    SquadFeatures context{};
    if(policyFeatures) {
        context[0]=time/std::max(1.f,config.maxSeconds);context[1]=ratio/4;context[2]=pressure;
        context[3]=idle/60;context[4]=mg;context[5]=cmd.engaged;context[6]=emergency;
        context[7]=delivery;context[8]=supportAssignment;context[9]=mobile/16.f;
        context[10]=caution;context[11]=cmd.opportunitySince<0?0:(time-cmd.opportunitySince)/30;
        context[12]=cmd.hasWaypoint;context[13]=int(cmd.movementBlock.reason)/4.f;
        context[14]=(time-track.observedAt)/30;context[15]=track.automaticWeapon;
        context[16]=TrackConfidence(track,time);context[17]=nearest/100;
        context[18+int(doctrine)]=1;
        context[21]=leader.officer.judgment;context[22]=leader.officer.risk;
        context[23]=leader.officer.adaptability;context[24]=leader.officer.communication;
        context[25]=leader.stats.Get(Stat::Wisdom)/100;context[26]=leader.stats.Get(Stat::Initiative)/100;
        context[27]=leader.stats.Get(Stat::Composure)/100;context[28]=leader.stats.Get(Stat::Perception)/100;
        context[29]=cmd.danger;context[30]=cmd.ableRiflemen/16.f;context[31]=(time-cmd.planStarted)/60;
        for(float& value:context)value=std::clamp(value,-16.f,16.f);
    }
    using Candidate=ManeuverOption;
    TacticalRoutePlanner planner(map,leader,time,doctrine);
    std::vector<Candidate> candidates;
    // Routes have a four-second estimate lifetime. New tracks, weapon classifications,
    // metre-scale movement, and changed reported fire invalidate the assessment immediately.
    uint64_t key=1469598103934665603ull;auto add=[&](int v){key=(key^uint64_t(v))*1099511628211ull;};
    for(int id=0;id<UnitCount;++id){const auto& ct=knowledge.contacts[id];if(ct.known){add(id);add(int(std::floor(ct.position.x)));add(int(std::floor(ct.position.y)));add(int(std::floor(ct.position.z)));add(ct.automaticWeapon);}}
    for(const auto& area:leader.fireAreas)if(time-area.observedAt<18){add(int(area.position.x));add(int(area.position.y));add(int(area.intensity*4));}
    add(int(cmd.platoonTask));add(cmd.platoonOrderSerial);add(cmd.failedMoveCount);
    const bool reuse=cmd.routeAssessment&&cmd.routeAssessment->geometry==map.revision&&cmd.routeAssessment->knowledge==key&&time-cmd.routeAssessment->at<4&&Distance(origin,cmd.routeAssessment->origin)<2;
    if(reuse)candidates=cmd.routeAssessment->options;
    // Fixed option families, deterministic ordering and cover-ID tie breaking.
    if(!reuse){
    for(int family=0;family<5;++family){std::vector<Candidate> shortlist;std::vector<bool> flankQualifies;bool anyFlankQualifies=false;
        if(family==4&&(cmd.platoonTask==PlatoonTask::None||cmd.platoonTask==PlatoonTask::Support||time>=cmd.platoonUntil))continue;
        for(const auto& cover:CoverPositions(map)) {
            Vec3 p=cover.shelter;float travel=Distance(p,origin);if(cover.window||travel<6||travel>(family==0||family==1||family==4?100.f:32.f)||std::abs(p.z-origin.z)>.5f)continue;
            Vec3 toward=track.position-origin;float len=std::max(1.f,Length(toward));
            float lateral=((p.x-origin.x)*toward.y-(p.y-origin.y)*toward.x)/len;
            float gain=nearest-Distance(p,track.position);
            if((family==0&&lateral<8)||(family==1&&lateral>-8)||(family==2&&(gain<8||std::abs(lateral)>12))||(family==3&&gain>-8))continue;
            if(family==4&&Distance(p,leader.platoonOrder.position)>Distance(origin,leader.platoonOrder.position)-5)continue;
            if(!ProtectedAt(map,p,track.position,CoverStance(cover)))continue;
            // A paused crossing excludes not just its exact spot but the nearby ground: a cover
            // position a few metres off is the same failed attempt under a new name, and picking
            // it back up at once is why a paused squad thrashes in and out of the same corner.
            bool failed=false;for(int i=0;i<std::min(4,cmd.failedMoveCount);++i)if(Distance(p,cmd.failedMoves[i])<15)failed=true;
            if(failed)continue;
            float score=family==3?(-gain*.35f+pressure*12+(emergency?15.f:0.f)-10):gain*.35f+std::abs(lateral)*.3f+std::min(5.f,idle*.15f)+(mg?-4.f:3.f);
            if(family==4)score+=8+(.4f*(Distance(origin,leader.platoonOrder.position)-Distance(p,leader.platoonOrder.position)));
            bool firingAngle=ClearLine3D(map,cover.peek+Vec3{0,0,1.5f},track.position+Vec3{0,0,1.5f});
            if(family!=3){score+=firingAngle?8.f:-8.f;Vec3 before=origin-track.position,after=p-track.position;
                float cosine=(before.x*after.x+before.y*after.y)/std::max(.01f,Length(before)*Length(after));if(firingAngle&&cosine<.707107f)score+=6;}
            score-=travel*.12f+FireDanger(leader,p,time)*12*caution;
            if(family!=3)score-=std::max(0.f,1-ratio)*8*caution;
            for(Vec3 other:friendlyApproaches)score-=std::max(0.f,8-Distance(p,other));
            // A flank goal that is a firing position, not just closer cover: rifle range of the
            // known enemy, a clear line onto him, and enough angle off the squad's own gun that
            // the position actually puts fire on him from a different direction.
            bool qualifies=false;
            if(family==0||family==1){
                float range=Distance(p,track.position);
                Vec3 gunLine=gunPos-track.position,ownLine=p-track.position;
                float gunCosine=(gunLine.x*ownLine.x+gunLine.y*ownLine.y)/std::max(.01f,Length(gunLine)*Length(ownLine));
                qualifies=firingAngle&&range>=25&&range<=60&&gunCosine<.707107f;
                if(qualifies){score+=35;anyFlankQualifies=true;}
            }
            shortlist.push_back({p,family==0?Maneuver::FlankNorth:family==1?Maneuver::FlankSouth:family==2?Maneuver::Press:family==3?Maneuver::PullBack:Maneuver::Reposition,score,0,false,{}});
            if(policyFeatures) {
                auto& feature=shortlist.back().policyFeatures;feature=context;feature[33+family]=1;
                feature[38]=gain/100;feature[39]=std::abs(lateral)/100;feature[40]=travel/100;
                feature[41]=firingAngle;
                Vec3 before=origin-track.position,after=p-track.position;
                feature[42]=firingAngle&&(before.x*after.x+before.y*after.y)/std::max(.01f,Length(before)*Length(after))<.707107f;
                feature[43]=qualifies;feature[45]=FireDanger(leader,p,time);
                for(Vec3 other:friendlyApproaches)feature[46]+=std::max(0.f,8-Distance(p,other))/100;
                feature[47]=(Distance(origin,leader.platoonOrder.position)-Distance(p,leader.platoonOrder.position))/100;
                feature[56]=(p.x-origin.x)/100;feature[57]=(p.y-origin.y)/100;feature[58]=(p.z-origin.z)/10;
            }
            flankQualifies.push_back(qualifies);
        }
        if((family==0||family==1)&&anyFlankQualifies)for(size_t i=0;i<shortlist.size();++i)if(!flankQualifies[i]){shortlist[i].score-=40;shortlist[i].policyFeatures[44]=1;}
        std::stable_sort(shortlist.begin(),shortlist.end(),[](const Candidate&a,const Candidate&b){return a.score>b.score;});
        int limit=2;
        if(policySide&&config.policyCandidates==30) {
            // Retain the two teacher proposals and add four spatially diverse choices.
            // Extra proposals are picked by distance from the selected set, not policy score.
            limit=6;
            for(size_t slot=2;slot<std::min(size_t(limit),shortlist.size());++slot) {
                size_t chosen=slot;float spread=-1;
                for(size_t j=slot;j<shortlist.size();++j){float nearestChosen=1e9f;
                    for(size_t k=0;k<slot;++k)nearestChosen=std::min(nearestChosen,Distance(shortlist[j].p,shortlist[k].p));
                    if(nearestChosen>spread){spread=nearestChosen;chosen=j;}}
                std::swap(shortlist[slot],shortlist[chosen]);
            }
        }
        int tested=0;for(auto candidate:shortlist){if(++tested>limit)break;
            auto route=std::make_shared<TacticalRoute>(planner.Evaluate(origin,candidate.p));
            route->id=uint64_t(leader.squad+1)*1000000000ull+uint64_t(++cmd.routeSerial);route->plan=cmd.planId+1;
            if(diagnostics&&diagnostics->options.enabled)diagnostics->routes.push_back(route);
            if(route->points.empty())continue;
            candidate.route=route;candidate.exposure=route->exposedSeconds/std::max(.01f,route->cost.travel);

            candidate.score-=route->cost.exposure*.25f+route->cost.fire+route->cost.lanes+route->cost.congestion+route->cost.uncertainty;
            candidate.score-=std::max(0.f,route->cost.travel-Distance(origin,candidate.p)/route->speed)*.35f;

            // Release gates apply to the upcoming bound, not the whole sheltered approach.
            candidate.exposure=BoundExposure(*route,0,legacyBounds?MergeBoundStage(*route,0,BoundConstants.boundLength):0);
            if(policyFeatures){auto& feature=candidate.policyFeatures;
                feature[48]=route->cost.travel/100;feature[49]=route->cost.exposure/100;
                feature[50]=route->cost.fire/100;feature[51]=route->cost.lanes/100;
                feature[52]=route->cost.congestion/100;feature[53]=route->cost.uncertainty/100;
                feature[54]=std::max(0.f,route->cost.travel-Distance(origin,candidate.p)/route->speed)/100;
                feature[55]=candidate.exposure;}

            candidates.push_back(std::move(candidate));
        }
    }
    auto assessment=std::make_shared<ManeuverAssessment>();assessment->geometry=map.revision;assessment->knowledge=key;assessment->at=time;assessment->origin=origin;assessment->options=candidates;cmd.routeAssessment=assessment;
    }
    for(auto& candidate:candidates){
        candidate.support=CoveringPath(leader,map,origin,BoundCrossing(*candidate.route,0,legacyBounds?MergeBoundStage(*candidate.route,0,BoundConstants.boundLength):0),time,primaryAge,sector);
        // Plan 030 M-S5 (S5): a crossing the quiet release would let go is valued as a supported one.
        candidate.quiet=quietRelease&&!candidate.support&&candidate.kind!=Maneuver::PullBack&&candidate.exposure>=.2f&&
            QuietCrossing(leader,map,origin,BoundCrossing(*candidate.route,0,legacyBounds?MergeBoundStage(*candidate.route,0,BoundConstants.boundLength):0),time,primaryAge).pass;
        const bool supported=candidate.support||candidate.quiet;
        if(candidate.kind!=Maneuver::PullBack&&supported)candidate.score+=10+std::min(5.f,std::max(0.f,ratio-1)*5);
        if(candidate.kind!=Maneuver::PullBack&&candidate.exposure>=.2f&&!supported)candidate.score-=12;
    }
    std::stable_sort(candidates.begin(),candidates.end(),[](const Candidate&a,const Candidate&b){return a.score>b.score;});
    std::ostringstream scores;scores<<"hold="<<hold;for(const auto& c:candidates)scores<<"; "<<ManeuverName(c.kind)<<"="<<c.score<<" exposure="<<c.exposure<<" covering="<<c.support<<(c.quiet?" quiet=1":"");
    cmd.candidateScores=scores.str();
    int selected=(candidates.empty()||candidates.front().score<hold+2||mobile<2)?-1:0;
    SquadDecision decision;bool continuing=false,goNow=false;
    auto emitDecision=[&](const char* outcome){
        if(policyFeatures&&diagnostics&&diagnostics->options.squadDecisionSink){
            decision.outcome=outcome;diagnostics->options.squadDecisionSink(decision);
        }
    };
    if(policyFeatures) {
        decision.time=time;decision.squad=leader.squad;decision.leader=leader.id;
        decision.schema=schema4?4:keepPolicy?3:2;
        decision.candidates=config.policyCandidates;decision.neural=bool(config.neuralPolicy)||config.externalPolicy;
        context[62]=int(cmd.platoonTask)/12.f;context[63]=std::clamp((cmd.platoonUntil-time)/60.f,0.f,16.f);
        // Plan 026 4c: the map view, schema 4 only. It reads the leader's knowledge, his squad, his
        // known map and the platoon's waypoints; nothing it builds feeds back into the battle.
        SquadRasterView view;
        if(schema4){view=BuildSquadRasterView(leader,squad,map,friendlyApproaches,cmd,origin,time);decision.observation.raster=SquadRasterWindow(view);}
        auto stay=context;std::copy_n(context.begin(),32,stay.begin()+64);stay[32]=1;
        if(schema4)SquadRasterSamples(view,origin,origin,stay); // holding samples the origin cell
        decision.observation.actions.push_back(stay);
        decision.observation.legal.push_back(true);decision.teacherScores.push_back((hold+2)/16);
        if(schema4)decision.observation.legalNow.push_back(false); // holding has no timing
        int keepCandidate=-1;float keepDistance=10.00001f;
        if(keepRow){
            if(cmd.opportunitySince>=0&&mobile>=2)for(size_t i=0;i<candidates.size();++i)
                if(candidates[i].kind==cmd.preparedKind){float distance=Distance(candidates[i].p,cmd.preparedTarget);
                    if(distance<=10&&distance<keepDistance){keepDistance=distance;keepCandidate=int(i);}}
            auto keep=stay;keep[96]=1;decision.observation.actions.push_back(keep);
            decision.observation.legal.push_back(keepCandidate>=0&&config.keepAction);decision.teacherScores.push_back(keepCandidate>=0?candidates[keepCandidate].score/16:(hold+2)/16);
            if(schema4)decision.observation.legalNow.push_back(decision.observation.legal.back());
        }
        std::vector<int> order(candidates.size());std::iota(order.begin(),order.end(),0);
        // The actor never receives score-sorted action positions or a teacher score.
        std::stable_sort(order.begin(),order.end(),[&](int a,int b){const auto& x=candidates[a];const auto& y=candidates[b];
            if(x.kind!=y.kind)return int(x.kind)<int(y.kind);
            if(x.p.x!=y.p.x)return x.p.x<y.p.x;
            if(x.p.y!=y.p.y)return x.p.y<y.p.y;
            return x.p.z<y.p.z;});
        for(int index:order){auto feature=candidates[index].policyFeatures;
            // Live squad context is identical on every action. Separate assessment context
            // preserves the inputs which produced the cached teacher costs (columns 64..95).
            std::copy_n(feature.begin(),32,feature.begin()+64);
            std::copy_n(context.begin(),32,feature.begin());
            feature[59]=cmd.routeAssessment?(time-cmd.routeAssessment->at)/4:0;
            feature[60]=candidates[index].support;feature[61]=ratio/4;feature[62]=context[62];feature[63]=context[63];
            for(float& value:feature)value=std::clamp(value,-16.f,16.f);
            if(schema4) {
                // The first bound of this candidate's route, as a commit would take it.
                const auto& route=*candidates[index].route;Vec3 bound=candidates[index].p;
                if(!route.stages.empty())bound=route.stages[size_t(std::min<int>(int(route.stages.size())-1,
                    legacyBounds?MergeBoundStage(route,0,BoundConstants.boundLength):0))].destination;
                SquadRasterSamples(view,candidates[index].p,(origin+bound)*.5f,feature);
            }
            decision.observation.actions.push_back(feature);decision.observation.legal.push_back(mobile>=2);
            if(schema4)decision.observation.legalNow.push_back(mobile>=2);
            decision.teacherScores.push_back(candidates[index].score/16);
            if(keepRow&&index==keepCandidate){decision.observation.actions[1]=feature;decision.observation.actions[1][96]=1;}
            if(index==selected)decision.teacher=int(decision.observation.actions.size())-1;
        }
        if(schema4)decision.teacher*=SquadTimingCount; // flat index of the teacher's row, through the gates
        decision.selected=decision.teacher;
        if(config.neuralPolicy||config.externalPolicy){
            decision.selected=config.externalPolicy?diagnostics->options.squadActionCallback(decision.observation,leader.squad,time):SelectSquadAction(*config.neuralPolicy,decision.observation,&decision.logits);
            if(!SquadActionLegal(decision.observation,decision.selected)){emitDecision("invalid");throw std::runtime_error("Invalid neural squad decision");}
            const int row=schema4?decision.selected/SquadTimingCount:decision.selected;
            goNow=schema4&&decision.selected%SquadTimingCount==1;
            continuing=keepRow&&row==1;
            selected=row==0?-1:continuing?keepCandidate:order[row-(keepRow?2:1)];
            cmd.candidateScores="neural selected="+std::to_string(decision.selected)+" teacher="+std::to_string(decision.teacher);
        }
    }
    if(selected<0){emitDecision("retain");{const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=-1;clockReset(clockBefore,"retain");}
        cmd.planReason=shattered?"shattered: too few able riflemen to manoeuvre alone":"hold wins candidate comparison";return;}
    const auto& best=candidates[selected];
    bool withdrawal=best.kind==Maneuver::PullBack;
    // Score noise (decaying danger, growing idle time) shifts the winning candidate a few
    // metres tick to tick without it being a materially different plan; restarting the
    // preparation clock on every such drift means a squad can spend the whole engagement
    // "preparing" a move it never gets to make. Only a genuinely different target resets it.
    if(!continuing&&(cmd.opportunitySince<0||Distance(best.p,cmd.preparedTarget)>10||
        (keepPolicy&&config.keepKindReset&&cmd.preparedKind!=best.kind))){const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=time;cmd.preparedTarget=best.p;clockReset(clockBefore,"target_changed");}
    if(keepRow)cmd.preparedKind=best.kind;
    // Plan 026 P4b: "go now" skips the two readiness gates below (covering fire on the crossing
    // and the preparation clock); the commit then releases the route's bounds.
    // Plan 030 M-S5 (S5): the commit wait is released when the crossing's overlooking threats are quiet;
    // the credited-delivery test alone (the candidate's covering value) releases it after fallbackSeconds.
    // Off, the gate's covering value is the candidate's, exactly as before.
    bool gateSupport=best.support;const char* release=best.support?"credit":"";
    if(quietRelease&&!goNow&&!withdrawal&&best.exposure>=.2f) {
        const bool crossingQuiet=best.quiet; // QuietCrossing on this crossing, this tick (the candidate loop above); named apart from the outer `quiet` (MSVC C4456)
        const bool fallback=best.support&&cmd.opportunitySince>=0&&time-cmd.opportunitySince>=CoverQuietConstants.fallbackSeconds;
        gateSupport=crossingQuiet||fallback;release=crossingQuiet?"quiet":fallback?"credit":"";
    }
    // Plan 030 M-S6 (Config::noCoveringFire): no crossing waits for covering fire, so none is exposed and uncovered here
    // (no support_wait, no 20 s override, no graduated wait); gateSupport keeps the credited value for the trace.
    const bool offRelease=noCovering&&!goNow&&!withdrawal&&best.exposure>=.2f&&!gateSupport;
    // Plan 031 D (Config::fireAndMovement): no crossing waits for covering fire at the commit either; each leg waits for
    // the gun at its own start instead. The preparation clock below is unchanged.
    const bool drillRelease=drill&&!goNow&&!withdrawal&&best.exposure>=.2f&&!gateSupport;
    const bool exposedUncovered=!goNow&&!withdrawal&&best.exposure>=.2f&&!gateSupport&&!noCovering&&!drill;
    if(requests&&!withdrawal&&best.exposure>=.2f) {
        const auto path=BoundCrossing(*best.route,0,MergeBoundStage(*best.route,0,BoundConstants.boundLength));
        const int primary=path.empty()?-1:CoveringPrimary(knowledge,map,origin,path,time,primaryAge);
        if(primary>=0)RaiseCoverRequest(leader,squad,map,cmd,primary,origin,path.back(),0,"commit",time,diagnostics,&path,config.coverShift,rifleBase,sector&&requests,primaryAge);
    }
    // Plan 028 Stage 3c: a crossing nobody covers. With no overlooking track seen within 20 s it is
    // not held for covering fire at all (the 8 s exposed preparation below is its short wait); with
    // one, it waits T, then a high-danger crossing is given up for a way round and a low one goes.
    CoverGrade grade;const char* graduatedOutcome="";
    const bool shortWaitOver=cmd.opportunitySince>=0&&time-cmd.opportunitySince>=CoverGradeConstants.shortWait;
    if(graduated&&exposedUncovered){
        grade=GradeCrossing(leader,map,origin,BoundCrossing(*best.route,0,legacyBounds?MergeBoundStage(*best.route,0,BoundConstants.boundLength):0),best.exposure,time,shortWaitOver);
        graduatedOutcome=!grade.freshPrimary?"stale_cross":!shortWaitOver?"":grade.high?"high_go_round":"low_cross";
    }
    const bool graduatedWait=graduated&&exposedUncovered&&grade.freshPrimary&&(!shortWaitOver||grade.high);
    if(coverTrace&&!withdrawal&&best.exposure>=.2f){
        // Plan 028 Stage 0: the commit wait, as the leader judged it this tick (the same crossing
        // the candidate's covering value was taken on).
        const auto explanation=CoveringExplain(leader,map,origin,BoundCrossing(*best.route,0,legacyBounds?MergeBoundStage(*best.route,0,BoundConstants.boundLength):0),time,primaryAge,sector);
        const bool platoonFiring=legacyBounds&&explanation.fresh;
        CoveringGateState g;g.covering=gateSupport;g.exposure=best.exposure;g.opportunitySince=cmd.opportunitySince;
        g.waited=cmd.opportunitySince<0?-1:time-cmd.opportunitySince;g.platoonFiring=platoonFiring;
        if(quietRelease)g.release=release;
        if(noCovering)g.release=offRelease?"off":release;
        if(drill)g.release=drillRelease?"drill":release; // plan 031 D
        g.pass=graduated?(goNow||gateSupport||offRelease||drillRelease||!graduatedWait):goNow||gateSupport||offRelease||drillRelease||(platoonFiring&&time-cmd.opportunitySince>=BoundConstants.exposedWaitSeconds);
        g.hasWaypoint=cmd.hasWaypoint;g.routePresent=bool(cmd.route);g.staleRoute=!cmd.hasWaypoint;g.pressure=pressure;
        g.graduated=graduated;g.danger=!graduated||!exposedUncovered?"":!grade.freshPrimary?"stale":!grade.graded?"pending":grade.high?"high":"low";g.outcome=graduatedOutcome;
        g.result=!g.pass?(graduated&&grade.high&&shortWaitOver?"go_round":"support_wait"):!goNow&&time-cmd.opportunitySince<8?"preparing":"committed";
        TraceCoveringCheck(diagnostics,leader,cmd,time,"commit",explanation,g);
    }
    if(exposedUncovered&&graduated){
        if(graduatedWait&&!shortWaitOver){cmd.planReason="exposed crossing waits for fire on the primary overlooking track";emitDecision("support_wait");return;}
        if(graduatedWait){
            // High danger and nobody covering after T: this crossing is marked failed the way a
            // paused one is (no waypoint is invented), so the next assessment looks for another way.
            cmd.failedMoves[cmd.failedMoveCount%4]=best.p;++cmd.failedMoveCount;
            {const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=-1;clockReset(clockBefore,"go_round");}
            cmd.planReason="high-danger crossing nobody covers: look for a way round";emitDecision("go_round");return;
        }
        // stale or low danger: no covering-fire hold; the preparation clock below is the short wait
    }
    else if(exposedUncovered){
        // Covering fire is only credited here when it lands on the exact dominant threat
        // over this crossing (CoveringPath). That is a narrower bar than "the platoon has
        // fire going down range at all", so a mover can sit waiting on the one exact track
        // long after its own platoon is already trading fire. Once the platoon's own fire
        // has been running and this same crossing has waited past a bounded grace, go
        // anyway: the wait was not buying more readiness, only burning the clock.
        bool platoonFiring=legacyBounds&&std::any_of(leader.deliveries.begin(),leader.deliveries.end(),
            [&](const FireDelivery& e){return e.shooter>=0&&e.rounds>0&&time-e.observedAt<=6;});
        if(!(platoonFiring&&time-cmd.opportunitySince>=BoundConstants.exposedWaitSeconds)){
            cmd.planReason="exposed crossing waits for fire on the primary overlooking track";emitDecision("support_wait");return;
        }
    }
    const float preparation=withdrawal?(emergency?0.f:2.f):best.exposure<.2f?2.f:8.f;
    cmd.preparationSeconds=preparation;
    if(!goNow&&time-cmd.opportunitySince<preparation){cmd.planReason=preparation>=8?"prepare exposed assault: eight seconds of covering fire":"prepare protected stage";emitDecision("preparing");return;}
    auto chosen=best.route;float exposure=best.exposure;
    // Plan 023 E (section 11): a withdrawal ends at a FIXED fall-back position, chosen once when it
    // is committed and kept while the squad still knows the enemy it left: the nearest covered
    // ground behind the squad's last objective that no known enemy can look into. The pull-back
    // candidate is only the nearest cover that faces away, which is how a withdrawal became a walk
    // (45 m, then 65, 110, 160 and no end, the squad knowing nobody by the time it stopped).
    if(withdrawal&&legacyBounds) {
        Vec3 fall=best.p;const bool have=cmd.fallbackAt>=0;
        // The pull-back's own destination is kept when it is already a place the enemy cannot look
        // into: what the withdrawal lacked was an END, not a better piece of cover, and a longer
        // walk to the rear costs more men than the cover saves (round 1: attackers lost +4 points).
        if(have)fall=cmd.fallback;
        else if(!OutOfSight(leader,map,best.p,true,time)&&!FallbackPosition(leader,map,cmd.mission,track.position,origin,time,fall))fall=best.p;
        if(Distance(fall,best.p)>3) {
            auto planned=std::make_shared<TacticalRoute>(planner.Evaluate(origin,fall));
            planned->id=uint64_t(leader.squad+1)*1000000000ull+uint64_t(++cmd.routeSerial);planned->plan=cmd.planId+1;
            if(planned->points.empty())fall=best.p;
            else{chosen=planned;exposure=BoundExposure(*planned,0,legacyBounds?MergeBoundStage(*planned,0,BoundConstants.boundLength):0);}
        }
        if(!have){cmd.fallback=fall;cmd.fallbackSector=track.position;cmd.fallbackAt=time;}
    }
    else if(legacyBounds)cmd.fallbackAt=-1;   // a fresh manoeuvre of any other kind releases it
    cmd.route=chosen;cmd.routeStage=0;cmd.teamPlan.route=cmd.route;
    cmd.boundStage=legacyBounds?MergeBoundStage(*cmd.route,0,BoundConstants.boundLength):0;cmd.boundMajorityAt=-1;
    // Plan 031 D: the first bound in contact is the first leg, and its exposure the leg's.
    if(drill&&!withdrawal){cmd.boundStage=FmBoundStage(leader,map,config,*cmd.route,0,origin,time);exposure=BoundExposure(*cmd.route,0,cmd.boundStage);}
    cmd.hasWaypoint=true;cmd.waypoint=cmd.route->stages[cmd.boundStage].destination;cmd.moveExposure=exposure;cmd.maneuver=best.kind;
    cmd.maneuverUntil=time+std::max(30.f,chosen->cost.travel*2+20);
    cmd.movementBlock={};cmd.teamPlan.bounding=false;cmd.teamPlan.released=false;++cmd.teamPlan.serial;
    cmd.planReason=withdrawal?"withdrawal wins candidate comparison":best.exposure<.2f?"protected maneuver wins candidate comparison":"supported assault wins candidate comparison";
    if(withdrawal)++cmd.withdrawals;else ++cmd.presses;
    cmd.policyRelease=goNow;cmd.policyReleaseUntil=goNow?cmd.maneuverUntil:-1;cmd.policyReleaseRoute=goNow?cmd.route->id:0;
    emitDecision(goNow?"committed_now":"committed");
    if(keepPolicy&&config.keepCommitClear){const float clockBefore=cmd.opportunitySince;cmd.opportunitySince=-1;clockReset(clockBefore,"commit");} // the pending intent has become an active bound
}
}
