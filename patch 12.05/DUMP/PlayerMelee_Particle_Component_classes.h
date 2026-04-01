// BlueprintGeneratedClass PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C
// Size: 0x1a8 (Inherited: 0xe8)
struct UPlayerMelee_Particle_Component_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct USceneComponent* WeaponAttachComponent; // 0xf0(0x08)
	struct TArray<struct FGunSkinParticleInfo> Weapon Particle Info; // 0xf8(0x10)
	struct AAbility_Melee_Base_C* Weapon; // 0x108(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Weapon; // 0x110(0x10)
	struct TArray<struct FGunSkinParticleInfo> Character Particle Info; // 0x120(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x130(0x08)
	struct TArray<struct UParticleSystemComponent*> EquipVFX_Character; // 0x138(0x10)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> Weapon Override Dynamic Materials; // 0x148(0x50)
	struct FMulticastInlineDelegate OnAllVFXSpawned; // 0x198(0x10)

	void GetWeaponAttachComponent(bool Use AresEquippableAttachmentComponent?, struct FString AresEquippableAttachmentComponentSlot, struct USceneComponent*& Component); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.GetWeaponAttachComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OverrideVariantColors(enum class EAresParticleVariantColor Variant Color, struct TArray<struct UParticleSystemComponent*>& Particle Array); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.OverrideVariantColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDefaultTransform(struct FVector OriginalLocation, struct FRotator OriginalRotation, enum class ELHMMirroringIgnoreType MirroringType, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.GetDefaultTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CreateFPParticles(double StartTime); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.CreateFPParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DestroyFPParticles(); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.DestroyFPParticles // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerMelee_Particle_Component(int32_t EntryPoint); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.ExecuteUbergraph_PlayerMelee_Particle_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnAllVFXSpawned__DelegateSignature(); // Function PlayerMelee_Particle_Component.PlayerMelee_Particle_Component_C.OnAllVFXSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

