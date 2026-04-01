// WidgetBlueprintGeneratedClass Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C
// Size: 0x508 (Inherited: 0x4b8)
struct UWidget_Ability_Element_Signature_Cooldown_C : UWidget_Ability_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* signatureCharge; // 0x4c0(0x08)
	struct UTextBlock* CooldownSeconds; // 0x4c8(0x08)
	double CooldownUpdateRate; // 0x4d0(0x08)
	struct FTimerHandle CooldownUpdateHandle; // 0x4d8(0x08)
	struct UActorComponent* CooldownInterface; // 0x4e0(0x08)
	struct UAbilityRechargeCooldownComponent* RechargeCooldownComponent; // 0x4e8(0x08)
	double MinRechargeCooldownDisplayTime; // 0x4f0(0x08)
	double RemainingCooldownTime; // 0x4f8(0x08)
	struct FTimerHandle ManualCooldownTimer; // 0x500(0x08)

	void CooldownComplete(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.CooldownComplete // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateManualCooldown(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.UpdateManualCooldown // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ManualCooldown(double TimeRemaining, bool IsInitialCall); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.ManualCooldown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Update Cooldown(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.Update Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCooldownStarted(struct UEquippableEventBase* event); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnCooldownStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateRechargeCooldown(struct UAbilityRechargeCooldownComponent* CooldownComponent); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.UpdateRechargeCooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CallRechargeCooldownUpdate(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.CallRechargeCooldownUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnDeactivateWidget(); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Element_Signature_Cooldown(int32_t EntryPoint); // Function Widget_Ability_Element_Signature_Cooldown.Widget_Ability_Element_Signature_Cooldown_C.ExecuteUbergraph_Widget_Ability_Element_Signature_Cooldown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

