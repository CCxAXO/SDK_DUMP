// WidgetBlueprintGeneratedClass HomeScreen_PC.HomeScreen_PC_C
// Size: 0x3f8 (Inherited: 0x318)
struct UHomeScreen_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAgentPromo_C* AgentPromo; // 0x320(0x08)
	struct UWBP_Panel_PromoTile_Home_C* ConvergedPromoTile; // 0x328(0x08)
	struct UEpisodeTitle_C* EpisodeTitle; // 0x330(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x338(0x08)
	struct UNightMarketPromoWidget_C* NightMarketPromoWidget; // 0x340(0x08)
	struct UWidgetSwitcher* OLD_PromoWidgetSwitcher; // 0x348(0x08)
	struct UWidgetSwitcher* OldvsConvergedPromoTileSwitcher; // 0x350(0x08)
	struct UPatchNotesWidget_C* PatchNotesWidget; // 0x358(0x08)
	struct UPickemPromo_C* PickemPromo; // 0x360(0x08)
	struct UOverlay* ProgressionPanel; // 0x368(0x08)
	struct UVerticalBox* PromoView; // 0x370(0x08)
	struct UMapPromo_C* SeasonalPromoWidget; // 0x378(0x08)
	struct UPromoWidget_C* StorePromoWidget; // 0x380(0x08)
	struct UVCTCapsulePromo_C* VCTCapsulePromo; // 0x388(0x08)
	struct UWBP_Panel_EventBanners_C* WBP_Panel_EventBanners; // 0x390(0x08)
	struct ULazyDynamicWidgetSwitcher_C* WebTile; // 0x398(0x08)
	struct TArray<struct UUserWidget*> VisiblePromoWidgets; // 0x3a0(0x10)
	bool IncludeSeasonalPromoInRotation; // 0x3b0(0x01)
	bool IncludeCurrentAgentPromotion; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FAresMainMenuNavBarData NavBarData; // 0x3b8(0x28)
	int32_t PromoRotateIndex; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct FTimerHandle PromoRotateTimerHandle; // 0x3e8(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x3f0(0x08)

	bool HandleBackRequest(); // Function HomeScreen_PC.HomeScreen_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FAresMainMenuNavBarData GetNavBarData(); // Function HomeScreen_PC.HomeScreen_PC_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Should Show Recruitment Event Promo(bool& Show); // Function HomeScreen_PC.HomeScreen_PC_C.Should Show Recruitment Event Promo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Recruitment Event(); // Function HomeScreen_PC.HomeScreen_PC_C.Init Recruitment Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheckPromoRotation(); // Function HomeScreen_PC.HomeScreen_PC_C.CheckPromoRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibilityOfPatchNotes(); // Function HomeScreen_PC.HomeScreen_PC_C.UpdateVisibilityOfPatchNotes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectNextPromoTile(); // Function HomeScreen_PC.HomeScreen_PC_C.SelectNextPromoTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetVisiblePromosAndSetVisibility(); // Function HomeScreen_PC.HomeScreen_PC_C.GetVisiblePromosAndSetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldShowNightMarketWidget(); // Function HomeScreen_PC.HomeScreen_PC_C.ShouldShowNightMarketWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ShouldShowPatchNotes(bool& Show); // Function HomeScreen_PC.HomeScreen_PC_C.ShouldShowPatchNotes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ToggleProgressionVis(); // Function HomeScreen_PC.HomeScreen_PC_C.ToggleProgressionVis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HomeScreen_PC.HomeScreen_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnConfigUpdated(struct FName& ConfigName); // Function HomeScreen_PC.HomeScreen_PC_C.OnConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBonusShopActiveChanged(bool IsBonusShopActive); // Function HomeScreen_PC.HomeScreen_PC_C.OnBonusShopActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HomeScreen_PC(int32_t EntryPoint); // Function HomeScreen_PC.HomeScreen_PC_C.ExecuteUbergraph_HomeScreen_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

