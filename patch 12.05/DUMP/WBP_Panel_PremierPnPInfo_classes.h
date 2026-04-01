// WidgetBlueprintGeneratedClass WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C
// Size: 0x3f4 (Inherited: 0x318)
struct UWBP_Panel_PremierPnPInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPremierPlayoffAndPromotionInfoViewModel* PremierPlayoffAndPromotionInfoViewModel; // 0x320(0x08)
	struct UTextBlock* DemotionRulesText; // 0x328(0x08)
	struct UTextBlock* FinalizationTime; // 0x330(0x08)
	struct UOverlay* FullInfoWidget; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_2; // 0x348(0x08)
	struct UImage* Image_3; // 0x350(0x08)
	struct UImage* Image_115; // 0x358(0x08)
	struct UImage* Image_135; // 0x360(0x08)
	struct UImage* Image_221; // 0x368(0x08)
	struct UVerticalBox* InfoContainer; // 0x370(0x08)
	struct UImage* Loader; // 0x378(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x380(0x08)
	struct UTextBlock* NumTeams; // 0x388(0x08)
	struct UOverlay* PlayoffRules; // 0x390(0x08)
	struct UTextBlock* PlayoffRulesText; // 0x398(0x08)
	struct UVerticalBox* PlayoffSection; // 0x3a0(0x08)
	struct UImage* PremierIcon; // 0x3a8(0x08)
	struct UImage* PremierIconSmall; // 0x3b0(0x08)
	struct UOverlay* PromotionRulesInfo; // 0x3b8(0x08)
	struct UTextBlock* PromotionRulesText; // 0x3c0(0x08)
	struct UVerticalBox* PromotionSection; // 0x3c8(0x08)
	struct UOverlay* StageInfoSection; // 0x3d0(0x08)
	struct UTextBlock* StageName; // 0x3d8(0x08)
	struct UImage* TournamentTypeIconSmall; // 0x3e0(0x08)
	struct FDateTime LeaderboardPromotionFinalizationDatetime; // 0x3e8(0x08)
	int32_t LeaderboardFinalizationWeekNumber; // 0x3f0(0x04)

	void SetPremierPlayoffAndPromotionInfoViewModel(struct UPremierPlayoffAndPromotionInfoViewModel* ViewModel); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.SetPremierPlayoffAndPromotionInfoViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset VM Bindings(); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Reset VM Bindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set ViewModel(struct UPremierPlayoffAndPromotionInfoViewModel* New VM); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Set ViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind to ViewModel(bool Bind); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Bind to ViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle SeasonDataAsset Updated(struct UPremierSeasonDataAsset* New PremierSeasonDataAsset); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Handle SeasonDataAsset Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierDivision(int32_t New PremierDivision); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Set PremierDivision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierConferenceID(struct FGuid New PremierConferenceID); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Set PremierConferenceID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierSeasonID(struct FGuid New PremierSeasonID); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Set PremierSeasonID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Division Threshold Info(struct UPremierDivisionThresholdModel* New Division Threshold); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Update Division Threshold Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayoffInfo(); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.UpdatePlayoffInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Finalization Info(); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Update Finalization Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PremierPnPInfo(int32_t EntryPoint); // Function WBP_Panel_PremierPnPInfo.WBP_Panel_PremierPnPInfo_C.ExecuteUbergraph_WBP_Panel_PremierPnPInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

