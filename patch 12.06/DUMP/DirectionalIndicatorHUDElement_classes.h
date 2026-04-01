// WidgetBlueprintGeneratedClass DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C
// Size: 0x378 (Inherited: 0x330)
struct UDirectionalIndicatorHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UOverlay* BuffIndicatorOverlay; // 0x338(0x08)
	struct UOverlay* DamageIndicatorOverlay; // 0x340(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x348(0x08)
	struct FLinearColor DamageNoShieldBaseColor; // 0x350(0x10)
	double MinDamageIndicatorAlpha; // 0x360(0x08)
	struct FLinearColor DamageWithShieldBaseColor; // 0x368(0x10)

	void OnDamageEventNew(struct AActor* DamagedActor, double DamageTaken, struct UDamageType* DamageType, struct AActor* DamageCauser); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.OnDamageEventNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearIndicators(); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.ClearIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDamageEvent(struct UDamageResponse* DamageResponse); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.OnDamageEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDamaged_Event_2(struct UDamageResponse* Response); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.OnDamaged_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DirectionalIndicatorHUDElement(int32_t EntryPoint); // Function DirectionalIndicatorHUDElement.DirectionalIndicatorHUDElement_C.ExecuteUbergraph_DirectionalIndicatorHUDElement // (Final|UbergraphFunction) // @ game+0x1b42740
};

