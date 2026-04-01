// WidgetBlueprintGeneratedClass DirectConnectWidget.DirectConnectWidget_C
// Size: 0x379 (Inherited: 0x318)
struct UDirectConnectWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UEditableTextBox* Address; // 0x320(0x08)
	struct USharedSecondaryButtonText_C* Button; // 0x328(0x08)
	struct UComboBoxString* PlayerDropdown; // 0x330(0x08)
	struct UHorizontalBox* PlayerWidget; // 0x338(0x08)
	struct UEditableTextBox* Port; // 0x340(0x08)
	struct UComboBoxString* TeamDropdown; // 0x348(0x08)
	struct UHorizontalBox* TeamWidget; // 0x350(0x08)
	struct FString DisplayName; // 0x358(0x10)
	struct FString PlayerGuid; // 0x368(0x10)
	bool Team; // 0x378(0x01)

	void SetGUID(struct FString Team, struct FString Player); // Function DirectConnectWidget.DirectConnectWidget_C.SetGUID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetConnectSettings(struct FDirectConnectSettings& Settings); // Function DirectConnectWidget.DirectConnectWidget_C.GetConnectSettings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateCachedSettings(struct FDirectConnectSettings Settings); // Function DirectConnectWidget.DirectConnectWidget_C.PopulateCachedSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Port_K2Node_ComponentBoundEvent_98_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__Port_K2Node_ComponentBoundEvent_98_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Address_K2Node_ComponentBoundEvent_104_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__Address_K2Node_ComponentBoundEvent_104_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DirectConnectWidget.DirectConnectWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TeamADropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__TeamADropdown_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TeamBDropdown_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DirectConnectWidget.DirectConnectWidget_C.BndEvt__TeamBDropdown_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void SetupNavigation(); // Function DirectConnectWidget.DirectConnectWidget_C.SetupNavigation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DirectConnectWidget(int32_t EntryPoint); // Function DirectConnectWidget.DirectConnectWidget_C.ExecuteUbergraph_DirectConnectWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

