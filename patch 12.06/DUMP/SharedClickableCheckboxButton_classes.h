// WidgetBlueprintGeneratedClass SharedClickableCheckboxButton.SharedClickableCheckboxButton_C
// Size: 0x359 (Inherited: 0x318)
struct USharedClickableCheckboxButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* IdleAnim; // 0x320(0x08)
	struct UWidgetAnimation* PulseAnim; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x338(0x08)
	bool IsChecked; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FMulticastInlineDelegate OnCheckedChanged; // 0x348(0x10)
	bool PlayIntroPulse; // 0x358(0x01)

	void UpdateVisualCheckedState(); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.UpdateVisualCheckedState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleChecked(); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.ToggleChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetChecked(bool Checked); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.SetChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetChecked(bool& IsChecked); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.GetChecked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Construct(); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SharedClickableCheckboxButton(int32_t EntryPoint); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.ExecuteUbergraph_SharedClickableCheckboxButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCheckedChanged__DelegateSignature(bool NewState); // Function SharedClickableCheckboxButton.SharedClickableCheckboxButton_C.OnCheckedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

