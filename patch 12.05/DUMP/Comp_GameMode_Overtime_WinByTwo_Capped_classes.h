// BlueprintGeneratedClass Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C
// Size: 0x168 (Inherited: 0xe9)
struct UComp_GameMode_Overtime_WinByTwo_Capped_C : UComp_GameMode_Overtime_WinByTwo_C {
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	int32_t MaxOvertimeRoundsCapped_Default; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UBaseTeamComponent* OvertimePriorityTeam; // 0x100(0x08)
	enum class EAresTeamRole OvertimePriorityVoteResult; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FText AttackersGainedPriorityText; // 0x110(0x18)
	struct FText DefendersGainedPriorityTest; // 0x128(0x18)
	bool bHasOvertimePriorityBeenGranted; // 0x140(0x01)
	enum class EVoteState OvertimePriorityVoteState; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct FMulticastInlineDelegate OnOvertimePriorityVoteStateChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnOvertimePriorityGranted; // 0x158(0x10)

	void OnRep_OvertimePriorityVoteState(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.OnRep_OvertimePriorityVoteState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRep_bHasOvertimePriorityBeenGranted(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.OnRep_bHasOvertimePriorityBeenGranted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Auth Change Teams After Vote(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.Auth Change Teams After Vote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldSwitchSides(bool& ShouldSwitchSides); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Auth Create Overtime Priority Vote(struct AShooterPlayerState* Requester, struct AOTPriority_Vote_C*& Vote); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.Auth Create Overtime Priority Vote // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Auth Start Overtime Priority Vote(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.Auth Start Overtime Priority Vote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOvertimeNotifyText(struct FText& NotifyText); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.GetOvertimeNotifyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsOvertimeAtMaxRounds(bool& AtMaxRounds); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.IsOvertimeAtMaxRounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetNumPointsToWinGame(int32_t& NumPoints); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.GetNumPointsToWinGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HasTeamWonOvertime(struct UBaseTeamComponent* Team, bool& HasTeamWon); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.HasTeamWonOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PlayOvertimeAnnouncementVO(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.PlayOvertimeAnnouncementVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Check Overtime Priority(struct UBaseTeamComponent* Winning Team); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.Check Overtime Priority // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSwitchSides(); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.OnSwitchSides // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Auth Update Overtime Component Vote State(struct AGameplayVote* Vote, enum class EVoteState NewState); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.Auth Update Overtime Component Vote State // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_GameMode_Overtime_WinByTwo_Capped(int32_t EntryPoint); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.ExecuteUbergraph_Comp_GameMode_Overtime_WinByTwo_Capped // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnOvertimePriorityGranted__DelegateSignature(bool bPriorityGranted); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.OnOvertimePriorityGranted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOvertimePriorityVoteStateChanged__DelegateSignature(enum class EVoteState NewVoteState); // Function Comp_GameMode_Overtime_WinByTwo_Capped.Comp_GameMode_Overtime_WinByTwo_Capped_C.OnOvertimePriorityVoteStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

