#include "BattleSim.h"
#include <algorithm>
#include <numeric>
#include <cstring>
#include <cstdlib>
#include <new>
#if defined(__linux__)
#include <sys/mman.h>
#endif
#include <cstdint>
#include <cmath>
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
    float QueryRecursive(const Map& m,int id,Vec3 a,Vec3 b,bool any,float pad,bool solidOnly)const{
        const auto& node=nodes[id];if(!Overlap(node,a,b,pad))return -1;
        if(node.left>=0){float left=QueryRecursive(m,node.left,a,b,any,pad,solidOnly);if(any&&left>=0)return left;float right=QueryRecursive(m,node.right,a,b,any,pad,solidOnly);return left<0?right:right<0?left:std::min(left,right);}
        float first=-1;for(size_t k=node.begin;k<node.end;++k){const auto& o=m.obstacles[items[k]];float hit=-1;
            if(solidOnly&&o.concealment)continue;
            if(pad<0)hit=SegmentObstacle(a,b,o);
            else if(o.blocksMovement&&o.center.z<std::max(a.z,b.z)+1.85f-0.01f&&o.center.z+ObstacleHeight(o)>std::min(a.z,b.z)+0.02f)hit=SegmentBox(a,b,o,pad);
            if(hit>=0){if(any)return hit;if(first<0||hit<first)first=hit;}}
        return first;
    }
    // Plan 029 M-C: every obstacle whose footprint the padded 2D segment touches (SegmentBox >= 0) and
    // whose vertical extent overlaps (zlo, zhi). Node boxes hold their obstacles' footprints and Overlap
    // widens them by 0.001 beyond the padding, so no touched obstacle is missed: the set is the linear
    // scan's. Read-only; no query answer changes.
    void Collect(const Map& m,int id,Vec3 a,Vec3 b,float pad,float zlo,float zhi,std::vector<size_t>& out)const{
        const auto& node=nodes[id];if(!Overlap(node,a,b,pad))return;
        if(node.left>=0){Collect(m,node.left,a,b,pad,zlo,zhi,out);Collect(m,node.right,a,b,pad,zlo,zhi,out);return;}
        for(size_t k=node.begin;k<node.end;++k){const auto& o=m.obstacles[items[k]];
            if(o.center.z<zhi&&o.center.z+ObstacleHeight(o)>zlo&&SegmentBox(a,b,o,pad)>=0)out.push_back(items[k]);}
    }
    // The traversal runs on flattened preorder trees: a left child is always id+1;
    // count==0 marks an inner node whose right child is `right`, otherwise `right`
    // is the leaf's first entry in `order` (obstacle indices).
    struct Flat { float low[3],high[3]; int32_t right; uint32_t count; };
    struct Tree { std::vector<Flat> flat; std::vector<uint32_t> order; bool usable=false; };
    static constexpr int StackSize=96;
    // `exact`: the original tree above, flattened node for node (same visits, same
    // order, so every answer, including which hit `any` returns, is unchanged).
    // `sah`: a second tree over the same obstacles with surface-area splits. Node
    // boxes are the same float min/max of the same obstacle extents, and the node
    // test widens them by 0.001, so a node that holds an obstacle the segment hits
    // always passes: every hit obstacle is tested in either
    // tree. The minimum contact (any=false) is therefore identical; with any=true a
    // different blocker may be reported first, and every caller of an any=true
    // query (ClearLine3D/IndexedClear3D, ClearLine3DSolid, ClearLine, TacticalRoutePlanner) uses only
    // the sign. For movement queries (padding>=0) containment also needs the 0.001
    // margin to exceed float rounding, which holds for coordinates, half sizes and
    // padding within 256 m; outside that the exact tree is used.
    Tree exact,sah; bool sahMovement=false;
    int FlattenExact(){
        exact.usable=!nodes.empty()&&items.size()<=size_t(INT32_MAX)&&nodes.size()<=size_t(INT32_MAX);
        int depth=0;
        for(size_t id=0;exact.usable&&id<nodes.size();++id){const auto& n=nodes[id];
            if(n.left>=0&&(size_t(n.left)!=id+1||n.right<=0))exact.usable=false;
            if(n.left<0&&n.end<=n.begin)exact.usable=false;}
        if(exact.usable)depth=Depth(0);
        if(!exact.usable||depth>StackSize){exact.usable=false;return 0;}
        exact.flat.resize(nodes.size());exact.order.resize(items.size());
        for(size_t k=0;k<items.size();++k)exact.order[k]=uint32_t(items[k]);
        for(size_t id=0;id<nodes.size();++id){const auto& n=nodes[id];auto& f=exact.flat[id];
            f.low[0]=n.low.x;f.low[1]=n.low.y;f.low[2]=n.low.z;f.high[0]=n.high.x;f.high[1]=n.high.y;f.high[2]=n.high.z;
            if(n.left>=0){f.right=int32_t(n.right);f.count=0;}else{f.right=int32_t(n.begin);f.count=uint32_t(n.end-n.begin);}}
        return depth;
    }
    int Depth(int id)const{const auto& n=nodes[id];return n.left<0?1:1+std::max(Depth(n.left),Depth(n.right));}
    // Surface-area split: sweep the centre order on x and on y and take the split
    // with the least sum of child perimeter times child count; leaves hold at most
    // four obstacles. Below depth 40 it halves by count so the depth stays bounded.
    int BuildSah(const Map& m,std::vector<uint32_t>& it,size_t begin,size_t end,int depth,int& maxDepth){
        maxDepth=std::max(maxDepth,depth+1);
        int id=int(sah.flat.size());sah.flat.push_back({});Flat f;
        float low[3]={1e9f,1e9f,1e9f},high[3]={-1e9f,-1e9f,-1e9f};
        for(size_t k=begin;k<end;++k){const auto& o=m.obstacles[it[k]];
            low[0]=std::min(low[0],o.center.x-o.half.x);low[1]=std::min(low[1],o.center.y-o.half.y);low[2]=std::min(low[2],o.center.z);
            high[0]=std::max(high[0],o.center.x+o.half.x);high[1]=std::max(high[1],o.center.y+o.half.y);high[2]=std::max(high[2],o.center.z+ObstacleHeight(o));}
        for(int k=0;k<3;++k){f.low[k]=low[k];f.high[k]=high[k];}
        const size_t n=end-begin;
        if(n>4){
            auto key=[&](uint32_t i,int axis){const auto& c=m.obstacles[i].center;return axis?c.y:c.x;};
            int axis=high[0]-low[0]>high[1]-low[1]?0:1;size_t mid=begin+n/2;
            if(depth<40){double best=0;bool found=false;std::vector<double> left(n+1);
                for(int ax=0;ax<2;++ax){
                    std::stable_sort(it.begin()+begin,it.begin()+end,[&](uint32_t p,uint32_t q){return key(p,ax)<key(q,ax);});
                    float l0=1e9f,l1=1e9f,h0=-1e9f,h1=-1e9f;
                    for(size_t k=0;k<n;++k){const auto& o=m.obstacles[it[begin+k]];l0=std::min(l0,o.center.x-o.half.x);l1=std::min(l1,o.center.y-o.half.y);h0=std::max(h0,o.center.x+o.half.x);h1=std::max(h1,o.center.y+o.half.y);left[k+1]=double(h0-l0)+double(h1-l1);}
                    l0=l1=1e9f;h0=h1=-1e9f;
                    for(size_t k=n;k-->1;){const auto& o=m.obstacles[it[begin+k]];l0=std::min(l0,o.center.x-o.half.x);l1=std::min(l1,o.center.y-o.half.y);h0=std::max(h0,o.center.x+o.half.x);h1=std::max(h1,o.center.y+o.half.y);
                        const double cost=left[k]*double(k)+(double(h0-l0)+double(h1-l1))*double(n-k);
                        if(!found||cost<best){found=true;best=cost;axis=ax;mid=begin+k;}}}
            }
            std::stable_sort(it.begin()+begin,it.begin()+end,[&](uint32_t p,uint32_t q){return key(p,axis)<key(q,axis);});
            BuildSah(m,it,begin,mid,depth+1,maxDepth);const int right=BuildSah(m,it,mid,end,depth+1,maxDepth);
            f.right=int32_t(right);f.count=0;
        }else{f.right=int32_t(begin);f.count=uint32_t(n);}
        sah.flat[size_t(id)]=f;return id;
    }
    void Prepare(const Map& m){
        FlattenExact();
        bool finite=!m.obstacles.empty()&&m.obstacles.size()<=size_t(INT32_MAX);sahMovement=true;
        for(const auto& o:m.obstacles){
            finite=finite&&std::isfinite(o.center.x)&&std::isfinite(o.center.y)&&std::isfinite(o.center.z)&&std::isfinite(o.half.x)&&std::isfinite(o.half.y)&&std::isfinite(o.center.z+ObstacleHeight(o));
            sahMovement=sahMovement&&std::abs(o.center.x)<=256&&std::abs(o.center.y)<=256&&std::abs(o.half.x)<=256&&std::abs(o.half.y)<=256;}
        if(!finite)return;
        std::vector<uint32_t> it(m.obstacles.size());std::iota(it.begin(),it.end(),0u);
        int depth=0;BuildSah(m,it,0,it.size(),0,depth);sah.order=std::move(it);
        sah.usable=depth<=StackSize;sahMovement=sahMovement&&sah.usable;
    }
    // solidOnly (plan 029) skips concealment obstacles in the leaves; node boxes still hold them, which
    // only costs visits. Traverse<false> is the unchanged traversal.
    float Query(const Map& m,Vec3 a,Vec3 b,bool any,float pad,bool solidOnly)const{
        const bool finite=std::isfinite(a.x)&&std::isfinite(a.y)&&std::isfinite(a.z)&&std::isfinite(b.x)&&std::isfinite(b.y)&&std::isfinite(b.z);
        if(finite&&sah.usable&&(pad<0||(sahMovement&&pad>=0&&pad<=256)))return solidOnly?Traverse<true>(sah,m,a,b,any,pad):Traverse<false>(sah,m,a,b,any,pad);
        if(exact.usable)return solidOnly?Traverse<true>(exact,m,a,b,any,pad):Traverse<false>(exact,m,a,b,any,pad);
        return QueryRecursive(m,0,a,b,any,pad,solidOnly);
    }
    // QueryRecursive's arithmetic, iteratively: left subtree first, a leaf's
    // entries in order, `any` returns the first hit, otherwise the minimum (hits
    // are finite and never -0, so the running minimum equals the pairwise one).
    // Slab early exits are deferred to the end of each test: lo only rises and hi
    // only falls, so the verdict is unchanged.
    template<bool SolidOnly>
    static float Traverse(const Tree& tree,const Map& m,Vec3 a,Vec3 b,bool any,float pad){
        const bool sight=pad<0;
        const float grow=std::max(0.f,pad)+0.001f;
        const float px=a.x,py=a.y,pz=a.z,dx=b.x-a.x,dy=b.y-a.y,dz=b.z-a.z;
        const bool flatX=std::abs(dx)<1e-7f,flatY=std::abs(dy)<1e-7f,flatZ=std::abs(dz)<1e-7f;
        const Obstacle* obstacles=m.obstacles.data();const Flat* nodes=tree.flat.data();const uint32_t* order=tree.order.data();
        int stack[StackSize];int top=0;int32_t id=0;float first=-1;
        for(;;){
            const Flat& n=nodes[id];
            bool pass=!(sight&&((a.z<n.low[2]-0.001f&&b.z<n.low[2]-0.001f)||(a.z>n.high[2]+0.001f&&b.z>n.high[2]+0.001f)));
            if(pass){float lo=0,hi=1;
                if(flatX){if(px<n.low[0]-grow||px>n.high[0]+grow)pass=false;}
                else{float x=(n.low[0]-grow-px)/dx,y=(n.high[0]+grow-px)/dx;const bool s=x>y;const float t0=s?y:x,t1=s?x:y;lo=std::max(lo,t0);hi=std::min(hi,t1);}
                if(flatY){if(py<n.low[1]-grow||py>n.high[1]+grow)pass=false;}
                else{float x=(n.low[1]-grow-py)/dy,y=(n.high[1]+grow-py)/dy;const bool s=x>y;const float t0=s?y:x,t1=s?x:y;lo=std::max(lo,t0);hi=std::min(hi,t1);}
                if(lo>hi)pass=false;}
            if(pass){
                if(n.count==0){stack[top++]=n.right;++id;continue;}
                const uint32_t* it=order+n.right;const uint32_t* end=it+n.count;
                for(;it!=end;++it){const Obstacle& o=obstacles[*it];float hit=-1;
                    if(SolidOnly&&o.concealment)continue;
                    if(sight){hit=SightHit(o,a,b,px,py,pz,dx,dy,dz,flatX,flatY,flatZ);}
                    else if(o.blocksMovement&&o.center.z<std::max(a.z,b.z)+1.85f-0.01f&&o.center.z+Height(o)>std::min(a.z,b.z)+0.02f)hit=SegmentBox(a,b,o,pad);
                    if(hit>=0){if(any)return hit;if(first<0||hit<first)first=hit;}}
            }
            if(top==0)return first;
            id=stack[--top];
        }
    }
    // ObstacleHeight, same expression (kept local so it inlines).
    static float Height(const Obstacle& o){return o.height>0?o.height:o.building?3.34f:o.halfCover?1.15f:2.2f;}
    // SegmentObstacle(a,b,o) with the per-query differences hoisted; identical arithmetic.
    static float SightHit(const Obstacle& o,Vec3 a,Vec3 b,float px,float py,float pz,float dx,float dy,float dz,bool flatX,bool flatY,bool flatZ){
        const float top=o.center.z+Height(o);
        if((a.z<o.center.z&&b.z<o.center.z)||(a.z>top&&b.z>top))return -1;
        const float mnx=o.center.x-o.half.x,mny=o.center.y-o.half.y,mnz=o.center.z,mxx=o.center.x+o.half.x,mxy=o.center.y+o.half.y,mxz=top;
        float lo=0,hi=1;bool pass=true;
        if(flatX){if(px<mnx||px>mxx)pass=false;}
        else{float t0=(mnx-px)/dx,t1=(mxx-px)/dx;const bool s=t0>t1;const float u=s?t1:t0,w=s?t0:t1;lo=std::max(lo,u);hi=std::min(hi,w);}
        if(flatY){if(py<mny||py>mxy)pass=false;}
        else{float t0=(mny-py)/dy,t1=(mxy-py)/dy;const bool s=t0>t1;const float u=s?t1:t0,w=s?t0:t1;lo=std::max(lo,u);hi=std::min(hi,w);}
        if(flatZ){if(pz<mnz||pz>mxz)pass=false;}
        else{float t0=(mnz-pz)/dz,t1=(mxz-pz)/dz;const bool s=t0>t1;const float u=s?t1:t0,w=s?t0:t1;lo=std::max(lo,u);hi=std::min(hi,w);}
        return pass&&!(lo>hi)?lo:-1;
    }
};
#ifndef SEGMENT_MEMO_BITS
#define SEGMENT_MEMO_BITS 20
#endif
#ifndef SIGHT_MEMO_BITS
#define SIGHT_MEMO_BITS 14
#endif
struct SegmentMemo {
    // Direct-mapped, 32-byte entries: seven argument words and a state word
    // (bits 0-1: 1 clear, 2 blocked; bits 2+: kind). A collision evicts and the
    // query is recomputed exactly, so the table sizes only affect speed.
    struct Entry { uint32_t key[7]; uint32_t state; };
    struct Table {
        Entry* entries=nullptr; size_t mask=0;
        // Probed at random, so a large table is backed by transparent huge pages
        // where available (a paging hint only: contents are identical).
        explicit Table(size_t n):mask(n-1){
            const size_t bytes=n*sizeof(Entry);
#if defined(__linux__)
            const size_t huge=size_t(1)<<21;
            if(bytes>=huge&&bytes%huge==0){void* p=nullptr;if(posix_memalign(&p,huge,bytes)==0){madvise(p,bytes,MADV_HUGEPAGE);entries=static_cast<Entry*>(p);}}
#endif
            if(!entries){entries=static_cast<Entry*>(std::malloc(bytes));if(!entries)throw std::bad_alloc();}
            std::memset(static_cast<void*>(entries),0,bytes);
        }
        ~Table(){std::free(entries);}
        Table(const Table&)=delete;Table& operator=(const Table&)=delete;
    };
    // Sight lines (kind 0) and movement lines (kind 1) have separate tables: a
    // sight line is cheap to recompute, a movement line samples the floor. Solid-only
    // lines (kind 2, plan 029, only on maps with concealment) share the second table.
    uint64_t revision=0; Table sight{size_t(1)<<SIGHT_MEMO_BITS}, other{size_t(1)<<SEGMENT_MEMO_BITS};
};
bool MemoisedSegment(const Map& m,Vec3 a,Vec3 b,float pad,int kind,bool (*compute)(const Map&,Vec3,Vec3,float)){
    if(!m.segments||m.segments->revision!=m.revision){m.segments=std::make_shared<SegmentMemo>();m.segments->revision=m.revision;}
    uint32_t key[7];const float words[7]={a.x,a.y,a.z,b.x,b.y,b.z,pad};std::memcpy(key,words,sizeof key);
    uint64_t h=1469598103934665603ull;for(uint32_t k:key)h=(h^k)*1099511628211ull;h=(h^uint64_t(kind))*1099511628211ull;
    h^=h>>32;h*=0x9e3779b97f4a7c15ull;h^=h>>29;
    const auto& table=kind==0?m.segments->sight:m.segments->other;
    auto& e=table.entries[h&table.mask];
    if(m.queryProfile)++m.queryProfile->memoLookups;
    if((e.state&3)&&(e.state>>2)==uint32_t(kind)&&std::memcmp(e.key,key,sizeof key)==0){if(m.queryProfile)++m.queryProfile->memoHits;return (e.state&3)==1;}
    const bool clear=compute(m,a,b,pad);
    std::memcpy(e.key,key,sizeof key);e.state=(uint32_t(kind)<<2)|(clear?1u:2u);return clear;
}
void CollectObstacles(const Map& m,Vec3 a,Vec3 b,float pad,float zlo,float zhi,std::vector<size_t>& out){
    out.clear();if(m.obstacles.empty())return;
    if(m.prepared){
        if(!m.spatial||m.spatial->revision!=m.revision){auto cache=std::make_shared<SpatialIndex>();cache->revision=m.revision;cache->items.resize(m.obstacles.size());std::iota(cache->items.begin(),cache->items.end(),0);cache->Build(m,0,cache->items.size());cache->Prepare(m);m.spatial=cache;}
        m.spatial->Collect(m,0,a,b,std::max(0.f,pad),zlo,zhi,out);std::sort(out.begin(),out.end());return;
    }
    for(size_t i=0;i<m.obstacles.size();++i){const auto& o=m.obstacles[i];
        if(o.center.z<zhi&&o.center.z+ObstacleHeight(o)>zlo&&SegmentBox(a,b,o,std::max(0.f,pad))>=0)out.push_back(i);}
}
float IndexedContact(const Map& m,Vec3 a,Vec3 b,bool any,float padding,bool solidOnly){
    if(m.obstacles.empty())return -1;
    if(!m.spatial||m.spatial->revision!=m.revision){auto cache=std::make_shared<SpatialIndex>();cache->revision=m.revision;cache->items.resize(m.obstacles.size());std::iota(cache->items.begin(),cache->items.end(),0);cache->Build(m,0,cache->items.size());cache->Prepare(m);m.spatial=cache;}
    return m.spatial->Query(m,a,b,any,padding,solidOnly);
}
}
