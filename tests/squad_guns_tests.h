// Jordan, 24 Sep 2026: "give every squad a machine gunner" (Config::squadMachineGuns). battle_cli and
// the game turn it on (--platoon-mg / -ArmyPlatoonMG restore one per platoon); Config{} keeps the
// historical one gun per platoon so the other fixtures and their recorded digests stay valid.
// Checks: the roster on both sides, the rifles-only option, the static defence's seating, one battle.
#pragma once
#include "BattleSim.h"
#include "Diagnostics.h"
#include <array>
#include <cassert>
#include <iostream>
namespace squad_guns_tests {
using namespace army;
inline std::array<int,2> Guns(const Record& r){
    std::array<int,2> n{{0,0}};
    for(const auto& s:r.frames.front().soldiers)if(s.Active()&&s.machineGun)++n[size_t(s.team)];
    return n;
}
inline void SquadGunsTests(){
    DiagnosticOptions off;off.enabled=false;
    Config platoon;platoon.maxSeconds=1;
    Config squad=platoon;squad.squadMachineGuns=true;
    assert(!SameConfig(platoon,squad));
    // One gun per platoon (the first squad's eighth man) without the switch; every squad's with it.
    assert((Guns(Simulate(platoon,off))==std::array<int,2>{{1,1}}));
    const auto roster=Simulate(squad,off);
    assert((Guns(roster)==std::array<int,2>{{SquadsPerTeam,SquadsPerTeam}}));
    for(const auto& s:roster.frames.front().soldiers){
        const bool gunSlot=s.id%SquadSize==SquadSize-1;
        assert(s.machineGun==gunSlot);assert((s.role==Role::MachineGunner)==gunSlot);
    }
    // "All rifles" still removes every Azure gun; Ember keeps one per squad.
    Config rifles=squad;rifles.supportWeapon=false;
    assert((Guns(Simulate(rifles,off))==std::array<int,2>{{0,SquadsPerTeam}}));
    // A static defence of 12 seats the first Ember squad whole and four men of the second: with the
    // switch the second squad's gun is one of them, so the defence fields two guns instead of one.
    Config defence=platoon;defence.staticDefence.layout=DefenceLayout::Spread;defence.staticDefence.defenders=12;
    defence.staticDefence.seed=21;defence.seed=100;
    Config defenceSquad=defence;defenceSquad.squadMachineGuns=true;
    assert(Guns(Simulate(defence,off))[1]==1);
    const auto seated=Simulate(defenceSquad,off);
    assert(Guns(seated)[1]==2&&Guns(seated)[0]==SquadsPerTeam);
    // A battle with every squad's gun is deterministic and the guns take part.
    Config battle=squad;battle.maxSeconds=180;
    const auto first=Simulate(battle,off),again=Simulate(battle,off);
    assert(GameplayDigest(first)==GameplayDigest(again));
    std::array<int,SquadCount> gunRounds{};
    for(const auto& shot:first.shots){
        const auto& s=first.frames.front().soldiers[size_t(shot.owner)];
        if(s.machineGun)++gunRounds[size_t(s.squad)];
    }
    int firing=0;std::cout<<"SQUAD GUNS rounds per squad's gun in 180 s:";
    for(int q=0;q<SquadCount;++q){std::cout<<' '<<gunRounds[size_t(q)];firing+=gunRounds[size_t(q)]>0;}
    std::cout<<" ("<<firing<<" of "<<SquadCount<<" guns fired)\n";
    assert(firing>=2);
    std::cout<<"SQUAD GUNS: a gun in every squad on both sides, roles, rifles-only, defence seating and a battle PASS\n";
}
}
using squad_guns_tests::SquadGunsTests;
