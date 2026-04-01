// WidgetBlueprintGeneratedClass Widget_Ability_Element_Key.Widget_Ability_Element_Key_C
// Size: 0x3d8 (Inherited: 0x3b0)
struct UWidget_Ability_Element_Key_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UBorder* Border_1; // 0x3b8(0x08)
	struct UTextBlock* KeyText; // 0x3c0(0x08)
	struct FMulticastInlineDelegate DispatchUpdateWidget; // 0x3c8(0x10)

	void HasInputPrompt(bool& Has Input Prompt); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.HasInputPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateHotkeyInternal(struct FInputChord FoundChord, bool bIsBound); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.UpdateHotkeyInternal // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEnabled(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.UpdateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFromEquippable(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.UpdateFromEquippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHotkeyText(struct FName BindingText); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.SetHotkeyText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InputPromptRemoved(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInputPromptVisibility(enum class ESlateVisibility Visible); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.SetInputPromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void SettingChanged(struct FName& Setting); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.SettingChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnDeactivateWidget(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Element_Key(int32_t EntryPoint); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.ExecuteUbergraph_Widget_Ability_Element_Key // (Final|UbergraphFunction) // @ game+0x1af5410
	void DispatchUpdateWidget__DelegateSignature(); // Function Widget_Ability_Element_Key.Widget_Ability_Element_Key_C.DispatchUpdateWidget__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

