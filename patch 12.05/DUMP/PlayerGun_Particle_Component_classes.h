// BlueprintGeneratedClass PlayerGun_Particle_Component.PlayerGun_Particle_Component_C
// Size: 0x1b0 (Inherited: 0xe8)
struct UPlayerGun_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0xf0(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0xf8(0x10)
	struct AGun_C* Weapon; // 0x108(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x110(0x10)
	struct TArray<struct FGunSkinParticleInfo> Character Particle Info; // 0x120(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x130(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Character; // 0x138(0x10)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> Weapon Override Dynamic Materials; // 0x148(0x50)
	struct FMulticastInlineDelegate OnAllVFXSpawned; // 0x198(0x10)
	double AttributeDrivenTimeDilation; // 0x1a8(0x08)

	void OverrideTimeDilation(double TimeDilation); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.OverrideTimeDilation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Override Variant Colors(struct TArray<struct UParticleSystemComponent*>& Spawned Particle Systems, enum class EAresParticleVariantColor Variant); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.Override Variant Colors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDefaultTransform(struct FVector OriginalLocation, struct FRotator OriginalRotation, enum class ELHMMirroringIgnoreType MirroringType, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.GetDefaultTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnActorHiddenChanged_Event_1(struct AActor* Actor); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.OnActorHiddenChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerGun_Particle_Component(int32_t EntryPoint); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.ExecuteUbergraph_PlayerGun_Particle_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnAllVFXSpawned__DelegateSignature(); // Function PlayerGun_Particle_Component.PlayerGun_Particle_Component_C.OnAllVFXSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

