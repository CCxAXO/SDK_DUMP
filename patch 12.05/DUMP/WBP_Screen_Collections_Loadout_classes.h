// WidgetBlueprintGeneratedClass WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C
// Size: 0x668 (Inherited: 0x520)
struct UWBP_Screen_Collections_Loadout_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UHorizontalBox* ArsenalContainer; // 0x528(0x08)
	struct USizeBox* CardsAndExpressionsContainer; // 0x530(0x08)
	struct UCommonCustomNavigation* ExpressionWheelCustomNavigation; // 0x538(0x08)
	struct UImage* LightingSweeps; // 0x540(0x08)
	struct USizeBox* LoadoutContainer; // 0x548(0x08)
	struct UCommonCustomNavigation* PlayerCardCustomNavigation; // 0x550(0x08)
	struct UWBP_Panel_PlayerCardArsenal_C* WBP_Panel_PlayerCardArsenal; // 0x558(0x08)
	struct UWBP_Panel_RadialSprayWheelArsenal_C* WBP_Panel_RadialSprayWheelArsenal; // 0x560(0x08)
	struct UWBP_View_WeaponLoadout_C* WBP_View_WeaponLoadout; // 0x568(0x08)
	struct UVM_WeaponSlot_C* SlotVM; // 0x570(0x08)
	struct TMap<struct UEquippableDataAsset*, enum class ArsenalLoadoutNavOverrideEnum> LoadoutGridOutboundNavLinkOverrides; // 0x578(0x50)
	struct TMap<enum class EUINavigation, struct UEquippableDataAsset*> PlayerCardOutboundNavLinkOverrides; // 0x5c8(0x50)
	struct TMap<enum class EUINavigation, struct UEquippableDataAsset*> ExpressionWheelOutboundNavLinkOverrides; // 0x618(0x50)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryCorrectCollectionsData(); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.TryCorrectCollectionsData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool OnExpressionWheelHorizontalNavigation(enum class EUINavigation NavigationType); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.OnExpressionWheelHorizontalNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool OnPlayerCardHorizontalNavigation(enum class EUINavigation NavigationType); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.OnPlayerCardHorizontalNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateArsenalLoadoutNavOverrideWidgetData(struct TMap<struct UEquippableDataAsset*, struct UUserWidget*>& NavOverrides); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.GenerateArsenalLoadoutNavOverrideWidgetData // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSubMenuClosed(struct UMenuStackEntry* ClosedEntry); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.OnSubMenuClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_Collections_Loadout(int32_t EntryPoint); // Function WBP_Screen_Collections_Loadout.WBP_Screen_Collections_Loadout_C.ExecuteUbergraph_WBP_Screen_Collections_Loadout // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

