#include "CharacterBlend.h"
#include <cassert>
#include <iostream>
using namespace armyvisual;
int main(){
    // Independently specified cardinal and diagonal cases, including wrap through back-left.
    const struct {float x,y;const char* clip;} cases[]={
        {1.755f,0,"A_walk_forward_InPlace"},{0,1.755f,"A_walk_right_InPlace"},
        {-1.755f,0,"A_walk_backward_InPlace"},{0,-1.755f,"A_walk_left_InPlace"},
        {1.755f/std::sqrt(2.f),-1.755f/std::sqrt(2.f),"A_walk_forward_left_InPlace"}};
    for(auto c:cases){State s;s.forward=c.x;s.right=c.y;auto v=Samples(s,0);assert(v.size()==1);assert(v[0].clip==Find(c.clip));assert(std::abs(v[0].weight-1)<.0001);}
    for(float speed: {0.f,.1f,.5f,1.755f,2.8f,4.389f,5.5f,6.583f,8.f})
    for(int angle=-180;angle<=180;angle+=3)
    for(float crouch:{0.f,.25f,.5f,1.f}){
        State s;s.forward=speed*std::cos(angle*3.141592653589793/180);s.right=speed*std::sin(angle*3.141592653589793/180);s.crouch=crouch;s.aim=.4;s.phase=173.25;
        auto a=Samples(s,24);double weight=0;
        for(auto x:a){assert(x.clip>=0&&x.clip<ClipCount);assert(x.weight>=0);assert(x.time>=0&&x.time<=Clips[x.clip].duration);weight+=x.weight;}
        assert(std::abs(weight-1)<.00001);assert(std::isfinite(CycleRate(s)));
        auto b=Samples(s,24);assert(a.size()==b.size());for(size_t i=0;i<a.size();++i){assert(a[i].time==b[i].time&&a[i].clip==b[i].clip&&a[i].weight==b[i].weight);}
    }
    State walk;walk.forward=1.75556f;assert(std::abs(CycleRate(walk)-1)<.001);
    State run;run.forward=4.38889f;assert(std::abs(CycleRate(run)-2)<.001);
    State dead;dead.forward=4.389f;dead.outAt=10;
    auto d=Samples(dead,12);assert(d.size()==1&&d[0].clip==Find("A_death_from_the_front"));assert(d[0].time==2);assert(Grip(dead,10)==1&&Grip(dead,10.2)==0);
    assert(Samples(dead,20)[0].time==4);dead.outCrouched=true;assert(Samples(dead,12)[0].clip==Find("A_death_crouching_headshot_front"));
    std::cout<<"character selection: cardinal directions, 4356 blended states, timing, death priority, frozen death, deterministic sampling passed\n";
}
