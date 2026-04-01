// WidgetBlueprintGeneratedClass WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_StandingsEntryContainer_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* VB_StandingsContainer; // 0x3e8(0x08)
	struct UEsportsStandingsViewModel* StandingsViewModel; // 0x3f0(0x08)
	int32_t DesignerNumTeamsToShow; // 0x3f8(0x04)
	int32_t Num Teams Currently Displayed; // 0x3fc(0x04)
	struct UEsportsStandingsViewModelV2* StandingsViewModelV2; // 0x400(0x08)
	bool bIsAlphaGroup; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FString StageID; // 0x410(0x10)
	struct FMulticastInlineDelegate OnHasValidDataLoadedChanged; // 0x420(0x10)
	struct FMulticastInlineDelegate OnError; // 0x430(0x10)

	void OnStandingsError(); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.OnStandingsError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStandingsHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.OnStandingsHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEsportsRankingTeamViewModelsChanged(struct TArray<struct UEsportsRankingTeamViewModel*>& UpdatedRankingsList); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.OnEsportsRankingTeamViewModelsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStageID(struct FString InStageID); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.SetStageID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetData(struct UEsportsStandingsViewModel* StandingsViewModel); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearTeams(); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.ClearTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamRankUpdated(int32_t Rank, struct UEsportsTeamViewModel* TeamViewModel); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.OnTeamRankUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_StandingsEntryContainer(int32_t EntryPoint); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.ExecuteUbergraph_WBP_Panel_StandingsEntryContainer // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnError__DelegateSignature(); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.OnError__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHasValidDataLoadedChanged__DelegateSignature(struct UWBP_Panel_StandingsEntryContainer_C* Widget, bool bLoadingCompleted); // Function WBP_Panel_StandingsEntryContainer.WBP_Panel_StandingsEntryContainer_C.OnHasValidDataLoadedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

