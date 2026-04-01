// WidgetBlueprintGeneratedClass WarningMessageHUD.WarningMessageHUD_C
// Size: 0x3b8 (Inherited: 0x330)
struct UWarningMessageHUD_C : UCoordinatedHUDElement {
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

	void UpdateSubTextAndVisibility(struct FText InSubText); // Function WarningMessageHUD.WarningMessageHUD_C.UpdateSubTextAndVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupWarningText(int32_t LifeSpan, struct FText MessageText, struct FText MessageTwoText, struct FText SubText, struct UAkAudioEvent* AkEvent, bool Continuous, double PulseTime, bool LoopAudio, bool PlayIntroAndOutro); // Function WarningMessageHUD.WarningMessageHUD_C.SetupWarningText // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayWarning(); // Function WarningMessageHUD.WarningMessageHUD_C.PlayWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WarningMessageHUD.WarningMessageHUD_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateWarningText(struct FText MessageText, struct FText SubText); // Function WarningMessageHUD.WarningMessageHUD_C.UpdateWarningText // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateColor(struct FSlateColor TintColor); // Function WarningMessageHUD.WarningMessageHUD_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCinemtaticModeChanged(); // Function WarningMessageHUD.WarningMessageHUD_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WarningMessageHUD.WarningMessageHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HideWarning(); // Function WarningMessageHUD.WarningMessageHUD_C.HideWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayOutro(); // Function WarningMessageHUD.WarningMessageHUD_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RemoveAfterAnim(); // Function WarningMessageHUD.WarningMessageHUD_C.RemoveAfterAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WarningMessageHUD(int32_t EntryPoint); // Function WarningMessageHUD.WarningMessageHUD_C.ExecuteUbergraph_WarningMessageHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

