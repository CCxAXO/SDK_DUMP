// BlueprintGeneratedClass Reflex_Particle_Component.Reflex_Particle_Component_C
// Size: 0x150 (Inherited: 0xe8)
struct UReflex_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0xf0(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0xf8(0x10)
	struct AGun_C* Weapon; // 0x108(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x110(0x10)
	struct FLinearColor NewVar_1; // 0x120(0x10)
	struct TArray<struct FName> Color Parameters; // 0x130(0x10)
	struct UTexture* GradientTexture; // 0x140(0x08)
	struct UParticleSystemComponent* NewVar_2; // 0x148(0x08)

	void OverrideVariantColors(enum class EAresParticleVariantColor Variant Color); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.OverrideVariantColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MaybeAdjustParticleSpeed(struct UParticleSystemComponent* Particle, struct AGun_Zoomable_C* Gun); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.MaybeAdjustParticleSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplayParticle(struct AGun_Zoomable_C* Gun); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.ShouldDisplayParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetActiveParticles(struct TArray<struct UParticleSystemComponent*>& EquipVFX_Weapon); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.GetActiveParticles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Reflex_Particle_Component(int32_t EntryPoint); // Function Reflex_Particle_Component.Reflex_Particle_Component_C.ExecuteUbergraph_Reflex_Particle_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

