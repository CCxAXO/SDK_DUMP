// WidgetBlueprintGeneratedClass WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C
// Size: 0x398 (Inherited: 0x318)
struct UWBP_Panel_SwissAdvance_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UAresCommonRichText* Text_Advance; // 0x328(0x08)
	struct UAresCommonRichText* Text_AdvanceStage; // 0x330(0x08)
	struct UAresCommonRichText* Text_SectionScore; // 0x338(0x08)
	struct UBorder* TopBar; // 0x340(0x08)
	struct UWBP_Panel_SwissTeamPlacementInfo_C* WBP_Panel_SwissTeamPlacementInfo; // 0x348(0x08)
	struct UWBP_Panel_SwissTeamPlacementInfo_C* WBP_Panel_SwissTeamPlacementInfo_2; // 0x350(0x08)
	struct UWBP_Panel_SwissTeamPlacementInfo_C* WBP_Panel_SwissTeamPlacementInfo_3; // 0x358(0x08)
	struct UWBP_Panel_SwissTeamPlacementInfo_C* WBP_Panel_SwissTeamPlacementInfo_4; // 0x360(0x08)
	struct TArray<struct UEsportsMatchupTeamViewModel*> TeamViewModels; // 0x368(0x10)
	struct TArray<struct UWBP_Panel_SwissTeamPlacementInfo_C*> LogoWidgets; // 0x378(0x10)
	struct TArray<struct UEsportsStandingTeamViewModel*> TeamViewModelsV2; // 0x388(0x10)

	void InitWithViewModelsV2(struct TArray<struct UEsportsStandingTeamViewModel*>& InStandingTeamViewModels, bool IsAdvancing, int32_t NumGamesNeeded, struct FString StageName); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.InitWithViewModelsV2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetText(bool bIsAdvancing, int32_t NumGamesNeeded, struct FString StageName); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style Card(bool IsAdvancing); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.Style Card // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModels(struct TArray<struct UEsportsMatchupTeamViewModel*>& InTeamViewModels, bool IsAdvancing, int32_t NumGamesNeeded, struct FString StageName); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.InitWithViewModels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SwissAdvance(int32_t EntryPoint); // Function WBP_Panel_SwissAdvance.WBP_Panel_SwissAdvance_C.ExecuteUbergraph_WBP_Panel_SwissAdvance // (Final|UbergraphFunction) // @ game+0x1b42740
};

