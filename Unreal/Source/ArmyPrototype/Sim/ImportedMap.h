#pragma once
// Pure, bounded text decoder. File ownership stays with the caller, outside simulation.
#include "BattleSim.h"
#include <algorithm>
#include <cmath>
#include <sstream>
#include <unordered_set>

namespace army {
inline std::shared_ptr<const ImportedBattlefield> ImportBattlefield(const std::string& text,std::string& error){
    auto fail=[&](const std::string& why)->std::shared_ptr<const ImportedBattlefield>{error=why;return {};};
    if(text.empty()||text.size()>4*1024*1024)return fail("Map file is empty or exceeds 4 MiB");
    auto g=std::make_shared<ImportedBattlefield>();std::istringstream in(text);std::string line,tag,extra;
    int version=0;if(!std::getline(in,line))return fail("Missing header");std::istringstream header(line);
    uint64_t seed=0;if(!(header>>tag>>version>>g->kind>>seed)||tag!="ARMYMAP"||version!=1||seed>UINT32_MAX||(g->kind!="city"&&g->kind!="trenches")||(header>>extra))return fail("Unsupported map header");
    g->seed=uint32_t(seed);g->name=g->kind=="city"?"Generated town":"Generated trenches";
    g->source=text;g->digest=1469598103934665603ull;for(unsigned char c:text)g->digest=(g->digest^c)*1099511628211ull;
    std::unordered_set<uint64_t> ids,coverIds;std::array<bool,UnitCount> placed{};bool bounds=false,ended=false;
    auto vec=[](std::istream& stream,Vec3& p){return bool(stream>>p.x>>p.y>>p.z)&&std::isfinite(p.x)&&std::isfinite(p.y)&&std::isfinite(p.z);};
    auto finite=[](float f){return std::isfinite(f);};
    int lines=0;
    while(std::getline(in,line)){
        if(++lines>10000)return fail("Too many map records");
        std::istringstream row(line);if(!(row>>tag))continue;if(ended)return fail("Data after END");
        if(tag=="BOUNDS"){
            if(bounds||!(row>>g->map.halfWidth>>g->map.halfHeight>>g->map.groundBase))return fail("Invalid bounds");
            bounds=true;
            if(!finite(g->map.halfWidth)||!finite(g->map.halfHeight)||!finite(g->map.groundBase)||g->map.halfWidth<20||g->map.halfWidth>500||g->map.halfHeight<20||g->map.halfHeight>500||std::abs(g->map.groundBase-(g->kind=="trenches"?-1.4f:0.f))>.001f)return fail("Unsupported map dimensions/depth");
        }else if(tag=="O"){
            Obstacle o;int building=0,low=0,move=0;
            if(!(row>>o.id)||!vec(row,o.center)||!(row>>o.half.x>>o.half.y>>o.height>>building>>low>>move)||!finite(o.half.x)||!finite(o.half.y)||!finite(o.height)||o.half.x<=0||o.half.y<=0||o.height<=0||o.height>20||o.id==0||o.id>=50000||!ids.insert(o.id).second||building<0||building>1||low<0||low>1||move<0||move>1)return fail("Invalid/duplicate obstacle");
            o.building=building!=0;o.halfCover=low!=0;o.blocksMovement=move!=0;g->map.obstacles.push_back(o);
        }else if(tag=="S"){
            GroundSurface s;
            if(!(row>>s.id)||!vec(row,s.center)||!(row>>s.half.x>>s.half.y>>s.slope.x>>s.slope.y)||!finite(s.half.x)||!finite(s.half.y)||!finite(s.slope.x)||!finite(s.slope.y)||s.half.x<=0||s.half.y<=0||s.id==0||!ids.insert(s.id).second||std::abs(s.slope.x)>.3f||std::abs(s.slope.y)>.3f)return fail("Invalid surface");
            g->map.surfaces.push_back(s);
        }else if(tag=="L"){
            SurfaceLink link;if(!(row>>link.id)||!vec(row,link.from)||!vec(row,link.to))return fail("Invalid surface link");g->map.surfaceLinks.push_back(link);
        }else if(tag=="C"){
            CoverPosition c;Vec3 facing;int crouch=0,window=0;
            if(!(row>>c.id>>c.source)||!vec(row,c.shelter)||!vec(row,c.peek)||!(row>>facing.x>>facing.y>>crouch>>window)||crouch<0||crouch>1||window<0||window>1||!finite(facing.x)||!finite(facing.y)||std::abs(std::hypot(facing.x,facing.y)-1)>.001f||c.id<1000000||c.id>=2000000||!coverIds.insert(c.id).second)return fail("Invalid cover record");
            c.crouch=crouch!=0;c.window=window!=0;g->map.windows.push_back(c);g->coverFacing.push_back(facing);
        }else if(tag=="U"){
            int id=-1;if(!(row>>id)||id<0||id>=UnitCount||placed[id]||!vec(row,g->positions[id])||!vec(row,g->goals[id]))return fail("Invalid spawn/goal");placed[id]=true;
        }else if(tag=="D"){
            MapDecoration d;if(!(row>>d.kind)||!vec(row,d.center)||!vec(row,d.half)||d.kind<0||d.kind>4||d.half.x<=0||d.half.y<=0||d.half.z<=0)return fail("Invalid decoration");g->decorations.push_back(d);
        }else if(tag=="END")ended=true;
        else return fail("Unknown map record: "+tag);
        if(row>>extra)return fail("Trailing map record data");
    }
    if(!bounds||!ended||std::find(placed.begin(),placed.end(),false)!=placed.end())return fail("Incomplete map/spawns");
    if(g->map.obstacles.size()>4000||g->map.surfaces.size()>1000||g->map.surfaceLinks.size()>16||g->map.windows.size()>2000||g->decorations.size()>1000)return fail("Map geometry budget exceeded");
    for(const auto& o:g->map.obstacles)if(std::abs(o.center.x)+o.half.x>g->map.halfWidth+.001f||std::abs(o.center.y)+o.half.y>g->map.halfHeight+.001f)return fail("Obstacle outside map");
    for(const auto& s:g->map.surfaces)if(std::abs(s.center.x)+s.half.x>g->map.halfWidth||std::abs(s.center.y)+s.half.y>g->map.halfHeight)return fail("Surface outside map");
    for(const auto& slope:g->map.surfaces)if(std::abs(slope.slope.x)+std::abs(slope.slope.y)>.001f)
        for(const auto& flat:g->map.surfaces)if(std::abs(flat.slope.x)+std::abs(flat.slope.y)<.001f&&
            std::abs(slope.center.x-flat.center.x)<slope.half.x+flat.half.x-.001f&&
            std::abs(slope.center.y-flat.center.y)<slope.half.y+flat.half.y-.001f)return fail("Flat floor overlaps ramp interior");
    for(const auto& l:g->map.surfaceLinks){
        auto s=std::find_if(g->map.surfaces.begin(),g->map.surfaces.end(),[&](const GroundSurface& item){return item.id==l.id;});
        if(s==g->map.surfaces.end()||!InsideSurface(*s,l.from)||!InsideSurface(*s,l.to)||std::abs(SurfaceHeight(*s,l.from)-l.from.z)>.03f||std::abs(SurfaceHeight(*s,l.to)-l.to.z)>.03f)return fail("Link is not on its slope");
    }
    g->map.linkedSurfaceRouting=true;PrepareGeometry(g->map);
    for(int i=0;i<UnitCount;++i){
        if(!Walkable(g->map,g->positions[i])||!Walkable(g->map,g->goals[i]))return fail("Unwalkable spawn/goal "+std::to_string(i));
        for(int j=0;j<i;++j)if(Distance(g->positions[i],g->positions[j])<1.5f)return fail("Overlapping spawns");
    }
    for(const auto& c:g->map.windows){
        auto source=std::find_if(g->map.obstacles.begin(),g->map.obstacles.end(),[&](const Obstacle& o){return o.id==c.source;});
        if(source==g->map.obstacles.end()||!Walkable(g->map,c.shelter)||!Walkable(g->map,c.peek))return fail("Invalid cover source/position");
    }
    error.clear();return g;
}
}
