// WidgetBlueprintGeneratedClass WBP_Button_BasicText.WBP_Button_BasicText_C
// Size: 0x1af2 (Inherited: 0x1ae0)
struct UWBP_Button_BasicText_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1ae8(0x08)
	enum class EHorizontalAlignment TextHorizontalAlignment; // 0x1af0(0x01)
	enum class EVerticalAlignment TextVerticalAlignment; // 0x1af1(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Button_BasicText.WBP_Button_BasicText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Button_BasicText.WBP_Button_BasicText_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_BasicText.WBP_Button_BasicText_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_BasicText(int32_t EntryPoint); // Function WBP_Button_BasicText.WBP_Button_BasicText_C.ExecuteUbergraph_WBP_Button_BasicText // (Final|UbergraphFunction) // @ game+0x1b42740
};

