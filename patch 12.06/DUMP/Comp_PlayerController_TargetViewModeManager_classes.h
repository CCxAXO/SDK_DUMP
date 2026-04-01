// BlueprintGeneratedClass Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C
// Size: 0x250 (Inherited: 0xd8)
struct UComp_PlayerController_TargetViewModeManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AAresPlayerController* PlayerController; // 0xe0(0x08)
	struct AShooterCharacter* ViewTargetShooterCharacter; // 0xe8(0x08)
	struct UComp_ShooterCharacter_ViewTargetingModeManager_C* ViewTargetViewModeManager; // 0xf0(0x08)
	struct FName TargetingViewNavMeshTag; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct UStaticMeshComponent*> CachedTargetViewWorldNavStaticMesh; // 0x108(0x10)
	struct TMap<struct UStaticMeshComponent*, struct UMaterialInterface*> OriginalMaterialInstances0; // 0x118(0x50)
	struct TMap<struct UStaticMeshComponent*, struct UTexture*> Original Material Instances 1 Level Mask; // 0x168(0x50)
	struct TMap<struct UStaticMeshComponent*, struct UMaterialInterface*> OriginalMaterialInstances1; // 0x1b8(0x50)
	struct UMaterialInterface* CurrentMaterialInstance0; // 0x208(0x08)
	struct UMaterialInterface* CurrentMaterialInstance1; // 0x210(0x08)
	struct FName LevelMaskName; // 0x218(0x0c)
	struct FName TargetingLandmarkTag; // 0x224(0x0c)
	struct UMaterialInterface* CurrentLandmarkMaterial; // 0x230(0x08)
	struct UMaterialInterface* DefaultLandmarkMaterial; // 0x238(0x08)
	struct TArray<struct UStaticMeshComponent*> LandmarkStaticMeshComponents; // 0x240(0x10)

	void RefreshLandmarkMaterial(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.RefreshLandmarkMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLandmarkStaticMeshMaterial(struct UStaticMeshComponent* StaticMeshComponent, struct UMaterialInterface* Material); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.SetLandmarkStaticMeshMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTargetViewModeActive(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.UpdateTargetViewModeActive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RevertTargetViewMaterial(int32_t MaterialIndex, struct TMap<struct UStaticMeshComponent*, struct UMaterialInterface*>& OriginalMaterialInstanceMap); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.RevertTargetViewMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshViewModeMaterial(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.RefreshViewModeMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SaveMaterialInstances1_LevelMask(struct UStaticMeshComponent*& NavStaticMesh, struct UMaterialInterface* MaterialInstance1); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.SaveMaterialInstances1_LevelMask // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeTargetViewWorldMaterialSwap(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.InitializeTargetViewWorldMaterialSwap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshTargetViewMode(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.RefreshTargetViewMode // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOwnerWantsViewModeActiveUpdated(bool TargetViewModeActive); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.HandleOwnerWantsViewModeActiveUpdated // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleViewTargetShooterCharacterPerspectiveChanged(struct AShooterCharacter* Character); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.HandleViewTargetShooterCharacterPerspectiveChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerViewTargetOrModeChanged(struct FViewTargetInfo& ViewTargetInfo); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.HandlePlayerViewTargetOrModeChanged // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeTargetViewWorldLandmarkMaterials(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.InitializeTargetViewWorldLandmarkMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_PlayerController_TargetViewModeManager(int32_t EntryPoint); // Function Comp_PlayerController_TargetViewModeManager.Comp_PlayerController_TargetViewModeManager_C.ExecuteUbergraph_Comp_PlayerController_TargetViewModeManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

