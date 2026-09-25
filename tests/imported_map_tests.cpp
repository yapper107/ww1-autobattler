#include "BattleSim.h"
#include "ImportedMap.h"
#include "Diagnostics.h"
#include "TrafficSim.h"
#include <algorithm>
#include <cassert>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
using namespace army;
// Plan 029 F-B, every ARMYMAP 2 file: stacked floors (grade walkable under each upper storey, never
// under a stair), every stair flight climbed from a spawn and descended again with clear legs, a man
// on a flight finishing it, and one stair passage per stair and one door passage per `P` record.
static bool V2LayerChecks(const ImportedBattlefield& g){
 const Map& m=g.map;auto fail=[&](const std::string& why){std::cerr<<"v2 layers: "<<why<<std::endl;return false;};
 for(const auto& b:m.buildings)if(b.floors>=2){bool ground=false;
  for(const auto& s:m.surfaces)if(s.building==b.id&&s.level>=1)for(float x=-1;x<=1&&!ground;x+=.125f)for(float y=-1;y<=1&&!ground;y+=.125f)
   ground=Walkable(m,{s.center.x+x*s.half.x,s.center.y+y*s.half.y,0});
  if(!ground)return fail("no walkable ground under the upper storey of building "+std::to_string(b.id));}
 size_t flights=0;
 for(size_t index:m.stairSurfaces){const auto& s=m.surfaces[index];
  if(Walkable(m,{s.center.x,s.center.y,0}))return fail("grade walkable under stair "+std::to_string(s.id));
  const auto link=std::find_if(m.surfaceLinks.begin(),m.surfaceLinks.end(),[&](const SurfaceLink& l){return l.id==s.id;});
  const Vec3 bottom=link->from.z<link->to.z?link->from:link->to,top=link->from.z<link->to.z?link->to:link->from,mid=(bottom+top)*.5f;
  if(!OnStairs(m,mid)||!ClearLine(m,bottom,top,.48f))return fail("flight "+std::to_string(s.id)+" is not a clear stair");
  const Vec3 spawn=g.positions[flights%UnitCount];
  auto legs=[&](Vec3 from,const std::vector<Vec3>& route){bool flight=false;Vec3 p=from;
   for(auto q:route){if(!ClearLine(m,p,q,.48f))return false;for(float t:{.25f,.5f,.75f}){Vec3 x=p+(q-p)*t;flight|=x.z>.1f&&x.z<3.1f&&OnStairs(m,x);}p=q;}
   return flight;};
  auto up=FindPath(m,spawn,top),down=FindPath(m,top,spawn),finish=FindPath(m,mid,spawn);
  if(up.empty()||down.empty()||!legs(spawn,up)||!legs(top,down))return fail("no clear route through stair "+std::to_string(s.id));
  if(finish.empty()||(Distance(finish.front(),bottom)>1e-4f&&Distance(finish.front(),top)>1e-4f))return fail("a man on stair "+std::to_string(s.id)+" does not finish the flight");
  ++flights;}
 const auto passages=BuildingPassages(m);size_t stairs=0;for(const auto& p:passages)stairs+=p.stairs;
 if(stairs!=m.stairSurfaces.size()||passages.size()<m.doorPassages.size())return fail("passage counts");
 for(size_t i=0;i<m.doorPassages.size();++i){const auto& p=passages[passages.size()-m.doorPassages.size()+i];
  if(p.stairs||p.center.x!=m.doorPassages[i].center.x||p.center.y!=m.doorPassages[i].center.y)return fail("door passage "+std::to_string(i));}
 std::cout<<"v2 layers: "<<flights<<" stair flights climbed and descended, "<<stairs<<" stair and "<<m.doorPassages.size()<<" door passages\n";
 return true;
}
int main(int argc,char**argv){
 // Plan 029: any number of map files. The golden seed-17 files (known by their text hash) must keep
 // the 8 s gameplay digests recorded before plan 029 (.local/plan029/F-A/imported-digests.txt).
 const std::map<uint64_t,uint64_t> recorded={{4272086719358317888ull,6547649700149398307ull},  // city.army
                                            {12140138640516287581ull,2903423634582007392ull},  // village.army (seed 17, accepted 23 Sep 2026)
                                            {4527001568532938684ull,17027505243774005418ull},  // city2.army (seed 17, accepted 23 Sep 2026)
                                             {2045667964982636297ull,7781453859672743359ull}}; // trenches.army
 // Plan 029 F-B: the golden trench map's cross-network, per-squad and rear routes, bit for bit, as the
 // source before F-B (446be5e8caf817fb) finds them.
 const std::map<uint64_t,uint64_t> recordedRoutes={{2045667964982636297ull,6891070223683818487ull}};
 assert(argc>=2);size_t checked=0;
 for(int k=1;k<argc;++k){
  std::ifstream f(argv[k]);std::ostringstream bytes;bytes<<f.rdbuf();std::string error;
  auto map=ImportBattlefield(bytes.str(),error);if(!map){std::cerr<<argv[k]<<": "<<error<<std::endl;return 1;}
  assert(CoverPositions(map->map).size()>=map->map.windows.size());
  // ARMYMAP 1 exports only ground-floor (window=0) covers; ARMYMAP 2 may carry window covers.
  if(map->map.formatVersion<2)for(const auto& cover:CoverPositions(map->map))assert(!cover.window);
  Config c;c.battlefield=map;auto initial=InitialFrame(c);
  for(int i=0;i<UnitCount;++i){assert(Distance(initial.soldiers[i].position,map->positions[i])==0);assert(Walkable(map->map,map->positions[i]));}
  for(int q=0;q<SquadCount;++q){auto route=FindPath(map->map,map->positions[q*8],map->goals[q*8]);if(route.empty()){std::cerr<<"spawn-to-goal failure "<<q<<std::endl;return 2;}Vec3 p=map->positions[q*8];for(auto next:route){assert(ClearLine(map->map,p,next,.48f));p=next;}}
  size_t prone=0;
  for(size_t i=0;i<map->map.windows.size();++i){const auto& cover=map->map.windows[i];Vec3 threat=cover.shelter+map->coverFacing[i]*4;threat.z=0;
   // A prone (crater, ARMYMAP 2 `crouch=2`) cover shelters a man lying down and not one standing (plan 029
   // M-A2); he fires from it crouched, over the rim, so its fire line is tested at the crouched muzzle.
   if(cover.prone){if(!ProtectedAt(map->map,cover.shelter,threat,Stance::Prone)||ProtectedAt(map->map,cover.shelter,threat,Stance::Standing)){std::cerr<<"prone cover protection failure "<<i<<std::endl;return 3;}++prone;}
   else if(!ProtectedAt(map->map,cover.shelter,threat,Stance::Crouched)){std::cerr<<"cover protection failure "<<i<<std::endl;return 3;}
   Vec3 a=cover.peek+Vec3{0,0,cover.prone?Posture(Stance::Crouched).muzzle:1.65f},b=a+map->coverFacing[i]*4;if(!ClearLine3D(map->map,a,b)){std::cerr<<"fire line failure "<<i<<std::endl;return 4;}}
  uint64_t routes=1469598103934665603ull; // exact bits of the trench routes below (plan 029 F-B)
  auto fold=[&](const std::vector<Vec3>& route){for(auto p:route){uint32_t w[3];std::memcpy(w,&p,12);for(uint32_t v:w)routes=(routes^v)*1099511628211ull;}routes=(routes^route.size())*1099511628211ull;};
  if(map->kind=="trenches"){auto route=FindPath(map->map,map->positions[0],map->positions[32]);assert(!route.empty());bool above=false;for(auto p:route)above|=p.z>-.05f;assert(above);std::cout<<"cross-network route: "<<route.size()<<" points\n";fold(route);
   for(int q=1;q<SquadCount/2;++q)fold(FindPath(map->map,map->positions[q*8],map->positions[32+q*8]));}
  if(map->kind=="trenches"){
   Vec3 rear=map->positions[0];for(const auto& floor:map->map.surfaces)if(floor.center.z< -1&&floor.center.x<rear.x&&Walkable(map->map,floor.center))rear=floor.center;
   auto path=FindPath(map->map,map->positions[0],rear);assert(!path.empty());for(auto p:path)assert(p.z< -1);fold(path);
  }
  if(map->map.formatVersion>=2&&!V2LayerChecks(*map))return 6;
  c.terrain=map->kind=="trenches"?Terrain::Trenches:Terrain::FracturedWorks;c.maxSeconds=8;
  const auto first=GameplayDigest(Simulate(c));const auto warm=GameplayDigest(Simulate(c));
  c.battlefield=ImportBattlefield(bytes.str(),error);const auto cold=GameplayDigest(Simulate(c));assert(first==warm&&warm==cold);
  std::cout<<"warm/cold repeated simulation digest "<<cold<<" matches\n";
  if(const auto golden=recorded.find(map->digest);golden!=recorded.end()){
   if(cold!=golden->second){std::cerr<<argv[k]<<": 8 s digest "<<cold<<" differs from the recorded "<<golden->second<<std::endl;return 5;}
   ++checked;std::cout<<"recorded 8 s digest matches\n";
   if(const auto expected=recordedRoutes.find(map->digest);expected!=recordedRoutes.end()){
    if(routes!=expected->second){std::cerr<<argv[k]<<": trench routes "<<routes<<" differ from the recorded "<<expected->second<<std::endl;return 7;}
    std::cout<<"recorded cross-network routes match\n";}}
  auto truncated=bytes.str().substr(0,bytes.str().find("END"));assert(!ImportBattlefield(truncated,error));
  auto collision=bytes.str();const auto at=collision.find("C 1000000 ");assert(at!=std::string::npos);collision.replace(at,10,"C 2000000 ");assert(!ImportBattlefield(collision,error));
  auto mutableMap=map->map;const auto source=map->map.windows.front().source;
  assert(RemoveObstacle(mutableMap,source));for(const auto& c:CoverPositions(mutableMap))assert(c.source!=source);
  std::cout<<"derived catalog: "<<CoverPositions(map->map).size()<<" positions; destruction invalidation passes\n";
  auto bad=bytes.str();bad.replace(0,7,"INVALID");assert(!ImportBattlefield(bad,error));
  Config original;assert(!SameConfig(original,c));Config same=c;assert(SameConfig(c,same));
  std::cout<<map->kind<<": 64 spawns, 8 squad routes, "<<map->map.windows.size()<<" covers pass"<<(prone?" ("+std::to_string(prone)+" prone)":std::string())<<"; hash "<<map->digest<<std::endl;
 }
 std::cout<<argc-1<<" map files pass; "<<checked<<" recorded digests match\n";
}
