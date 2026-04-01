// BlueprintGeneratedClass FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct AFriendlyFireOutgoingTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	double TotalDamageToAllies; // 0x4e8(0x08)
	double TotalDamageToEnemies; // 0x4f0(0x08)

	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FriendlyFireOutgoingTracker(int32_t EntryPoint); // Function FriendlyFireOutgoingTracker.FriendlyFireOutgoingTracker_C.ExecuteUbergraph_FriendlyFireOutgoingTracker // (Final|UbergraphFunction) // @ game+0x1af5410
};

