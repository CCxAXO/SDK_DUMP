// BlueprintGeneratedClass AFKTracker.AFKTracker_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct AAFKTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	int32_t NumAFKRounds; // 0x4e8(0x04)
	int32_t NumStayedInSpawnRounds; // 0x4ec(0x04)

	double CalculateFactorForPlatform(struct FString& OverrideFactorName); // Function AFKTracker.AFKTracker_C.CalculateFactorForPlatform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function AFKTracker.AFKTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function AFKTracker.AFKTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function AFKTracker.AFKTracker_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function AFKTracker.AFKTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AFKTracker(int32_t EntryPoint); // Function AFKTracker.AFKTracker_C.ExecuteUbergraph_AFKTracker // (Final|UbergraphFunction) // @ game+0x1af5410
};

