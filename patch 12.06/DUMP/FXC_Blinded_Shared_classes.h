// BlueprintGeneratedClass FXC_Blinded_Shared.FXC_Blinded_Shared_C
// Size: 0x8ac (Inherited: 0x630)
struct AFXC_Blinded_Shared_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C* Comp_FXC_SpawnParticle_ShooterCharacter_End_FadeOut_Prototype; // 0x638(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_FadeOut_C* Comp_FXC_SpawnParticle_ShooterCharacter_FadeOut_Prototype; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	double FadeRemainingTime; // 0x650(0x08)
	struct UMaterialInstance* BlindSourceMaterialInstance; // 0x658(0x08)
	struct UMaterialInstance* BlindSourceOverlayMaterialInstance; // 0x660(0x08)
	struct FName BlindSourceMaterialParameterName; // 0x668(0x0c)
	struct FName BlindSourceOverlayParameterName; // 0x674(0x0c)
	double SourceAttributeMultiplier; // 0x680(0x08)
	double OverlayAttributeMultiplier; // 0x688(0x08)
	struct UMaterialInstanceDynamic* PointSourceMaterialnstance; // 0x690(0x08)
	struct UMaterialInstanceDynamic* PointSourceOverlayMaterialInstance; // 0x698(0x08)
	struct UUserWidget* PointSourceWidget; // 0x6a0(0x08)
	double RingingAudioRange; // 0x6a8(0x08)
	bool DynamicSourcePosition; // 0x6b0(0x01)
	bool Fading; // 0x6b1(0x01)
	char pad_6B2[0x6]; // 0x6b2(0x06)
	struct UCanvasPanelSlot* CanvasSlot; // 0x6b8(0x08)
	struct UBlindedSourcePointsContainer_C* BlindedSourcePointsContainer; // 0x6c0(0x08)
	struct UBlindsDrivenMaterialOverlay_C* BuffMaterialOverlay; // 0x6c8(0x08)
	double SourceSizeMultiplier; // 0x6d0(0x08)
	struct FVector ScreenFlashWorldOffset; // 0x6d8(0x18)
	struct AShooterCharacter* BlindedShooterCharacter; // 0x6f0(0x08)
	struct FExplicitFloatCurve PointSourceIntensityCurve; // 0x6f8(0x88)
	struct FExplicitFloatCurve FadeOutColorCurve; // 0x780(0x88)
	struct FName Fade Out; // 0x808(0x0c)
	char pad_814[0x4]; // 0x814(0x04)
	struct FExplicitFloatCurve FadeOutSizeCurve; // 0x818(0x88)
	struct FName BlindableNonPlayerTag; // 0x8a0(0x0c)

	void CheckForSocketOverride(); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.CheckForSocketOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Calculate Longest Blind(double& L_LongestBlind1); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.Calculate Longest Blind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NewFunction_1(); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBlindPointSource(); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.UpdateBlindPointSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Can Attach To Blinded Character(struct AShooterCharacter* ShooterCharacter, bool& CanAttach); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.Can Attach To Blinded Character // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPointSourceWidget(struct UUserWidget*& PointSourceWidget); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.GetPointSourceWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetSourcePointPosition(); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.SetSourcePointPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Blinded_Shared(int32_t EntryPoint); // Function FXC_Blinded_Shared.FXC_Blinded_Shared_C.ExecuteUbergraph_FXC_Blinded_Shared // (Final|UbergraphFunction) // @ game+0x1b42740
};

