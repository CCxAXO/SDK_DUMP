// WidgetBlueprintGeneratedClass TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C
// Size: 0x375 (Inherited: 0x330)
struct UTeamScoreHUDElement_v2_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UTextBlock* Score; // 0x338(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x340(0x08)
	bool bShowEnemyScore; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct FLinearColor DisplayColor; // 0x34c(0x10)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UImage* TeamColor_1; // 0x360(0x08)
	struct FHUDVisibilityConfig VisibilityConfig; // 0x368(0x0d)

	void InitializeHUDVisibilityConfig(); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.InitializeHUDVisibilityConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidget(); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.UpdateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(bool ScoreboardVisible); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPointsUpdated(); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.OnPointsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamChanged_Event_1(); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFirstPersonModelPlayerStateChanged_Event(struct AAresPlayerStateBase* NewValue); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.OnFirstPersonModelPlayerStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ScoreboardVisibilityChanged(bool IsVisible); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HUDConfigChanged(struct UGameStateHUDConfig* NewConfig); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.HUDConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TeamScoreHUDElement_v2(int32_t EntryPoint); // Function TeamScoreHUDElement_v2.TeamScoreHUDElement_v2_C.ExecuteUbergraph_TeamScoreHUDElement_v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

