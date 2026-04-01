// WidgetBlueprintGeneratedClass BlindsDrivenTimer.BlindsDrivenTimer_C
// Size: 0x3c9 (Inherited: 0x330)
struct UBlindsDrivenTimer_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* FlashedAnimFadeOut; // 0x338(0x08)
	struct UImage* bgcolor; // 0x340(0x08)
	struct UOverlay* BorderEffects; // 0x348(0x08)
	struct UImage* Image; // 0x350(0x08)
	struct UImage* Image_2; // 0x358(0x08)
	struct UImage* Image_3; // 0x360(0x08)
	struct UImage* Image_160; // 0x368(0x08)
	struct UImage* Image_242; // 0x370(0x08)
	struct UInvalidationBox* InvalidationBox_AttributeTimer; // 0x378(0x08)
	struct UOverlay* Overlay_2; // 0x380(0x08)
	struct USegmentedCircularProgressBar_C* SegmentedCircularProgressBar; // 0x388(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x390(0x08)
	struct AShooterCharacter* PossessedCharacter; // 0x398(0x08)
	struct AShooterPlayerState* PlayerState; // 0x3a0(0x08)
	double BlindDuration; // 0x3a8(0x08)
	double MaxCurrentBlindDuration; // 0x3b0(0x08)
	struct FTimerHandle BlindTimer; // 0x3b8(0x08)
	struct FTimerHandle CollapseTimer; // 0x3c0(0x08)
	bool ShowBlindOverlay; // 0x3c8(0x01)

	void Construct(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPossessedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.OnPossessedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPossessedCharacter(struct AShooterCharacter* Char); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.SetPossessedCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowBlindModeUpdated(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.OnShowBlindModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBlindedChanged_Event(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.OnBlindedChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateWidget(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateProgressBarV2(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.UpdateProgressBarV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CollapseV2(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.CollapseV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearBlindedTimer(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.ClearBlindedTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowFadingTimer(); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.ShowFadingTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BlindsDrivenTimer(int32_t EntryPoint); // Function BlindsDrivenTimer.BlindsDrivenTimer_C.ExecuteUbergraph_BlindsDrivenTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

