// WidgetBlueprintGeneratedClass DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C
// Size: 0x388 (Inherited: 0x330)
struct UDirectionalIndicatorHUDThreat_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UOverlay* BuffIndicatorOverlay; // 0x338(0x08)
	struct UOverlay* DamageIndicatorOverlay; // 0x340(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x348(0x08)
	struct FLinearColor DamageNoShieldBaseColor; // 0x350(0x10)
	double MinDamageIndicatorAlpha; // 0x360(0x08)
	struct FLinearColor DamageWithShieldBaseColor; // 0x368(0x10)
	struct TArray<struct AShooterCharacter*> playerSpottedEnemies; // 0x378(0x10)

	void ClearIndicators(); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.ClearIndicators // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEnemySpottedEvent(struct ADangerCompassActor_C* DangerCompassActor); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.OnEnemySpottedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayerDied(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.PlayerDied // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeThreatIndicator(struct ADangerCompassActor_C* Location); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.MakeThreatIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DirectionalIndicatorHUDThreat(int32_t EntryPoint); // Function DirectionalIndicatorHUDThreat.DirectionalIndicatorHUDThreat_C.ExecuteUbergraph_DirectionalIndicatorHUDThreat // (Final|UbergraphFunction) // @ game+0x1af5410
};

