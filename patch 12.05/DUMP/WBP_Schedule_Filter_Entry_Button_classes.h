// WidgetBlueprintGeneratedClass WBP_Schedule_Filter_Entry_Button.WBP_Schedule_Filter_Entry_Button_C
// Size: 0x1b88 (Inherited: 0x1b20)
struct UWBP_Schedule_Filter_Entry_Button_C : UWBP_Button_ListDiamondToggleBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b20(0x08)
	struct FText VCT Americas Filter; // 0x1b28(0x18)
	struct FText VCT EMEA Filter; // 0x1b40(0x18)
	struct FText VCT Pacific Filter; // 0x1b58(0x18)
	struct FText VCT CN Filter; // 0x1b70(0x18)

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Schedule_Filter_Entry_Button.WBP_Schedule_Filter_Entry_Button_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnButtonBaseClicked_Event_1(struct UCommonButtonBase* Button); // Function WBP_Schedule_Filter_Entry_Button.WBP_Schedule_Filter_Entry_Button_C.OnButtonBaseClicked_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Schedule_Filter_Entry_Button.WBP_Schedule_Filter_Entry_Button_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Schedule_Filter_Entry_Button(int32_t EntryPoint); // Function WBP_Schedule_Filter_Entry_Button.WBP_Schedule_Filter_Entry_Button_C.ExecuteUbergraph_WBP_Schedule_Filter_Entry_Button // (Final|UbergraphFunction) // @ game+0x1af5410
};

