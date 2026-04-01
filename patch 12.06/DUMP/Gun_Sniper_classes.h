// BlueprintGeneratedClass Gun_Sniper.Gun_Sniper_C
// Size: 0x15e0 (Inherited: 0x15ca)
struct AGun_Sniper_C : AGun_Zoomable_C {
	char pad_15CA[0x6]; // 0x15ca(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15d0(0x08)
	double HoldCyclingDelay; // 0x15d8(0x08)

	void UseSniperScopesForZoom(bool& NewParam); // Function Gun_Sniper.Gun_Sniper_C.UseSniperScopesForZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool DoesPreventZoomWhileFiring(); // Function Gun_Sniper.Gun_Sniper_C.DoesPreventZoomWhileFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateOverlayLocation(); // Function Gun_Sniper.Gun_Sniper_C.UpdateOverlayLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Toggle1pScopeZoomVisibility(bool OverlayVisible?); // Function Gun_Sniper.Gun_Sniper_C.Toggle1pScopeZoomVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetZoomGameplayAndCosmetics(); // Function Gun_Sniper.Gun_Sniper_C.ResetZoomGameplayAndCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function Gun_Sniper.Gun_Sniper_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void SetZoomLevelReachedGameplayAndCosmetics(double ZoomLevel); // Function Gun_Sniper.Gun_Sniper_C.SetZoomLevelReachedGameplayAndCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CosmeticZoomPercentageReached(struct UZoomComponent* ZoomComponent); // Function Gun_Sniper.Gun_Sniper_C.CosmeticZoomPercentageReached // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CosmeticUnZoomStarted(struct UZoomComponent* ZoomComponent, float SourceZoomLevel); // Function Gun_Sniper.Gun_Sniper_C.CosmeticUnZoomStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MeshVisUpdated(struct AAresEquippable* Equippable, bool bFirstPersonVisible, bool bThirdPersonVisible); // Function Gun_Sniper.Gun_Sniper_C.MeshVisUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateStateMachineFlow(); // Function Gun_Sniper.Gun_Sniper_C.UpdateStateMachineFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Gun_Sniper.Gun_Sniper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void TryInsertHoldZoomTransition(struct UZoomLevelStateComponent* CurrentZoomLevel, struct UZoomLevelStateComponent* TargetZoomLevel, bool UseToggleTransition); // Function Gun_Sniper.Gun_Sniper_C.TryInsertHoldZoomTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HoldZoomUnzoomed(); // Function Gun_Sniper.Gun_Sniper_C.HoldZoomUnzoomed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HoldZoomDisabled(); // Function Gun_Sniper.Gun_Sniper_C.HoldZoomDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HoldZoomLevel1Unzoom(); // Function Gun_Sniper.Gun_Sniper_C.HoldZoomLevel1Unzoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HoldZoomLevel1Level2(); // Function Gun_Sniper.Gun_Sniper_C.HoldZoomLevel1Level2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HoldZoomLevel2Unzoom(); // Function Gun_Sniper.Gun_Sniper_C.HoldZoomLevel2Unzoom // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Gun_Sniper(int32_t EntryPoint); // Function Gun_Sniper.Gun_Sniper_C.ExecuteUbergraph_Gun_Sniper // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

