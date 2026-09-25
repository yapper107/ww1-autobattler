#include "SquadPolicy.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>
// Reads feature rows (96, 97 or 128 numbers by the model's schema) and prints each row's logit;
// a schema-4 model prints two per line, through the gates then go now.
// Plan 026 4c: an optional third argument names a file with one line per feature row: the row's
// map-view raster in hex (2048 bytes), or "-" for none. The native pooling and embedding are applied.
int main(int argc,char** argv) {
    if(argc<2||argc>4)return 2;
    std::ios::sync_with_stdio(false);std::cin.tie(nullptr);
    std::ifstream file(argv[1]);std::ostringstream source;source<<file.rdbuf();std::string error;
    auto policy=army::LoadSquadPolicy(source.str(),error);
    if(!policy){std::cerr<<error<<'\n';return 1;}
    std::cout<<std::setprecision(9);
    std::ifstream inputFile,rasterFile;
    if(argc>=3){inputFile.open(argv[2]);if(!inputFile)return 4;}
    if(argc==4){rasterFile.open(argv[3]);if(!rasterFile)return 5;}
    std::istream& input=argc>=3?inputFile:std::cin;
    army::SquadFeatures features{};
    std::string hex,cached;army::SquadRasterContribution contribution;std::vector<uint8_t> raster;
    while(input>>features[0]){
        for(int i=1;i<policy->features;++i)if(!(input>>features[i]))return 3;
        if(argc==4) {
            if(!(rasterFile>>hex))return 6;
            if(hex!=cached){ // rows of one decision share a raster
                cached=hex;raster.clear();
                if(hex!="-"&&(!army::SquadRasterFromHex(hex,raster)||raster.size()!=size_t(army::SquadRasterBytes)))return 7;
                contribution=army::SquadRasterEmbedding(*policy,raster);
            }
        }
        if(policy->heads>1){const auto both=army::SquadLogits(*policy,features,argc==4?&contribution:nullptr);std::cout<<both[0]<<' '<<both[1]<<'\n';}
        else std::cout<<army::SquadLogit(*policy,features)<<'\n';
    }
}
