// WidgetBlueprintGeneratedClass Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C
// Size: 0x400 (Inherited: 0x3b0)
struct UWidget_AbilityHUD_Default_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* Intro; // 0x3b8(0x08)
	struct UHorizontalBox* AbilityBoxBase; // 0x3c0(0x08)
	struct UOverlay* AbilityWidget; // 0x3c8(0x08)
	struct UImage* bg_Normal; // 0x3d0(0x08)
	struct UImage* darkbg; // 0x3d8(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x3e0(0x08)
	struct UInvalidationBox* InvalidationBox_2; // 0x3e8(0x08)
	struct TArray<struct UCharacterAbilityWidget*> AbilityWidgets; // 0x3f0(0x10)

	void StartOrActivateWidgetForSlot(enum class EAresItemSlot Slot); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.StartOrActivateWidgetForSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AllAbilitiesFound(bool& Found); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.AllAbilitiesFound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RetryFindWeapons(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.RetryFindWeapons // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAliveStateChanged_Event_2(bool NewValue); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnAliveStateChanged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnDeactivateWidget(); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_AbilityHUD_Default(int32_t EntryPoint); // Function Widget_AbilityHUD_Default.Widget_AbilityHUD_Default_C.ExecuteUbergraph_Widget_AbilityHUD_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

