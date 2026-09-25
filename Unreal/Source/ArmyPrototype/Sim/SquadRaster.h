#pragma once
// Plan 026 stage 4c: the map view of the schema-4 squad policy.
//
// Grid: global 6 m cells anchored at (-halfWidth,-halfHeight), map-axis aligned (no rotation).
// Cell (x,y) spans [-halfWidth+6x, -halfWidth+6x+6) by [-halfHeight+6y, -halfHeight+6y+6); it is
// on the map when 0<=x<ceil(2*halfWidth/6) and 0<=y<ceil(2*halfHeight/6).
//
// Channels of one cell, each 0..255:
//   0 blocked fraction   ground-level movement-blocking obstacle area / 36 m2, capped, *254
//   1 obstacle height    highest obstacle top above groundBase, *12.7 (20 m = 254)
//   2 cover positions    CoverPositions shelters in the cell, *32, capped at 255
//   3 known enemies      sum of TrackConfidence of the leader's known tracks (WithTracks), *64
//   4 known automatic    min(1, sum of confidence of known automatic-weapon tracks) *255
//   5 reported fire      FireDanger(leader, cell centre at the origin's height) *255 (leader.fireAreas)
//   6 friendlies         own squad's active men plus leader.allies known and younger than 10 s, *32
//   7 platoon geometry   96 per other squad's waypoint (friendlyApproaches), 64 for cmd.mission,
//                        64 for an unexpired platoon order position; summed, capped at 255
// An off-map cell is flagged as channel 0 = channel 1 = 255 (an on-map cell never exceeds 254
// there) with every other channel zero.
//
// Static channels 0..2 come from the leader's known map and are cached per geometry revision on
// Map::rasterStatic (the CoverPositions pattern). Dynamic channels 3..7 are rebuilt per decision
// from the leader's own knowledge only; nothing here receives the other team's soldiers.
//
// The window is 16x16 cells around the rifle-group origin's cell (origin cell at index 8), laid out
// channel-major: byte[c*256 + j*16 + i] is cell (originX-8+i, originY-8+j), channel c.
//
// Per-row samples (schema-4 feature columns; 97..100 stay reserved and zero):
//   101..108  the 8 channels of the destination's cell, /255
//   109..116  the mean of each channel over the 3x3 cells around it, sum/(9*255)
//   117..124  the 8 channels of the cell of the midpoint between the origin and the first bound's
//             destination, /255
//   125..126  the origin's offset inside its own cell, x then y, in [0,1)
//   127       spare, zero
// HOLD samples the origin cell (destination and midpoint are the origin); KEEP copies its row.
#include "BattleSim.h"
#include <array>
#include <cstdint>
#include <vector>

namespace army {
struct SquadCommand;
constexpr int SquadRasterColumn=101,SquadRasterStaticChannelCount=3;
struct SquadRasterStatic {
    uint64_t key=0;
    int width=0,height=0;
    std::vector<uint8_t> cells; // (y*width+x)*3+channel, channels 0..2
};
// Static channels of the map's current geometry; cached on the map per revision.
const SquadRasterStatic& SquadRasterStaticChannels(const Map& map);
using SquadRasterPixel=std::array<uint8_t,SquadRasterChannels>;
struct SquadRasterView {
    struct Mark{int x=0,y=0;float value=0;};
    const Soldier* leader=nullptr; // the leader himself: his fire areas feed channel 5
    const SquadRasterStatic* fixed=nullptr;
    float halfWidth=0,halfHeight=0,eyeZ=0,time=0;
    int originX=0,originY=0;
    float offsetX=0,offsetY=0;
    std::vector<Mark> enemies,automatic,friendlies,geometry;
    bool OnMap(int x,int y) const{return x>=0&&y>=0&&x<fixed->width&&y<fixed->height;}
    int CellX(float x) const;
    int CellY(float y) const;
    SquadRasterPixel Cell(int x,int y) const;
};
// knowledge boundary: leader (his WithTracks tracks, fireAreas, allies, platoonOrder), his own squad,
// his known map, the other squads' waypoints and his own command. origin is the rifle-group origin.
SquadRasterView BuildSquadRasterView(const Soldier& leader,const std::vector<Soldier>& squad,const Map& knownMap,
    const std::vector<Vec3>& friendlyApproaches,const SquadCommand& cmd,Vec3 origin,float time);
// The 16x16x8 window around the origin, channel-major (SquadRasterBytes bytes).
std::vector<uint8_t> SquadRasterWindow(const SquadRasterView& view);
// Fills columns 101..127 of one row (see above); boundMidpoint is where the first bound is half done.
void SquadRasterSamples(const SquadRasterView& view,Vec3 destination,Vec3 boundMidpoint,SquadFeatures& row);
}
