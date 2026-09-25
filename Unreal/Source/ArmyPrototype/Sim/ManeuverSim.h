#pragma once
#include "BattleSim.h"
namespace army {
// perEnemy (plan 028 Stage 2a, Config::coverReports for Legacy): one slot per shooter and enemy, as the
// cognition controller always keeps, so a gun that switches targets does not wipe its count.
void RememberDelivery(Soldier& soldier,const FireDelivery& delivery,bool perEnemy=false);
// primaryAge (plan 028 Stage 3c): when >=0, the primary is chosen only among tracks seen within it
// (Config::coverGraduated passes CoverGradeConstants.primaryAge); -1 is the unchanged gate.
bool CoveringCrossing(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time,float primaryAge=-1);
// sector (plan 030 M-S7 P4, Config::coverSector for Legacy): the credit reads the whole set (SectorThreats) instead of
// the primary alone: at least CoverRequestConstants.creditRounds credited rounds on its threats together, and every one
// of them seen firing within CoverQuietConstants.quietSeconds under credited fire of its own.
bool CoveringPath(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge=-1,bool sector=false);
// Plan 030 M-S7 P4 (Config::coverSector): every known track (the leader's WithTracks view, seen within primaryAge when
// >=0) overlooking the path, the set QuietCrossing reads, loudest first: by when the leader last saw or was told of
// its fire (his contact's or report's lastFireAt), then by id; at most PinTable::sectorMax.
std::vector<int> SectorThreats(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge=-1);
// Plan 028 Stage 0: the dominant known track overlooking a crossing, as CoveringPath chooses it
// (knowledge is the leader's WithTracks view at this time); -1 when no known track overlooks it.
int CoveringPrimary(const Soldier& knowledge,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge=-1);
// Plan 028 Stage 0: a diagnostic twin of CoveringPath. It reads the same leader knowledge and
// returns why the crossing is or is not covered; pass always equals CoveringPath. Never an input.
struct CoveringExplanation {
    bool pathEmpty=false,fresh=false,pass=false;
    int primary=-1;float primaryAge=-1,primaryUncertainty=-1;bool primaryMG=false;Vec3 primaryPosition{};
    int overlooking=0;bool mgOverlooks=false;   // every known track overlooking the crossing
    int overlookingFresh=0;bool mgFresh=false;  // ... of them, those seen within the last 10 s
    int rounds=0,lateRounds=0,otherRounds=0;    // credited (<=6 s), expired (6-20 s) on the primary, fresh elsewhere
    float creditAge=-1;                         // age of the newest credited round, -1 when none
};
CoveringExplanation CoveringExplain(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge=-1,bool sector=false);
// Plan 028 Stage 3c (Config::coverGraduated): the danger of a crossing nobody covers, from the
// leader's knowledge only. freshPrimary: a track seen within CoverGradeConstants.primaryAge
// overlooks it (the gate would wait on it); otherwise the threat is stale and nothing is held.
// high (computed only when danger is asked for): a machine gun seen within dangerAge overlooks it,
// or highTracks such tracks do, or its exposure reaches highExposure.
struct CoverGrade {
    bool freshPrimary=false,graded=false,high=false,mgFresh=false;
    int overlookingFresh=0;
};
CoverGrade GradeCrossing(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float exposure,float time,bool danger);
float CrossingExposure(const Soldier& leader,const Map& map,Vec3 from,Vec3 to,float time);
struct Diagnostics;
// Plan 028 Stage 1 (Config::coverRequests, Legacy only): the leader asks for covering fire on the
// enemy `primary` of his own knowledge (WithTracks) overlooking the crossing from->to, renewing the
// squad's request (cmd.coverRequest) for CoverRequestConstants.lifetime, and tasks who answers: at
// most CoverRequestConstants.riflemen stationary riflemen whose own spot already bears on that enemy
// (nearest first, roster slot on a tie; those already tasked keep it while they still qualify), never
// a mover, a flank leg, the rifle group's leader or the gun (which is tasked by PlanSquad). The movers'
// ordered stations go with it for the shooters' friendly-fire hold. mode 0: a commit wait (the movers
// head for `to`); 1: a running route bound (each for his bound station); 2: an internal bound (the
// moving fire team for its move). Adds no wait anywhere. Diagnostics get a cover_request row.
// crossing (plan 028 Stage 4): the crossing's path from `from`, kept on the request for the gun and the
// shifted men to keep off. shift (Config::coverShift, the commit wait only): when fewer than two
// riflemen bear on the threat and the gun does not, men in cover without a line may be shifted up
// to CoverSupplyConstants.shiftRange to a covered place that bears (request.shift / shiftTo; they are
// tasked too); one already on his way keeps it while it still bears. Diagnostics get cover_shift rows.
// rifleBase (plan 030 M-S5, Config::coverRifleBase): when the squad's gun has no station bearing on the
// threat (or no able gun), a rifleman settled in cover (going nowhere, not pinned) whose cover's firing
// point bears on it is tasked too, though not on his ordered place (the covering pair, as the bound's base
// of fire); CoverRifleBaseConstants.
void RaiseCoverRequest(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,SquadCommand& command,
    int primary,Vec3 from,Vec3 to,int mode,const char* gate,float time,Diagnostics* diagnostics=nullptr,
    const std::vector<Vec3>* crossing=nullptr,bool shift=false,bool rifleBase=false,bool sector=false,float primaryAge=-1);
// sector (plan 030 M-S7 P4, Config::coverSector): the request also carries the crossing's whole set (SectorThreats,
// with primaryAge), loudest first. When it is larger than PinTable::sectorGunCapacity the covering pair takes the
// nearest threats other than the primary (the nearest to `from`, as many as the set exceeds the capacity, at most
// CoverRequestConstants.riflemen), each given to the nearest rifleman settled in cover (the rifle-base rule) who bears
// on it; the gun works the rest (gunSector). Leader's knowledge only.
// Plan 030 M-S5 (S5, Config::coverQuietRelease): the crossing's quiet release, from the leader's knowledge
// only (his WithTracks view, his contacts' and reports' lastFireAt, his delivery reports). overlooking:
// known tracks (seen within primaryAge when >=0) overlooking the path, the geometry CoveringPrimary uses;
// loud: those of them neither quiet for quietSeconds nor quiet under credited fire (CoverQuietConstants).
// pass: at least one overlooks and none is loud.
struct QuietVerdict {int overlooking=0,loud=0;bool pass=false;};
QuietVerdict QuietCrossing(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time,float primaryAge=-1);
// Plan 028 Stage 4: whether a move from->to keeps off the crossing (beyond the ground the group stands
// on: no nearer than CoverSupplyConstants.crossingClear to it, never across it), and whether the way
// from->to exists, is no longer than maxLength and reveals the walker (a copy of the leader's knowledge
// placed at `from`, with the walker's pace) to one known enemy for at most `revealed` seconds.
bool OffCrossing(const std::vector<Vec3>& crossing,Vec3 from,Vec3 to);
bool CoveredWay(const Soldier& walker,const Map& map,Vec3 from,Vec3 to,float maxLength,float revealed,float time,float* seconds=nullptr);
// A place from which a man could fire on this track: within a station's range, a clear line onto it.
bool BearsOnTrack(const Map& map,Vec3 place,const Contact& track);
void RememberFireArea(Soldier& soldier,const FireArea& area);
float FireDanger(const Soldier& soldier,Vec3 position,float time);
bool HasMachineGun(const std::vector<Soldier>& squad);
// Plan 021: a bound merges the planner's twelve-metre segments up to the bound length; the
// remaining segments are the queued chain. Exposure and the crossing cover the whole bound.
int MergeBoundStage(const TacticalRoute& route,int from,float length);
float BoundSeconds(const TacticalRoute& route,int from,int to,float* exposedSeconds=nullptr);
float BoundExposure(const TacticalRoute& route,int from,int to);
std::vector<Vec3> BoundCrossing(const TacticalRoute& route,int from,int to);
float MovementPressure(const Soldier& leader,const std::vector<Soldier>& squad,float time);
void PauseSquadMovement(const Soldier& leader,const std::vector<Soldier>& squad,SquadCommand& command,MoveBlock reason,float time);
// Plan 026 P4b: the squad's current bound belongs to a schema-4 "go now" commit that is still
// running (its route, its current destination, before its deadline). Always false otherwise.
bool PolicyReleased(const SquadCommand& command,float time);
bool RifleCoverReady(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,float time);
const char* ManeuverName(Maneuver maneuver);
const char* ProgressName(SquadProgress progress);
struct ProgressRuntime {
    bool initialized=false;
    int members=0, rounds=0;
    float lastFireAt=-100;
    Vec3 target{}, lastRecovery{};
    float distance=0, lastProgressAt=0, lastMotionAt=0, nextRecovery=0;
};
void UpdateSquadProgress(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const std::vector<Vec3>& friendlyApproaches,SquadCommand& command,ProgressRuntime& runtime,float time,bool recover=true);
// All danger comes from processed stimuli/reports, and congestion from friendly plans.
// fallen (plan 030 K-1, Config::retireFallen): when the leader passed in is his knowledge without the tracks of men
// seen to fall (WithoutFallen), his whole knowledge; a running bound watched only by such men is no longer exposed.
void UpdateManeuver(const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,const std::vector<Vec3>& friendlyApproaches,SquadCommand& command,float time,Diagnostics* diagnostics=nullptr,
    const Soldier* fallen=nullptr);
// Plan 030 K-1: every known track overlooking the path (CoveringPrimary's geometry, any age) is one the leader knows
// was seen to fall: `living` is his WithoutFallen view, `known` his whole knowledge.
bool OnlyFallenOverlook(const Soldier& living,const Soldier& known,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time);
}
