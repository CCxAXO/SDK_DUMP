// BlueprintGeneratedClass BP_FocusModeComponent.BP_FocusModeComponent_C
// Size: 0x1f0 (Inherited: 0x140)
struct UBP_FocusModeComponent_C : UFocusModeComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct UFocusModeStateMachineComponent* FocusModeStateMachine; // 0x148(0x08)
	struct UFocusModeStateComponent* FocusModeDisabledState; // 0x150(0x08)
	struct UFocusModeStateComponent* FocusModeInactiveState; // 0x158(0x08)
	struct UFocusModeStateComponent* FocusModeActiveState; // 0x160(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x168(0x08)
	bool IsForceWalkEnabled; // 0x170(0x01)
	bool SettingChangedEventRegistered; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)
	struct TArray<struct UStateComponent*> ValidStates; // 0x178(0x10)
	struct UEquippableStateMachineComponent* PrimaryEquippableStateMachine; // 0x188(0x08)
	bool bUseValidStatesArray; // 0x190(0x01)
	bool bUseHoldInput; // 0x191(0x01)
	char pad_192[0x6]; // 0x192(0x06)
	struct FEffectID Focus Vignette FXC Handle; // 0x198(0x18)
	struct AEffectContainer* Focus Mode Vignette FXC; // 0x1b0(0x08)
	struct AEffectContainer* FocusMode Lines FXC; // 0x1b8(0x08)
	struct FEffectID Focus Lines FXC Handle; // 0x1c0(0x18)
	enum class EAimModeType DefaultAimMode; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct AEffectContainer* FocusModeStartSound; // 0x1e0(0x08)
	struct AEffectContainer* FocusModeEndSound; // 0x1e8(0x08)

	void ApplyFocusFXC(bool PlayEnterFocusSound, bool ShowFocusBrackets); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.ApplyFocusFXC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Play Focus Sound(bool EnteringFocus); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.Play Focus Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Toggle Focus Mode Brackets(bool bShowBrackets); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.Toggle Focus Mode Brackets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToFocusModeStates(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.BindToFocusModeStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveFocusFXC(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.RemoveFocusFXC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddStatesToFocusModeStateMachine(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.AddStatesToFocusModeStateMachine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindSettingsFromPreviousOwner(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.UnbindSettingsFromPreviousOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpValidEquippableStates(struct UEquippableStateMachineComponent* EquippableStateMachine, struct TArray<struct UScriptStateComponent*>& ValidEquippableStates); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.SetUpValidEquippableStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool IsEquippableInValidState(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.IsEquippableInValidState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetupStateTransitions(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.SetupStateTransitions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AreFocusModeStatesValid(bool& StatesAreValid); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.AreFocusModeStatesValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeComponent(struct UFocusModeStateMachineComponent* StateMachine, struct UFocusModeStateComponent* DisabledState, struct UFocusModeStateComponent* InactiveState, struct UFocusModeStateComponent* ActiveState); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.InitializeComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSetOwner(struct AAresEquippable* Equippable, struct AActor* Owner); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.OnSetOwner // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnForceWalkWhileFocusedOrZoomedSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.OnForceWalkWhileFocusedOrZoomedSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EquippableStateChanged(struct UStateComponent* OldState, struct UStateComponent* NewState); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.EquippableStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnterActiveState(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.EnterActiveState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHoldInputSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.OnHoldInputSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EnterDisabledState(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.EnterDisabledState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnterInactiveState(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.EnterInactiveState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDefaultAimModeSettingChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.OnDefaultAimModeSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayDelayedFocusSound(); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.PlayDelayedFocusSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BP_FocusModeComponent(int32_t EntryPoint); // Function BP_FocusModeComponent.BP_FocusModeComponent_C.ExecuteUbergraph_BP_FocusModeComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

