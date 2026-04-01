// WidgetBlueprintGeneratedClass TextSettingsWidget.TextSettingsWidget_C
// Size: 0x398 (Inherited: 0x320)
struct UTextSettingsWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x340(0x08)
	struct UEditableTextBox* ValueBox; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	enum class EAresFloatSettingName SettingName; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FMulticastInlineDelegate valueUpdated; // 0x388(0x10)

	void GetFloatSettingName(enum class EAresFloatSettingName& FloatSettingName); // Function TextSettingsWidget.TextSettingsWidget_C.GetFloatSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function TextSettingsWidget.TextSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TextSettingsWidget.TextSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function TextSettingsWidget.TextSettingsWidget_C.BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function TextSettingsWidget.TextSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TextSettingsWidget.TextSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function TextSettingsWidget.TextSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void RefreshFloatSettingVisual(); // Function TextSettingsWidget.TextSettingsWidget_C.RefreshFloatSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TextSettingsWidget(int32_t EntryPoint); // Function TextSettingsWidget.TextSettingsWidget_C.ExecuteUbergraph_TextSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void valueUpdated__DelegateSignature(struct FText Value); // Function TextSettingsWidget.TextSettingsWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

