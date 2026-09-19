#include "ImportedMap.h"
#include <set>
// Static defence: Ember holds prepared cover and never manoeuvres, so these checks
// are about placement, the hold clamp, the win rule and historical determinism.
static std::string DefenceTestMap(){
    std::ostringstream m;
    m<<"ARMYMAP 1 city 7\nBOUNDS 60 50 0\n";
    uint64_t id=1;
    // A field of low blocks on Ember's half; face sampling turns each into cover.
    for(int gx=0;gx<4;++gx)for(int gy=0;gy<7;++gy){
        const float x=8.f+float(gx)*6.f,y=-18.f+float(gy)*6.f;
        m<<"O "<<id++<<' '<<x<<' '<<y<<" 0 0.7 0.7 1.3 0 1 1\n";
    }
    // One walled structure with a doorway facing the attacker, plus its floor.
    const float bx=34,by=0,hx=5,hy=4;
    m<<"O "<<id++<<' '<<bx<<' '<<(by-hy)<<" 0 "<<hx<<" 0.25 3.2 1 0 1\n";
    m<<"O "<<id++<<' '<<bx<<' '<<(by+hy)<<" 0 "<<hx<<" 0.25 3.2 1 0 1\n";
    m<<"O "<<id++<<' '<<(bx+hx)<<' '<<by<<" 0 0.25 "<<hy<<" 3.2 1 0 1\n";
    m<<"O "<<id++<<' '<<(bx-hx)<<' '<<(by-2.75f)<<" 0 0.25 1.25 3.2 1 0 1\n";
    m<<"O "<<id++<<' '<<(bx-hx)<<' '<<(by+2.75f)<<" 0 0.25 1.25 3.2 1 0 1\n";
    m<<"D 2 "<<bx<<' '<<by<<" 0.03 "<<hx<<' '<<hy<<" 0.02\n";
    for(int i=0;i<UnitCount;++i){
        const float side=i<TeamSize?-46.f:46.f,y=-24.f+float(i%TeamSize)*1.6f;
        m<<"U "<<i<<' '<<side<<' '<<y<<" 0 0 "<<y*0.2f<<" 0\n";
    }
    m<<"END\n";
    return m.str();
}
static std::vector<Vec3> DefenceShelters(const DefencePlan& plan){
    std::vector<Vec3> out;for(const auto& p:plan.positions)out.push_back(p.cover.shelter);return out;
}
static DefencePlan PlanFor(const Config& config,Map& map){
    map=MakeBattleMap(config);Frame frame=InitialFrame(config);
    std::array<Vec3,UnitCount> deployment{};for(const auto& s:frame.soldiers)deployment[s.id]=s.position;
    return PlanStaticDefence(config,map,deployment);
}
static void StaticDefenceTests(){
    DiagnosticOptions off;off.enabled=false;
    // 1. With the feature off the historical battle is bit-identical, on both terrains,
    //    including when the unused defender count and seed are set.
    for(Terrain terrain:{Terrain::FracturedWorks,Terrain::Trenches}){
        Config plain;plain.terrain=terrain;plain.maxSeconds=8;
        Config untouched=plain;untouched.staticDefence.defenders=25;untouched.staticDefence.seed=4242;
        assert(SameConfig(plain,untouched));
        assert(GameplayDigest(Simulate(plain,off))==GameplayDigest(Simulate(untouched,off)));
    }
    auto battlefield=[&]{std::string error;auto imported=ImportBattlefield(DefenceTestMap(),error);
        assert(imported&&error.empty());return imported;}();

    auto base=[&](DefenceLayout layout,int defenders,uint32_t seed,bool imported){
        Config c;c.staticDefence.layout=layout;c.staticDefence.defenders=defenders;c.staticDefence.seed=seed;
        c.maxSeconds=150;c.seed=100;
        if(imported)c.battlefield=battlefield;
        return c;
    };
    const DefenceLayout layouts[3]={DefenceLayout::Building,DefenceLayout::Spread,DefenceLayout::Clusters};

    // 2/6. Placement contracts on the authored terrain and on an imported layout.
    for(bool imported:{false,true})for(DefenceLayout layout:layouts){
        const int defenders=12;
        Config c=base(layout,defenders,21,imported);Map map;
        auto plan=PlanFor(c,map);
        assert(plan.layout==layout&&int(plan.positions.size())==defenders);
        assert(plan.objective.x>0&&std::abs(plan.objective.x)<map.halfWidth&&std::abs(plan.objective.y)<map.halfHeight);
        const auto& catalog=CoverPositions(map);
        int occupants=0;
        for(int id=0;id<UnitCount;++id)if(plan.Defends(id)){
            ++occupants;assert(id>=TeamSize); // Only Ember holds the position.
            float nearest=1e9f;for(const auto& cover:catalog)nearest=std::min(nearest,Distance(cover.shelter,plan.At(id).cover.shelter));
            assert(nearest<0.75f);
            assert(Walkable(map,plan.At(id).cover.shelter)&&Walkable(map,plan.At(id).cover.peek));
        }
        assert(occupants==defenders);
        // Every squad that holds anyone keeps its sergeant; the gun is present at twelve.
        for(int squad=SquadsPerTeam;squad<SquadCount;++squad){
            bool any=false;for(int slot=0;slot<SquadSize;++slot)any|=plan.Defends(squad*SquadSize+slot);
            if(any)assert(plan.Defends(squad*SquadSize));
        }
        assert(plan.Defends(TeamSize+SquadSize-1)); // Ember's gunner, defenders >= 6.
        const float floor=layout==DefenceLayout::Building?2.f:3.f;
        auto shelters=DefenceShelters(plan);
        for(size_t i=0;i<shelters.size();++i)for(size_t j=0;j<i;++j){
            const float gap=std::hypot(shelters[i].x-shelters[j].x,shelters[i].y-shelters[j].y);
            assert(gap>=floor-1e-3f);
        }
        if(layout==DefenceLayout::Spread){
            for(size_t i=0;i<shelters.size();++i){
                float nearest=1e9f;
                for(size_t j=0;j<shelters.size();++j)if(i!=j)nearest=std::min(nearest,float(std::hypot(shelters[i].x-shelters[j].x,shelters[i].y-shelters[j].y)));
                assert(nearest>=8.f-1e-3f);
            }
        }
        if(layout==DefenceLayout::Clusters){
            std::set<int> groups;for(const auto& p:plan.positions)if(p.cluster>=0)groups.insert(p.cluster);
            assert(groups.size()>=2&&groups.size()<=3);
            for(const auto& p:plan.positions)assert(p.cluster<0||Distance(p.cover.shelter,plan.objective)<=plan.radius+12.5f);
        }
        // A different defence seed moves the defenders.
        Config other=base(layout,defenders,77,imported);Map otherMap;
        auto moved=PlanFor(other,otherMap);
        bool identical=true;auto a=DefenceShelters(plan),b=DefenceShelters(moved);
        for(size_t i=0;i<a.size()&&identical;++i)identical=Distance(a[i],b[i])<0.01f;
        assert(!identical);
        // Repeating the same configuration reproduces the same placement exactly.
        Map repeatMap;auto repeat=PlanFor(c,repeatMap);auto again=DefenceShelters(repeat);
        assert(again.size()==a.size());
        for(size_t i=0;i<a.size();++i)assert(Distance(a[i],again[i])<1e-4f);
    }
    // Different layouts place differently on the same seed and map.
    {
        Map m1,m2,m3;Config a=base(DefenceLayout::Building,12,21,false),b=base(DefenceLayout::Spread,12,21,false),c=base(DefenceLayout::Clusters,12,21,false);
        auto pa=DefenceShelters(PlanFor(a,m1)),pb=DefenceShelters(PlanFor(b,m2)),pc=DefenceShelters(PlanFor(c,m3));
        auto same=[](const std::vector<Vec3>& x,const std::vector<Vec3>& y){
            for(size_t i=0;i<x.size();++i)if(Distance(x[i],y[i])>0.01f)return false;
            return true;};
        assert(!same(pa,pb)&&!same(pb,pc)&&!same(pa,pc));
    }
    // 3/4/5. The hold clamp under both attacking controllers, for every layout.
    int emberShots=0,contactBattles=0,emberFiredWhenClosed=0;
    for(DefenceLayout layout:layouts)for(int controller=0;controller<2;++controller){
        Config c=base(layout,12,21,false);
        if(controller){c.drills=true;c.foundations=true;}
        auto record=Simulate(c,off);
        assert(record.defence&&int(record.defence->positions.size())==12);
        const auto& first=record.frames.front();
        for(int id=TeamSize;id<UnitCount;++id)
            assert(first.soldiers[id].Active()==record.defence->Defends(id));
        for(const auto& frame:record.frames)for(int id=TeamSize;id<UnitCount;++id){
            if(!record.defence->Defends(id))continue;
            const auto& slot=record.defence->At(id).cover;
            const float reach=Distance(slot.shelter,slot.peek)+1.f;
            assert(Distance(frame.soldiers[id].position,first.soldiers[id].position)<=reach+1e-3f);
        }
        float closest=1e9f;
        for(const auto& frame:record.frames)for(int a=0;a<TeamSize;++a){
            if(!frame.soldiers[a].Active())continue;
            for(int d=TeamSize;d<UnitCount;++d)if(frame.soldiers[d].Active())
                closest=std::min(closest,Distance(frame.soldiers[a].position,frame.soldiers[d].position));
        }
        int fired=0;for(const auto& shot:record.shots)fired+=shot.owner>=TeamSize;
        emberShots+=fired;
        if(closest<45.f){++contactBattles;emberFiredWhenClosed+=fired>0;}
        // Determinism: the same configuration repeats exactly.
        assert(GameplayDigest(Simulate(c,off))==GameplayDigest(record));
        std::cout<<"STATIC DEFENCE "<<DefenceLayoutName(layout)<<(controller?" drills":" legacy")<<": shots="<<record.shots.size()
                 <<" ember_shots="<<fired<<" closest="<<closest<<" winner="<<record.winner<<"\n";
    }
    std::cout<<"STATIC DEFENCE contact battles="<<contactBattles<<" of those with defensive fire="<<emberFiredWhenClosed<<"\n";
    assert(emberShots>0);
    assert(contactBattles>0&&emberFiredWhenClosed>0);
    // 7. At the time limit any surviving defender wins for Ember, on both map kinds.
    for(bool imported:{false,true}){
        Config c=base(DefenceLayout::Spread,12,21,imported);c.maxSeconds=20;
        auto record=Simulate(c,off);
        int alive=0;for(int id=TeamSize;id<UnitCount;++id)alive+=record.frames.back().soldiers[id].Active();
        assert(alive>0&&record.winner==1);
        assert(record.conclusion.find("Ember holds")!=std::string::npos);
    }
    // 8. Refused combinations.
    auto refused=[&](Config c,int encounter){
        bool threw=false;try{Simulate(c,off,{},encounter);}catch(const std::invalid_argument&){threw=true;}return threw;};
    {
        Config c=base(DefenceLayout::Spread,12,21,false);c.maxSeconds=5;
        Config family=c;family.family=ScenarioFamily::F1;assert(refused(family,0));
        Config fixture=c;fixture.recoveryFixture=true;assert(refused(fixture,5));
        Config leaders=c;leaders.drills=leaders.foundations=leaders.leaderEffects=true;assert(refused(leaders,0));
        Config equal=c;equal.equalTroops=true;assert(refused(equal,0));
        Config few=c;few.staticDefence.defenders=3;assert(refused(few,0));
        Config many=c;many.staticDefence.defenders=33;assert(refused(many,0));
        Config encounter=c;encounter.cognition=encounter.foundations=true;assert(refused(encounter,12));
    }
    std::cout<<"STATIC DEFENCE: placement, hold clamp under legacy and drills, win rule, determinism and refusals PASS\n";
}
