// WidgetBlueprintGeneratedClass CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C
// Size: 0x470 (Inherited: 0x318)
struct UCombatReportPlayerIdentity_Desktop_C : UWBP_CombatReportPlayerIdentity_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAccountLevel_C* AccountLevelWidget; // 0x320(0x08)
	struct UImage* CharacterIcon; // 0x328(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* CharacterIconSlot_Lazy; // 0x330(0x08)
	struct UImage* CharacterNameBackground; // 0x338(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* CombatReportBorder_Lazy; // 0x340(0x08)
	struct UAresCommonText* DisplayName; // 0x348(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x350(0x08)
	struct UImage* IconBackground; // 0x358(0x08)
	struct UWidgetSwitcher* LevelorRankSwitcher; // 0x360(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x368(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PlayercardSlot_Lazy; // 0x370(0x08)
	struct UWBP_Panel_PlayerName_C* PlayerNameWidget; // 0x378(0x08)
	struct UAresCommonText* PlayerTitleWidget; // 0x380(0x08)
	struct USizeBox* SeasonRankOverlay; // 0x388(0x08)
	struct ULazyDynamicWidgetSwitcher_C* SeasonWinBadgeSwitcher; // 0x390(0x08)
	bool Ally; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FLinearColor AllyBackgroundColor; // 0x39c(0x10)
	struct FLinearColor EnemyBackgroundColor; // 0x3ac(0x10)
	struct FLinearColor MeBackgroundColor; // 0x3bc(0x10)
	bool IsCompetitiveMatch; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)
	struct UCharacterDataAsset* Character; // 0x3d0(0x08)
	struct FString Subject; // 0x3d8(0x10)
	bool Me; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct USeasonWinBadge_C* SeasonWinBadge; // 0x3f0(0x08)
	int32_t AccountLevel; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct UPlayerCardDataAsset* PlayerCard; // 0x400(0x08)
	struct UPlayerTitleDataAsset* PlayerTitle; // 0x408(0x08)
	struct ULevelBorderDataAsset* LevelBorder; // 0x410(0x08)
	bool HideAccountLevel; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct AShooterPlayerState* PlayerState; // 0x420(0x08)
	struct FPremierPrestige PremierData; // 0x428(0x48)

	void InitPremier(); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.InitPremier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(bool Ally, bool Me, bool IsCompetitiveMatch, struct UCharacterDataAsset* Character, struct AShooterPlayerState* PlayerState, struct FString Subject); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHideAccountLevel(bool HideAccountLevel); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.SetHideAccountLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(bool Ally, bool Me, bool IsCompetitiveMatch, struct UCharacterDataAsset* Character, struct AShooterPlayerState* PlayerState, struct FString Subject); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromLoadingPlayer(bool IsCompetitiveMatch, bool Ally, struct FLoadingScreenPlayer Player); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.InitFromLoadingPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitInternal(); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.InitInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAllyAndMe(bool Me); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.UpdateAllyAndMe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateName(struct FString Name); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SeasonWinBadgeSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.BndEvt__SeasonWinBadgeSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CombatReportPlayerIdentity_Desktop(int32_t EntryPoint); // Function CombatReportPlayerIdentity_Desktop.CombatReportPlayerIdentity_Desktop_C.ExecuteUbergraph_CombatReportPlayerIdentity_Desktop // (Final|UbergraphFunction) // @ game+0x1b42740
};

