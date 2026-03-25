// WidgetBlueprintGeneratedClass PremierPnPInfo.PremierPnPInfo_C
// Size: 0x3f4 (Inherited: 0x318)
struct UPremierPnPInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* DemotionRulesText; // 0x320(0x08)
	struct UTextBlock* FinalizationTime; // 0x328(0x08)
	struct UOverlay* FullInfoWidget; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image_2; // 0x340(0x08)
	struct UImage* Image_3; // 0x348(0x08)
	struct UImage* Image_115; // 0x350(0x08)
	struct UImage* Image_135; // 0x358(0x08)
	struct UImage* Image_221; // 0x360(0x08)
	struct UVerticalBox* InfoContainer; // 0x368(0x08)
	struct UImage* Loader; // 0x370(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x378(0x08)
	struct UTextBlock* NumTeams; // 0x380(0x08)
	struct UOverlay* PlayoffRules; // 0x388(0x08)
	struct UTextBlock* PlayoffRulesText; // 0x390(0x08)
	struct UVerticalBox* PlayoffSection; // 0x398(0x08)
	struct UImage* PremierIcon; // 0x3a0(0x08)
	struct UImage* PremierIconSmall; // 0x3a8(0x08)
	struct UOverlay* PromotionRulesInfo; // 0x3b0(0x08)
	struct UTextBlock* PromotionRulesText; // 0x3b8(0x08)
	struct UVerticalBox* PromotionSection; // 0x3c0(0x08)
	struct UOverlay* StageInfoSection; // 0x3c8(0x08)
	struct UTextBlock* StageName; // 0x3d0(0x08)
	struct UImage* TournamentTypeIconSmall; // 0x3d8(0x08)
	struct UPremierSeasonModelOld* PremierSeasonModel; // 0x3e0(0x08)
	struct FDateTime LeaderboardPromotionFinalizationDatetime; // 0x3e8(0x08)
	int32_t LeaderboardFinalizationWeekNumber; // 0x3f0(0x04)

	void UpdateDivisionThresholdsInfo(struct FGuid SeasonID, struct FGuid ConferenceID, int32_t Division); // Function PremierPnPInfo.PremierPnPInfo_C.UpdateDivisionThresholdsInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayoffInfo(); // Function PremierPnPInfo.PremierPnPInfo_C.UpdatePlayoffInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Finalization Info(); // Function PremierPnPInfo.PremierPnPInfo_C.Update Finalization Info // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Stage Info(struct FGuid SeasonID); // Function PremierPnPInfo.PremierPnPInfo_C.Update Stage Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Info(struct FGuid SeasonID, struct FGuid ConferenceID, int32_t Division); // Function PremierPnPInfo.PremierPnPInfo_C.Update Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierPnPInfo.PremierPnPInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierPnPInfo.PremierPnPInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PremierPnPInfo.PremierPnPInfo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierPnPInfo(int32_t EntryPoint); // Function PremierPnPInfo.PremierPnPInfo_C.ExecuteUbergraph_PremierPnPInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

