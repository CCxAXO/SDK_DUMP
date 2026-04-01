// BlueprintGeneratedClass GameStateSetupComponent.GameStateSetupComponent_C
// Size: 0x202 (Inherited: 0x1f0)
struct UGameStateSetupComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x1f8(0x08)
	bool ShouldLockInLoadoutValues; // 0x200(0x01)
	bool HasEngineTicked; // 0x201(0x01)

	void DestroyDisconnectedPlayerCharacters(); // Function GameStateSetupComponent.GameStateSetupComponent_C.DestroyDisconnectedPlayerCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function GameStateSetupComponent.GameStateSetupComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnStateExitImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateTickImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateTickImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateEnterImplementation(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnEngineNextTick(); // Function GameStateSetupComponent.GameStateSetupComponent_C.OnEngineNextTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameStateSetupComponent(int32_t EntryPoint); // Function GameStateSetupComponent.GameStateSetupComponent_C.ExecuteUbergraph_GameStateSetupComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

