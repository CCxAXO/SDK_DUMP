// WidgetBlueprintGeneratedClass IdentityPlayerCardWithAccountLevel.IdentityPlayerCardWithAccountLevel_C
// Size: 0x370 (Inherited: 0x318)
struct UIdentityPlayerCardWithAccountLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAccountLevel_C* AccountLevelWidget; // 0x320(0x08)
	struct UWidgetSwitcher* LevelorRankSwitcher; // 0x328(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x330(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PlayercardSlot_Lazy; // 0x338(0x08)
	struct UOverlay* PlayerCardWithAccountLevel; // 0x340(0x08)
	struct USizeBox* SeasonRankOverlay; // 0x348(0x08)
	struct ULazyDynamicWidgetSwitcher_C* SeasonWinBadgeSwitcher; // 0x350(0x08)
	struct USeasonWinBadge_C* SeasonWinBadge; // 0x358(0x08)
	struct FString Subject; // 0x360(0x10)

	void InitPremier(); // Function IdentityPlayerCardWithAccountLevel.IdentityPlayerCardWithAccountLevel_C.InitPremier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(bool IsCompetativeMatch, struct FString Subject); // Function IdentityPlayerCardWithAccountLevel.IdentityPlayerCardWithAccountLevel_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SeasonWinBadgeSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function IdentityPlayerCardWithAccountLevel.IdentityPlayerCardWithAccountLevel_C.BndEvt__SeasonWinBadgeSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_IdentityPlayerCardWithAccountLevel(int32_t EntryPoint); // Function IdentityPlayerCardWithAccountLevel.IdentityPlayerCardWithAccountLevel_C.ExecuteUbergraph_IdentityPlayerCardWithAccountLevel // (Final|UbergraphFunction) // @ game+0x1b42740
};

