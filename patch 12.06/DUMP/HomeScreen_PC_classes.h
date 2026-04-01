// WidgetBlueprintGeneratedClass HomeScreen_PC.HomeScreen_PC_C
// Size: 0x600 (Inherited: 0x520)
struct UHomeScreen_PC_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UAgentPromo_C* AgentPromo; // 0x528(0x08)
	struct UWBP_Panel_PromoTile_Home_C* ConvergedPromoTile; // 0x530(0x08)
	struct UEpisodeTitle_C* EpisodeTitle; // 0x538(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x540(0x08)
	struct UNightMarketPromoWidget_C* NightMarketPromoWidget; // 0x548(0x08)
	struct UWidgetSwitcher* OLD_PromoWidgetSwitcher; // 0x550(0x08)
	struct UWidgetSwitcher* OldvsConvergedPromoTileSwitcher; // 0x558(0x08)
	struct UPatchNotesWidget_C* PatchNotesWidget; // 0x560(0x08)
	struct UPickemPromo_C* PickemPromo; // 0x568(0x08)
	struct UOverlay* ProgressionPanel; // 0x570(0x08)
	struct UVerticalBox* PromoView; // 0x578(0x08)
	struct UMapPromo_C* SeasonalPromoWidget; // 0x580(0x08)
	struct UPromoWidget_C* StorePromoWidget; // 0x588(0x08)
	struct UVCTCapsulePromo_C* VCTCapsulePromo; // 0x590(0x08)
	struct UWBP_Panel_EventBanners_C* WBP_Panel_EventBanners; // 0x598(0x08)
	struct ULazyDynamicWidgetSwitcher_C* WebTile; // 0x5a0(0x08)
	struct TArray<struct UUserWidget*> VisiblePromoWidgets; // 0x5a8(0x10)
	bool IncludeSeasonalPromoInRotation; // 0x5b8(0x01)
	bool IncludeCurrentAgentPromotion; // 0x5b9(0x01)
	char pad_5BA[0x6]; // 0x5ba(0x06)
	struct FAresMainMenuNavBarData NavBarData; // 0x5c0(0x28)
	int32_t PromoRotateIndex; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct FTimerHandle PromoRotateTimerHandle; // 0x5f0(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x5f8(0x08)

	bool HandleBackRequest(); // Function HomeScreen_PC.HomeScreen_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FAresMainMenuNavBarData GetNavBarData(); // Function HomeScreen_PC.HomeScreen_PC_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool BP_OnHandleBackAction(); // Function HomeScreen_PC.HomeScreen_PC_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Should Show Recruitment Event Promo(bool& Show); // Function HomeScreen_PC.HomeScreen_PC_C.Should Show Recruitment Event Promo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Recruitment Event(); // Function HomeScreen_PC.HomeScreen_PC_C.Init Recruitment Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckPromoRotation(); // Function HomeScreen_PC.HomeScreen_PC_C.CheckPromoRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibilityOfPatchNotes(); // Function HomeScreen_PC.HomeScreen_PC_C.UpdateVisibilityOfPatchNotes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectNextPromoTile(); // Function HomeScreen_PC.HomeScreen_PC_C.SelectNextPromoTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetVisiblePromosAndSetVisibility(); // Function HomeScreen_PC.HomeScreen_PC_C.GetVisiblePromosAndSetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldShowNightMarketWidget(); // Function HomeScreen_PC.HomeScreen_PC_C.ShouldShowNightMarketWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ShouldShowPatchNotes(bool& Show); // Function HomeScreen_PC.HomeScreen_PC_C.ShouldShowPatchNotes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ToggleProgressionVis(); // Function HomeScreen_PC.HomeScreen_PC_C.ToggleProgressionVis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function HomeScreen_PC.HomeScreen_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnConfigUpdated(struct FName& ConfigName); // Function HomeScreen_PC.HomeScreen_PC_C.OnConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBonusShopActiveChanged(bool IsBonusShopActive); // Function HomeScreen_PC.HomeScreen_PC_C.OnBonusShopActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_HomeScreen_PC(int32_t EntryPoint); // Function HomeScreen_PC.HomeScreen_PC_C.ExecuteUbergraph_HomeScreen_PC // (Final|UbergraphFunction) // @ game+0x1b42740
};

