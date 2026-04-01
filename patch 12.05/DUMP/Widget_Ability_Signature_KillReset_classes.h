// WidgetBlueprintGeneratedClass Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C
// Size: 0x4dc (Inherited: 0x4b8)
struct UWidget_Ability_Signature_KillReset_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UOverlay* Overlay_1; // 0x4c0(0x08)
	struct UWidget_Ability_Standard_C* Widget_Ability_Prototype_v2; // 0x4c8(0x08)
	struct UWidget_Ability_Element_Signature_KillCounter_C* Widget_Ability_Signature_KillCounter; // 0x4d0(0x08)
	int32_t SignatureChargeAmount; // 0x4d8(0x04)

	int32_t GetCurrentSignatureAmount(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.GetCurrentSignatureAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnStartWidget(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void AddTimer(struct UUserWidget* InTimerWidget); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.AddTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddInputPrompt(struct UUserWidget* InInputPromptWidget); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.AddInputPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnResourceChanged_Event_1(struct UResourceComponent* ResourceComponent); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnResourceChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InputPromptRemoved(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.InputPromptRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnDeactivateWidget(); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Signature_KillReset(int32_t EntryPoint); // Function Widget_Ability_Signature_KillReset.Widget_Ability_Signature_KillReset_C.ExecuteUbergraph_Widget_Ability_Signature_KillReset // (Final|UbergraphFunction) // @ game+0x1af5410
};

