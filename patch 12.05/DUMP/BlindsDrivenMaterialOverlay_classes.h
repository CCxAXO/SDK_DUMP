// WidgetBlueprintGeneratedClass BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C
// Size: 0x3f0 (Inherited: 0x330)
struct UBlindsDrivenMaterialOverlay_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* BottomDebuffImageLeft; // 0x338(0x08)
	struct UImage* BottomDebuffImageMain; // 0x340(0x08)
	struct UImage* BottomDebuffImageRight; // 0x348(0x08)
	struct UInvalidationBox* InvalidationBox_AttributeDriverMaterialOverlay; // 0x350(0x08)
	struct UImage* OverlayImage; // 0x358(0x08)
	struct UImage* TopDebuffImageLeft; // 0x360(0x08)
	struct UImage* TopDebuffImageMain; // 0x368(0x08)
	struct UImage* TopDebuffImageRight; // 0x370(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x378(0x08)
	struct FName MaterialParamName; // 0x380(0x0c)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UMaterialInstance* BaseMaterial; // 0x390(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x398(0x08)
	double AttributeFadeTime; // 0x3a0(0x08)
	double AttributeFadeEndTime; // 0x3a8(0x08)
	struct AShooterCharacter* PossessedCharacter; // 0x3b0(0x08)
	struct AShooterPlayerState* PlayerState; // 0x3b8(0x08)
	bool ShowBlindOverlay; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FMulticastInlineDelegate MaterialFadeUpdated; // 0x3c8(0x10)
	struct FMulticastInlineDelegate MaterialFadeEnded; // 0x3d8(0x10)
	struct FTimerHandle FadeTimerHandle; // 0x3e8(0x08)

	void Construct(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayerStateChangedEvent(struct AAresPlayerStateBase* NewValue); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.PlayerStateChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPossessedCharacterChangedEvent(struct AShooterCharacter* NewValue); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.OnPossessedCharacterChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPossessedCharacter(struct AShooterCharacter* Char); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.SetPossessedCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShowBlindModeUpdated(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.OnShowBlindModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshPlayerState(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.RefreshPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBlindedChanged_Event(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.OnBlindedChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidget(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.UpdateWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateMaterialFadeV2(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.UpdateMaterialFadeV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowFadingMaterial(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.ShowFadingMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupFadeTimer(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.SetupFadeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BlindsDrivenMaterialOverlay(int32_t EntryPoint); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.ExecuteUbergraph_BlindsDrivenMaterialOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void MaterialFadeEnded__DelegateSignature(); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.MaterialFadeEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MaterialFadeUpdated__DelegateSignature(double FadeValue); // Function BlindsDrivenMaterialOverlay.BlindsDrivenMaterialOverlay_C.MaterialFadeUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

