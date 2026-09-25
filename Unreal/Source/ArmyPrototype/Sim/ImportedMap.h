#pragma once
// Pure, bounded text decoder. File ownership stays with the caller, outside simulation.
// ARMYMAP 1 (city|trenches) is frozen: its parsing and rejections are unchanged. ARMYMAP 2
// (city|trenches|village, plan 029) is a superset; every v2 difference is inside an `if(v2)`.
#include "BattleSim.h"
#include <algorithm>
#include <cmath>
#include <sstream>
#include <unordered_set>

namespace army {
namespace imported_map_detail {
// A header line that is a complete, well-formed ARMYMAP 2 header selects the v2 grammar; anything
// else (including every ARMYMAP 1 file and every malformed header) takes the frozen v1 path.
inline bool VersionTwoHeader(const std::string& text){
    std::istringstream in(text.substr(0,text.find('\n')));std::string line,tag,kind,extra;int version=0;uint64_t seed=0;
    if(!std::getline(in,line))return false;
    std::istringstream header(line);
    return bool(header>>tag>>version>>kind>>seed)&&tag=="ARMYMAP"&&version==2&&seed<=UINT32_MAX&&(kind=="city"||kind=="trenches"||kind=="village"||kind=="city2")&&!(header>>extra);
}
}
inline std::shared_ptr<const ImportedBattlefield> ImportBattlefield(const std::string& text,std::string& error){
    auto fail=[&](const std::string& why)->std::shared_ptr<const ImportedBattlefield>{error=why;return {};};
    const bool v2=imported_map_detail::VersionTwoHeader(text);
    if(v2&&text.size()>8*1024*1024)return fail("Map file is empty or exceeds 8 MiB");
    if(text.empty()||(!v2&&text.size()>4*1024*1024))return fail("Map file is empty or exceeds 4 MiB");
    auto g=std::make_shared<ImportedBattlefield>();std::istringstream in(text);std::string line,tag,extra;
    int version=0;if(!std::getline(in,line))return fail("Missing header");std::istringstream header(line);
    uint64_t seed=0;if(!(header>>tag>>version>>g->kind>>seed)||tag!="ARMYMAP"||version!=(v2?2:1)||seed>UINT32_MAX||(g->kind!="city"&&g->kind!="trenches"&&!(v2&&(g->kind=="village"||g->kind=="city2")))||(header>>extra))return fail("Unsupported map header");
    g->seed=uint32_t(seed);g->name=g->kind=="city"?"Generated town":g->kind=="village"?"Generated village":g->kind=="city2"?"Generated city":"Generated trenches";
    g->source=text;g->digest=1469598103934665603ull;for(unsigned char c:text)g->digest=(g->digest^c)*1099511628211ull;
    std::unordered_set<uint64_t> ids,coverIds,buildingIds;std::array<bool,UnitCount> placed{};bool bounds=false,ended=false;
    auto vec=[](std::istream& stream,Vec3& p){return bool(stream>>p.x>>p.y>>p.z)&&std::isfinite(p.x)&&std::isfinite(p.y)&&std::isfinite(p.z);};
    auto finite=[](float f){return std::isfinite(f);};
    auto more=[](std::istream& stream){stream>>std::ws;return !stream.eof();}; // another column follows
    int lines=0;
    while(std::getline(in,line)){
        if(++lines>(v2?20000:10000))return fail("Too many map records");
        std::istringstream row(line);if(!(row>>tag))continue;if(ended)return fail("Data after END");
        if(tag=="BOUNDS"){
            if(bounds||!(row>>g->map.halfWidth>>g->map.halfHeight>>g->map.groundBase))return fail("Invalid bounds");
            bounds=true;
            const bool depth=v2?std::abs(g->map.groundBase)>.001f&&std::abs(g->map.groundBase+1.4f)>.001f
                               :std::abs(g->map.groundBase-(g->kind=="trenches"?-1.4f:0.f))>.001f;
            if(!finite(g->map.halfWidth)||!finite(g->map.halfHeight)||!finite(g->map.groundBase)||g->map.halfWidth<20||g->map.halfWidth>500||g->map.halfHeight<20||g->map.halfHeight>500||depth)return fail("Unsupported map dimensions/depth");
        }else if(tag=="O"){
            Obstacle o;int building=0,low=0,move=0;
            if(!(row>>o.id)||!vec(row,o.center)||!(row>>o.half.x>>o.half.y>>o.height>>building>>low>>move)||!finite(o.half.x)||!finite(o.half.y)||!finite(o.height)||o.half.x<=0||o.half.y<=0||o.height<=0||o.height>20||o.id==0||o.id>=50000||!ids.insert(o.id).second||building<0||building>1||low<0||low>1||move<0||move>1)return fail("Invalid/duplicate obstacle");
            o.building=building!=0;o.halfCover=low!=0;o.blocksMovement=move!=0;
            if(v2&&more(row)){ // optional 12th column: flags
                int flags=-1;if(!(row>>flags)||flags<0||flags>7)return fail("Invalid obstacle flags");
                o.flags=uint32_t(flags);o.concealment=(flags&1)!=0;
                if((o.flags&2u)&&o.blocksMovement)return fail("Crater rim blocks movement"); // plan 029: rims never block
            }
            g->map.obstacles.push_back(o);
        }else if(tag=="S"){
            GroundSurface s;
            if(!v2){
                if(!(row>>s.id)||!vec(row,s.center)||!(row>>s.half.x>>s.half.y>>s.slope.x>>s.slope.y)||!finite(s.half.x)||!finite(s.half.y)||!finite(s.slope.x)||!finite(s.slope.y)||s.half.x<=0||s.half.y<=0||s.id==0||!ids.insert(s.id).second||std::abs(s.slope.x)>.3f||std::abs(s.slope.y)>.3f)return fail("Invalid surface");
            }else{
                if(!(row>>s.id)||!vec(row,s.center)||!(row>>s.half.x>>s.half.y>>s.slope.x>>s.slope.y>>s.kind>>s.level>>s.building)||!finite(s.half.x)||!finite(s.half.y)||!finite(s.slope.x)||!finite(s.slope.y)||s.half.x<=0||s.half.y<=0||s.id==0||!ids.insert(s.id).second)return fail("Invalid surface");
                const float ax=std::abs(s.slope.x),ay=std::abs(s.slope.y),rise=std::max(ax,ay);
                const bool shape=s.kind==0?ax==0&&ay==0:
                                 s.kind==1?ax<=.3f&&ay<=.3f&&ax+ay>=.001f:
                                 s.kind==2?(ax==0)!=(ay==0)&&rise>=.5f&&rise<=1.05f:false;
                if(!shape)return fail("Invalid surface kind/slope");
                if(s.level<-1||s.level>3)return fail("Invalid surface level");
                s.replacesGrade=s.level<=0||s.kind==2;
            }
            g->map.surfaces.push_back(s);
        }else if(tag=="L"){
            SurfaceLink link;if(!(row>>link.id)||!vec(row,link.from)||!vec(row,link.to))return fail("Invalid surface link");g->map.surfaceLinks.push_back(link);
        }else if(tag=="C"){
            CoverPosition c;Vec3 facing;int crouch=0,window=0;
            if(!(row>>c.id>>c.source)||!vec(row,c.shelter)||!vec(row,c.peek)||!(row>>facing.x>>facing.y>>crouch>>window)||crouch<0||crouch>(v2?2:1)||window<0||window>1||!finite(facing.x)||!finite(facing.y)||std::abs(std::hypot(facing.x,facing.y)-1)>.001f||c.id<1000000||c.id>=2000000||!coverIds.insert(c.id).second)return fail("Invalid cover record");
            c.crouch=crouch!=0;c.prone=crouch==2;c.window=window!=0;g->map.windows.push_back(c);g->coverFacing.push_back(facing);
        }else if(tag=="U"){
            int id=-1;if(!(row>>id)||id<0||id>=UnitCount||placed[id]||!vec(row,g->positions[id])||!vec(row,g->goals[id]))return fail("Invalid spawn/goal");placed[id]=true;
        }else if(tag=="D"){
            MapDecoration d;if(!(row>>d.kind)||!vec(row,d.center)||!vec(row,d.half)||d.kind<0||d.kind>4||d.half.x<=0||d.half.y<=0||d.half.z<=0)return fail("Invalid decoration");g->decorations.push_back(d);
        }else if(v2&&tag=="B"){
            Building b;b.authoredStairs=false;
            if(!(row>>b.id>>b.center.x>>b.center.y>>b.half.x>>b.half.y>>b.floors)||!finite(b.center.x)||!finite(b.center.y)||!finite(b.half.x)||!finite(b.half.y)||b.half.x<=0||b.half.y<=0||b.id==0||b.floors<1||b.floors>3||!buildingIds.insert(b.id).second)return fail("Invalid/duplicate building");
            g->map.buildings.push_back(b);
        }else if(v2&&tag=="P"){
            DoorPassage p;
            if(!(row>>p.center.x>>p.center.y>>p.half.x>>p.half.y)||!finite(p.center.x)||!finite(p.center.y)||!finite(p.half.x)||!finite(p.half.y)||p.half.x<=0||p.half.y<=0)return fail("Invalid door passage");
            g->map.doorPassages.push_back(p);
        }else if(tag=="END")ended=true;
        else return fail("Unknown map record: "+tag);
        if(row>>extra)return fail("Trailing map record data");
    }
    if(!bounds||!ended||std::find(placed.begin(),placed.end(),false)!=placed.end())return fail("Incomplete map/spawns");
    if(!v2){
        if(g->map.obstacles.size()>4000||g->map.surfaces.size()>1000||g->map.surfaceLinks.size()>16||g->map.windows.size()>2000||g->decorations.size()>1000)return fail("Map geometry budget exceeded");
    }else{
        if(g->map.obstacles.size()>6000)return fail("Map geometry budget exceeded: obstacles");
        if(g->map.surfaces.size()>1500)return fail("Map geometry budget exceeded: surfaces");
        if(g->map.surfaceLinks.size()>256)return fail("Map geometry budget exceeded: links");
        if(g->map.windows.size()>3000)return fail("Map geometry budget exceeded: covers");
        if(g->decorations.size()>1500)return fail("Map geometry budget exceeded: decorations");
        if(g->map.buildings.size()>128)return fail("Map geometry budget exceeded: buildings");
        if(g->map.doorPassages.size()>512)return fail("Map geometry budget exceeded: door passages");
    }
    for(const auto& o:g->map.obstacles)if(std::abs(o.center.x)+o.half.x>g->map.halfWidth+.001f||std::abs(o.center.y)+o.half.y>g->map.halfHeight+.001f)return fail("Obstacle outside map");
    for(const auto& s:g->map.surfaces)if(std::abs(s.center.x)+s.half.x>g->map.halfWidth||std::abs(s.center.y)+s.half.y>g->map.halfHeight)return fail("Surface outside map");
    if(v2)for(const auto& b:g->map.buildings)if(std::abs(b.center.x)+b.half.x>g->map.halfWidth+.001f||std::abs(b.center.y)+b.half.y>g->map.halfHeight+.001f)return fail("Building outside map");
    for(const auto& slope:g->map.surfaces)if(std::abs(slope.slope.x)+std::abs(slope.slope.y)>.001f)
        for(const auto& flat:g->map.surfaces)if(std::abs(flat.slope.x)+std::abs(flat.slope.y)<.001f&&
            std::abs(slope.center.x-flat.center.x)<slope.half.x+flat.half.x-.001f&&
            std::abs(slope.center.y-flat.center.y)<slope.half.y+flat.half.y-.001f){
            if(!v2)return fail("Flat floor overlaps ramp interior");
            // v2 stacks layers: an overlap is refused only where the flat floor's height lies within the
            // slope's height range over the shared rectangle (where one could swallow the other).
            const float x0=std::max(slope.center.x-slope.half.x,flat.center.x-flat.half.x),x1=std::min(slope.center.x+slope.half.x,flat.center.x+flat.half.x);
            const float y0=std::max(slope.center.y-slope.half.y,flat.center.y-flat.half.y),y1=std::min(slope.center.y+slope.half.y,flat.center.y+flat.half.y);
            float low=1e9f,high=-1e9f;for(float x:{x0,x1})for(float y:{y0,y1}){const float z=SurfaceHeight(slope,{x,y,0});low=std::min(low,z);high=std::max(high,z);}
            if(flat.center.z>=low-.03f&&flat.center.z<=high+.03f)return fail("Flat floor overlaps ramp interior");
        }
    for(const auto& l:g->map.surfaceLinks){
        auto s=std::find_if(g->map.surfaces.begin(),g->map.surfaces.end(),[&](const GroundSurface& item){return item.id==l.id;});
        if(s==g->map.surfaces.end()||!InsideSurface(*s,l.from)||!InsideSurface(*s,l.to)||std::abs(SurfaceHeight(*s,l.from)-l.from.z)>.03f||std::abs(SurfaceHeight(*s,l.to)-l.to.z)>.03f)return fail("Link is not on its slope");
    }
    if(v2){
        for(const auto& s:g->map.surfaces){
            if(s.kind==2){
                // One link per stair, from one end of the plane to the other (along its slope axis).
                const SurfaceLink* link=nullptr;int count=0;
                for(const auto& l:g->map.surfaceLinks)if(l.id==s.id){link=&l;++count;}
                if(count!=1)return fail("Stair needs exactly one link");
                const bool alongX=s.slope.x!=0;const float c=alongX?s.center.x:s.center.y,h=alongX?s.half.x:s.half.y;
                const float a=(alongX?link->from.x:link->from.y)-c,b=(alongX?link->to.x:link->to.y)-c;
                if(std::abs(std::abs(a)-h)>.1f||std::abs(std::abs(b)-h)>.1f||(a<0)==(b<0))return fail("Stair link endpoints are not at both ends");
            }
            if(s.building){
                auto b=std::find_if(g->map.buildings.begin(),g->map.buildings.end(),[&](const Building& item){return item.id==s.building;});
                if(b==g->map.buildings.end())return fail("Surface cites a missing building");
                if(s.level>=1&&(std::abs(s.center.x-b->center.x)+s.half.x>b->half.x+.001f||std::abs(s.center.y-b->center.y)+s.half.y>b->half.y+.001f))return fail("Upper-floor surface outside its building footprint");
                if(s.level>=b->floors)return fail("Surface level exceeds its building's floors");
            }else if(s.level>=1)return fail("Upper-floor surface without a building");
        }
        g->map.formatVersion=2;g->map.stackedSurfaces=true;g->map.importedBuildings=!g->map.buildings.empty();
    }else g->map.formatVersion=1;
    g->map.linkedSurfaceRouting=true;PrepareGeometry(g->map);
    for(int i=0;i<UnitCount;++i){
        if(!Walkable(g->map,g->positions[i])||!Walkable(g->map,g->goals[i]))return fail("Unwalkable spawn/goal "+std::to_string(i));
        for(int j=0;j<i;++j)if(Distance(g->positions[i],g->positions[j])<1.5f)return fail("Overlapping spawns");
    }
    for(size_t i=0;i<g->map.windows.size();++i){const auto& c=g->map.windows[i];
        auto source=std::find_if(g->map.obstacles.begin(),g->map.obstacles.end(),[&](const Obstacle& o){return o.id==c.source;});
        if(source==g->map.obstacles.end()||!Walkable(g->map,c.shelter)||!Walkable(g->map,c.peek))return fail("Invalid cover source/position");
        if(!v2)continue;
        if(source->concealment)return fail("Cover source is concealment");
        // Prone (crater) cover must cite a crater rim and hold, prone, against a level threat 4 m out along
        // its facing (plan 029 M-A2; the generator's own contract, tools/mapgen/village.py _prune_covers).
        if(c.prone&&!(source->flags&2u))return fail("Prone cover needs a crater-rim source");
        if(c.prone){Vec3 threat=c.shelter+g->coverFacing[i]*4;threat.z=c.shelter.z;
            if(!ProtectedAt(g->map,c.shelter,threat,Stance::Prone))return fail("Prone cover unprotected "+std::to_string(i));}
        // Upper cover must hold, crouched, against a ground threat 4 m out along its facing.
        if(c.shelter.z>1){Vec3 threat=c.shelter+g->coverFacing[i]*4;threat.z=0;
            if(!ProtectedAt(g->map,c.shelter,threat,Stance::Crouched))return fail("Upper cover unprotected from the ground "+std::to_string(i));}
    }
    if(v2){
        for(size_t i=0;i<g->map.doorPassages.size();++i)if(!Walkable(g->map,g->map.doorPassages[i].center))return fail("Unwalkable door passage "+std::to_string(i));
        // Below-grade maps (lanes) carry a merged earth complement: grade spawns and goals stand on earth.
        if(g->map.groundBase<0)for(int i=0;i<UnitCount;++i)for(Vec3 p:{g->positions[i],g->goals[i]})
            if(std::abs(p.z)<.02f&&MapContact(g->map,{p.x,p.y,p.z+.05f},{p.x,p.y,g->map.groundBase+.05f})<0)return fail("Grade spawn/goal has no earth below "+std::to_string(i));
    }
    error.clear();return g;
}
}
