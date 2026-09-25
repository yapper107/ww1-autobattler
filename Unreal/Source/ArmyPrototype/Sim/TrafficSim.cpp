#include "TrafficSim.h"
#include <algorithm>
#include <cmath>
namespace army {
std::vector<Passage> BuildingPassages(const Map& m){std::vector<Passage> p;for(const auto& b:m.buildings){
    if(!b.authoredStairs)continue; // imported footprints: stair/door passages come from surfaces and `P` below
    for(float side:{-1.f,1.f})p.push_back({b.center+Vec3{side*5,0,0},{1.25f,1.15f,0},false});
    p.push_back({b.center+Vec3{0,-0.8f,UpperFloor*0.5f},{3.65f,0.9f,UpperFloor*0.5f},true});
}
    for(const auto& surface:m.surfaces){bool horizontal=surface.half.x>surface.half.y;float length=horizontal?surface.half.x:surface.half.y;
        if(std::min(surface.half.x,surface.half.y)>2.1f)continue;
        // ARMYMAP 2: a stair is one stair passage (below) and an upper storey is no ground corridor.
        if(surface.kind==2||surface.level>0)continue;
        for(int i=0;i<int(length*2/8);++i){Vec3 center=surface.center+(horizontal?Vec3{-length+4+i*8,0}:Vec3{0,-length+4+i*8});
            p.push_back({center,horizontal?Vec3{2,1.8f}:Vec3{1.8f,2},false,1000000+surface.id*1000+uint64_t(i)});}
    }
    // ARMYMAP 2 (both lists are empty on every ARMYMAP 1 and authored map). One single-file stair
    // passage per stair surface, over the whole flight: centred at mid-height, 0.2 m beyond the plane.
    for(size_t index:m.stairSurfaces){const auto& s=m.surfaces[index];
        const float rise=std::abs(s.slope.x)*s.half.x+std::abs(s.slope.y)*s.half.y;
        p.push_back({s.center,{s.half.x+.2f,s.half.y+.2f,rise},true,1000000+s.id*1000+999});}
    // A `P` record is the door opening itself (half its width along the wall, 0.25 across). The passage
    // is shaped like an authored house door's: 0.05 m beyond the opening along the wall and 1.25 m
    // either side of it, so a man waits for the lease before he steps into the doorway.
    for(const auto& door:m.doorPassages){const bool alongX=door.half.x>=door.half.y;
        p.push_back({{door.center.x,door.center.y,0},alongX?Vec3{door.half.x+.05f,1.25f,0}:Vec3{1.25f,door.half.y+.05f,0},false});}
    for(size_t i=0;i<p.size();++i)if(!p[i].id)p[i].id=uint64_t(i+1);
    return p;}
bool InsidePassage(const Passage& p,Vec3 at,float pad){return std::abs(at.x-p.center.x)<p.half.x+pad&&std::abs(at.y-p.center.y)<p.half.y+pad&&(p.stairs?at.z>=-0.1f&&at.z<=UpperFloor+0.1f:at.z<0.3f);}
static Vec3 HoldingPoint(const Soldier& s,const Map& map,const std::vector<Passage>& passages,const std::vector<TrafficInput>& friends,const TrafficRuntime& rt,float time) {
    Vec3 enemy=s.assignment.sector;float newest=-100;
    for(const auto& ct:s.contacts)if(ct.known&&ct.observedAt>newest){newest=ct.observedAt;enemy=ct.position;}
    const bool onStairs=OnStairs(map,s.position)&&s.position.z>0.02f&&s.position.z<UpperFloor-0.02f;
    auto reachable=[&](Vec3 p){
        std::vector<Vec3> path;
        if(onStairs){path=FindPath(map,s.position,p);if(path.empty())return false;}
        else {if(!ClearLine(map,s.position,p,0.48f))return false;path.push_back(p);}
        Vec3 from=s.position;
        for(Vec3 to:path){for(const auto& passage:passages) {
            if(!passage.stairs&&from.z>0.3f&&to.z>0.3f)continue;
            if(SegmentBox(from,to,{passage.center,passage.half,false},0.15f)>=0&&!InsidePassage(passage,s.position,0.15f))return false;
        }from=to;}return true;
    };
    auto valid=[&](Vec3 p){if(!Walkable(map,p)||(!onStairs&&std::abs(p.z-s.position.z)>0.1f))return false;
        for(const auto& passage:passages)if(InsidePassage(passage,p,0.7f))return false;
        for(const auto& f:friends)if(f.soldier->id!=s.id) {
            if(Distance(f.soldier->position,p)<1.2f)return false;
            if(rt.pending[f.soldier->id]>=0&&rt.nextHoldingCheck[f.soldier->id]>time&&Distance(rt.holding[f.soldier->id],p)<1.2f)return false;
        }
        return true;};
    Vec3 best=s.position;float score=1e9f;
    for(const auto& cover:CoverPositions(map))if(Distance(s.position,cover.shelter)<7&&valid(cover.shelter)&&reachable(cover.shelter)) {
        float value=Distance(s.position,cover.shelter)+(ProtectedAt(map,cover.shelter,enemy,CoverStance(cover))?0:12);
        if(value<score){score=value;best=cover.shelter;}
    }
    if(score<10)return best;
    for(float radius:{1.5f,3.f,4.5f})for(int i=0;i<8;++i){float angle=i*0.78539816f;Vec3 p=s.position+Vec3{std::cos(angle)*radius,std::sin(angle)*radius,0};
        if(valid(p)&&reachable(p)){float value=radius+(ProtectedAt(map,p,enemy,Stance::Crouched)?0:10);if(value<score){score=value;best=p;}}}
    return best;
}
std::array<TrafficDecision,UnitCount> CoordinatePassages(const Map& map,const std::vector<Passage>& passages,
    const std::vector<TrafficInput>& friends,TrafficRuntime& rt,float time) {
    std::array<TrafficDecision,UnitCount> result{};if(friends.empty())return result;
    if(rt.geometry!=map.revision){rt={};rt.geometry=map.revision;}
    if(!rt.initialized){rt.pending.fill(-1);rt.initialized=true;}
    auto& leases=rt.leases[friends.front().soldier->team];if(leases.size()!=passages.size())leases.resize(passages.size());
    auto find=[&](int id)->const TrafficInput*{for(const auto& f:friends)if(f.soldier->id==id)return &f;return nullptr;};
    for(const auto& input:friends){const auto& s=*input.soldier;int wanted=-1;float nearest=1e9f;
        // Plan 029 P-1: whether neither his position nor his next point is on stairs does not depend on the
        // passage, so it is evaluated once (on first need, as before) instead of once per stair passage.
        int offStairs=-1;
        if(input.moving)for(size_t i=0;i<passages.size();++i){const auto& p=passages[i];
            if(!p.stairs&&(s.position.z>0.3f||input.next.z>0.3f))continue;
            if(p.stairs&&std::abs(input.next.z-s.position.z)<0.05f){
                if(offStairs<0)offStairs=!OnStairs(map,input.next)&&!OnStairs(map,s.position);
                if(offStairs)continue;
            }
            Obstacle box{p.center,p.half,false};
            if(Distance(s.position,p.center)<9&&SegmentBox(s.position,input.next,box,0.6f)>=0){float d=Distance(s.position,p.center);if(d<nearest){nearest=d;wanted=int(i);}}
        }
        if(wanted<0&&input.moving&&s.waitingPassage>=0&&rt.pending[s.id]>=0&&Distance(rt.goal[s.id],s.goal)<1&&Distance(s.position,passages[rt.pending[s.id]].center)<16)wanted=rt.pending[s.id];
        if(wanted!=rt.pending[s.id]||Distance(rt.goal[s.id],s.goal)>1){rt.pending[s.id]=wanted;rt.since[s.id]=time;rt.nextHoldingCheck[s.id]=0;rt.goal[s.id]=s.goal;}
    }
    for(size_t i=0;i<passages.size();++i){auto& lease=leases[i];const auto& p=passages[i];const auto* owner=find(lease.owner);
        if(owner){bool inside=InsidePassage(p,owner->soldier->position,0.15f);
            if(Distance(owner->soldier->position,lease.lastPosition)>0.25f){lease.lastPosition=owner->soldier->position;lease.movedAt=time;}
            if(inside)lease.entered=true;
            if(!owner->soldier->Active()||(!inside&&(lease.entered||rt.pending[lease.owner]!=int(i)||time-lease.movedAt>5))){lease.owner=-1;owner=nullptr;}
        }else lease.owner=-1;
        if(!owner){float earliest=1e9f;int choice=-1;
            for(const auto& f:friends)if(f.soldier->Active()&&rt.pending[f.soldier->id]==int(i)){
                float priority=rt.since[f.soldier->id]-(InsidePassage(p,f.soldier->position)?1000.f:0.f);
                if(priority<earliest){earliest=priority;choice=f.soldier->id;}
            }
            if(choice>=0){lease.evacuating=false;lease.owner=choice;lease.squad=find(choice)->soldier->squad;lease.direction=find(choice)->next-find(choice)->soldier->position;lease.entered=InsidePassage(p,find(choice)->soldier->position);lease.movedAt=time;lease.lastPosition=find(choice)->soldier->position;}
        }
        const auto* currentOwner=find(lease.owner);
        if(currentOwner&&InsidePassage(p,currentOwner->soldier->position)&&time-lease.movedAt>2) {
            for(const auto& f:friends)if(f.soldier->id!=lease.owner&&rt.pending[f.soldier->id]==int(i))lease.evacuating=true;
        }
        if(currentOwner&&lease.evacuating) {
            const auto& s=*currentOwner->soldier;auto& decision=result[s.id];decision.waiting=true;decision.passage=int(i);
            if(time>=rt.nextHoldingCheck[s.id]){rt.holding[s.id]=HoldingPoint(s,map,passages,friends,rt,time);rt.nextHoldingCheck[s.id]=time+2;}
            decision.holdingPoint=rt.holding[s.id];
        }
        for(const auto& input:friends){const auto& s=*input.soldier;
            const bool obstructing=lease.owner>=0&&lease.owner!=s.id&&InsidePassage(p,s.position)&&!input.moving;
            if(s.id==lease.owner||(!obstructing&&rt.pending[s.id]!=int(i)))continue;
            // A same-squad column can follow its lease holder in the same direction.
            // Opposing or older waiting groups acquire the next lease after the owner departs.
            if(currentOwner&&!lease.evacuating&&s.squad==lease.squad&&!p.stairs&&input.moving){Vec3 heading=input.next-s.position;float dot=heading.x*lease.direction.x+heading.y*lease.direction.y;
                if(dot>.01f&&Distance(s.position,currentOwner->soldier->position)>1.5f)continue;
            }
            auto& decision=result[s.id];decision.waiting=true;decision.passage=int(i);
            if(time>=rt.nextHoldingCheck[s.id]){rt.holding[s.id]=HoldingPoint(s,map,passages,friends,rt,time);rt.nextHoldingCheck[s.id]=time+2;}
            decision.holdingPoint=rt.holding[s.id];
        }
    }
    return result;
}
}
