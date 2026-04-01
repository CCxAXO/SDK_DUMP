// WidgetBlueprintGeneratedClass ActionBindingWidget.ActionBindingWidget_C
// Size: 0x408 (Inherited: 0x320)
struct UActionBindingWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct USizeBox* IconSizeBox; // 0x338(0x08)
	struct UImage* Image_102; // 0x340(0x08)
	struct UAresKeyboardKeyBindWidget_C* PrimaryBinding; // 0x348(0x08)
	struct UAresKeyboardKeyBindWidget_C* SecondaryBinding; // 0x350(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x358(0x08)
	struct FText DisplayText; // 0x360(0x18)
	struct FText DisplayTooltip; // 0x378(0x18)
	struct FName SettingName; // 0x390(0x0c)
	bool AllowModifierKeys; // 0x39c(0x01)
	enum class EActionBindSetUserLayer Layer; // 0x39d(0x01)
	char pad_39E[0x2]; // 0x39e(0x02)
	struct FName CharacterName; // 0x3a0(0x0c)
	bool bFallBackToLowerLayers; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTexture2D* Icon; // 0x3b0(0x08)
	struct TMap<enum class EActionBindSetUserLayer, struct FLinearColor> HighlightColorsForLayers; // 0x3b8(0x50)

	void UpdateCharacter(struct UCharacterHandle* Character); // Function ActionBindingWidget.ActionBindingWidget_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIcon(struct UTexture2D* NewIcon); // Function ActionBindingWidget.ActionBindingWidget_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticUI(); // Function ActionBindingWidget.ActionBindingWidget_C.SetStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ActionBindingWidget.ActionBindingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function ActionBindingWidget.ActionBindingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ChangeSettingName(struct FName NewSettingName); // Function ActionBindingWidget.ActionBindingWidget_C.ChangeSettingName // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ActionBindingWidget.ActionBindingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ActionBindingWidget.ActionBindingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ActionBindingWidget(int32_t EntryPoint); // Function ActionBindingWidget.ActionBindingWidget_C.ExecuteUbergraph_ActionBindingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

