// BlueprintGeneratedClass DisabledMinimapComponent.DisabledMinimapComponent_C
// Size: 0x6a1 (Inherited: 0x650)
struct UDisabledMinimapComponent_C : UAresMinimapComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct UUserWidget* Original Widget Class; // 0x658(0x08)
	struct FGameplayAttribute Minimap Disabled Attribute; // 0x660(0x38)
	struct AShooterCharacter* LastPossessedCharacter; // 0x698(0x08)
	bool Force Updating Next Tick; // 0x6a0(0x01)

	void RemoveViewTargetBindings(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.RemoveViewTargetBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddViewTargetBindings(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.AddViewTargetBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateViewTarget(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.UpdateViewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidgetClass(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.UpdateWidgetClass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidget(struct UUserWidget* Widget, bool bForce); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.UpdateWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMinimapDisabledAttributeChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.OnMinimapDisabledAttributeChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeleported(struct AShooterCharacter* Character); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.OnTeleported // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Stop Force Updating Next Tick(); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.Stop Force Updating Next Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DisabledMinimapComponent(int32_t EntryPoint); // Function DisabledMinimapComponent.DisabledMinimapComponent_C.ExecuteUbergraph_DisabledMinimapComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

