// BlueprintGeneratedClass Gun_Particle_Component.Gun_Particle_Component_C
// Size: 0x128 (Inherited: 0xe8)
struct UGun_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0xf0(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0xf8(0x10)
	struct AGun_C* Weapon; // 0x108(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x110(0x10)
	double AttributeDrivenTimeDilation; // 0x120(0x08)

	void OverrideTimeDilation(double TimeDilation); // Function Gun_Particle_Component.Gun_Particle_Component_C.OverrideTimeDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Gun_Particle_Component.Gun_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Gun_Particle_Component.Gun_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Gun_Particle_Component.Gun_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Gun_Particle_Component.Gun_Particle_Component_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Gun_Particle_Component(int32_t EntryPoint); // Function Gun_Particle_Component.Gun_Particle_Component_C.ExecuteUbergraph_Gun_Particle_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

