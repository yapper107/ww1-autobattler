#include "PositionSim.h"
#include "TacticalRouteSim.h"
#include "Diagnostics.h"
#include <algorithm>
#include <cmath>
namespace army {
static float Angle(Vec3 point,Vec3 support,Vec3 target){const auto a=point-target,b=support-target;return std::abs(std::atan2(a.x*b.y-a.y*b.x,a.x*b.x+a.y*b.y))*180/3.14159265f;}
static bool InArea(Vec3 p,const GroupPositionQuery& q){return InOperationArea(p,q.areaMin,q.areaMax,q.areaRoute,q.areaRouteRadius,q.areaDiscCenter,q.areaDiscRadius);}
static void TracePosition(Diagnostics* d,const Soldier& leader,float time,const CoverPosition& c,const char* kind,const std::string& reason){
    if(!d||!d->options.enabled)return;
    TraceEntry e;e.id=d->nextId++;e.time=time;e.soldier=leader.id;e.squad=leader.squad;e.kind=kind;e.position=c.peek;e.goal=c.shelter;e.coverId=c.id;e.reason=reason;d->entries.push_back(e);
}
std::vector<MemberPositions> QueryPositions(const Soldier& leader,const std::vector<Soldier>& members,const Map& map,const GroupPositionQuery& q,float time,Diagnostics* d){
    // Lifted from the recovery group query. The old service stays byte-identical.
    const auto knowledge=WithTracks(leader,time);std::vector<Vec3> targets{q.target};
    for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(ct.position,q.target)<=q.targetRadius)targets.push_back(ct.position);
    std::vector<ReservedPosition> reserved=q.reserved;
    for(const auto& member:members)if(member.Active()){CoverPosition c;c.shelter=c.peek=member.position;reserved.push_back({member.id,c});}
    for(int id=0;id<UnitCount;++id)if(id!=leader.id&&leader.allies[id].known&&time-leader.allies[id].observedAt<3&&
        std::none_of(members.begin(),members.end(),[&](const Soldier& s){return s.id==id;})){
        CoverPosition c;c.shelter=c.peek=leader.allies[id].position;reserved.push_back({id,c});
    }
    std::vector<std::vector<TacticalSlot>> choices;std::vector<MemberPositions> result;
    for(const auto& member:members){
        MemberPositions output;output.soldier=member.id;std::vector<TacticalSlot> candidates;const Vec3 anchor=q.anchors[member.id%SquadSize];
        std::vector<CoverPosition> points;
        if(q.firingSearch){
            // Firing slots may lie on open ground: catalogue cover is preferred,
            // never a prerequisite for a reachable line within the search radius.
            for(float radius=0;radius<=q.radius;radius+=3)for(int ray=0;ray<(radius?32:1);++ray){
                float angle=ray*2*3.14159265f/32;CoverPosition c;
                c.shelter=c.peek=anchor+Vec3{radius*std::cos(angle),radius*std::sin(angle)};
                if(Walkable(map,c.shelter))points.push_back(c);
            }
        }
        if(q.formation){
            // Deterministic nearest walkable projection, bounded to three metres.
            // Keep alternatives for reservations; never borrow a distant cover slot.
            for(int ring=0;ring<=3;++ring)for(int ray=0;ray<(ring?16:1);++ray){
                const float angle=ray*2*3.14159265f/16;
                CoverPosition c;c.shelter=c.peek=anchor+Vec3{ring*std::cos(angle),ring*std::sin(angle)};
                if(Walkable(map,c.shelter))points.push_back(c);
            }
        }
        if(!q.formation||q.preferCover)for(const auto& cover:CoverPositions(map))if(Distance(cover.shelter,anchor)<=q.radius){
            points.push_back(cover);
            if(!cover.window)for(float offset:{-6.f,-3.f,3.f,6.f}){
                Vec3 tangent{1,0};for(const auto& o:map.obstacles)if(o.id==cover.source){if(std::abs(cover.shelter.x-o.center.x)>o.half.x)tangent={0,1};break;}
                auto shifted=cover;shifted.shelter=cover.shelter+tangent*offset;shifted.peek=cover.peek+tangent*offset;points.push_back(shifted);
            }
        }
        for(const auto& c:points){
            std::string reason;float angle=Angle(c.peek,q.support,q.target);
            if(q.minAngle>0)for(Vec3 delta:{Vec3{q.angleProbe,0},Vec3{-q.angleProbe,0},Vec3{0,q.angleProbe},Vec3{0,-q.angleProbe}})angle=std::min(angle,Angle(c.peek,q.support,q.target+delta));
            bool protectedHere=ProtectedAt(map,c.shelter,q.target,CoverStance(c));
            bool firing=Distance(c.peek,q.target)<SightRange(member)&&ClearLine3D(map,c.peek+Vec3{0,0,1.5f},q.target+Vec3{0,0,1.3f});
            if(!InArea(c.shelter,q)||Distance(c.shelter,q.center)>q.coherenceRadius)reason="outside assigned area or coherence radius";
            else if(q.boundRadius>0&&(Distance(c.shelter,q.boundCenter)>q.boundRadius||Distance(c.peek,q.boundCenter)>q.boundRadius))reason="outside overwatch bound radius";
            else if(Distance(c.shelter,anchor)>q.radius)reason="outside anchor radius";
            else if(!Walkable(map,c.shelter)||!Walkable(map,c.peek)||!ClearLine(map,c.shelter,c.peek,.46f))reason="non-executable cover pair";
            else if(!q.formation&&q.protectedPosition&&!protectedHere)reason="cover faces away from known sector";
            else if(q.firing&&!firing)reason="no line within weapon range";
            else if(angle<q.minAngle||angle>q.maxAngle)reason="outside angular sector";
            else if(Distance(c.shelter,q.target)<q.minTargetDistance||Distance(c.shelter,q.target)>q.maxTargetDistance)reason="outside sector radial band";
            if(reason.empty())for(const auto& ct:knowledge.contacts)if(ct.known&&Distance(c.peek,ct.position)<TrackUncertainty(ct,time)+2){
                const bool inspecting=q.inspectSupportedObjective&&q.supportedAssaultRadius>0&&time-ct.observedAt>6&&
                    Distance(c.shelter,q.supportedObjective)<=q.supportedAssaultRadius&&Distance(ct.position,q.supportedObjective)<=q.targetRadius;
                if(!inspecting){reason="inside remembered threat uncertainty";break;}
            }
            if(reason.empty()&&InReportedFireLane(leader,member.id,c.peek,time))reason="received friendly firing lane";
            if(reason.empty()&&q.corridor&&CorridorDistance(*q.corridor,c.shelter)>q.groupCap)reason="outside accepted corridor";
            if(reason.empty()&&q.safeEndpoint&&q.guardObjective){
                const bool close=q.supportedAssaultRadius>0&&Distance(c.shelter,q.supportedObjective)<=q.supportedAssaultRadius;
                if(!close&&!ProtectedAt(map,c.shelter,q.target,Stance::Crouched)&&
                   ClearLine3D(map,c.shelter+Vec3{0,0,1.3f},q.target+Vec3{0,0,1.7f}))reason="unsafe rush endpoint from retained assault objective";
            }
            if(reason.empty()&&q.safeEndpoint){
                for(const auto& ct:knowledge.contacts)if(ct.known){
                    const bool coveredAssault=q.supportedAssaultRadius>0&&Distance(c.shelter,q.supportedObjective)<=q.supportedAssaultRadius&&Distance(ct.position,q.supportedObjective)<=q.targetRadius;
                    if(!coveredAssault&&!ProtectedAt(map,c.shelter,ct.position,Stance::Crouched)&&
                       ClearLine3D(map,c.shelter+Vec3{0,0,1.3f},ct.position+Vec3{0,0,1.7f})){reason="unsafe rush endpoint from known threat";break;}
                }
            }
            if(reason.empty()){
                auto path=FindPath(map,member.position,c.shelter);
                if(path.empty())reason="unreachable from member knowledge";
                if(q.maxPathLength>0){float length=0;Vec3 prior=member.position;
                    for(Vec3 step:path){length+=Distance(prior,step);prior=step;
                        if(!InArea(step,q)||(q.corridor&&CorridorDistance(*q.corridor,step)>q.groupCap))reason="path leaves accepted area or corridor";
                    }
                    if(length>q.maxPathLength)reason="path exceeds rush budget";
                }
            }
            TracePosition(d,leader,time,c,"position_query",reason.empty()?"candidate satisfies hard conditions":reason);
            if(!reason.empty())continue;
            float score=q.anchorWeight*Distance(anchor,c.shelter)+q.travelWeight*Distance(member.position,c.shelter)-q.coverWeight*protectedHere-q.lineWeight*firing;
            if(q.preferCover&&c.id&&protectedHere)score-=12;
            for(const auto& r:q.reserved)if(r.soldier!=member.id)score+=std::max(0.f,q.preferredSpacing-Distance(c.shelter,r.cover.shelter));
            candidates.push_back({c,angle,score});
        }
        std::stable_sort(candidates.begin(),candidates.end(),[](const auto& a,const auto& b){return a.score<b.score;});choices.push_back(candidates);result.push_back(output);
    }
    auto fits=[&](const CoverPosition& c,int id,bool emit){int close=0;for(const auto& r:reserved)if(r.soldier!=id){
        const float shelter=Distance(c.shelter,r.cover.shelter),peek=Distance(c.peek,r.cover.peek);close+=shelter<3;
        bool bad=shelter<q.shelterSpacing||peek<q.peekSpacing||close>=2;
        if(q.firing)bad|=!TacticalPairLaneClear(map,c,r.cover,targets);
        if(bad){if(emit)TracePosition(d,leader,time,c,"position_pair_rejected","reserved shelter/peek spacing, grenade density or friendly firing lane");return false;}
    }return true;};
    // Allocate every primary before alternatives; fallbacks cannot steal another member's primary.
    for(size_t n=0;n<result.size();++n){auto& out=result[n];
        for(const auto& c:choices[n])if(fits(c.cover,out.soldier,false)&&
            std::none_of(result.begin(),result.end(),[&](const MemberPositions& assigned){return assigned.valid&&Distance(assigned.primary.cover.shelter,c.cover.shelter)>q.groupCap;})){
            out.valid=true;out.primary=c;reserved.push_back({out.soldier,c.cover});out.reason="allocated primary";TracePosition(d,leader,time,c.cover,"position_query",out.reason);break;
        }
        if(!out.valid){out.reason="no unreserved position inside area/coherence";if(!choices[n].empty())fits(choices[n][0].cover,out.soldier,true);}
    }
    for(size_t n=0;n<result.size();++n)if(result[n].valid)for(const auto& c:choices[n]){
        if(result[n].fallbacks.size()==q.maxFallbacks)break;
        if(Distance(c.cover.shelter,result[n].primary.cover.shelter)<q.shelterSpacing)continue;
        if(fits(c.cover,result[n].soldier,false))result[n].fallbacks.push_back(c);
    }
    return result;
}
}
