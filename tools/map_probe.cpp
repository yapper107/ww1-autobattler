// Native map probe (plan 029 G-3): answers geometry queries about one imported .army map through the
// simulator's own functions, so the Python kernel (tools/mapgen/kernel.py) can be checked against the
// real thing. Read-only: it never runs a battle and never writes a file.
//
//   map-probe MAP.army [--flush] < queries
//
// One query per stdin line; one answer line per query (COVERS answers a count line, then that many
// rows). Answers are written in query order; a malformed query answers `ERR <reason>` and the probe
// continues. `END` (or end of input) stops it.
//   LOS  ax ay az bx by bz            -> 1|0   ClearLine3D (sight: hedges block)
//   SLOS ax ay az bx by bz            -> 1|0   ClearLine3DSolid (bullets: hedges do not block)
//   PROT px py pz tx ty tz stance     -> 1|0   ProtectedAt; stance standing|crouched|prone or 0|1|2
//   WALK x y z                        -> 1|0   Walkable
//   PATH ax ay az bx by bz            -> n x1 y1 z1 ... xn yn zn   FindPath (n = 0: no route)
//   COVERS                            -> N, then N rows
//                                        id source sx sy sz px py pz crouch window prone
//   INFO                              -> kind seed formatVersion obstacles surfaces links covers
//                                        buildings stackedSurfaces hasConcealment
// Floats are printed with nine significant digits, enough to reproduce every float exactly.
#include "BattleSim.h"
#include "ImportedMap.h"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace army;

namespace {
std::string Number(float v){char text[32];std::snprintf(text,sizeof text,"%.9g",double(v));return text;}
std::string Point(Vec3 p){return Number(p.x)+" "+Number(p.y)+" "+Number(p.z);}
bool ReadPoint(std::istream& in,Vec3& p){return bool(in>>p.x>>p.y>>p.z);}
bool ReadStance(std::istream& in,Stance& stance){
    std::string word;if(!(in>>word))return false;
    if(word=="standing"||word=="0")stance=Stance::Standing;
    else if(word=="crouched"||word=="1")stance=Stance::Crouched;
    else if(word=="prone"||word=="2")stance=Stance::Prone;
    else return false;
    return true;
}
bool Finished(std::istream& in){std::string extra;return !(in>>extra);}
}

int main(int argc,char** argv){
    if(argc<2||argc>3||(argc==3&&std::string(argv[2])!="--flush")){
        std::cerr<<"usage: map-probe MAP.army [--flush] < queries\n";return 2;}
    const bool flush=argc==3;
    std::ifstream file(argv[1],std::ios::binary);
    if(!file){std::cerr<<"cannot open "<<argv[1]<<"\n";return 1;}
    std::ostringstream bytes;bytes<<file.rdbuf();
    std::string error;
    auto imported=ImportBattlefield(bytes.str(),error); // prepares the geometry (PrepareGeometry)
    if(!imported){std::cerr<<argv[1]<<": "<<error<<"\n";return 1;}
    const Map& map=imported->map;
    std::ios::sync_with_stdio(false);
    std::string line,out;
    auto answer=[&](const std::string& text){out+=text;out+='\n';
        if(flush||out.size()>(1u<<16)){std::cout<<out;out.clear();if(flush)std::cout.flush();}};
    while(std::getline(std::cin,line)){
        std::istringstream in(line);std::string verb;
        if(!(in>>verb))continue; // blank lines are not queries
        if(verb=="END")break;
        Vec3 a,b;
        if(verb=="LOS"||verb=="SLOS"){
            if(!ReadPoint(in,a)||!ReadPoint(in,b)||!Finished(in)){answer("ERR "+verb+" needs six numbers");continue;}
            answer((verb=="LOS"?ClearLine3D(map,a,b):ClearLine3DSolid(map,a,b))?"1":"0");
        }else if(verb=="PROT"){
            Stance stance;
            if(!ReadPoint(in,a)||!ReadPoint(in,b)||!ReadStance(in,stance)||!Finished(in)){answer("ERR PROT needs six numbers and a stance");continue;}
            answer(ProtectedAt(map,a,b,stance)?"1":"0");
        }else if(verb=="WALK"){
            if(!ReadPoint(in,a)||!Finished(in)){answer("ERR WALK needs three numbers");continue;}
            answer(Walkable(map,a)?"1":"0");
        }else if(verb=="PATH"){
            if(!ReadPoint(in,a)||!ReadPoint(in,b)||!Finished(in)){answer("ERR PATH needs six numbers");continue;}
            const auto route=FindPath(map,a,b);
            std::string text=std::to_string(route.size());
            for(const auto& p:route)text+=" "+Point(p);
            answer(text);
        }else if(verb=="COVERS"){
            if(!Finished(in)){answer("ERR COVERS takes no argument");continue;}
            const auto& covers=CoverPositions(map);
            answer(std::to_string(covers.size()));
            for(const auto& c:covers)
                answer(std::to_string(c.id)+" "+std::to_string(c.source)+" "+Point(c.shelter)+" "+Point(c.peek)+" "+
                       (c.crouch?"1":"0")+" "+(c.window?"1":"0")+" "+(c.prone?"1":"0"));
        }else if(verb=="INFO"){
            if(!Finished(in)){answer("ERR INFO takes no argument");continue;}
            answer(imported->kind+" "+std::to_string(imported->seed)+" "+std::to_string(map.formatVersion)+" "+
                   std::to_string(map.obstacles.size())+" "+std::to_string(map.surfaces.size())+" "+
                   std::to_string(map.surfaceLinks.size())+" "+std::to_string(CoverPositions(map).size())+" "+
                   std::to_string(map.buildings.size())+" "+(map.stackedSurfaces?"1":"0")+" "+(map.hasConcealment?"1":"0"));
        }else answer("ERR unknown query "+verb);
    }
    std::cout<<out;std::cout.flush();
    return 0;
}
