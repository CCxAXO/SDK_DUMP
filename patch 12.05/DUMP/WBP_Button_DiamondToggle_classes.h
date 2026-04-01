// WidgetBlueprintGeneratedClass WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C
// Size: 0x1bc8 (Inherited: 0x1b40)
struct UWBP_Button_DiamondToggle_C : UAresMaterialToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b40(0x08)
	struct UImage* Filler; // 0x1b48(0x08)
	struct USizeBox* Filler_SizeBox; // 0x1b50(0x08)
	struct USizeBox* IconContainerSizebox; // 0x1b58(0x08)
	struct USizeBox* IconSizeBox; // 0x1b60(0x08)
	struct UImage* Image; // 0x1b68(0x08)
	struct UImage* Image_122; // 0x1b70(0x08)
	struct UImage* ImgToggle; // 0x1b78(0x08)
	struct USizeBox* SizeBox_1; // 0x1b80(0x08)
	struct UAresButtonTextComponent* TxtPrimary; // 0x1b88(0x08)
	struct UCommonTextStyle* PrimaryTextStyle; // 0x1b90(0x08)
	double HeightOverride; // 0x1b98(0x08)
	struct FMargin InputActionPadding; // 0x1ba0(0x10)
	bool UseSpecificHeight; // 0x1bb0(0x01)
	char pad_1BB1[0x7]; // 0x1bb1(0x07)
	double ToggleIconSize; // 0x1bb8(0x08)
	double BorderSize; // 0x1bc0(0x08)

	void OnToggleStateChanged(bool bIsSelected); // Function WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C.OnToggleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnMaterialCreated(); // Function WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_DiamondToggle(int32_t EntryPoint); // Function WBP_Button_DiamondToggle.WBP_Button_DiamondToggle_C.ExecuteUbergraph_WBP_Button_DiamondToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

