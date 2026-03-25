// BlueprintGeneratedClass CollisionTracker.CollisionTracker_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct ACollisionTracker_C : ABehaviorScoreTrackerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x4e8(0x08)
	double NumTimesBlocked; // 0x4f0(0x08)

	void UpdateShooterCharacter(); // Function CollisionTracker.CollisionTracker_C.UpdateShooterCharacter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMoveBlocked(struct FHitResult BlockingHit); // Function CollisionTracker.CollisionTracker_C.HandleMoveBlocked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShooterCharacter(struct AShooterCharacter* NewShooterCharacter); // Function CollisionTracker.CollisionTracker_C.SetShooterCharacter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double CalculateFactor(enum class EMatchCompletionState CompletionState, struct FString& OverrideFactorName); // Function CollisionTracker.CollisionTracker_C.CalculateFactor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTracking(); // Function CollisionTracker.CollisionTracker_C.BeginTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterChanged(struct AShooterCharacter* NewValue); // Function CollisionTracker.CollisionTracker_C.OnCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EndTracking(); // Function CollisionTracker.CollisionTracker_C.EndTracking // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CollisionTracker(int32_t EntryPoint); // Function CollisionTracker.CollisionTracker_C.ExecuteUbergraph_CollisionTracker // (Final|UbergraphFunction) // @ game+0x1af5410
};

