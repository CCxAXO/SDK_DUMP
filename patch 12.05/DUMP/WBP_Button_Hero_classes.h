// WidgetBlueprintGeneratedClass WBP_Button_Hero.WBP_Button_Hero_C
// Size: 0x1bfc (Inherited: 0x1ae0)
struct UWBP_Button_Hero_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Release; // 0x1ae8(0x08)
	struct UWidgetAnimation* Press; // 0x1af0(0x08)
	struct UWidgetAnimation* Unfocus; // 0x1af8(0x08)
	struct UWidgetAnimation* Focus; // 0x1b00(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x1b08(0x08)
	struct UAresButtonRichTextComponent* RTCPrimaryText; // 0x1b10(0x08)
	char pad_1B18[0x8]; // 0x1b18(0x08)
	struct FSlateBrush InputActionProgressBrush; // 0x1b20(0xd0)
	struct FName ProgressParameter; // 0x1bf0(0x0c)

	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Hero.WBP_Button_Hero_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Button_Hero.WBP_Button_Hero_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_Hero.WBP_Button_Hero_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Hero.WBP_Button_Hero_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionSelected(); // Function WBP_Button_Hero.WBP_Button_Hero_C.BP_OnTransitionSelected // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeselected(); // Function WBP_Button_Hero.WBP_Button_Hero_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Hero(int32_t EntryPoint); // Function WBP_Button_Hero.WBP_Button_Hero_C.ExecuteUbergraph_WBP_Button_Hero // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

