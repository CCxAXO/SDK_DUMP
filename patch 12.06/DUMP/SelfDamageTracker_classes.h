// BlueprintGeneratedClass SelfDamageTracker.SelfDamageTracker_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct ASelfDamageTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	double TotalDamageToSelf; // 0x4e8(0x08)
	double TotalDamageToEnemies; // 0x4f0(0x08)

	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function SelfDamageTracker.SelfDamageTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BeginTracking(); // Function SelfDamageTracker.SelfDamageTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EndTracking(); // Function SelfDamageTracker.SelfDamageTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SelfDamageTracker(int32_t EntryPoint); // Function SelfDamageTracker.SelfDamageTracker_C.ExecuteUbergraph_SelfDamageTracker // (Final|UbergraphFunction) // @ game+0x1b42740
};

