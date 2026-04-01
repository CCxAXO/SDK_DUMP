// BlueprintGeneratedClass Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C
// Size: 0x240 (Inherited: 0x168)
struct UAttachment_Base_Muzzle_Silencer_C : UAttachment_Base_Muzzle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	struct TArray<struct UMaterialInterface*> 1p MaterialOverrides; // 0x170(0x10)
	struct TArray<struct UMaterialInterface*> 3p MaterialOverrides; // 0x180(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectOverrides; // 0x190(0x50)
	struct AProjectile_Gun_C* ProjectileOverride; // 0x1e0(0x08)
	struct FVector Scale; // 0x1e8(0x18)
	struct FVector MP5 Scale; // 0x200(0x18)
	struct FVector Carbine Scale; // 0x218(0x18)
	bool IsModelviewer; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UAnimInstance* AnimInstance; // 0x238(0x08)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct TArray<struct UMaterialInterface*> GetMaterialOverridesForReconstruction(); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.GetMaterialOverridesForReconstruction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayInspect(struct AEffectContainer* Inspect FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.PlayInspect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayEquip(struct AEffectContainer* Equip FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.PlayEquip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayReload(struct AEffectContainer* Reload FXC, struct FEffectID& Effect ID); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.PlayReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddToGun (Override This One)(); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Attachment_Base_Muzzle_Silencer(int32_t EntryPoint); // Function Attachment_Base_Muzzle_Silencer.Attachment_Base_Muzzle_Silencer_C.ExecuteUbergraph_Attachment_Base_Muzzle_Silencer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

