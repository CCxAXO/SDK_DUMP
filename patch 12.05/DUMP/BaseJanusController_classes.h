// BlueprintGeneratedClass BaseJanusController.BaseJanusController_C
// Size: 0x1000 (Inherited: 0xfa0)
struct ABaseJanusController_C : AReplayPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfa0(0x08)
	struct UComp_Controller_DeafenManager_C* Comp_Controller_DeafenManager; // 0xfa8(0x08)
	struct ULocationalEffectManagerComponent* LocationalEffectManager; // 0xfb0(0x08)
	struct UReplayEffectComponent* ReplayEffect; // 0xfb8(0x08)
	double MaxCatchupSpeed; // 0xfc0(0x08)
	bool IsScoreboardVisible; // 0xfc8(0x01)
	char pad_FC9[0x7]; // 0xfc9(0x07)
	struct FMulticastInlineDelegate OnScoreboardUpdated; // 0xfd0(0x10)
	struct FColor BlueTeamColor; // 0xfe0(0x04)
	struct FColor RedTeamColor; // 0xfe4(0x04)
	int32_t SpeedMultiplierIndex; // 0xfe8(0x04)
	bool SpeedChangeAwait; // 0xfec(0x01)
	char pad_FED[0x3]; // 0xfed(0x03)
	struct UTimelineUIViewModel* VM_TimelineUI; // 0xff0(0x08)
	struct UReplayUIVisibilityViewModel* VM_ReplayUIVisibilityWheel; // 0xff8(0x08)

	void SetReplayWheelVM(struct UReplayUIVisibilityViewModel* ReplayUIVisibilityWheel); // Function BaseJanusController.BaseJanusController_C.SetReplayWheelVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetReplayWheelVM(struct UReplayUIVisibilityViewModel*& Replay UI Visibility Wheel VM); // Function BaseJanusController.BaseJanusController_C.GetReplayWheelVM // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Set Timeline VM(struct UTimelineUIViewModel* TimelineUI); // Function BaseJanusController.BaseJanusController_C.Set Timeline VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTimelineUIViewModel(struct UTimelineUIViewModel*& TimelineUIViewModel); // Function BaseJanusController.BaseJanusController_C.GetTimelineUIViewModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnScreenTransitionUpdated_Event_1(bool TransitionActive); // Function BaseJanusController.BaseJanusController_C.OnScreenTransitionUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScoreboardUpdatedEvent(bool Visible); // Function BaseJanusController.BaseJanusController_C.OnScoreboardUpdatedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateOutlines(); // Function BaseJanusController.BaseJanusController_C.UpdateOutlines // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BaseJanusController.BaseJanusController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnOptionsScreenToggled_Event_1(bool bIsVisible); // Function BaseJanusController.BaseJanusController_C.OnOptionsScreenToggled_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveBindings_Comp_FXC_AudioBasic(struct UComp_FXC_AudioBasic_C* Component); // Function BaseJanusController.BaseJanusController_C.RemoveBindings_Comp_FXC_AudioBasic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddBindings_Comp_FXC_AudioBasic(struct UComp_FXC_AudioBasic_C* Component); // Function BaseJanusController.BaseJanusController_C.AddBindings_Comp_FXC_AudioBasic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind InputActions(bool Bind); // Function BaseJanusController.BaseJanusController_C.Bind InputActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BaseJanusController.BaseJanusController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void InputAction SpectateNext(); // Function BaseJanusController.BaseJanusController_C.InputAction SpectateNext // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InputAction SpectatePrev(); // Function BaseJanusController.BaseJanusController_C.InputAction SpectatePrev // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnReplayWheelInputDown(); // Function BaseJanusController.BaseJanusController_C.OnReplayWheelInputDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnReplayWheelInputUp(); // Function BaseJanusController.BaseJanusController_C.OnReplayWheelInputUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddBindings_BaseVO(struct UActorComponent* Component); // Function BaseJanusController.BaseJanusController_C.AddBindings_BaseVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveBindings_BaseVO(struct UActorComponent* Component); // Function BaseJanusController.BaseJanusController_C.RemoveBindings_BaseVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseJanusController(int32_t EntryPoint); // Function BaseJanusController.BaseJanusController_C.ExecuteUbergraph_BaseJanusController // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnScoreboardUpdated__DelegateSignature(); // Function BaseJanusController.BaseJanusController_C.OnScoreboardUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

