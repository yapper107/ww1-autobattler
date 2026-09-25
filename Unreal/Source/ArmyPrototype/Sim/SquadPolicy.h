#pragma once
// Plan 024: the actor sees only fixed numeric features and legal-action masks.
// Combat state, teacher scores and diagnostics are not arguments to inference.
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace army {
// Plan 026 P4: schema 4 widens every row to 128 columns (97..100 reserved for bound phase,
// bound age, release and seconds since consultation; 101.. for per-row raster samples, stage 4c)
// and gives every row two timing heads: 0 = through the readiness gates, 1 = go now.
// Schema 2 (96) and 3 (97) artifacts load into the wider arrays zero-filled and score only
// their own columns, so their logits are unchanged.
constexpr int SquadFeatureCount=128, SquadHiddenCount=32, SquadActionLimit=32, SquadTimingCount=2;
// Map view (stage 4c): a 16x16 window of 6 m cells with 8 channels, 4x4 average-pooled into
// 128 inputs of a 16-unit embedding that is added to every row's hidden layer.
constexpr int SquadRasterSize=16, SquadRasterChannels=8, SquadRasterPool=4, SquadRasterUnits=16;
constexpr float SquadRasterCell=6.f;
constexpr int SquadRasterPooled=(SquadRasterSize/SquadRasterPool)*(SquadRasterSize/SquadRasterPool)*SquadRasterChannels;
constexpr int SquadRasterBytes=SquadRasterSize*SquadRasterSize*SquadRasterChannels;
using SquadFeatures=std::array<float,SquadFeatureCount>;
struct SquadObservation {
    std::vector<SquadFeatures> actions;
    std::vector<bool> legal;
    // Schema 4 only (empty otherwise): legality of the go-now timing of each row. A schema-4
    // action is the flat index row*2+timing.
    std::vector<bool> legalNow;
    std::vector<uint8_t> raster; // stage 4c, schema 4 only: SquadRasterBytes bytes; empty means no map view
};
struct SquadPolicy {
    std::array<float,SquadFeatureCount*SquadHiddenCount> weights{};
    std::array<float,SquadHiddenCount> bias{},output{};
    float outputBias=0;
    // Schema 4: the go-now head and the raster embedding (zero for schema 2/3).
    std::array<float,SquadHiddenCount> nowOutput{};
    float nowOutputBias=0;
    std::array<float,SquadRasterUnits*SquadRasterPooled> rasterWeights{};
    std::array<float,SquadRasterUnits> rasterBias{};
    std::array<float,SquadHiddenCount*SquadRasterUnits> rasterProjection{};
    int schema=2;
    int features=96; // columns this artifact scores: 96, 97 or 128
    int heads=1;     // 1, or SquadTimingCount for schema 4
    int candidates=0; // 0: original two per family; 30: diverse six per family
    uint64_t digest=0;
    std::string source;
};
// What the map view adds to each hidden unit. Absent (the default) adds nothing at all.
struct SquadRasterContribution {
    bool present=false;
    std::array<float,SquadHiddenCount> hidden{};
};
// Returns null and an error for malformed, oversized or unsupported artifacts.
std::shared_ptr<const SquadPolicy> LoadSquadPolicy(const std::string& source,std::string& error);
// Stage 4c: 4x4 integer average pool of the channel-major 16x16x8 raster (byte c*256+j*16+i;
// pooled input c*16+(j/4)*4+i/4 = sum of its 16 bytes / 4080, one division), a 16-unit ReLU
// embedding and its 32x16 projection onto the hidden layer, every product rounded like SquadLogit.
// An empty or wrong-sized raster, or a policy below schema 4, contributes nothing (present=false).
SquadRasterContribution SquadRasterEmbedding(const SquadPolicy& policy,const std::vector<uint8_t>& raster);
std::array<float,SquadRasterPooled> SquadRasterPooling(const std::vector<uint8_t>& raster);
// Lower-case hex of the raster bytes, and back (false for odd length or a non-hex digit).
std::string SquadRasterHex(const std::vector<uint8_t>& raster);
bool SquadRasterFromHex(const std::string& hex,std::vector<uint8_t>& raster);
// The through-the-gates head (the only head of schema 2/3).
float SquadLogit(const SquadPolicy& policy,const SquadFeatures& features);
// Both heads; the second is zero-weighted unless the policy is schema 4.
std::array<float,SquadTimingCount> SquadLogits(const SquadPolicy& policy,const SquadFeatures& features,
    const SquadRasterContribution* raster=nullptr);
// Schema 2/3: a row index. Schema 4: a flat index row*2+timing; ties go to the first legal
// flat index. -1 means malformed input, never a legal move (a raster is accepted only by a
// schema-4 policy and only with exactly SquadRasterBytes bytes).
int SelectSquadAction(const SquadPolicy& policy,const SquadObservation& observation,
    std::vector<float>* logits=nullptr);
// Action count and legality of an observation: flat when it carries go-now legality.
size_t SquadActionCount(const SquadObservation& observation);
bool SquadActionLegal(const SquadObservation& observation,int index);
struct SquadDecision {
    float time=0;int schema=2,squad=0,leader=0,candidates=0,teacher=0,selected=0; // schema 4: flat indices
    bool neural=false;
    std::string outcome="unclassified";
    SquadObservation observation;
    std::vector<float> teacherScores,logits;
};
std::string SquadDecisionJson(const SquadDecision& decision);
}
