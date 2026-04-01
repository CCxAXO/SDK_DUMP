// BlueprintGeneratedClass FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C
// Size: 0x759 (Inherited: 0x630)
struct AFXC_Finisher_Base_Victim_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UCameraComponent* Camera; // 0x638(0x08)
	struct USceneComponent* ViewTargetStart; // 0x640(0x08)
	struct USpringArmComponent* SpringArm; // 0x648(0x08)
	struct UComp_FXC_DeathCameraOverride_C* Comp_FXC_DeathCameraOverride; // 0x650(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x658(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* VictimAnimation; // 0x660(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	float DeathcamTimeline_LookAtRotationAdjust_15262DA8487DA9DBAACDCAB1E2A9E5C1; // 0x670(0x04)
	float DeathcamTimeline_Camera_Offset_15262DA8487DA9DBAACDCAB1E2A9E5C1; // 0x674(0x04)
	enum class ETimelineDirection DeathcamTimeline__Direction_15262DA8487DA9DBAACDCAB1E2A9E5C1; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct UTimelineComponent* DeathcamTimeline; // 0x680(0x08)
	struct TArray<struct FGunSkinParticleInfo> Particle System; // 0x688(0x10)
	double AdditionalDeathSwapDelay; // 0x698(0x08)
	struct TArray<struct UParticleSystemComponent*> SpawnedParticles; // 0x6a0(0x10)
	bool HideCorpse; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	double HideCorpseTime; // 0x6b8(0x08)
	struct FTimerHandle Hide Corpse Timer; // 0x6c0(0x08)
	struct FTimerHandle Hide Body Timer; // 0x6c8(0x08)
	struct ABasePawn_C* Victim Player; // 0x6d0(0x08)
	struct AShooterCharacter* Triggering Player; // 0x6d8(0x08)
	bool Allow Camera Rotation; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct FRotator RotAtTimeOfDeath; // 0x6e8(0x18)
	double Default View Target Destination Height; // 0x700(0x08)
	double ViewTargetDestinationHeight; // 0x708(0x08)
	double View Target Pitch Speed; // 0x710(0x08)
	double Camera Offset Distance; // 0x718(0x08)
	double Camera Offset Speed; // 0x720(0x08)
	double Camera Pitch Min; // 0x728(0x08)
	double Camera Pitch Max; // 0x730(0x08)
	double look_at_rotation_z; // 0x738(0x08)
	bool is_victim_rotated_toward_finisher; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
	double Victim Rotate Delay; // 0x748(0x08)
	struct AFXC_CorpseReplace_C* FXC_CorpseReplace; // 0x750(0x08)
	bool Stop Camera Adjust; // 0x758(0x01)

	void Set Up Camera(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Set Up Camera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DestroyAllParticles(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.DestroyAllParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCorpseReplace(struct AFXC_CorpseReplace_C*& AsFXC Corpse Replace); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.HandleCorpseReplace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Spawned Particles(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Handle Spawned Particles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Store Player Data(struct AActor* Target (Victim), struct UObject* Context (Triggering)); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Store Player Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AdjustCameraPitch(double Look At Rotation Adjust); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.AdjustCameraPitch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckDistanceAboveVictim(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.CheckDistanceAboveVictim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSpringArmLength(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.UpdateSpringArmLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Adjust Camera Arm Length(double Camera Offset); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Adjust Camera Arm Length // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Player Driven Rotation(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Update Player Driven Rotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldUseMeshMaterialManager(bool& ShouldUseMeshMaterialManager, struct UMeshMaterialManagerComponent*& MeshMaterialManager); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ShouldUseMeshMaterialManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Custom Sphere Collision Trace(bool& bBlockingHit, double& Distance); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Custom Sphere Collision Trace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool GetCameraRotationDirection(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetCameraRotationDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void FeedVictimLocationToMPC(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.FeedVictimLocationToMPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideVariantColor(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.OverrideVariantColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPreloadAssetPathsOnContainer(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload, struct UPreloadManager* PreloadManager); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.GetPreloadAssetPathsOnContainer // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DeathcamTimeline__FinishedFunc(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.DeathcamTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void DeathcamTimeline__UpdateFunc(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.DeathcamTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Stop Timeline(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Stop Timeline // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initiate Deathcam(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Initiate Deathcam // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCameraLocationAndRotation(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.UpdateCameraLocationAndRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AllowCameraRotation(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.AllowCameraRotation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CleanupFinisherOnRoundStart(int32_t RoundNumberBeginning); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.CleanupFinisherOnRoundStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Victim Faces Finisher(); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.Victim Faces Finisher // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_Finisher_Base_Victim(int32_t EntryPoint); // Function FXC_Finisher_Base_Victim.FXC_Finisher_Base_Victim_C.ExecuteUbergraph_FXC_Finisher_Base_Victim // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

