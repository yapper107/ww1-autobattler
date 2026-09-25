#include "SquadRaster.h"
#include "CommandSim.h"
#include "ManeuverSim.h"
#include <algorithm>
#include <cmath>

namespace army {
namespace {
uint8_t Quantize(float value) {
    if(!(value>0))return 0;
    if(value>=255)return 255;
    return uint8_t(int(value+.5f));
}
}
// Far off-map (or non-finite) positions land on a flagged off-map cell instead of overflowing.
static int CellIndex(float offset){const float cell=std::floor(offset/SquadRasterCell);return cell>-1e6f&&cell<1e6f?int(cell):-1000000;}
int SquadRasterView::CellX(float x) const{return CellIndex(x+halfWidth);}
int SquadRasterView::CellY(float y) const{return CellIndex(y+halfHeight);}
SquadRasterPixel SquadRasterView::Cell(int x,int y) const {
    SquadRasterPixel cell{};
    if(!OnMap(x,y)){cell[0]=cell[1]=255;return cell;}
    const size_t base=(size_t(y)*size_t(fixed->width)+size_t(x))*SquadRasterStaticChannelCount;
    for(int c=0;c<SquadRasterStaticChannelCount;++c)cell[size_t(c)]=fixed->cells[base+size_t(c)];
    float enemy=0,automaticWeapons=0,friends=0,platoon=0;
    for(const auto& m:enemies)if(m.x==x&&m.y==y)enemy+=m.value;
    for(const auto& m:automatic)if(m.x==x&&m.y==y)automaticWeapons+=m.value;
    for(const auto& m:friendlies)if(m.x==x&&m.y==y)friends+=m.value;
    for(const auto& m:geometry)if(m.x==x&&m.y==y)platoon+=m.value;
    cell[3]=Quantize(enemy*64);
    cell[4]=Quantize(std::min(1.f,automaticWeapons)*255);
    const Vec3 centre{-halfWidth+(float(x)+.5f)*SquadRasterCell,-halfHeight+(float(y)+.5f)*SquadRasterCell,eyeZ};
    cell[5]=Quantize(FireDanger(*leader,centre,time)*255);
    cell[6]=Quantize(friends*32);
    cell[7]=Quantize(platoon);
    return cell;
}
SquadRasterView BuildSquadRasterView(const Soldier& leader,const std::vector<Soldier>& squad,const Map& knownMap,
    const std::vector<Vec3>& friendlyApproaches,const SquadCommand& cmd,Vec3 origin,float time) {
    SquadRasterView view;
    view.leader=&leader;view.fixed=&SquadRasterStaticChannels(knownMap);
    view.halfWidth=knownMap.halfWidth;view.halfHeight=knownMap.halfHeight;view.eyeZ=origin.z;view.time=time;
    view.originX=view.CellX(origin.x);view.originY=view.CellY(origin.y);
    view.offsetX=(origin.x+view.halfWidth)/SquadRasterCell-float(view.originX);
    view.offsetY=(origin.y+view.halfHeight)/SquadRasterCell-float(view.originY);
    view.offsetX=std::clamp(view.offsetX,0.f,.999999f);view.offsetY=std::clamp(view.offsetY,0.f,.999999f);
    auto mark=[&](std::vector<SquadRasterView::Mark>& list,Vec3 p,float value){list.push_back({view.CellX(p.x),view.CellY(p.y),value});};
    // Enemies: only the leader's own tracks and the reports he has received, as every other
    // leader decision sees them.
    const auto knowledge=WithTracks(leader,time);
    for(const auto& ct:knowledge.contacts){if(!ct.known)continue;
        const float confidence=TrackConfidence(ct,time);
        mark(view.enemies,ct.position,confidence);
        if(ct.automaticWeapon)mark(view.automatic,ct.position,confidence);}
    // Friendlies: his own squad where they stand, and the allies he has seen in the last 10 s.
    std::array<bool,UnitCount> own{};
    for(const auto& s:squad){if(s.id>=0&&s.id<UnitCount)own[size_t(s.id)]=true;if(s.Active())mark(view.friendlies,s.position,1);}
    for(int id=0;id<UnitCount;++id){const auto& ally=leader.allies[size_t(id)];
        if(own[size_t(id)]||id==leader.id||!ally.known||time-ally.observedAt>=10)continue;
        mark(view.friendlies,ally.position,1);}
    // Platoon geometry: the other squads' waypoints, this squad's mission and the platoon order.
    for(Vec3 p:friendlyApproaches)mark(view.geometry,p,96);
    mark(view.geometry,cmd.mission,64);
    if(leader.platoonOrder.serial>0&&time<leader.platoonOrder.expiresAt)mark(view.geometry,leader.platoonOrder.position,64);
    return view;
}
std::vector<uint8_t> SquadRasterWindow(const SquadRasterView& view) {
    std::vector<uint8_t> raster(size_t(SquadRasterBytes),0);
    const int half=SquadRasterSize/2;
    for(int j=0;j<SquadRasterSize;++j)for(int i=0;i<SquadRasterSize;++i) {
        const auto cell=view.Cell(view.originX-half+i,view.originY-half+j);
        for(int c=0;c<SquadRasterChannels;++c)raster[size_t((c*SquadRasterSize+j)*SquadRasterSize+i)]=cell[size_t(c)];
    }
    return raster;
}
void SquadRasterSamples(const SquadRasterView& view,Vec3 destination,Vec3 boundMidpoint,SquadFeatures& row) {
    const int x=view.CellX(destination.x),y=view.CellY(destination.y);
    const auto at=view.Cell(x,y),middle=view.Cell(view.CellX(boundMidpoint.x),view.CellY(boundMidpoint.y));
    std::array<int,SquadRasterChannels> sum{};
    for(int dy=-1;dy<=1;++dy)for(int dx=-1;dx<=1;++dx){const auto cell=view.Cell(x+dx,y+dy);
        for(int c=0;c<SquadRasterChannels;++c)sum[size_t(c)]+=cell[size_t(c)];}
    for(int c=0;c<SquadRasterChannels;++c) {
        row[size_t(SquadRasterColumn+c)]=float(at[size_t(c)])/255.f;
        row[size_t(SquadRasterColumn+SquadRasterChannels+c)]=float(sum[size_t(c)])/(9*255.f);
        row[size_t(SquadRasterColumn+2*SquadRasterChannels+c)]=float(middle[size_t(c)])/255.f;
    }
    row[size_t(SquadRasterColumn+3*SquadRasterChannels)]=view.offsetX;
    row[size_t(SquadRasterColumn+3*SquadRasterChannels+1)]=view.offsetY;
    row[size_t(SquadRasterColumn+3*SquadRasterChannels+2)]=0; // spare
}
}
