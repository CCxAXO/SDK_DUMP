// WidgetBlueprintGeneratedClass WBP_Button_EditableTextBox.WBP_Button_EditableTextBox_C
// Size: 0x1b09 (Inherited: 0x1ae0)
struct UWBP_Button_EditableTextBox_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct USizeBox* SizeBox_Content; // 0x1ae8(0x08)
	struct USizeBox* SizeBox_InputActionWidget; // 0x1af0(0x08)
	struct FMargin InternalPadding; // 0x1af8(0x10)
	bool bShowInputActionWidget; // 0x1b08(0x01)

	void SetShowInputActionWidget(bool bInShowInputActionWidget); // Function WBP_Button_EditableTextBox.WBP_Button_EditableTextBox_C.SetShowInputActionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInternalPadding(struct FMargin InPadding); // Function WBP_Button_EditableTextBox.WBP_Button_EditableTextBox_C.SetInternalPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_EditableTextBox.WBP_Button_EditableTextBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_EditableTextBox(int32_t EntryPoint); // Function WBP_Button_EditableTextBox.WBP_Button_EditableTextBox_C.ExecuteUbergraph_WBP_Button_EditableTextBox // (Final|UbergraphFunction) // @ game+0x1af5410
};

