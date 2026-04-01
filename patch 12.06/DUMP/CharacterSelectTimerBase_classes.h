// WidgetBlueprintGeneratedClass CharacterSelectTimerBase.CharacterSelectTimerBase_C
// Size: 0x390 (Inherited: 0x318)
struct UCharacterSelectTimerBase_C : UUserWidget {
	struct UPregameViewController* PregameViewController; // 0x318(0x08)
	struct UAkAudioEvent* TickSound; // 0x320(0x08)
	struct UAkAudioEvent* TickSoundUrgent; // 0x328(0x08)
	struct UAkAudioEvent* NotSelectedAlert; // 0x330(0x08)
	struct FMulticastInlineDelegate OnNotSelectedAlert; // 0x338(0x10)
	struct FMulticastInlineDelegate OnNotSelectedAlertCancelled; // 0x348(0x10)
	bool AlertTriggered; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0x360(0x08)
	struct UGameModeUIData* ModeUIData; // 0x368(0x08)
	struct FText MapName; // 0x370(0x18)
	struct UTextBlock* TimerTextBase; // 0x388(0x08)

	void SetQueue(struct UMatchmakingQueueDataAsset* QueueAsset); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.SetQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTimerTextBox(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.SetTimerTextBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMapText(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.UpdateMapText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateModeIcon(struct UObject* ImageToSet); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.UpdateModeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateModeQueueText(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.UpdateModeQueueText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMode(struct UGameModeHandle* GameModeHandle); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.SetMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterChanged(struct UCharacterDataAsset* Character); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.OnCharacterChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AlertClientOfNoCharacterSelected(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.AlertClientOfNoCharacterSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePregameStateChanged(enum class EPregameMatchState NewState); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.HandlePregameStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleServerTimeChanged(float ServerTime); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.HandleServerTimeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMap(struct UMapHandle* MapHandle); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.SetMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTimer(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameViewController); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNotSelectedAlertCancelled__DelegateSignature(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.OnNotSelectedAlertCancelled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNotSelectedAlert__DelegateSignature(); // Function CharacterSelectTimerBase.CharacterSelectTimerBase_C.OnNotSelectedAlert__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

