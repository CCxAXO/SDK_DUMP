// WidgetBlueprintGeneratedClass Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C
// Size: 0x4d8 (Inherited: 0x4b8)
struct UWidget_Ability_Signature_Cooldown_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UOverlay* Overlay_1; // 0x4c0(0x08)
	struct UWidget_Ability_Element_Signature_Cooldown_C* Widget_Ability_Element_Signature_Cooldown; // 0x4c8(0x08)
	struct UWidget_Ability_Standard_C* Widget_Ability_Prototype_v2; // 0x4d0(0x08)

	void OnStartWidget(); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InputPromptRemoved(); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Signature_Cooldown(int32_t EntryPoint); // Function Widget_Ability_Signature_Cooldown.Widget_Ability_Signature_Cooldown_C.ExecuteUbergraph_Widget_Ability_Signature_Cooldown // (Final|UbergraphFunction) // @ game+0x1af5410
};

