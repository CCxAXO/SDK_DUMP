// BlueprintGeneratedClass Melee_Skin_Base.Melee_Skin_Base_C
// Size: 0x420 (Inherited: 0x108)
struct UMelee_Skin_Base_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct UAnimInstance* Weapon Cosmetic AnimGraph; // 0x110(0x08)
	struct USkeletalMesh* NewMesh; // 0x118(0x08)
	struct USkeletalMesh* 3P Mesh; // 0x120(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AnimationOverridesMap; // 0x128(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectOverrides; // 0x178(0x50)
	struct TArray<struct UMaterialInterface*> 1p MaterialOverrides; // 0x1c8(0x10)
	struct TArray<struct UMaterialInterface*> 3P Material Overrides; // 0x1d8(0x10)
	int32_t Combo Number; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> AnimUpperBody3POverridesMap; // 0x1f0(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> AnimLowerBody3POverridesMap; // 0x240(0x50)
	struct UKillBannerData* KillBannerData; // 0x290(0x08)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x298(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x2a8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x2b8(0x10)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x2c8(0x08)
	struct UBaseGunSkinVOComponent_C* Spawned VO Component; // 0x2d0(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AltMode_AnimationOverridesMap; // 0x2d8(0x50)
	struct AAbility_Melee_Base_C* Owned Weapon; // 0x328(0x08)
	struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> Ares Equippable Mesh Attachment Component Map; // 0x330(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Melee 1P Animation Overrides Map; // 0x380(0x50)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Cosmetic Melee 1P Animation Overrides Map; // 0x3d0(0x50)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Melee_Skin_Base.Melee_Skin_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Melee_Skin_Base.Melee_Skin_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMeshAttachmentComponent(struct FString Key, struct UAresEquippableMeshAttachmentComponent_C*& Attachment); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetMeshAttachmentComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetOwningPlayerInfo(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?); // Function Melee_Skin_Base.Melee_Skin_Base_C.GetOwningPlayerInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMeleeSkinInitialized(); // Function Melee_Skin_Base.Melee_Skin_Base_C.OnMeleeSkinInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Change VFX Meshes Parent(); // Function Melee_Skin_Base.Melee_Skin_Base_C.Change VFX Meshes Parent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get VFX Meshes Parent(struct USkeletalMeshComponent*& Mesh); // Function Melee_Skin_Base.Melee_Skin_Base_C.Get VFX Meshes Parent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload, struct UPreloadManager* PreloadManager); // Function Melee_Skin_Base.Melee_Skin_Base_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Add VO Component(); // Function Melee_Skin_Base.Melee_Skin_Base_C.Add VO Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Add VFX Meshes(); // Function Melee_Skin_Base.Melee_Skin_Base_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Melee_Skin_Base.Melee_Skin_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Attach to Ability Melee Base(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Melee_Skin_Base.Melee_Skin_Base_C.Attach to Ability Melee Base // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Melee_Skin_Base(int32_t EntryPoint); // Function Melee_Skin_Base.Melee_Skin_Base_C.ExecuteUbergraph_Melee_Skin_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

