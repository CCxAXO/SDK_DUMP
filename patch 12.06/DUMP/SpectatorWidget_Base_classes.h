// WidgetBlueprintGeneratedClass SpectatorWidget_Base.SpectatorWidget_Base_C
// Size: 0x398 (Inherited: 0x360)
struct USpectatorWidget_Base_C : USpectatorWidgetBaseNative {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x368(0x08)
	struct FSlateColor DefenderColor; // 0x370(0x14)
	struct FSlateColor attackerColor; // 0x384(0x14)

	void HandleIntroAnimation(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.HandleIntroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCheckObserver(struct FDelegate event); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.HandleCheckObserver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateName(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerViewTargetModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.OnPlayerViewTargetModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerViewTarget_Changed(struct AActor* NewViewTarget); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.OnPlayerViewTarget_Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void RetryGetPlayerInformation(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.RetryGetPlayerInformation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckObserver(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.CheckObserver // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamChanged_Event_1(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIconsChanged(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.HandleIconsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerNameChanged(); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.OnPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SpectatorWidget_Base(int32_t EntryPoint); // Function SpectatorWidget_Base.SpectatorWidget_Base_C.ExecuteUbergraph_SpectatorWidget_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

