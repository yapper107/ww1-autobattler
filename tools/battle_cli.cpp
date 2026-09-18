#include "BattleSim.h"
#include "Diagnostics.h"
#include "ImportedMap.h"
#include <fstream>
#include <iostream>
#include <sstream>
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
int main(int argc,char** argv){try{Config c;
// New battles use legacy; explicit controller flags preserve historical selection.
DiagnosticOptions d;std::string out=".local/battles";int repeat=1,encounter=0;bool evaluate=false;std::string expectedMapDigest;
for(int i=1;i<argc;++i){std::string a=argv[i];auto arg=[&](){if(++i>=argc)throw std::runtime_error("Missing argument");return std::string(argv[i]);};
if(a=="--map"){std::ifstream file(arg());std::ostringstream source;source<<file.rdbuf();std::string error;c.battlefield=ImportBattlefield(source.str(),error);if(!c.battlefield)throw std::runtime_error(error);c.terrain=c.battlefield->kind=="trenches"?Terrain::Trenches:Terrain::FracturedWorks;}else if(a=="--map-digest")expectedMapDigest=arg();else if(a=="--leader-effects")c.leaderEffects=true;else if(a=="--equal-troops")c.equalTroops=true;else if(a=="--azure-leader"||a=="--ember-leader"){
 auto value=arg();for(char& ch:value)if(ch==',')ch=' ';std::istringstream in(value);OfficerProfile profile;std::string extra;
 if(!(in>>profile.judgment>>profile.risk>>profile.adaptability>>profile.communication)||(in>>extra))throw std::runtime_error("Leader profile requires judgment,risk,adaptability,communication");
 c.platoonProfiles[a=="--azure-leader"?0:1]=profile;c.leaderEffects=true;
}else if(a=="--generated"){auto family=arg();if(family!="F1")throw std::runtime_error("Only generated family F1 is implemented");c.family=ScenarioFamily::F1;}else if(a=="--gen-seed"){auto value=arg();if(value.empty()||value.find_first_not_of("0123456789")!=std::string::npos||std::stoull(value)>UINT32_MAX)throw std::runtime_error("gen-seed must be uint32");c.genSeed=uint32_t(std::stoull(value));}else if(a=="--legacy-ai"){c.drills=c.cognition=c.foundations=c.recoveryFixture=false;}else if(a=="--drills"){c.drills=c.foundations=true;c.cognition=c.recoveryFixture=false;}else if(a=="--cognition"){c.cognition=c.foundations=true;c.drills=c.recoveryFixture=false;}else if(a=="--full-vision")c.fullVision=true;else if(a=="--report-delay")c.reportDelay=std::stof(arg());else if(a=="--judgment")c.officer.judgment=std::stof(arg());else if(a=="--risk")c.officer.risk=std::stof(arg());else if(a=="--adaptability")c.officer.adaptability=std::stof(arg());else if(a=="--foundations")c.foundations=true;else if(a=="--estimate-bias")c.estimateBias=std::stof(arg());else if(a=="--recovery")c.recoveryFixture=true;else if(a=="--terrain"){int n=std::stoi(arg());if(n<0||n>1)throw std::runtime_error("Terrain must be 0..1");c.terrain=Terrain(n);}else if(a=="--evaluate")evaluate=true;else if(a=="--version"){std::cout<<BuildIdentifier()<<std::endl;return 0;}else if(a=="--doctrine"){int n=std::stoi(arg());if(n<0||n>2)throw std::runtime_error("Doctrine must be 0..2");c.doctrine=Doctrine(n);}else if(a=="--ember-doctrine"){int n=std::stoi(arg());if(n<0||n>2)throw std::runtime_error("Doctrine must be 0..2");c.emberDoctrine=Doctrine(n);}else if(a=="--approach"){int n=std::stoi(arg());if(n<0||n>2)throw std::runtime_error("Approach must be 0..2");c.approach=Approach(n);}else if(a=="--encounter"){encounter=std::stoi(arg());if(encounter<0||encounter>103)throw std::runtime_error("Encounter must be 0..103");}else if(a=="--no-mg")c.supportWeapon=false;else if(a=="--seed")c.seed=std::stoul(arg());else if(a=="--seconds")c.maxSeconds=std::stof(arg());else if(a=="--out")out=arg();else if(a=="--repeat")repeat=std::stoi(arg());else if(a=="--no-trace")d.enabled=false;else if(a=="--detail")d.detailed=true;else if(a=="--soldier")d.soldier=std::stoi(arg());else if(a=="--squad")d.squad=std::stoi(arg());else if(a=="--from")d.from=std::stof(arg());else if(a=="--to")d.to=std::stof(arg());else throw std::runtime_error("Unknown argument: "+a);}
if(!expectedMapDigest.empty()&&(!c.battlefield||std::to_string(c.battlefield->digest)!=expectedMapDigest))throw std::runtime_error("Imported map digest mismatch");
for(int n=0;n<repeat;++n){auto start=DiagnosticClock::now();auto r=Simulate(c,d,{},encounter);auto exportStart=DiagnosticClock::now();const auto digest=GameplayDigest(r);auto path=ExportBattle(r,out,BuildIdentifier(),digest);if(evaluate)ExportEvaluation(r,path);std::cout<<"seed="<<c.seed<<" repeat="<<n<<" simulation="<<r.diagnostics->total<<" export="<<DiagnosticSeconds(exportStart)<<" total="<<DiagnosticSeconds(start)<<" peak_memory_bytes="<<PeakMemory()<<" digest="<<digest<<" run="<<path<<std::endl;}
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
