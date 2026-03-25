// WidgetBlueprintGeneratedClass WBP_Button_DiamondToggle_RichText.WBP_Button_DiamondToggle_RichText_C
// Size: 0x1b60 (Inherited: 0x1b40)
struct UWBP_Button_DiamondToggle_RichText_C : UAresMaterialToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b40(0x08)
	struct UImage* ImgToggle; // 0x1b48(0x08)
	struct UAresButtonRichTextComponent* TxtPrimary; // 0x1b50(0x08)
	struct UAresButtonRichTextComponent* TxtSecondary; // 0x1b58(0x08)

	void OnMaterialCreated(); // Function WBP_Button_DiamondToggle_RichText.WBP_Button_DiamondToggle_RichText_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnToggleStateChanged(bool bIsSelected); // Function WBP_Button_DiamondToggle_RichText.WBP_Button_DiamondToggle_RichText_C.OnToggleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_DiamondToggle_RichText.WBP_Button_DiamondToggle_RichText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_DiamondToggle_RichText(int32_t EntryPoint); // Function WBP_Button_DiamondToggle_RichText.WBP_Button_DiamondToggle_RichText_C.ExecuteUbergraph_WBP_Button_DiamondToggle_RichText // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

