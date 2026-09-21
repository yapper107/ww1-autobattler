#include "Stats.h"
#include <algorithm>
#include <cmath>
namespace army {
float StatScale(float value){return value/100.f;}
StatDistribution StatDistribution::Fixed(){StatDistribution d;d.baseShare=1;d.lowShare=d.highShare=0;d.baseHalfWidth=0;return d;}
float SampleStat(const StatDistribution& d,float u){
    u=std::min(std::max(u,0.f),0.99999988f);
    const float shape=d.shape>0?d.shape:1.f;
    if(u<d.baseShare){
        const float v=d.baseShare>0?u/d.baseShare:0.f,w=d.baseHalfWidth;
        return v<.5f?100-w*(1-std::sqrt(2*v)):100+w*(1-std::sqrt(2*(1-v)));
    }
    if(u<d.baseShare+d.lowShare){
        const float v=d.lowShare>0?(u-d.baseShare)/d.lowShare:0.f;
        return 100-(100-d.lowEdge)*(1-std::pow(1-v,1/shape));
    }
    const float v=d.highShare>0?(u-d.baseShare-d.lowShare)/d.highShare:0.f;
    return 100+(d.highEdge-100)*(1-std::pow(1-v,1/shape));
}
// splitmix64; the seven rolls of one soldier are independent and this never
// reuses the reaction-time hash pattern.
static uint64_t Mix(uint64_t x){x+=0x9e3779b97f4a7c15ull;x=(x^(x>>30))*0xbf58476d1ce4e5b9ull;x=(x^(x>>27))*0x94d049bb133111ebull;return x^(x>>31);}
Stats GenerateStats(const StatDistribution& d,uint32_t rosterSeed,int slot){
    Stats s;const uint64_t soldier=Mix((uint64_t(rosterSeed)<<32)^uint64_t(uint32_t(slot)));
    for(size_t k=0;k<SampledStatCount;++k)s.value[k]=SampleStat(d,float(Mix(soldier+(k+1)*0x9e3779b97f4a7c15ull)>>40)/16777216.f);
    // Speed comes from its own salted stream, never from a step of the sequence above.
    s.value[size_t(Stat::Speed)]=SampleStat(d,float(SoldierHash(rosterSeed,slot,SpeedStatSalt)>>40)/16777216.f);
    return s;
}
uint64_t SoldierHash(uint32_t rosterSeed,int slot,uint32_t salt){
    return Mix(Mix((uint64_t(rosterSeed)<<32)^uint64_t(uint32_t(slot)))+(uint64_t(salt)+SoldierHashBase)*0x9e3779b97f4a7c15ull);
}
}
