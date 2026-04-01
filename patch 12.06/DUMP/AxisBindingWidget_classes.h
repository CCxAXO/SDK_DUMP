// WidgetBlueprintGeneratedClass AxisBindingWidget.AxisBindingWidget_C
// Size: 0x3f0 (Inherited: 0x320)
struct UAxisBindingWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UAresKeyboardKeyBindWidget_C* PrimaryBinding; // 0x338(0x08)
	struct UAresKeyboardKeyBindWidget_C* SecondaryBinding; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	struct FName SettingName; // 0x380(0x0c)
	bool IsPositiveScale; // 0x38c(0x01)
	bool AllowModifierKeys; // 0x38d(0x01)
	enum class EActionBindSetUserLayer Layer; // 0x38e(0x01)
	char pad_38F[0x1]; // 0x38f(0x01)
	struct FName CharacterName; // 0x390(0x0c)
	bool bFallBackToLowerLayers; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	struct TMap<enum class EActionBindSetUserLayer, struct FLinearColor> HighlightColorsForLayers; // 0x3a0(0x50)

	void UpdateCharacter(struct UCharacterHandle* Character); // Function AxisBindingWidget.AxisBindingWidget_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticUI(); // Function AxisBindingWidget.AxisBindingWidget_C.SetStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AxisBindingWidget.AxisBindingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function AxisBindingWidget.AxisBindingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AxisBindingWidget.AxisBindingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AxisBindingWidget.AxisBindingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AxisBindingWidget(int32_t EntryPoint); // Function AxisBindingWidget.AxisBindingWidget_C.ExecuteUbergraph_AxisBindingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

