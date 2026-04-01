// WidgetBlueprintGeneratedClass WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C
// Size: 0x3b8 (Inherited: 0x330)
struct UWarningMessageHUD_PreRound_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* SwapTextBack; // 0x338(0x08)
	struct UWidgetAnimation* SwapText; // 0x340(0x08)
	struct UWidgetAnimation* Outro; // 0x348(0x08)
	struct UWidgetAnimation* Intro; // 0x350(0x08)
	struct UWidgetAnimation* BlinkRed; // 0x358(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x360(0x08)
	struct UImage* Image; // 0x368(0x08)
	struct UImage* Image_85; // 0x370(0x08)
	struct UTextBlock* MessageTextBox; // 0x378(0x08)
	struct UTextBlock* MessageTwoTextBox; // 0x380(0x08)
	struct UScaleBox* ScaleBox_1; // 0x388(0x08)
	struct UTextBlock* SubTextBox; // 0x390(0x08)
	int32_t LifeSpan; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FTimerHandle WarningTimer; // 0x3a0(0x08)
	struct UAkAudioEvent* AudioPulse; // 0x3a8(0x08)
	int32_t MessageCount; // 0x3b0(0x04)
	bool Continuous; // 0x3b4(0x01)
	bool LoopAudio; // 0x3b5(0x01)
	bool PlayIntroAndOutro; // 0x3b6(0x01)
	bool OutroStarted; // 0x3b7(0x01)

	void UpdateSubTextAndVisibility(struct FText InSubText); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.UpdateSubTextAndVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupWarningText(int32_t LifeSpan, struct FText MessageText, struct FText MessageTwoText, struct FText SubText, struct UAkAudioEvent* AkEvent, bool Continuous, double PulseTime, bool LoopAudio, bool PlayIntroAndOutro); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.SetupWarningText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayWarning(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.PlayWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateWarningText(struct FText MessageText, struct FText SubText); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.UpdateWarningText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateColor(struct FSlateColor TintColor); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCinemtaticModeChanged(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HideWarning(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.HideWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOutro(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveAfterAnim(); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.RemoveAfterAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WarningMessageHUD_PreRound(int32_t EntryPoint); // Function WarningMessageHUD_PreRound.WarningMessageHUD_PreRound_C.ExecuteUbergraph_WarningMessageHUD_PreRound // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

