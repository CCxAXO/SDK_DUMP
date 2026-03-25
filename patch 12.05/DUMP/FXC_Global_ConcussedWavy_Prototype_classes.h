// BlueprintGeneratedClass FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C
// Size: 0x831 (Inherited: 0x620)
struct AFXC_Global_ConcussedWavy_Prototype_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x628(0x08)
	struct UComp_FXC_Audio_Loop_C* Comp_FXC_Audio_Loop; // 0x630(0x08)
	struct UPostProcessComponent* PostProcess; // 0x638(0x08)
	struct UStaticMeshComponent* Blind; // 0x640(0x08)
	struct UStaticMeshComponent* ConcussBorder; // 0x648(0x08)
	struct UComp_FXC_CameraShake_C* Comp_FXC_CameraShake; // 0x650(0x08)
	struct UParticleSystemComponent* 3P_Effect; // 0x658(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x660(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x668(0x08)
	struct UParticleSystemComponent* HUDFX; // 0x670(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x678(0x08)
	struct AController* Controller; // 0x680(0x08)
	bool FirstPersonCosmeticsActive; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct FExplicitFloatCurve BorderAmountCurve; // 0x690(0x88)
	struct FExplicitFloatCurve FullscreenAmountCurve; // 0x718(0x88)
	struct FExplicitFloatCurve BlindAmountCurve; // 0x7a0(0x88)
	struct UMaterialInstanceDynamic* PostProcessDynamicMaterial; // 0x828(0x08)
	bool FadeOutAudioPlaying; // 0x830(0x01)

	void SetupDynamicMaterials(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.SetupDynamicMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupMeshes(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.SetupMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCurrentBuffLevel(double& BuffLevel); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.GetCurrentBuffLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateMaterialParameters(); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdateMaterialParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePerspective(bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdatePerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Global_ConcussedWavy_Prototype(int32_t EntryPoint); // Function FXC_Global_ConcussedWavy_Prototype.FXC_Global_ConcussedWavy_Prototype_C.ExecuteUbergraph_FXC_Global_ConcussedWavy_Prototype // (Final|UbergraphFunction) // @ game+0x1af5410
};

