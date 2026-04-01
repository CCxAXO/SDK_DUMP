// BlueprintGeneratedClass BaseTwoTeamGameState.BaseTwoTeamGameState_C
// Size: 0x1030 (Inherited: 0x1011)
struct ABaseTwoTeamGameState_C : ABaseGameState_C {
	char pad_1011[0x7]; // 0x1011(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1018(0x08)
	struct UBombTeamComponent* BlueTeam; // 0x1020(0x08)
	struct UBombTeamComponent* RedTeam; // 0x1028(0x08)

	bool TeamsHaveSwitched(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.TeamsHaveSwitched // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseTwoTeamGameState(int32_t EntryPoint); // Function BaseTwoTeamGameState.BaseTwoTeamGameState_C.ExecuteUbergraph_BaseTwoTeamGameState // (Final|UbergraphFunction) // @ game+0x1b42740
};

