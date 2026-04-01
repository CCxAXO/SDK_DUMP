// BlueprintGeneratedClass Melee_Chroma_Base.Melee_Chroma_Base_C
// Size: 0x338 (Inherited: 0x140)
struct UMelee_Chroma_Base_C : UChromaSkinOverride {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x148(0x10)
	struct TArray<struct UMaterialInterface*> 3P Material Overrides; // 0x158(0x10)
	struct TMap<struct TSoftClassPtr<UObject>, struct AEffectContainer*> EffectContainerOverrides; // 0x168(0x50)
	struct TArray<struct UMaterialInterface*> VFX Spawned Mesh Material Override; // 0x1b8(0x10)
	struct UBaseGunSkinVOComponent_C* VO Component; // 0x1c8(0x08)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AnimationOverridesMap; // 0x1d0(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct UAnimationAsset*> AnimUpperBody3POverridesMap; // 0x220(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct UAnimationAsset*> AnimLowerBody3POverridesMap; // 0x270(0x50)
	struct TMap<struct UAnimSlot1P*, struct UAnimationAsset*> AltMode_AnimationOverridesMap; // 0x2c0(0x50)
	enum class Variant_Color_Enum Variant Color; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct TArray<struct FMaterial_Array_Struct> Attachment Component Material Overrides; // 0x318(0x10)
	struct TArray<struct FMaterial_Array_Struct> Attachment Component VFX Spawned Mesh Material Override; // 0x328(0x10)

	enum class EAresParticleVariantColor GetVariantColor(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetVariantColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetMaterialToDefault(int32_t Index, struct UMaterialInterface* Original Material, struct FString& Ignore This); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ResetMaterialToDefault // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMagazineMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetFirstPersonMagazineMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GenerateRandomValue(int32_t MaxInts, int32_t& Random Int); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GenerateRandomValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetVFXMeshes(struct TArray<struct UStaticMeshComponent*>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetVFXMeshes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMaterial(int32_t MaterialSlot, struct UMaterialInstanceDynamic*& DynamicMaterial, struct UMaterialInterface*& Original Material); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Spawned VFX Meshes from Attachment Components(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Get Spawned VFX Meshes from Attachment Components // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload, struct UPreloadManager* PreloadManager); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Create Variant Materials(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Create Variant Materials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override Variant Color(struct TArray<struct UMaterialInterface*>& Material Array); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Override Variant Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Spawned VFXMeshes from Base(struct TArray<struct UStaticMeshComponent*>& VFX Spawned Meshes); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Get Spawned VFXMeshes from Base // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override Spawned VFXMesh Materials(struct TArray<struct UStaticMeshComponent*>& VFX Spawned Meshes, struct TArray<struct UMaterialInterface*>& VFX Spawned Mesh Material Overrides); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Override Spawned VFXMesh Materials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Override Attachment Materials(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Override Attachment Materials // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override Attachment VFX Materials(struct AAresEquippable* Equippable, struct AActor* Owner); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.Override Attachment VFX Materials // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Melee_Chroma_Base(int32_t EntryPoint); // Function Melee_Chroma_Base.Melee_Chroma_Base_C.ExecuteUbergraph_Melee_Chroma_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

