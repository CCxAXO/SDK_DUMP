// WidgetBlueprintGeneratedClass WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C
// Size: 0x1b18 (Inherited: 0x1ae0)
struct UWBP_Button_Social_Tab_Icon_Desktop_C : UWBP_Button_Social_Tab_SocialPanel_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_Panel_SocialBadgeNotification_C* BadgeNotification; // 0x1ae8(0x08)
	struct UMenuAnchor* MenuAnchor_Tooltip; // 0x1af0(0x08)
	struct UWBP_Template_AnimatedButtonContent_Social_C* WBP_Template_AnimatedButtonContent_Social; // 0x1af8(0x08)
	struct TArray<struct UAresSocialCountViewModelBase*> NotificationCountViewModelClasses; // 0x1b00(0x10)
	struct UWBP_Template_Tooltip_SocialPanelTab_C* TooltipWidgetInstance; // 0x1b10(0x08)

	struct UUserWidget* On Menu Anchor Get User Menu Content(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.On Menu Anchor Get User Menu Content // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInteractionAppearance(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnPressed(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void SetText(struct FText& InText); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.SetText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTooltipHideCompleted(); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.OnTooltipHideCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Button_Social_Tab_Icon_Desktop_MenuAnchor_Tooltip_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.BndEvt__WBP_Button_Social_Tab_Icon_Desktop_MenuAnchor_Tooltip_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Social_Tab_Icon_Desktop(int32_t EntryPoint); // Function WBP_Button_Social_Tab_Icon_Desktop.WBP_Button_Social_Tab_Icon_Desktop_C.ExecuteUbergraph_WBP_Button_Social_Tab_Icon_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

