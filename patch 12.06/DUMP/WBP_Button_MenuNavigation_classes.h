// WidgetBlueprintGeneratedClass WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C
// Size: 0x1b4a (Inherited: 0x1ae0)
struct UWBP_Button_MenuNavigation_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UHorizontalBox* ElementContainer; // 0x1ae8(0x08)
	struct UScaleBox* ScaleBox_2; // 0x1af0(0x08)
	struct USizeBox* SizeBox_1; // 0x1af8(0x08)
	struct UCommonButtonStyle* ButtonStyle; // 0x1b00(0x08)
	double ShearAngle; // 0x1b08(0x08)
	bool FlipContent; // 0x1b10(0x01)
	char pad_1B11[0x7]; // 0x1b11(0x07)
	struct UObject* IconImage; // 0x1b18(0x08)
	struct FText DisplayText; // 0x1b20(0x18)
	struct FMargin InputActionPadding; // 0x1b38(0x10)
	bool IsIconOnly; // 0x1b48(0x01)
	bool UpdateIconColorOnHover; // 0x1b49(0x01)

	void UpdateForIconOnly(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.UpdateForIconOnly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyInputActionPadding(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ApplyInputActionPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleInputActionVisibility(bool IsVisible); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ToggleInputActionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyIcon(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ApplyIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyText(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ApplyText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyTransform(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ApplyTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyTextStyle(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ApplyTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCurrentTextStyleChanged(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__UI_Menu_NavigationButton_InputActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.BndEvt__UI_Menu_NavigationButton_InputActionWidget_K2Node_ComponentBoundEvent_1_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_MenuNavigation(int32_t EntryPoint); // Function WBP_Button_MenuNavigation.WBP_Button_MenuNavigation_C.ExecuteUbergraph_WBP_Button_MenuNavigation // (Final|UbergraphFunction) // @ game+0x1b42740
};

