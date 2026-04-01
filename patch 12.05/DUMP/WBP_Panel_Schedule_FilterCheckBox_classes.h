// WidgetBlueprintGeneratedClass WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C
// Size: 0x1b60 (Inherited: 0x1af0)
struct UWBP_Panel_Schedule_FilterCheckBox_C : UAresCommonButtonToggle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1af0(0x08)
	struct UWidgetAnimation* IsHover; // 0x1af8(0x08)
	struct UImage* Image_104; // 0x1b00(0x08)
	struct UImage* Image_bg; // 0x1b08(0x08)
	struct UImage* IMG_CheckBoxBG; // 0x1b10(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x1b18(0x08)
	struct FText FilterText; // 0x1b20(0x18)
	struct FLinearColor Color; // 0x1b38(0x10)
	enum class EVCTLeague League; // 0x1b48(0x01)
	char pad_1B49[0x7]; // 0x1b49(0x07)
	struct FMulticastInlineDelegate OnLeagueFilterChanged; // 0x1b50(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_Schedule_FilterCheckBox_CheckBoxComponent_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.BndEvt__WBP_Panel_Schedule_FilterCheckBox_CheckBoxComponent_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Schedule_FilterCheckBox(int32_t EntryPoint); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.ExecuteUbergraph_WBP_Panel_Schedule_FilterCheckBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnLeagueFilterChanged__DelegateSignature(enum class EVCTLeague League, bool IsChecked); // Function WBP_Panel_Schedule_FilterCheckBox.WBP_Panel_Schedule_FilterCheckBox_C.OnLeagueFilterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

