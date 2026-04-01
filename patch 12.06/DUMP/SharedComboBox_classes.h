// WidgetBlueprintGeneratedClass SharedComboBox.SharedComboBox_C
// Size: 0x3b9 (Inherited: 0x318)
struct USharedComboBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* AresComboBox_1366; // 0x320(0x08)
	struct FText SelectedText; // 0x328(0x18)
	struct FText DescriptorText; // 0x340(0x18)
	struct TMap<struct FString, struct FText> ItemToTextMap; // 0x358(0x50)
	struct FMulticastInlineDelegate OnItemSelected; // 0x3a8(0x10)
	bool AlignLabelTextToLanguage; // 0x3b8(0x01)

	void ClearOptions(); // Function SharedComboBox.SharedComboBox_C.ClearOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveOption(struct FString Option); // Function SharedComboBox.SharedComboBox_C.RemoveOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddOption(struct FString Option, struct FText DisplayText); // Function SharedComboBox.SharedComboBox_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* OnGenerateButtonContentWidget_1(struct FString Item); // Function SharedComboBox.SharedComboBox_C.OnGenerateButtonContentWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetAresComboBoxWidget(struct UAresComboBox*& AresComboBox); // Function SharedComboBox.SharedComboBox_C.GetAresComboBoxWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SelectOption(struct FString Option); // Function SharedComboBox.SharedComboBox_C.SelectOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* OnGenerateWidget_1(struct FString Item); // Function SharedComboBox.SharedComboBox_C.OnGenerateWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SharedComboBox.SharedComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function SharedComboBox.SharedComboBox_C.BndEvt__AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedComboBox_AresComboBox_1365_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function SharedComboBox.SharedComboBox_C.BndEvt__SharedComboBox_AresComboBox_1365_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SharedComboBox(int32_t EntryPoint); // Function SharedComboBox.SharedComboBox_C.ExecuteUbergraph_SharedComboBox // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnItemSelected__DelegateSignature(struct FString Item); // Function SharedComboBox.SharedComboBox_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

