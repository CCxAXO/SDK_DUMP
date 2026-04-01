// BlueprintGeneratedClass TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C
// Size: 0x362 (Inherited: 0x338)
struct UTestBranch_EffectsActive_StateComponent_C : UTestBranch_StateComponent_C {
	struct TArray<struct UGameplayEffect*> RequiredEffects; // 0x338(0x10)
	bool RequireAllEffects; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TArray<struct UGameplayEffect*> ForceFailEffects; // 0x350(0x10)
	bool bMustBeValidAndAlive; // 0x360(0x01)
	bool bIncludeDerivedEffectTypes; // 0x361(0x01)

	void TryGetTargetActor(struct UStateTransitionContext* TransitionContext, struct AActor*& Actor); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.TryGetTargetActor // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool HasEffect(struct UGameplayEffect* InputPin, struct AActor* Target); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.HasEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CheckFailEffects(struct AActor* TargetActor, bool& NoFailEffects); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.CheckFailEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckRequiredEffects(struct AActor* TargetActor, bool& HasRequiredEffects); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.CheckRequiredEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool StateTest(struct UStateTransitionContext* StateTransitionContext); // Function TestBranch_EffectsActive_StateComponent.TestBranch_EffectsActive_StateComponent_C.StateTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
};

