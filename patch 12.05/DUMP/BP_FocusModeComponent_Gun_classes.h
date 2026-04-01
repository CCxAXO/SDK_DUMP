// BlueprintGeneratedClass BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C
// Size: 0x238 (Inherited: 0x1f0)
struct UBP_FocusModeComponent_Gun_C : UBP_FocusModeComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct UZoomMultiplierComponent* Zoom Multiplier; // 0x1f8(0x08)
	struct UFocusModeStateComponent* InADS_State; // 0x200(0x08)
	struct UEquippableStateMachineComponent* Zoom State Machine ; // 0x208(0x08)
	struct UZoomLevelStateComponent* Zoom Level 1; // 0x210(0x08)
	struct UZoomLevelStateComponent* Unzoomed State; // 0x218(0x08)
	struct UZoomLevelStateComponent* Buffered Zoom State 1; // 0x220(0x08)
	struct AGun_C* OwningGun; // 0x228(0x08)
	struct UAresAbilitySystemComponent* OwnerAttributesComponent; // 0x230(0x08)

	void IsGunJammed(bool& IsJammed); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.IsGunJammed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	bool IsEquippableInValidState(); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.IsEquippableInValidState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BindToFocusModeStates(); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.BindToFocusModeStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AreZoomStatesValid(bool& AreValid); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.AreZoomStatesValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void AreFocusModeStatesValid(bool& StatesAreValid); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.AreFocusModeStatesValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetZoomStates(struct UFocusModeStateComponent* InADSFocusModeState, struct UZoomMultiplierComponent* ZoomMultiplierComponent, struct UEquippableStateMachineComponent* ZoomStateMachineComponent, struct UZoomLevelStateComponent* ZoomLevel1Component, struct UZoomLevelStateComponent* UnzoomedStateComponent, struct UZoomLevelStateComponent* BufferedZoomState1); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.SetZoomStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddStatesToFocusModeStateMachine(); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.AddStatesToFocusModeStateMachine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupStateTransitions(); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.SetupStateTransitions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExitInADSState(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.ExitInADSState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnterInADSState(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.EnterInADSState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnZoomStarted(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.OnUnZoomStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnZoomInStarted(struct UZoomComponent* ZoomComponent, float TargetZoomLevel, bool IsInitialZoom); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.OnZoomInStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EnterActiveState(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.EnterActiveState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGunInspectStarted(); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.OnGunInspectStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSetOwner(struct AAresEquippable* Equippable, struct AActor* Owner); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.OnSetOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisablePrimaryWeaponFocusModeAttributeChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.DisablePrimaryWeaponFocusModeAttributeChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BP_FocusModeComponent_Gun(int32_t EntryPoint); // Function BP_FocusModeComponent_Gun.BP_FocusModeComponent_Gun_C.ExecuteUbergraph_BP_FocusModeComponent_Gun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

