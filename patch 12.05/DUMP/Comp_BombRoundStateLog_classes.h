// BlueprintGeneratedClass Comp_BombRoundStateLog.Comp_BombRoundStateLog_C
// Size: 0xe8 (Inherited: 0xe0)
struct UComp_BombRoundStateLog_C : URoundStateLogComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)

	struct FString AuthGetTeamLogName(struct FName RawTeamName); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.AuthGetTeamLogName // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void AuthAreSidesSwapped(bool& bOutSidesAreSwapped); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.AuthAreSidesSwapped // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnBuyPhaseStarted(); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.OnBuyPhaseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_BombRoundStateLog(int32_t EntryPoint); // Function Comp_BombRoundStateLog.Comp_BombRoundStateLog_C.ExecuteUbergraph_Comp_BombRoundStateLog // (Final|UbergraphFunction) // @ game+0x1af5410
};

