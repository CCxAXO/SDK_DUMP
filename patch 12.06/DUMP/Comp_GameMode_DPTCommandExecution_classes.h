// BlueprintGeneratedClass Comp_GameMode_DPTCommandExecution.Comp_GameMode_DPTCommandExecution_C
// Size: 0xf0 (Inherited: 0xd8)
struct UComp_GameMode_DPTCommandExecution_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct FString> CommandsToRunOnSetup; // 0xe0(0x10)

	void OnGameModeSetup(); // Function Comp_GameMode_DPTCommandExecution.Comp_GameMode_DPTCommandExecution_C.OnGameModeSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteCommands(struct TArray<struct FString>& ListOfCommands); // Function Comp_GameMode_DPTCommandExecution.Comp_GameMode_DPTCommandExecution_C.ExecuteCommands // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_GameMode_DPTCommandExecution(int32_t EntryPoint); // Function Comp_GameMode_DPTCommandExecution.Comp_GameMode_DPTCommandExecution_C.ExecuteUbergraph_Comp_GameMode_DPTCommandExecution // (Final|UbergraphFunction) // @ game+0x1b42740
};

