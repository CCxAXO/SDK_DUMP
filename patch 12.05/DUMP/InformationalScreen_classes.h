// WidgetBlueprintGeneratedClass InformationalScreen.InformationalScreen_C
// Size: 0x349 (Inherited: 0x330)
struct UInformationalScreen_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	bool isCursorOn; // 0x340(0x01)
	bool InternalVisibilityState; // 0x341(0x01)
	bool ExternalHideRequest; // 0x342(0x01)
	bool IsScoreboardVisible; // 0x343(0x01)
	bool IsOptionScreenVisible; // 0x344(0x01)
	bool IsToggledOffByPlayer; // 0x345(0x01)
	bool IsInBuyPhaseEndCountdown; // 0x346(0x01)
	bool IsInSpawnZone; // 0x347(0x01)
	bool IsInFreeCam; // 0x348(0x01)

	bool GetCurrentVisibility(); // Function InformationalScreen.InformationalScreen_C.GetCurrentVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldOtherScreenOverrideVisibility(struct AShooterCharacter* InCharacter, struct AShooterGameState* InGameState, bool& OverrideVisibility, bool& CanBeVisible); // Function InformationalScreen.InformationalScreen_C.ShouldOtherScreenOverrideVisibility // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsAllowedToBeVisible(bool& Can be visible); // Function InformationalScreen.InformationalScreen_C.GetIsAllowedToBeVisible // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetExternalHideRequest(bool DoHide); // Function InformationalScreen.InformationalScreen_C.SetExternalHideRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshVisibility(); // Function InformationalScreen.InformationalScreen_C.RefreshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInternalVisibilityState(bool InVisibilityState); // Function InformationalScreen.InformationalScreen_C.SetInternalVisibilityState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function InformationalScreen.InformationalScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated(); // Function InformationalScreen.InformationalScreen_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function InformationalScreen.InformationalScreen_C.UpdateVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGamePhaseChange(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function InformationalScreen.InformationalScreen_C.OnGamePhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void maybeDied(bool NewValue); // Function InformationalScreen.InformationalScreen_C.maybeDied // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnToggleVisibility(); // Function InformationalScreen.InformationalScreen_C.OnToggleVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScoreboardVisibleUpdated(bool IsVisible); // Function InformationalScreen.InformationalScreen_C.OnScoreboardVisibleUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOptionsScreenToggled(bool IsVisible); // Function InformationalScreen.InformationalScreen_C.OnOptionsScreenToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetPlayerToggle(); // Function InformationalScreen.InformationalScreen_C.ResetPlayerToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InformationalScreen.InformationalScreen_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnThreeSecCountdownStart(); // Function InformationalScreen.InformationalScreen_C.OnThreeSecCountdownStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCountdownEventsReset(); // Function InformationalScreen.InformationalScreen_C.OnCountdownEventsReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPossessedCharacterChanged(struct AShooterCharacter* NewValue, struct AShooterCharacter* PrevValue); // Function InformationalScreen.InformationalScreen_C.OnPossessedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsInSpawnZoneUpdated(bool NewIsInSpawn, struct AShooterCharacter* Character); // Function InformationalScreen.InformationalScreen_C.OnIsInSpawnZoneUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function InformationalScreen.InformationalScreen_C.OnSpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function InformationalScreen.InformationalScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnViewModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function InformationalScreen.InformationalScreen_C.OnViewModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Event Set Player State(struct AShooterPlayerState* PlayerState); // Function InformationalScreen.InformationalScreen_C.Event Set Player State // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAresPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function InformationalScreen.InformationalScreen_C.OnAresPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InformationalScreen(int32_t EntryPoint); // Function InformationalScreen.InformationalScreen_C.ExecuteUbergraph_InformationalScreen // (Final|UbergraphFunction) // @ game+0x1af5410
};

