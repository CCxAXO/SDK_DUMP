// BlueprintGeneratedClass GameStateWarmupComponent.GameStateWarmupComponent_C
// Size: 0x211 (Inherited: 0x1f0)
struct UGameStateWarmupComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1f8(0x08)
	bool ShouldResetWeaponsAfterWarmup; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	double PostReadyWarmupTime; // 0x208(0x08)
	bool IsStoreEnabled; // 0x210(0x01)

	void WarmupThreeSecondsLeft(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.WarmupThreeSecondsLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void WarmupFiveSecondsLeft(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.WarmupFiveSecondsLeft // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void WarmupFinishing(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.WarmupFinishing // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStateEnterImplementation(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateTickImplementation(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateExitImplementation(); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameStateWarmupComponent(int32_t EntryPoint); // Function GameStateWarmupComponent.GameStateWarmupComponent_C.ExecuteUbergraph_GameStateWarmupComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

