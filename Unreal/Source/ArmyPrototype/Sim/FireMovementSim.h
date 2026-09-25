#pragma once
// Plan 031 Stage D: the squad fire-and-movement drill (Config::fireAndMovement, Legacy only, per team).
//
// While a squad is in contact, every deliberate move of its rifle group is made under the fire of its machine gun:
//  - Legs. A running bound whose Legacy length (35 m) is overlooked by a fresh known enemy is cut to the route stages
//    that fit in legLength (FmBoundStage); an advance in contact is cut into legs of legLength ending at cover when
//    the ground offers it (UpdateFireMovement). At a leg end the men get down (ApplyFireMovement).
//  - Leg threats: the leader's own tracks (his WithTracks view; never an observer fact) seen within threatAge that
//    overlook the leg (FmLegThreats), loudest first.
//  - Base of fire: the gun's station bears on the threats (his muzzle line onto their known positions, clear of the
//    movers' lane), prefers cover from them and does not demand protection from every known enemy. It is kept while it
//    still bears (through keepGrace within a leg, and while the group is on a rush); a gun held up somewhere that bears
//    is set where he stands; otherwise he displaces (and may sprint; a cover he took on the way does not hold him).
//    The must-move flag defect (W-1) is repaired for the drill's teams (PlanSim), and outside the drill's legs and spells
//    the Legacy plan keeps a station the gun holds or is going to while it bears (PlanSquad).
//  - Fire on the right men: the gun's order carries the threats as its sector payload (the plan 030 M-S7 machinery:
//    he works the ones he can see a burst each, and their last known places while the track still fits his spread).
//  - The gate: a man leaves only when he has heard his own gun fire, set at its station, on a threat of its sector within
//    fireWindow (Soldier::fmHeardAt). KNOWLEDGE ASSUMPTION: the men of a squad hear their own gun, which is a few tens of
//    metres away and louder than anything else on the field, at once and without a report; the round only counts when
//    it is fired within setRadius of the station he was ordered to and at a threat of the sector his order names, so
//    what is heard is "our gun is set and working the men watching our move". Nothing about the enemy is read: the
//    gun's target is his own fire solution (his knowledge and the payload's tracks). A man already on a rush he began
//    through the open gate finishes it; one waiting holds in cover at hand (or goes to cover within waitReach) and
//    fires at what he sees.
//  - Deadline: the leader hears the gun too and sees his men stay (Soldier::fmWaitSince); when men have waited deadline
//    seconds without the gun heard, whatever legs came and went, the leg falls back to Legacy (the marker leaves the
//    orders; the men go), and so does every following leg with men waiting until the gun is heard again. A man who has
//    waited backstop x deadline goes on his own (a squad between leaders).
//  - Hold spells: in contact between legs (the leader knows fresh enemies watching where his men stand or were sent), the
//    drill keeps governing the gun (the same station rules against those watchers) and every move of a man of the group
//    or of its leader (a reposition on Hold, a call-up, a window, a man going to the rear) waits for the gun's fire just
//    as a leg does. A spell that fell back re-arms when the gun is heard or deadline seconds later.
//  - Emergency moves (cover under fire, pull-back, retreat, the EmergencyCover, Suppressed, Flanked and Relocate paths)
//    are never gated.
// Evidence rows (kind "fire_movement", traced runs only): leg planned/started/ended, gate open/closed, gun station
// set/kept/displaced, fallback, rearmed.
#include "BattleSim.h"
#include "TacticalRouteSim.h"
namespace army {
struct Diagnostics;
// The last route stage of a leg from `from`: the stages whose travel together stays within `length`, at least one.
int FmLegStage(const TacticalRoute& route,int from,float length);
// The running bound's last stage from `from` under the drill: the leg (FmLegStage at Config::fmLeg) when a leg threat
// overlooks the Legacy bound (MergeBoundStage at boundLength) from `origin`, else the Legacy bound. `leader` is the
// leader's knowledge (the plan's view).
int FmBoundStage(const Soldier& leader,const Map& map,const Config& config,const TacticalRoute& route,int from,Vec3 origin,float time);
// The leg threats: known tracks of the leader (WithTracks) seen within threatAge overlooking the path from `from`
// (a clear line from the track's eye to a man's chest at a sample within threatReach), loudest first (his last sighting
// or report of their fire), then nearest the leg's middle, then id; at most PinTable::sectorMax.
std::vector<int> FmLegThreats(const Soldier& leader,const Map& map,Vec3 from,const std::vector<Vec3>& path,float time);
// The leader's part, every Legacy plan of a squad of a drill team (PlanSim), after the manoeuvre, the coordination
// and the stations: the move in hand, its leg, the leg's threats, the gate as he hears it, the deadline, the gun's
// station and its payload, and the evidence rows. `view` is his knowledge as the plan reads it (WithoutFallen with
// Config::retireFallen), `leader` himself (what he hears).
void UpdateFireMovement(const Soldier& view,const Soldier& leader,const std::vector<Soldier>& squad,const Map& map,
    const Config& config,SquadCommand& command,float time,Diagnostics* diagnostics);
// The order marker the drill puts on the rifle group's orders now (gun -1: none).
FireMovementOrder FmGroupMarker(const SquadCommand& command);
// The tasks whose moves the drill gates: every task of the rifle group but none and a pull-back (an emergency move).
bool FmGatedTask(Task task);
// The soldier's part (ChooseOrder, for an order carrying the marker): the gate before a departure, the wait in cover at
// the leg start, getting down at the leg end; the gun takes his station's cover. Everything else is ChooseOrderPlain.
Order ApplyFireMovement(const Soldier& soldier,const Map& map,const Config& config,const std::vector<Vec3>& friends,
    Tactics& memory,float time,DecisionAlternatives* alternatives);
// A round the drill's gun has just fired at `enemy`: whether it counts as the base of fire working (fired within
// setRadius of his ordered station, his payload live, the enemy one of his sector).
bool FmGunRound(const Soldier& gun,int enemy,float time);
}
