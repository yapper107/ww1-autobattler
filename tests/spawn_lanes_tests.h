// Config::spawnLanes (24 Sep 2026): Azure won about 59% of equal-troops battles on generated maps even with
// the maps mirrored, because the search-lane code mirrored Ember's lanes while the generator spawns both
// teams in the same lateral order, so every Ember squad first crossed to the far lane. With the switch a
// squad's lane follows its team's spawn order on imported maps; authored maps are unchanged.
#pragma once
#include "BattleSim.h"
#include "Diagnostics.h"
#include "ImportedMap.h"
#include <cassert>
#include <cmath>
#include <iostream>
#include <sstream>
namespace spawn_lanes_tests {
using namespace army;
// An open field with the generator's spawn layout: both teams' squads 0-3 at y -82.5, -30.5, 21.5, 73.5.
inline std::string SameOrderMap(){
    std::ostringstream m;m<<"ARMYMAP 2 city 31\nBOUNDS 170 130 0\n";
    const float ys[SquadsPerTeam]={-82.5f,-30.5f,21.5f,73.5f};
    for(int i=0;i<UnitCount;++i){
        const int team=i/TeamSize,squad=(i/SquadSize)%SquadsPerTeam,slot=i%SquadSize;const float x=team?160.f:-160.f;
        m<<"U "<<i<<' '<<x+(team?1.f:-1.f)*float(slot/4)*2.f<<' '<<ys[squad]+(float(slot%4)-1.5f)*3.f<<" 0 "<<(team?26:14)<<" 11 0\n";
    }
    m<<"END\n";return m.str();
}
// The first no-contact mission each squad is given, or NaN if none within the battle.
inline std::array<float,SquadCount> FirstMissionY(const Config& c){
    DiagnosticOptions options;options.enabled=false;options.keepFrames=true;
    const auto r=Simulate(c,options);std::array<float,SquadCount> y;y.fill(std::nanf(""));
    const auto& start=r.frames.front();
    for(const auto& f:r.frames)for(int q=0;q<SquadCount;++q)
        if(std::isnan(y[size_t(q)])&&Distance(f.command[size_t(q)].mission,start.command[size_t(q)].mission)>1)y[size_t(q)]=f.command[size_t(q)].mission.y;
    return y;
}
inline void SpawnLanesTests(){
    std::string error;const auto map=ImportBattlefield(SameOrderMap(),error);assert(map&&error.empty());
    Config off;off.battlefield=map;off.seed=5;off.maxSeconds=12;
    Config on=off;on.spawnLanes=true;assert(!SameConfig(off,on));
    const auto before=FirstMissionY(off),after=FirstMissionY(on);
    std::cout<<"SPAWN LANES first search mission y (squad: off -> on):";
    for(int q=0;q<SquadCount;++q)std::cout<<' '<<q<<": "<<before[size_t(q)]<<" -> "<<after[size_t(q)];
    std::cout<<'\n';
    for(int q=0;q<SquadCount;++q){
        const float spawnY=map->positions[size_t(q*SquadSize)].y;
        assert(!std::isnan(after[size_t(q)])&&after[size_t(q)]*spawnY>0);         // every squad searches its own side
        if(q<SquadsPerTeam)assert(before[size_t(q)]==after[size_t(q)]);            // Azure unchanged
        else assert(!std::isnan(before[size_t(q)])&&before[size_t(q)]*spawnY<0);   // old Ember lanes crossed over
    }
    // Authored maps are unchanged, digest for digest.
    Config authored;authored.maxSeconds=30;Config authoredOn=authored;authoredOn.spawnLanes=true;
    DiagnosticOptions quiet;quiet.enabled=false;
    assert(GameplayDigest(Simulate(authored,quiet))==GameplayDigest(Simulate(authoredOn,quiet)));
    std::cout<<"SPAWN LANES: squads search their own side on a same-order generated layout; authored maps unchanged PASS\n";
}
}
using spawn_lanes_tests::SpawnLanesTests;
