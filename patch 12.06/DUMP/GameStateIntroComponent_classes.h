// BlueprintGeneratedClass GameStateIntroComponent.GameStateIntroComponent_C
// Size: 0x171 (Inherited: 0x160)
struct UGameStateIntroComponent_C : UBaseGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x160(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x168(0x08)
	bool ProceedToGameplayOverride; // 0x170(0x01)

	void ReceiveBeginPlay(); // Function GameStateIntroComponent.GameStateIntroComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnStateEnterImplementation(); // Function GameStateIntroComponent.GameStateIntroComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateTickImplementation(); // Function GameStateIntroComponent.GameStateIntroComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnProceedToGameplayOverrideTimer(); // Function GameStateIntroComponent.GameStateIntroComponent_C.OnProceedToGameplayOverrideTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameStateIntroComponent(int32_t EntryPoint); // Function GameStateIntroComponent.GameStateIntroComponent_C.ExecuteUbergraph_GameStateIntroComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

