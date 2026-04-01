// BlueprintGeneratedClass FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct AFriendlyFireIncomingTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	double TotalDamageFromAllies; // 0x4e8(0x08)
	double DamageThreshold; // 0x4f0(0x08)

	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FriendlyFireIncomingTracker(int32_t EntryPoint); // Function FriendlyFireIncomingTracker.FriendlyFireIncomingTracker_C.ExecuteUbergraph_FriendlyFireIncomingTracker // (Final|UbergraphFunction) // @ game+0x1af5410
};

