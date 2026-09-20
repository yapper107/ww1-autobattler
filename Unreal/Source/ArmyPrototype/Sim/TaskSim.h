#pragma once
#include "BattleSim.h"
namespace army {
struct CommandRuntime;
const char* TaskStatusName(TaskStatus status);
const char* TaskCauseName(TaskCause cause);
bool TerminalTask(TaskStatus status);
bool EquivalentTask(const Assignment& old,Task kind,Vec3 position,Vec3 sector,int target=-1);
void TraceTask(Diagnostics* diagnostics,const Soldier& observer,const TaskReceipt& receipt,float time,const char* kind);
void SetTaskStatus(Soldier& soldier,TaskStatus status,TaskCause cause,float time,Diagnostics* diagnostics);
void UpdateTaskReports(Frame& frame,CommandRuntime& runtime);
// Plan 020: config and time only choose WHICH path is asked for (a covered alternative when
// the shortest one is revealed for too long); FindPath itself is untouched, and with
// Config::threatAwarePaths off this is exactly the pre-020 shortest path.
std::vector<Vec3> TaskExecutionPath(const Map& map,const Soldier& soldier,Vec3 goal,const Tactics& tactics,
    const Config& config,float time,PathChoice* choice=nullptr);
Order ExecuteTask(const Soldier& soldier,const Map& map,const Config& config,const std::vector<Vec3>& reservations,Tactics& memory,float time,DecisionAlternatives* alternatives=nullptr);
// cautiousCover is Config::threatAwarePaths: with it set, a remembered cover is not dropped
// for a movement order while rounds are still landing near him (plan 020, the user's rule).
void PrepareTaskExecution(const Soldier& soldier,Tactics& memory,float time,bool cautiousCover=false);
void ReportTaskNavigation(Soldier& soldier,bool reachable,float time,Diagnostics* diagnostics);
void EvaluateTaskExecution(Soldier& soldier,const Map& map,const Tactics& memory,float time,Diagnostics* diagnostics);
}
