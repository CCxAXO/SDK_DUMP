// BlueprintGeneratedClass MainMenuGameMode.MainMenuGameMode_C
// Size: 0x578 (Inherited: 0x560)
struct AMainMenuGameMode_C : AMainMenuGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UAud_Base_UI_Component_C* Aud_Base_UI_Component; // 0x568(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x570(0x08)

	void AudSetupComponents(); // Function MainMenuGameMode.MainMenuGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function MainMenuGameMode.MainMenuGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MainMenuGameMode(int32_t EntryPoint); // Function MainMenuGameMode.MainMenuGameMode_C.ExecuteUbergraph_MainMenuGameMode // (Final|UbergraphFunction) // @ game+0x1af5410
};

