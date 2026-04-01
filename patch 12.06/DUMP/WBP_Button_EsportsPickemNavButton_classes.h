// WidgetBlueprintGeneratedClass WBP_Button_EsportsPickemNavButton.WBP_Button_EsportsPickemNavButton_C
// Size: 0x1b01 (Inherited: 0x1ae0)
struct UWBP_Button_EsportsPickemNavButton_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UEsports_TabbedContentBtn_C* Esports_TabbedContentBtn; // 0x1ae8(0x08)
	struct UImage* Image_2; // 0x1af0(0x08)
	struct UAresCommonText* T_PICKEM; // 0x1af8(0x08)
	enum class EEsportsHubTab NavToTabType; // 0x1b00(0x01)

	void Construct(); // Function WBP_Button_EsportsPickemNavButton.WBP_Button_EsportsPickemNavButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_EsportsPickemNavButton.WBP_Button_EsportsPickemNavButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_EsportsPickemNavButton.WBP_Button_EsportsPickemNavButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_EsportsPickemNavButton(int32_t EntryPoint); // Function WBP_Button_EsportsPickemNavButton.WBP_Button_EsportsPickemNavButton_C.ExecuteUbergraph_WBP_Button_EsportsPickemNavButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

