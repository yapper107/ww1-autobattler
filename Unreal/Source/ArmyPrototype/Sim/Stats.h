#pragma once
// Soldier attributes on a base of 100. Talent belongs to the soldier, not the
// battle: every stat is hashed from the roster seed and never touches the
// battle RNG. StatScale is the single hook where a curve can replace linearity.
#include <array>
#include <cstddef>
#include <cstdint>
namespace army {
enum class Stat { Perception, Dexterity, Toughness, Strength, Wisdom, Initiative, Composure, Count };
constexpr size_t StatCount=size_t(Stat::Count);
struct Stats {
    std::array<float,StatCount> value{{100,100,100,100,100,100,100}};
    float Get(Stat s) const { return value[size_t(s)]; }
};
inline bool SameStats(const Stats& a,const Stats& b){return a.value==b.value;}
float StatScale(float value);
// Natural talent is a mixture: a cluster around 100, a wide thinning low tail
// and a thin high tail. Per team so factions can skew it later.
struct StatDistribution {
    float baseShare=.5f, lowShare=.4f, highShare=.1f;
    float baseHalfWidth=5;                 // base cluster spans 100 +/- this
    float lowEdge=80, highEdge=140;
    float shape=2;                         // tail density falls as (1-x/edge)^(shape-1); 2 = linear
    static StatDistribution Fixed();       // every stat exactly 100
};
inline bool SameDistribution(const StatDistribution& a,const StatDistribution& b){
    return a.baseShare==b.baseShare&&a.lowShare==b.lowShare&&a.highShare==b.highShare&&a.baseHalfWidth==b.baseHalfWidth&&
        a.lowEdge==b.lowEdge&&a.highEdge==b.highEdge&&a.shape==b.shape;
}
float SampleStat(const StatDistribution& distribution,float u);   // inverse CDF, u in [0,1)
Stats GenerateStats(const StatDistribution& distribution,uint32_t rosterSeed,int slot);
// The same splitmix family as the stat rolls, for per-soldier constants that are
// not stats (sway phases, recoil direction). Salts never collide with a stat index.
uint64_t SoldierHash(uint32_t rosterSeed,int slot,uint32_t salt);
}
