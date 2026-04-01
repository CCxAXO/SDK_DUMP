// WidgetBlueprintGeneratedClass WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C
// Size: 0x6c0 (Inherited: 0x651)
struct UWBP_Screen_ProxyShell_MiniBridge_C : UWBP_Screen_ProxyShell_Base_C {
	char pad_651[0x7]; // 0x651(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct UMainMenuNavBar_BackButton_PC_C* BackButton_PC; // 0x660(0x08)
	struct USizeBox* BackgroundSize; // 0x668(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ContextContainer; // 0x670(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* FullscreenModalOverlayContainer; // 0x678(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* MainContainer; // 0x680(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ModalContainer; // 0x688(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* PopupContainer; // 0x690(0x08)
	struct UWBP_Panel_ShellBackground_C* ShellBackground; // 0x698(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* SystemErrorContainer; // 0x6a0(0x08)
	struct UWBP_TabList_Navigation_C* WBP_TabList_Navigation; // 0x6a8(0x08)
	struct FVector2D LastViewportSize; // 0x6b0(0x10)

	void TryUpdateBackgroundSize(); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.TryUpdateBackgroundSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleBackActionEnabledChanged(bool bBackNavigationEnabled); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.HandleBackActionEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToShellViewModel(bool bShouldBind); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.BindToShellViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetBackgroundWidgetFromChild(struct UWBP_Panel_ShellBackground_C*& Background); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.GetBackgroundWidgetFromChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PopulateMenuStackMap(); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.PopulateMenuStackMap // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_ProxyShell_MiniBridge_BackButton_PC_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.BndEvt__WBP_Screen_ProxyShell_MiniBridge_BackButton_PC_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_ProxyShell_MiniBridge(int32_t EntryPoint); // Function WBP_Screen_ProxyShell_MiniBridge.WBP_Screen_ProxyShell_MiniBridge_C.ExecuteUbergraph_WBP_Screen_ProxyShell_MiniBridge // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

