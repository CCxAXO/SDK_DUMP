// WidgetBlueprintGeneratedClass Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C
// Size: 0x3b8 (Inherited: 0x3b0)
struct UWidget_Ability_Element_Charge_Base_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)

	void HasInputPrompt(bool& Has Input Prompt); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.HasInputPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindDisabledUI(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.UnbindDisabledUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCurrentDisplayCharges(int32_t& CurrentCharges); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetCurrentDisplayCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetMaxDisplayCharges(int32_t& MaxCharges); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetMaxDisplayCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetupDisabledUI(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.SetupDisabledUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	int32_t GetTempCharges(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetTempCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	int32_t GetPermanentCharges(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.GetPermanentCharges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateChargeInfo(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.UpdateChargeInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InputPromptRemoved(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInputPromptVisibility(enum class ESlateVisibility Visible); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.SetInputPromptVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void DispatchUpdateAbilityWidget_Event_1(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.DispatchUpdateAbilityWidget_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BuffAdded(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.BuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BuffRemoved(struct FStruct_GameplayTagAndHUD_Info TagInfo); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.BuffRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnDeactivateWidget(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Element_Charge_Base(int32_t EntryPoint); // Function Widget_Ability_Element_Charge_Base.Widget_Ability_Element_Charge_Base_C.ExecuteUbergraph_Widget_Ability_Element_Charge_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

