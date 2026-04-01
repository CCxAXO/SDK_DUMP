// BlueprintGeneratedClass Gun.Gun_C
// Size: 0x1478 (Inherited: 0x10b0)
struct AGun_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UGunVFXStateComponent* GunVFXState; // 0x10b8(0x08)
	struct UJammedStateComponent* JammedState; // 0x10c0(0x08)
	struct UFocusModeStateMachineComponent* FocusModeStateMachine; // 0x10c8(0x08)
	struct UFocusModeStateComponent* ActiveFocusModeState; // 0x10d0(0x08)
	struct UFocusModeStateComponent* InactiveFocusModeState; // 0x10d8(0x08)
	struct UFocusModeStateComponent* DisabledFocusModeState; // 0x10e0(0x08)
	struct UBP_FocusModeComponent_Gun_C* BP_FocusModeComponent_Gun; // 0x10e8(0x08)
	struct UComp_Gun_RecoilRecoveryComponent_C* Comp_Gun_RecoilRecoveryComponent; // 0x10f0(0x08)
	struct UComp_Gun_FlaggedErrorCurve_C* Comp_Gun_FlaggedErrorCurve; // 0x10f8(0x08)
	struct UAmmoResourceVisualizationComponent* AmmoResourceVisualization; // 0x1100(0x08)
	struct UStabilityComponent* Stability_Mobile; // 0x1108(0x08)
	struct UStabilityVisualizationComponent* StabilityVisualization_Mobile; // 0x1110(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStability_Mobile; // 0x1118(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x1120(0x08)
	struct UStabilityComponent* FlaggedStability; // 0x1128(0x08)
	struct UStabilityVisualizationComponent* FlaggedStabilityVisualization; // 0x1130(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStability; // 0x1138(0x08)
	struct UGunVOComponent_C* GunVOComponent; // 0x1140(0x08)
	struct UStaticMeshComponent* SecondaryMagazine_1P; // 0x1148(0x08)
	struct UAresAudioComponentManagerComponent* AresAudioComponentManager; // 0x1150(0x08)
	struct UAresOutlineComponent* OutlineCosmetic1P; // 0x1158(0x08)
	struct USkeletalMeshComponent* CosmeticMesh1P; // 0x1160(0x08)
	struct UPostProcessComponent* WeaponPostProcessComponent; // 0x1168(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x1170(0x08)
	struct UCapsuleComponent* UsableAimingShape; // 0x1178(0x08)
	struct UEquipStateComponent* EquipState; // 0x1180(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x1188(0x08)
	struct UAresOutlineComponent* OutlineMagazine1P; // 0x1190(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x1198(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x11a0(0x08)
	struct UStaticMeshComponent* Magazine_1P; // 0x11a8(0x08)
	struct UBulletComponent_C* BulletComponent; // 0x11b0(0x08)
	struct UStabilityVisualizationManagerComponent* StabilityVisualizationManager; // 0x11b8(0x08)
	struct UEjectablesComponent* EjectableComponent; // 0x11c0(0x08)
	struct UEquippableAnimGraphComponent* EquippableAnimGraph; // 0x11c8(0x08)
	struct UAmmoComponent* ReserveAmmo; // 0x11d0(0x08)
	struct UAmmoComponent* MagazineAmmo; // 0x11d8(0x08)
	struct UCrosshairComponent* CrosshairComponent; // 0x11e0(0x08)
	struct UTaggingLevelComponent* TaggingLevel; // 0x11e8(0x08)
	struct UStabilityVisualizationComponent* StabilityVisualization; // 0x11f0(0x08)
	struct UStabilityComponent* Stability; // 0x11f8(0x08)
	struct UReloadStateComponent* ReloadState; // 0x1200(0x08)
	struct UFiringStateComponent* FiringState; // 0x1208(0x08)
	struct UScriptStateComponent* IdleState; // 0x1210(0x08)
	double RotateRoll; // 0x1218(0x08)
	double ResetDelaySeconds; // 0x1220(0x08)
	double TimeToRotate; // 0x1228(0x08)
	bool ResetDelay; // 0x1230(0x01)
	char pad_1231[0x7]; // 0x1231(0x07)
	struct FRotator HackRotator; // 0x1238(0x18)
	struct FRotator DefaultRotator; // 0x1250(0x18)
	double RotatePitch; // 0x1268(0x08)
	double RotateAngle; // 0x1270(0x08)
	struct UMaterialInstanceDynamic* WeaponDynamicMaterialInstance; // 0x1278(0x08)
	double GradientSubtract; // 0x1280(0x08)
	bool IntentionOn; // 0x1288(0x01)
	char pad_1289[0x7]; // 0x1289(0x07)
	struct FVector L_Hand_Offset_Hack; // 0x1290(0x18)
	struct UParticleSystemComponent* BeamFX; // 0x12a8(0x08)
	struct USceneComponent* MeshToChoose; // 0x12b0(0x08)
	struct FVector IntentionEndPointCheck; // 0x12b8(0x18)
	struct UAkAudioEvent* Gun_Bounce_Sound; // 0x12d0(0x08)
	struct UAkAudioEvent* Gun_Land_Sound; // 0x12d8(0x08)
	bool HasLastShotAnim; // 0x12e0(0x01)
	char pad_12E1[0x7]; // 0x12e1(0x07)
	struct UAnimMontage* FidgetAnim; // 0x12e8(0x08)
	struct UStaticMeshComponent* Magazine_3p; // 0x12f0(0x08)
	struct UMaterial* KillBannerMaterial; // 0x12f8(0x08)
	enum class EKillBannerAnimation KillBannerWidgetAnimation; // 0x1300(0x01)
	char pad_1301[0x3]; // 0x1301(0x03)
	struct FLinearColor KillBannerChromaColor; // 0x1304(0x10)
	bool KillBannerUseChromaColor; // 0x1314(0x01)
	char pad_1315[0x3]; // 0x1315(0x03)
	struct FEffectID FXC_Equipped_ID; // 0x1318(0x18)
	struct AEffectContainer* EquippedEffect; // 0x1330(0x08)
	struct FEffectData EffectData; // 0x1338(0x58)
	struct AEffectContainer* Weapon Inspect; // 0x1390(0x08)
	struct AEffectContainer* Idle Effect; // 0x1398(0x08)
	int32_t AudioNumLimit; // 0x13a0(0x04)
	char pad_13A4[0x4]; // 0x13a4(0x04)
	struct UMaterialInstanceDynamic* LowAmmo_Instance; // 0x13a8(0x08)
	struct UMaterialInterface* LowAmmo_Material; // 0x13b0(0x08)
	struct UMaterialInterface* NewVar_1; // 0x13b8(0x08)
	bool CanDoAmmoCosmetics; // 0x13c0(0x01)
	char pad_13C1[0x7]; // 0x13c1(0x07)
	struct AEffectContainer* FXC_LowAmmo; // 0x13c8(0x08)
	struct FEffectID LowAmmo_ID; // 0x13d0(0x18)
	struct FVector Muzzle Location; // 0x13e8(0x18)
	bool HasSilencer; // 0x1400(0x01)
	char pad_1401[0x7]; // 0x1401(0x07)
	struct FEffectID InspectEffectID; // 0x1408(0x18)
	enum class GunEjectableType ShellCasingEjectableType; // 0x1420(0x01)
	char pad_1421[0x3]; // 0x1421(0x03)
	int32_t AutomaticAndBurstShotsPerShellCasingEjectable; // 0x1424(0x04)
	int32_t NonAutomaticShotsPerShellCasingEjectable; // 0x1428(0x04)
	int32_t CurrentShotIndexForShellCasingEjectable; // 0x142c(0x04)
	double LastShotTimeStamp; // 0x1430(0x08)
	double CurrentShotIndexResetTimeDurationForNonAutomatics; // 0x1438(0x08)
	enum class TextureAssetType EjectableTextureType; // 0x1440(0x01)
	char pad_1441[0x7]; // 0x1441(0x07)
	struct AEffectContainer* BombDefusedEffect; // 0x1448(0x08)
	bool Auto Reload On Empty; // 0x1450(0x01)
	bool Inspect Animation Active; // 0x1451(0x01)
	char pad_1452[0x6]; // 0x1452(0x06)
	double AutoPrimaryRefireDelay; // 0x1458(0x08)
	int32_t Kill Number; // 0x1460(0x04)
	bool bSupportsFocusMode; // 0x1464(0x01)
	char pad_1465[0x3]; // 0x1465(0x03)
	struct FMulticastInlineDelegate OnGunInspectStarted; // 0x1468(0x10)

	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Gun.Gun_C.GetMagazine3p // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Gun.Gun_C.GetMagazine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Gun.Gun_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Gun.Gun_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Gun.Gun_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Gun.Gun_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Interrupt If Jammed(struct UScriptStateComponent* State to Interrupt, struct UScriptStateComponent*& State); // Function Gun.Gun_C.Interrupt If Jammed // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeFocusModeComponent(); // Function Gun.Gun_C.InitializeFocusModeComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetValidStatesForFocusMode(struct TArray<struct UScriptStateComponent*>& Array); // Function Gun.Gun_C.GetValidStatesForFocusMode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	bool IsFocusModeEnabled(); // Function Gun.Gun_C.IsFocusModeEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void DisableAndDestroyFocusModeComponents(); // Function Gun.Gun_C.DisableAndDestroyFocusModeComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Modify Reserve Ammo(bool InfiniteReserve, int32_t MaxReserveAmmo); // Function Gun.Gun_C.Modify Reserve Ammo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetermineRefireDelayFromVariable(double RefireDelayValue, double& AutoRefireDelay); // Function Gun.Gun_C.DetermineRefireDelayFromVariable // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetMobileAutoPrimaryRefireDelay(double& AutoRefireDelay); // Function Gun.Gun_C.GetMobileAutoPrimaryRefireDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Play Bomb Defused Effect(); // Function Gun.Gun_C.Play Bomb Defused Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool HasAnyResources(); // Function Gun.Gun_C.HasAnyResources // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void TriggerShellCasingEveryFewShots(struct UFiringStateComponent* FiringState, int32_t ShotIndex, double TimeSinceLastShot); // Function Gun.Gun_C.TriggerShellCasingEveryFewShots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLowAmmoIndicator(bool ResetAmmo); // Function Gun.Gun_C.UpdateLowAmmoIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CanCycleZoom(bool& CanZoom); // Function Gun.Gun_C.CanCycleZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideBulletMesh(); // Function Gun.Gun_C.HideBulletMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRep_WeaponKills(); // Function Gun.Gun_C.OnRep_WeaponKills // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnloadMagazine(bool ReplenishToReserve); // Function Gun.Gun_C.UnloadMagazine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetIdleReloadState(struct UReloadStateComponent*& ReloadState); // Function Gun.Gun_C.GetIdleReloadState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GunSkinImpulse(double TimelineUpdate); // Function Gun.Gun_C.GunSkinImpulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetRotation(); // Function Gun.Gun_C.ResetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RotateLeftRight(double TimeToRotate); // Function Gun.Gun_C.RotateLeftRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RotateWeaponAroundCorner(double DeltaTime); // Function Gun.Gun_C.RotateWeaponAroundCorner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Gun.Gun_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, double FrameDeltaTime); // Function Gun.Gun_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UserConstructionScript(); // Function Gun.Gun_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Gun.Gun_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideAresMeshAttachmentComponentMap(struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> AresMeshAttachmentComponent Map); // Function Gun.Gun_C.OverrideAresMeshAttachmentComponentMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableTotemAltAction(); // Function Gun.Gun_C.EnableTotemAltAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableTotemDropAction(); // Function Gun.Gun_C.EnableTotemDropAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__IdleState_K2Node_ComponentBoundEvent_1_OnStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Gun.Gun_C.BndEvt__IdleState_K2Node_ComponentBoundEvent_1_OnStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Gun.Gun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function Gun.Gun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void EjectShellCasing(); // Function Gun.Gun_C.EjectShellCasing // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EjectMagazine(); // Function Gun.Gun_C.EjectMagazine // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadAnimationComplete__DelegateSignature(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadAnimationComplete__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ClientTickActiveForLocalPlayer(float DeltaSeconds); // Function Gun.Gun_C.ClientTickActiveForLocalPlayer // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnItemPickedUp(struct AShooterCharacter* NewOwner, bool bCurrentWasDropped); // Function Gun.Gun_C.OnItemPickedUp // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void GunInspect(enum class GunEmote Emote); // Function Gun.Gun_C.GunInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.UpdateMaterial // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Custom_OnShot(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Gun.Gun_C.Custom_OnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Ammo Loaded(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.On Ammo Loaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Reload Animation Complete(struct UReloadStateComponent* ReloadState); // Function Gun.Gun_C.On Reload Animation Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClientItemEquipped(); // Function Gun.Gun_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ClientItemUnEquipped(); // Function Gun.Gun_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Evaluate Idle Transitions(); // Function Gun.Gun_C.Evaluate Idle Transitions // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Idle State Enter(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Gun.Gun_C.On Idle State Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Firing State Ready To Fire This Frame(struct UFiringStateComponent* FiringState); // Function Gun.Gun_C.On Firing State Ready To Fire This Frame // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Resource Component Resource Changed(struct UResourceComponent* ResourceComponent); // Function Gun.Gun_C.On Resource Component Resource Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Gun.Gun_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveClientClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function Gun.Gun_C.ReceiveClientClearOwningCharacter // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Gun.Gun_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CancelInspect(); // Function Gun.Gun_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__IdleState_K2Node_ComponentBoundEvent_2_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Gun.Gun_C.BndEvt__IdleState_K2Node_ComponentBoundEvent_2_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void AuthOnUnEquipped(); // Function Gun.Gun_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Gun.Gun_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Gun.Gun_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Gun(int32_t EntryPoint); // Function Gun.Gun_C.ExecuteUbergraph_Gun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnGunInspectStarted__DelegateSignature(); // Function Gun.Gun_C.OnGunInspectStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

