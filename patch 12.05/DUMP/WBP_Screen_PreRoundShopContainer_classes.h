// WidgetBlueprintGeneratedClass WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C
// Size: 0x390 (Inherited: 0x320)
struct UWBP_Screen_PreRoundShopContainer_C : UShopScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UGameInfoHUD_Master_C* GameInfoHUD_Master; // 0x328(0x08)
	struct UButton* Quit_Btn; // 0x330(0x08)
	struct UImage* Quit_Button_Image; // 0x338(0x08)
	struct UWBP_Panel_PreRoundShop_C* Shop; // 0x340(0x08)
	struct UShopPlayerModel* SelfPlayerModel; // 0x348(0x08)
	struct UCoordinatedShooterUIModel* ShooterUIModel; // 0x350(0x08)
	struct UShopScreenCoordinator* ShopScreenCoordinator; // 0x358(0x08)
	struct FLinearColor color_hover; // 0x360(0x10)
	struct FLinearColor Color_Default; // 0x370(0x10)
	struct UObject* InputMethodInterface; // 0x380(0x08)
	struct UCoordinatedHUDModel* CachedHUDModel; // 0x388(0x08)

	struct UShopContentWidget* GetShopContentWidget(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.GetShopContentWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetGameInfoHudVisuals(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetGameInfoHudVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide Team Roster Visuals(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.Hide Team Roster Visuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBrushTint(struct UImage* Control, struct FLinearColor SpecifiedColor); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetBrushTint // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelfPlayer(struct UShopPlayerModel* Player); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetSelfPlayer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPurchasables(struct TArray<struct UShopPurchasableModel*>& Purchasables); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetPurchasables // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeammatePlayers(struct TArray<struct UShopPlayerModel*>& Teammates); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetTeammatePlayers // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCoordinatedShooterUIModel(struct UCoordinatedShooterUIModel* CoordinatedShooterUIModel); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetCoordinatedShooterUIModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShopScreenCoordinator(struct UShopScreenCoordinator* Coordinator); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetShopScreenCoordinator // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.BndEvt__Quit_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnClosed(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.OnClosed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOpened(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.OnOpened // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDirty(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.SetDirty // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamCompUpdated(); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.OnTeamCompUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PreRoundShopContainer(int32_t EntryPoint); // Function WBP_Screen_PreRoundShopContainer.WBP_Screen_PreRoundShopContainer_C.ExecuteUbergraph_WBP_Screen_PreRoundShopContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

