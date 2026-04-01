// WidgetBlueprintGeneratedClass WBP_Button_ListToggle.WBP_Button_ListToggle_C
// Size: 0x1ba8 (Inherited: 0x1b40)
struct UWBP_Button_ListToggle_C : UAresMaterialToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b40(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x1b48(0x08)
	struct UHorizontalBox* Horizontal_Content; // 0x1b50(0x08)
	struct UImage* Img_Toggle; // 0x1b58(0x08)
	struct USizeBox* SB_Height; // 0x1b60(0x08)
	struct UAresButtonTextComponent* SubTextBox; // 0x1b68(0x08)
	double Height; // 0x1b70(0x08)
	struct FText SubtextContent; // 0x1b78(0x18)
	struct UWBP_Button_Basic_Toggle_C* WBP Button Basic Toggle PC; // 0x1b90(0x08)
	struct FMargin TextWrapPadding; // 0x1b98(0x10)

	void SetTogglePadding(struct FMargin Margin); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.SetTogglePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplayHeight(double Height); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.SetDisplayHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateToggleText(bool bIsSelected); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.UpdateToggleText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnToggleStateChanged(bool bIsSelected); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.OnToggleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnMaterialCreated(); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_ListToggle(int32_t EntryPoint); // Function WBP_Button_ListToggle.WBP_Button_ListToggle_C.ExecuteUbergraph_WBP_Button_ListToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

