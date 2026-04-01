// BlueprintGeneratedClass Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C
// Size: 0x308 (Inherited: 0x108)
struct UTotem_CosmeticComponent_Base_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct UAnimInstance* Weapon Cosmetic AnimGraph; // 0x110(0x08)
	struct USkeletalMesh* 1P Mesh; // 0x118(0x08)
	struct USkeletalMesh* 3P Mesh; // 0x120(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AnimationOverridesMap; // 0x128(0x50)
	struct TArray<struct UMaterialInterface*> 3P Material Overrides; // 0x178(0x10)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> AnimUpperBody3POverridesMap; // 0x188(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> AnimLowerBody3POverridesMap; // 0x1d8(0x50)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x228(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x238(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x248(0x10)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x258(0x08)
	struct UBaseGunSkinVOComponent_C* Spawned VO Component; // 0x260(0x08)
	struct TMap<struct UAnimSlotGun1P*, struct UAnimationAsset*> Cosmetic 1P Animation Overrides Map; // 0x268(0x50)
	struct AAbility_Melee_Base_C* Owned Weapon; // 0x2b8(0x08)
	struct AEquippable_Totem_base_C* Owned Totem; // 0x2c0(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> Default FXCs; // 0x2c8(0x10)
	struct AEffectContainer* Equip FXC; // 0x2d8(0x08)
	struct AEffectContainer* Idle FXC; // 0x2e0(0x08)
	struct AEffectContainer* Inspect FXC; // 0x2e8(0x08)
	struct TArray<struct AEffectContainer*> Preload FXCs; // 0x2f0(0x10)
	struct AEffectContainer* Action FXC; // 0x300(0x08)

	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Override Effect(int32_t Effect Slot, struct AEffectContainer* Override FXC); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.Override Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOwningPlayerInfo(struct ABasePlayerCharacter_C*& Owning Player, enum class EAresTeamRole& Team Role, double& Health, double& Shield, bool& isAlive?); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.GetOwningPlayerInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTotemSkinInitialized(); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.OnTotemSkinInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Change VFX Meshes Parent(); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.Change VFX Meshes Parent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get VFX Meshes Parent(struct USkeletalMeshComponent*& Mesh); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.Get VFX Meshes Parent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload, struct UPreloadManager* PreloadManager); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Add VO Component(); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.Add VO Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Add VFX Meshes(); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Totem_CosmeticComponent_Base(int32_t EntryPoint); // Function Totem_CosmeticComponent_Base.Totem_CosmeticComponent_Base_C.ExecuteUbergraph_Totem_CosmeticComponent_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

