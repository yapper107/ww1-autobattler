#include "BattleSim.h"
#include <algorithm>
#include <cmath>
namespace army {
bool InsideSurface(const GroundSurface& s,Vec3 p){return std::abs(p.x-s.center.x)<=s.half.x+.001f&&std::abs(p.y-s.center.y)<=s.half.y+.001f;}
float SurfaceHeight(const GroundSurface& s,Vec3 p){return s.center.z+(p.x-s.center.x)*s.slope.x+(p.y-s.center.y)*s.slope.y;}
Map MakeTrenchMap(){
    Map m;m.halfWidth=100;m.halfHeight=70;m.groundBase=-1.4f;
    auto floor=[&](Vec3 c,Vec3 half){GroundSurface s;s.center=c;s.center.z=-1.4f;s.half=half;s.id=uint64_t(m.surfaces.size()+1);m.surfaces.push_back(s);};
    for(float sign:{-1.f,1.f}){
        for(float y:{-44.f,0.f,44.f})floor({sign*53.5f,y},{38.5f,2});
        floor({sign*65,7},{2,53});floor({sign*25,22},{2,22});floor({sign*65,0},{4,4});floor({sign*65,44},{4,4});
        GroundSurface ramp;ramp.id=uint64_t(m.surfaces.size()+1);ramp.center={sign*12,0,-.7f};ramp.half={3,2};ramp.slope={-sign*1.4f/6,0};
        // Bottom at +/-15, top at +/-9; links are physical walking surfaces.
        m.surfaces.push_back(ramp);m.surfaceLinks.push_back({ramp.id,{sign*15,0,-1.4f},{sign*9,0,0}});
    }
    floor({0,58},{92,2});
    floor({0,58},{4,4});
    // Partition the ground around the dug surfaces. Rectangles are actual earth volumes.
    std::vector<float> xs{-100,100},ys{-70,70};
    for(const auto& s:m.surfaces){xs.push_back(s.center.x-s.half.x);xs.push_back(s.center.x+s.half.x);ys.push_back(s.center.y-s.half.y);ys.push_back(s.center.y+s.half.y);}
    auto unique=[](std::vector<float>& v){std::sort(v.begin(),v.end());v.erase(std::unique(v.begin(),v.end()),v.end());};unique(xs);unique(ys);
    for(size_t y=1;y<ys.size();++y)for(size_t x=1;x<xs.size();++x){Vec3 c{(xs[x]+xs[x-1])/2,(ys[y]+ys[y-1])/2,-1.4f};bool dug=false;for(const auto& s:m.surfaces)dug|=InsideSurface(s,c);if(dug)continue;
        m.obstacles.push_back({c,{(xs[x]-xs[x-1])/2,(ys[y]-ys[y-1])/2},false,true,1.4f,false});
    }
    for(const auto& s:m.surfaces)if(std::abs(s.slope.x)>.01f){
        for(int i=0;i<24;++i){Vec3 p=s.center+Vec3{-s.half.x+(i+.5f)*s.half.x*2/24,0};float h=SurfaceHeight(s,p)-m.groundBase;
            if(h>.001f)m.obstacles.push_back({{p.x,p.y,m.groundBase},{s.half.x/24,s.half.y},false,false,h,false});}
    }
    // A building demonstrates upper-floor observation across the exposed central gap.
    AddBuilding(m,{34,-22});
    for(float sign:{-1.f,1.f})for(float y:{-44.f,0.f,44.f})m.obstacles.push_back({{sign*7,y},{.6f,1},false,true,1.15f});
    PrepareGeometry(m);return m;
}
Map MakeBattleMap(const Config& c){if(c.battlefield)return c.battlefield->map;return c.terrain==Terrain::Trenches?MakeTrenchMap():MakeSkirmishMap();}
}
