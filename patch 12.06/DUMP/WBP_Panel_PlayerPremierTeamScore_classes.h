// WidgetBlueprintGeneratedClass WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerPremierTeamScore_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* Text_Score; // 0x3e8(0x08)
	struct FString PlayerSubject; // 0x3f0(0x10)
	bool bCollapseIfInvalidData; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UPlayerPremierTeamScoreViewModel* TeamScoreViewModel; // 0x408(0x08)
	int64_t PreviewTeamScore; // 0x410(0x08)
	struct UCommonTextStyle* TextStyle; // 0x418(0x08)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleTeamScoreChanged(int64_t TeamScore); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.HandleTeamScoreChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.HandleHasValidDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerPremierTeamScore(int32_t EntryPoint); // Function WBP_Panel_PlayerPremierTeamScore.WBP_Panel_PlayerPremierTeamScore_C.ExecuteUbergraph_WBP_Panel_PlayerPremierTeamScore // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

