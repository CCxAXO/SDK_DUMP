// BlueprintGeneratedClass FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C
// Size: 0x778 (Inherited: 0x620)
struct AFXC_ImpactMelee_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x628(0x08)
	struct TMap<enum class EAresSurfaceType, struct FAresHitImpactParticle> ImpactParticle; // 0x630(0x50)
	struct TMap<enum class EAresSurfaceType, struct FMaterialList> ImpactDecal; // 0x680(0x50)
	struct UAkAudioEvent* ImpactAudioEvent; // 0x6d0(0x08)
	struct FRotator ParticleRotation; // 0x6d8(0x18)
	double ParticleScale; // 0x6f0(0x08)
	struct UAkAudioEvent* ImpactAudioSkinEvent; // 0x6f8(0x08)
	struct UObject* FXC Context; // 0x700(0x08)
	double DecalRotation; // 0x708(0x08)
	double DecalLifespan; // 0x710(0x08)
	struct FVector DecalScaleMinRange; // 0x718(0x18)
	struct FVector DecalScaleMaxRange; // 0x730(0x18)
	double DecalFadeInTime; // 0x748(0x08)
	double DecalFadeOutTime; // 0x750(0x08)
	struct UDecalComponent* spawnedDecal; // 0x758(0x08)
	struct FVector DecalOffset; // 0x760(0x18)

	void Get Decal Rotation(double& DecalRotation); // Function FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C.Get Decal Rotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_ImpactMelee_Base(int32_t EntryPoint); // Function FXC_ImpactMelee_Base.FXC_ImpactMelee_Base_C.ExecuteUbergraph_FXC_ImpactMelee_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

