#include "BattleSim.h"
#include "Diagnostics.h"
#include <iostream>
#include <stdexcept>
#ifdef _WIN32
#include <windows.h>
#include <psapi.h>
#pragma comment(lib,"psapi.lib")
static size_t PeakMemory(){PROCESS_MEMORY_COUNTERS p{};return GetProcessMemoryInfo(GetCurrentProcess(),&p,sizeof(p))?p.PeakWorkingSetSize:0;}
#else
#include <sys/resource.h>
static size_t PeakMemory(){rusage r{};getrusage(RUSAGE_SELF,&r);return size_t(r.ru_maxrss)*1024;}
#endif
using namespace army;
int main(int argc,char** argv){try{Config c;DiagnosticOptions d;std::string out=".local/battles";int repeat=1,encounter=0;bool evaluate=false;
for(int i=1;i<argc;++i){std::string a=argv[i];auto arg=[&](){if(++i>=argc)throw std::runtime_error("Missing argument");return std::string(argv[i]);};
if(a=="--recovery")c.recoveryFixture=true;else if(a=="--terrain"){int n=std::stoi(arg());if(n<0||n>1)throw std::runtime_error("Terrain must be 0..1");c.terrain=Terrain(n);}else if(a=="--evaluate")evaluate=true;else if(a=="--version"){std::cout<<BuildIdentifier()<<std::endl;return 0;}else if(a=="--doctrine"){int n=std::stoi(arg());if(n<0||n>2)throw std::runtime_error("Doctrine must be 0..2");c.doctrine=Doctrine(n);}else if(a=="--ember-doctrine"){int n=std::stoi(arg());if(n<0||n>2)throw std::runtime_error("Doctrine must be 0..2");c.emberDoctrine=Doctrine(n);}else if(a=="--approach"){int n=std::stoi(arg());if(n<0||n>2)throw std::runtime_error("Approach must be 0..2");c.approach=Approach(n);}else if(a=="--encounter"){encounter=std::stoi(arg());if(encounter<0||encounter>7)throw std::runtime_error("Encounter must be 0..7");}else if(a=="--no-mg")c.supportWeapon=false;else if(a=="--seed")c.seed=std::stoul(arg());else if(a=="--seconds")c.maxSeconds=std::stof(arg());else if(a=="--out")out=arg();else if(a=="--repeat")repeat=std::stoi(arg());else if(a=="--no-trace")d.enabled=false;else if(a=="--detail")d.detailed=true;else if(a=="--soldier")d.soldier=std::stoi(arg());else if(a=="--squad")d.squad=std::stoi(arg());else if(a=="--from")d.from=std::stof(arg());else if(a=="--to")d.to=std::stof(arg());else throw std::runtime_error("Unknown argument: "+a);}
for(int n=0;n<repeat;++n){auto start=DiagnosticClock::now();auto r=Simulate(c,d,{},encounter);auto exportStart=DiagnosticClock::now();auto path=ExportBattle(r,out,BuildIdentifier());if(evaluate)ExportEvaluation(r,path);std::cout<<"seed="<<c.seed<<" repeat="<<n<<" simulation="<<r.diagnostics->total<<" export="<<DiagnosticSeconds(exportStart)<<" total="<<DiagnosticSeconds(start)<<" peak_memory_bytes="<<PeakMemory()<<" digest="<<GameplayDigest(r)<<" run="<<path<<std::endl;}
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
