#include "BattleSim.h"
#include "ImportedMap.h"
#include "Diagnostics.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace army;
int main(int argc,char**argv){
 assert(argc==3);
 for(int k=1;k<3;++k){
  std::ifstream f(argv[k]);std::ostringstream bytes;bytes<<f.rdbuf();std::string error;
  auto map=ImportBattlefield(bytes.str(),error);if(!map){std::cerr<<error<<std::endl;return 1;}
  assert(CoverPositions(map->map).size()>=map->map.windows.size());
  for(const auto& cover:CoverPositions(map->map))assert(!cover.window);
  Config c;c.battlefield=map;auto initial=InitialFrame(c);
  for(int i=0;i<UnitCount;++i){assert(Distance(initial.soldiers[i].position,map->positions[i])==0);assert(Walkable(map->map,map->positions[i]));}
  for(int q=0;q<SquadCount;++q){auto route=FindPath(map->map,map->positions[q*8],map->goals[q*8]);if(route.empty()){std::cerr<<"spawn-to-goal failure "<<q<<std::endl;return 2;}Vec3 p=map->positions[q*8];for(auto next:route){assert(ClearLine(map->map,p,next,.48f));p=next;}}
  for(size_t i=0;i<map->map.windows.size();++i){const auto& cover=map->map.windows[i];Vec3 threat=cover.shelter+map->coverFacing[i]*4;threat.z=0;
   if(!ProtectedAt(map->map,cover.shelter,threat,Stance::Crouched)){std::cerr<<"cover protection failure "<<i<<std::endl;return 3;}
   Vec3 a=cover.peek+Vec3{0,0,1.65f},b=a+map->coverFacing[i]*4;if(!ClearLine3D(map->map,a,b)){std::cerr<<"fire line failure "<<i<<std::endl;return 4;}}
  if(map->kind=="trenches"){auto route=FindPath(map->map,map->positions[0],map->positions[32]);assert(!route.empty());bool above=false;for(auto p:route)above|=p.z>-.05f;assert(above);std::cout<<"cross-network route: "<<route.size()<<" points\n";}
  if(map->kind=="trenches"){
   Vec3 rear=map->positions[0];for(const auto& floor:map->map.surfaces)if(floor.center.z< -1&&floor.center.x<rear.x&&Walkable(map->map,floor.center))rear=floor.center;
   auto path=FindPath(map->map,map->positions[0],rear);assert(!path.empty());for(auto p:path)assert(p.z< -1);
  }
  c.terrain=map->kind=="trenches"?Terrain::Trenches:Terrain::FracturedWorks;c.maxSeconds=8;
  const auto first=GameplayDigest(Simulate(c));const auto warm=GameplayDigest(Simulate(c));
  c.battlefield=ImportBattlefield(bytes.str(),error);const auto cold=GameplayDigest(Simulate(c));assert(first==warm&&warm==cold);
  std::cout<<"warm/cold repeated simulation digest "<<cold<<" matches\n";
  auto truncated=bytes.str().substr(0,bytes.str().find("END"));assert(!ImportBattlefield(truncated,error));
  auto collision=bytes.str();const auto at=collision.find("C 1000000 ");assert(at!=std::string::npos);collision.replace(at,10,"C 2000000 ");assert(!ImportBattlefield(collision,error));
  auto mutableMap=map->map;const auto source=map->map.windows.front().source;
  assert(RemoveObstacle(mutableMap,source));for(const auto& c:CoverPositions(mutableMap))assert(c.source!=source);
  std::cout<<"derived catalog: "<<CoverPositions(map->map).size()<<" positions; destruction invalidation passes\n";
  auto bad=bytes.str();bad.replace(0,7,"INVALID");assert(!ImportBattlefield(bad,error));
  Config original;assert(!SameConfig(original,c));Config same=c;assert(SameConfig(c,same));
  std::cout<<map->kind<<": 64 spawns, 8 squad routes, "<<map->map.windows.size()<<" covers pass; hash "<<map->digest<<std::endl;
 }
}
