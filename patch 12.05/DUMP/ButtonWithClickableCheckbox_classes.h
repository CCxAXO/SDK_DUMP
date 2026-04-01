// WidgetBlueprintGeneratedClass ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C
// Size: 0x378 (Inherited: 0x318)
struct UButtonWithClickableCheckbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWBP_MenuButtonPrimaryWithSubtitle_C* ButtonWithSubtitle; // 0x320(0x08)
	struct USharedClickableCheckboxButton_C* CheckBox; // 0x328(0x08)
	struct FMulticastInlineDelegate On Checkbox Changed; // 0x330(0x10)
	struct FText Text; // 0x340(0x18)
	struct FMargin Text Margin; // 0x358(0x10)
	struct FVector2D CheckboxPosition; // 0x368(0x10)

	void Move Text Above(struct FMargin Margin); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.Move Text Above // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Position Checkbox(struct FVector2D Checkbox Position); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.Position Checkbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Button Text(struct FText New String); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.Set Button Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Is Enabled(bool Is Enabled); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.Set Is Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ButtonWithClickableCheckbox_SharedClickableCheckboxButton_1_K2Node_ComponentBoundEvent_1_OnCheckedChanged__DelegateSignature(bool NewState); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.BndEvt__ButtonWithClickableCheckbox_SharedClickableCheckboxButton_1_K2Node_ComponentBoundEvent_1_OnCheckedChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ButtonWithClickableCheckbox_ButtonWithSubtitle_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.BndEvt__ButtonWithClickableCheckbox_ButtonWithSubtitle_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ButtonWithClickableCheckbox(int32_t EntryPoint); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.ExecuteUbergraph_ButtonWithClickableCheckbox // (Final|UbergraphFunction) // @ game+0x1af5410
	void On Checkbox Changed__DelegateSignature(bool Checkbox State); // Function ButtonWithClickableCheckbox.ButtonWithClickableCheckbox_C.On Checkbox Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

