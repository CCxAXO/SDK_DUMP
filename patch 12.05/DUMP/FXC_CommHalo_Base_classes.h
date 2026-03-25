// BlueprintGeneratedClass FXC_CommHalo_Base.FXC_CommHalo_Base_C
// Size: 0x72c (Inherited: 0x620)
struct AFXC_CommHalo_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UWidgetComponent* VoiceIndicatorWidgetComponent; // 0x628(0x08)
	struct UStaticMeshComponent* NVCIconStaticMesh; // 0x630(0x08)
	struct UWidgetComponent* PlayerInfoWidgetComponent; // 0x638(0x08)
	struct USceneComponent* Scene; // 0x640(0x08)
	float Timeline_NVCIconBlink_ColorIntensity_37C5AAB8491F8BC642FFAEB92BE365E5; // 0x648(0x04)
	enum class ETimelineDirection Timeline_NVCIconBlink__Direction_37C5AAB8491F8BC642FFAEB92BE365E5; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct UTimelineComponent* Timeline_NVCIconBlink; // 0x650(0x08)
	struct TMap<int32_t, struct UTexture*> FXCDataToNVCIconTextureMap; // 0x658(0x50)
	struct UMaterialInstanceDynamic* NVCIconMaterial; // 0x6a8(0x08)
	struct UTexture* DefaultNVCIconTexture; // 0x6b0(0x08)
	struct UTexture* InactiveNVCIconTexture; // 0x6b8(0x08)
	struct UTexture* HasBombNVCIconTexture; // 0x6c0(0x08)
	struct UCurveFloat* VoiceIconOffsetCurve; // 0x6c8(0x08)
	struct UCurveFloat* NVCIconOffsetCurve; // 0x6d0(0x08)
	struct UCurveFloat* PlayerWidgetOffsetCurve; // 0x6d8(0x08)
	struct AActor* Target; // 0x6e0(0x08)
	struct UCurveFloat* IconScaleCurve; // 0x6e8(0x08)
	bool IsFirstPerson; // 0x6f0(0x01)
	char pad_6F1[0x3]; // 0x6f1(0x03)
	struct FName ColorParameterName; // 0x6f4(0x0c)
	struct FName TextureParameterName; // 0x700(0x0c)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct UPlayerWidgetBase_C* PlayerInfoWidgetInstance; // 0x710(0x08)
	struct UWBP_Panel_VoiceIndicator_CommHalo_C* VoiceIndicatorWidgetInstance; // 0x718(0x08)
	struct FName Size2DParameterName; // 0x720(0x0c)

	void ObserverAndReplayVisibilityToggled(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ObserverAndReplayVisibilityToggled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateObserverAndReplayHaloComponentsVisibilty(bool IsVisible); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateObserverAndReplayHaloComponentsVisibilty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool Get Comm Halo Should be Visible(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.Get Comm Halo Should be Visible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AreMapPingsMutedForTargetPlayer(bool& bIsMuted); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.AreMapPingsMutedForTargetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateDefaultNVCIconTexture(bool NewParam); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateDefaultNVCIconTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindEvents(bool bDoBind); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Timeline_NVCIconBlink__FinishedFunc(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.Timeline_NVCIconBlink__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_NVCIconBlink__UpdateFunc(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.Timeline_NVCIconBlink__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void EffectDataUpdated(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.EffectDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleCinematicModeUpdated(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.HandleCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTeleported(struct AShooterCharacter* Character); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.HandleTeleported // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePostTeleportMovement(float DeltaSeconds, struct FVector OldLocation, struct FVector OldVelocity); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.HandlePostTeleportMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateNVCIcon(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateNVCIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCommHaloTransforms(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateCommHaloTransforms // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleTeamChanged(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.HandleTeamChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCommHaloVisibility(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.UpdateCommHaloVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffectData(bool bUpdateAppearance); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ResetEffectData // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideWidgetOverridesUpdated(); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.HideWidgetOverridesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_CommHalo_Base(int32_t EntryPoint); // Function FXC_CommHalo_Base.FXC_CommHalo_Base_C.ExecuteUbergraph_FXC_CommHalo_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

