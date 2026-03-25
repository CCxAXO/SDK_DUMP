// BlueprintGeneratedClass MouseMovementTracker.MouseMovementTracker_C
// Size: 0x540 (Inherited: 0x4e0)
struct AMouseMovementTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct FRotator PrevRotator; // 0x4e8(0x18)
	struct TArray<double> PitchDeltas; // 0x500(0x10)
	struct TArray<double> YawDeltas; // 0x510(0x10)
	int32_t CheckCount; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	double PitchTotal; // 0x528(0x08)
	double YawTotal; // 0x530(0x08)
	struct FTimerHandle CheckCameraPositionTimerHandle; // 0x538(0x08)

	void CalculateSD(struct TArray<double>& Values, double Total, int32_t N, double& StandardDeviation); // Function MouseMovementTracker.MouseMovementTracker_C.CalculateSD // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void CheckCameraPosition(); // Function MouseMovementTracker.MouseMovementTracker_C.CheckCameraPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function MouseMovementTracker.MouseMovementTracker_C.CalculateFactor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function MouseMovementTracker.MouseMovementTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function MouseMovementTracker.MouseMovementTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MouseMovementTracker(int32_t EntryPoint); // Function MouseMovementTracker.MouseMovementTracker_C.ExecuteUbergraph_MouseMovementTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

