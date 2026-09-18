#include "BattleSim.h"
#include <algorithm>
#include <numeric>
#include <cstring>
namespace army {
struct SpatialIndex {
    struct Node { Vec3 low{},high{};int left=-1,right=-1;size_t begin=0,end=0; };
    uint64_t revision=0;std::vector<size_t> items;std::vector<Node> nodes;
    int Build(const Map& m,size_t begin,size_t end){
        int id=int(nodes.size());nodes.push_back({});Node node;node.begin=begin;node.end=end;
        node.low={1e9f,1e9f,1e9f};node.high={-1e9f,-1e9f,-1e9f};
        for(size_t k=begin;k<end;++k){const auto& o=m.obstacles[items[k]];
            node.low.x=std::min(node.low.x,o.center.x-o.half.x);node.low.y=std::min(node.low.y,o.center.y-o.half.y);node.low.z=std::min(node.low.z,o.center.z);
            node.high.x=std::max(node.high.x,o.center.x+o.half.x);node.high.y=std::max(node.high.y,o.center.y+o.half.y);node.high.z=std::max(node.high.z,o.center.z+ObstacleHeight(o));}
        if(end-begin>8){bool x=node.high.x-node.low.x>node.high.y-node.low.y;
            std::stable_sort(items.begin()+begin,items.begin()+end,[&](size_t a,size_t b){const auto& p=m.obstacles[a].center;const auto& q=m.obstacles[b].center;return (x?p.x:p.y)<(x?q.x:q.y);});
            size_t mid=(begin+end)/2;node.left=Build(m,begin,mid);node.right=Build(m,mid,end);}
        nodes[id]=node;return id;
    }
    bool Overlap(const Node& n,Vec3 a,Vec3 b,float padding)const{
        if(padding<0&&((a.z<n.low.z-0.001f&&b.z<n.low.z-0.001f)||(a.z>n.high.z+0.001f&&b.z>n.high.z+0.001f)))return false;
        float pad=std::max(0.f,padding)+0.001f,lo=0,hi=1;
        for(int k=0;k<2;++k){float p=k?a.y:a.x,d=k?b.y-a.y:b.x-a.x,mn=(k?n.low.y:n.low.x)-pad,mx=(k?n.high.y:n.high.x)+pad;
            if(std::abs(d)<1e-7f){if(p<mn||p>mx)return false;}else{float x=(mn-p)/d,y=(mx-p)/d;if(x>y)std::swap(x,y);lo=std::max(lo,x);hi=std::min(hi,y);if(lo>hi)return false;}}
        return true;
    }
    float Query(const Map& m,int id,Vec3 a,Vec3 b,bool any,float pad)const{
        const auto& node=nodes[id];if(!Overlap(node,a,b,pad))return -1;
        if(node.left>=0){float left=Query(m,node.left,a,b,any,pad);if(any&&left>=0)return left;float right=Query(m,node.right,a,b,any,pad);return left<0?right:right<0?left:std::min(left,right);}
        float first=-1;for(size_t k=node.begin;k<node.end;++k){const auto& o=m.obstacles[items[k]];float hit=-1;
            if(pad<0)hit=SegmentObstacle(a,b,o);
            else if(o.blocksMovement&&o.center.z<std::max(a.z,b.z)+1.85f-0.01f&&o.center.z+ObstacleHeight(o)>std::min(a.z,b.z)+0.02f)hit=SegmentBox(a,b,o,pad);
            if(hit>=0){if(any)return hit;if(first<0||hit<first)first=hit;}}
        return first;
    }
};
#ifndef SEGMENT_MEMO_BITS
#define SEGMENT_MEMO_BITS 21
#endif
struct SegmentMemo {
    // Direct-mapped, 32-byte entries: seven argument words and a state word
    // (bits 0-1: 1 clear, 2 blocked; bits 2+: kind). A collision evicts and the
    // query is recomputed exactly, so the table size only affects speed.
    struct Entry { uint32_t key[7]; uint32_t state; };
    uint64_t revision=0; std::vector<Entry> entries;
    explicit SegmentMemo(size_t n):entries(n){}
};
bool MemoisedSegment(const Map& m,Vec3 a,Vec3 b,float pad,int kind,bool (*compute)(const Map&,Vec3,Vec3,float)){
    if(!m.segments||m.segments->revision!=m.revision){m.segments=std::make_shared<SegmentMemo>(size_t(1)<<SEGMENT_MEMO_BITS);m.segments->revision=m.revision;}
    uint32_t key[7];const float words[7]={a.x,a.y,a.z,b.x,b.y,b.z,pad};std::memcpy(key,words,sizeof key);
    uint64_t h=1469598103934665603ull;for(uint32_t k:key)h=(h^k)*1099511628211ull;h=(h^uint64_t(kind))*1099511628211ull;
    h^=h>>32;h*=0x9e3779b97f4a7c15ull;h^=h>>29;
    auto& e=m.segments->entries[h&(m.segments->entries.size()-1)];
    if(m.queryProfile)++m.queryProfile->memoLookups;
    if((e.state&3)&&(e.state>>2)==uint32_t(kind)&&std::memcmp(e.key,key,sizeof key)==0){if(m.queryProfile)++m.queryProfile->memoHits;return (e.state&3)==1;}
    const bool clear=compute(m,a,b,pad);
    std::memcpy(e.key,key,sizeof key);e.state=(uint32_t(kind)<<2)|(clear?1u:2u);return clear;
}
float IndexedContact(const Map& m,Vec3 a,Vec3 b,bool any,float padding){
    if(m.obstacles.empty())return -1;
    if(!m.spatial||m.spatial->revision!=m.revision){auto cache=std::make_shared<SpatialIndex>();cache->revision=m.revision;cache->items.resize(m.obstacles.size());std::iota(cache->items.begin(),cache->items.end(),0);cache->Build(m,0,cache->items.size());m.spatial=cache;}
    return m.spatial->Query(m,0,a,b,any,padding);
}
}
