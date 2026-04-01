// BlueprintGeneratedClass GameStateLoadInComponent.GameStateLoadInComponent_C
// Size: 0x218 (Inherited: 0x1f0)
struct UGameStateLoadInComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1f8(0x08)
	double TransitionScreenGracePeriod; // 0x200(0x08)
	bool LevelStreamingComplete; // 0x208(0x01)
	bool TransitionGracePeriodEnded; // 0x209(0x01)
	bool AllPlayersAreReady; // 0x20a(0x01)
	char pad_20B[0x5]; // 0x20b(0x05)
	double TransitionScreenGracePeriodStartTime; // 0x210(0x08)

	double GetTransitionScreenGracePeriod(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.GetTransitionScreenGracePeriod // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRoundPlayersReady_Event(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnRoundPlayersReady_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTransitionGracePeriodEnded(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnTransitionGracePeriodEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckLoadInComplete(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.CheckLoadInComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckLevelStreaming(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.CheckLevelStreaming // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnStateExit (GameStateWarmup)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateExit (GameStateWarmup) // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStateExit (GameStateIntro)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateExit (GameStateIntro) // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStateEnterImplementation(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateTickImplementation(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateExitImplementation(); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameStateLoadInComponent(int32_t EntryPoint); // Function GameStateLoadInComponent.GameStateLoadInComponent_C.ExecuteUbergraph_GameStateLoadInComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

