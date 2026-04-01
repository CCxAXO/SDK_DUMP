// WidgetBlueprintGeneratedClass TeamScoreHUDElement.TeamScoreHUDElement_C
// Size: 0x375 (Inherited: 0x330)
struct UTeamScoreHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UTextBlock* Score; // 0x338(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x340(0x08)
	bool bShowEnemyScore; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct FLinearColor DisplayColor; // 0x34c(0x10)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UImage* TeamColor_1; // 0x360(0x08)
	struct FHUDVisibilityConfig VisibilityConfig; // 0x368(0x0d)

	void InitializeHUDVisibilityConfig(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.InitializeHUDVisibilityConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateWidget(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibility(bool ScoreboardVisible); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPointsUpdated(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnPointsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamChanged_Event_1(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFirstPersonModelPlayerStateChanged_Event(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnFirstPersonModelPlayerStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ScoreboardVisibilityChanged(bool IsVisible); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HUDConfigChanged(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.HUDConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerConnectionStatusChanged(struct AAresPlayerStateBase* Player, enum class EConnectionStatus OldStatus, enum class EConnectionStatus NewStatus); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.OnPlayerConnectionStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitElement(); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.InitElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TeamScoreHUDElement(int32_t EntryPoint); // Function TeamScoreHUDElement.TeamScoreHUDElement_C.ExecuteUbergraph_TeamScoreHUDElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

