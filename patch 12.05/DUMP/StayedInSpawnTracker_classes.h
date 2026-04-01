// BlueprintGeneratedClass StayedInSpawnTracker.StayedInSpawnTracker_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct AStayedInSpawnTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	int32_t NumAFKRounds; // 0x4e8(0x04)
	int32_t NumStayedInSpawnRounds; // 0x4ec(0x04)

	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.CalculateFactor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_StayedInSpawnTracker(int32_t EntryPoint); // Function StayedInSpawnTracker.StayedInSpawnTracker_C.ExecuteUbergraph_StayedInSpawnTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

