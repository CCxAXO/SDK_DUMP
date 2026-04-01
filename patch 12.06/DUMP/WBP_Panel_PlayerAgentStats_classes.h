// WidgetBlueprintGeneratedClass WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerAgentStats_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UEsportsPlayerAgentStatsViewModelV2* EsportsPlayerAgentStatsViewModelV2; // 0x3e8(0x08)
	struct UAresCommonText* AgentNumGames; // 0x3f0(0x08)
	struct UImage* Dot; // 0x3f8(0x08)
	struct UImage* Image_49; // 0x400(0x08)
	struct UImage* Image_94; // 0x408(0x08)
	struct UImage* Image_AgentPortrait; // 0x410(0x08)
	struct UImage* Image_Role; // 0x418(0x08)
	struct UAresCommonText* MostPlayedAgentName; // 0x420(0x08)
	struct UAresCommonText* MostPlayedMapName; // 0x428(0x08)
	struct UAresCommonText* MostPlayedMapWinrate; // 0x430(0x08)
	struct UOverlay* Overlay_2; // 0x438(0x08)
	struct UVerticalBox* PlayerStatsPerAgent_VBox; // 0x440(0x08)
	struct UMaterial* LoadingImage; // 0x448(0x08)
	struct UEsportsPlayerAgentStatsViewModel* PlayerAgentStatsViewModel; // 0x450(0x08)
	struct UEsportsPlayerAgentStatsModel* PlayerAgentStatsModel; // 0x458(0x08)
	struct FMulticastInlineDelegate OnAgentDetailsLoaded; // 0x460(0x10)
	bool AreAgentDetailsLoaded; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FString Culture; // 0x478(0x10)

	void SetEsportsPlayerAgentStatsViewModelV2(struct UEsportsPlayerAgentStatsViewModelV2* ViewModel); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.SetEsportsPlayerAgentStatsViewModelV2 // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleForAr_AE(); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.StyleForAr_AE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithAgentStatsModelV2(struct UEsportsPlayerAgentStatsModelV2* InPlayerAgentStatsModelV2); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.InitWithAgentStatsModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMostPlayedMapWinrateUpdated(float InMostPlayedMapWinrate); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.OnMostPlayedMapWinrateUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMostPlayedMapUpdated(struct FString InMostPlayedMap); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.OnMostPlayedMapUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNumAgentGamesUpdated(int32_t InAgentNumGames); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.OnNumAgentGamesUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAgentDataAssetUpdated(struct UCharacterDataAsset* AgentDataAsset); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.OnAgentDataAssetUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAgentNameAndPortrait(struct UCharacterHandle* CharacterHandle); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.SetAgentNameAndPortrait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerAgentStats(int32_t EntryPoint); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.ExecuteUbergraph_WBP_Panel_PlayerAgentStats // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnAgentDetailsLoaded__DelegateSignature(); // Function WBP_Panel_PlayerAgentStats.WBP_Panel_PlayerAgentStats_C.OnAgentDetailsLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

