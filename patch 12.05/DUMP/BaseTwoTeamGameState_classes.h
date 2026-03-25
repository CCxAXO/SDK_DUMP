// BlueprintGeneratedClass BaseTwoTeamGameState.BaseTwoTeamGameState_C
// Size: 0x1018 (Inherited: 0x1000)
struct ABaseTwoTeamGameState_C : ABaseGameState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1000(0x08)
	struct UBombTeamComponent* BlueTeam; // 0x1008(0x08)
	struct UBombTeamComponent* RedTeam; // 0x1010(0x08)

	bool TeamsHaveSwitched(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.TeamsHaveSwitched // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseTwoTeamGameState(int32_t EntryPoint); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ExecuteUbergraph_BaseTwoTeamGameState // (Final|UbergraphFunction) // @ game+0x1af5410
};

