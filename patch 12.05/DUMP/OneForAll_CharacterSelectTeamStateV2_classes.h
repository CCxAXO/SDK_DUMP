// WidgetBlueprintGeneratedClass OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C
// Size: 0x3c8 (Inherited: 0x320)
struct UOneForAll_CharacterSelectTeamStateV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UOneForAll_CharacterSelectPlayerStateV2_C* Player1; // 0x328(0x08)
	struct UOneForAll_CharacterSelectPlayerStateV2_C* Player2; // 0x330(0x08)
	struct UOneForAll_CharacterSelectPlayerStateV2_C* Player3; // 0x338(0x08)
	struct UOneForAll_CharacterSelectPlayerStateV2_C* Player4; // 0x340(0x08)
	struct UOneForAll_CharacterSelectPlayerStateV2_C* Player5; // 0x348(0x08)
	struct TArray<None> PlayerWidgets; // 0x350(0x10)
	struct UPregameTeamModel* TeamModel; // 0x360(0x08)
	struct FRandomStream Rand; // 0x368(0x18)
	int32_t LotterySelectTotalTicks; // 0x380(0x04)
	int32_t LotterySelectCurrentTick; // 0x384(0x04)
	struct FMulticastInlineDelegate OnLotteryComplete; // 0x388(0x10)
	int32_t Player Count; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UAkAudioEvent* LotteryTickSound; // 0x3a0(0x08)
	struct UAkAudioEvent* LotteryCompleteSound; // 0x3a8(0x08)
	struct UCurveFloat* TickCurve; // 0x3b0(0x08)
	struct TArray<struct UWidgetSwitcher*> LotterySwitchers; // 0x3b8(0x10)

	void GetDelayForCurrentTick(double& Delay Seconds); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.GetDelayForCurrentTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Get Player Index With Character(struct UCharacterDataAsset* Character, int32_t& Index); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.Get Player Index With Character // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayers(); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.UpdatePlayers // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerAddedOrRemoved(struct UPregamePlayerModel* AddedPlayer); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.HandlePlayerAddedOrRemoved // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameTeamModel* TeamModel, struct UPregameViewController* PregameViewController); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartLotterySelect(int32_t TargetIndex); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.StartLotterySelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LotterySelectTick(); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.LotterySelectTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void VoteWinnerSelected(struct UCharacterDataAsset* Character); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.VoteWinnerSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OneForAll_CharacterSelectTeamStateV2(int32_t EntryPoint); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.ExecuteUbergraph_OneForAll_CharacterSelectTeamStateV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnLotteryComplete__DelegateSignature(); // Function OneForAll_CharacterSelectTeamStateV2.OneForAll_CharacterSelectTeamStateV2_C.OnLotteryComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

