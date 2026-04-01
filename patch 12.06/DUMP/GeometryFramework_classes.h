// Class GeometryFramework.MeshCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshCommandChangeTarget : UInterface {
};

// Class GeometryFramework.MeshReplacementCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshReplacementCommandChangeTarget : UInterface {
};

// Class GeometryFramework.MeshVertexCommandChangeTarget
// Size: 0x30 (Inherited: 0x30)
struct UMeshVertexCommandChangeTarget : UInterface {
};

// Class GeometryFramework.BaseDynamicMeshComponent
// Size: 0x740 (Inherited: 0x6e0)
struct UBaseDynamicMeshComponent : UMeshComponent {
	char pad_6E0[0x18]; // 0x6e0(0x18)
	bool bExplicitShowWireframe; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	struct FLinearColor WireframeColor; // 0x6fc(0x10)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	struct FColor ConstantColor; // 0x710(0x04)
	enum class EDynamicMeshVertexColorTransformMode ColorSpaceMode; // 0x714(0x01)
	bool bEnableFlatShading; // 0x715(0x01)
	bool bEnableViewModeOverrides; // 0x716(0x01)
	char pad_717[0x1]; // 0x717(0x01)
	struct UMaterialInterface* OverrideRenderMaterial; // 0x718(0x08)
	struct UMaterialInterface* SecondaryRenderMaterial; // 0x720(0x08)
	char pad_728[0x1]; // 0x728(0x01)
	bool bEnableRayTracing; // 0x729(0x01)
	char pad_72A[0x6]; // 0x72a(0x06)
	struct TArray<struct UMaterialInterface*> BaseMaterials; // 0x730(0x10)

	void SetViewModeOverridesEnabled(bool bEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564cc70
	void SetVertexColorSpaceTransformMode(enum class EDynamicMeshVertexColorTransformMode NewMode); // Function GeometryFramework.BaseDynamicMeshComponent.SetVertexColorSpaceTransformMode // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564cf30
	void SetShadowsEnabled(bool bEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564cdb0
	void SetSecondaryRenderMaterial(struct UMaterialInterface* Material); // Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564c810
	void SetSecondaryBuffersVisibility(bool bSetVisible); // Function GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564c6a0
	void SetOverrideRenderMaterial(struct UMaterialInterface* Material); // Function GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564cb30
	void SetEnableWireframeRenderPass(bool bEnable); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass // (Native|Public|BlueprintCallable) // @ game+0x564d2e0
	void SetEnableRaytracing(bool bSetEnabled); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564c560
	void SetEnableFlatShading(bool bEnable); // Function GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x47cfe00
	void SetConstantOverrideColor(struct FColor NewColor); // Function GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor // (RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x564d070
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode); // Function GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564d1a0
	bool HasOverrideRenderMaterial(int32_t K); // Function GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564ca20
	bool GetViewModeOverridesEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564cc30
	enum class EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode(); // Function GeometryFramework.BaseDynamicMeshComponent.GetVertexColorSpaceTransformMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564cef0
	bool GetShadowsEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564cd70
	struct UMaterialInterface* GetSecondaryRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564c7a0
	bool GetSecondaryBuffersVisibility(); // Function GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564c660
	struct UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex); // Function GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564c910
	bool GetFlatShadingEnabled(); // Function GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564ceb0
	bool GetEnableWireframeRenderPass(); // Function GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564d2a0
	bool GetEnableRaytracing(); // Function GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564c520
	struct UDynamicMesh* GetDynamicMesh(); // Function GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh // (Native|Public|BlueprintCallable) // @ game+0x564d3e0
	struct FColor GetConstantOverrideColor(); // Function GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x564d030
	enum class EDynamicMeshComponentColorOverrideMode GetColorOverrideMode(); // Function GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x564d160
	void ClearSecondaryRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x564c7e0
	void ClearOverrideRenderMaterial(); // Function GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x47d0430
};

// Class GeometryFramework.DynamicMeshComponent
// Size: 0x9a0 (Inherited: 0x740)
struct UDynamicMeshComponent : UBaseDynamicMeshComponent {
	char pad_740[0x8]; // 0x740(0x08)
	struct UDynamicMesh* MeshObject; // 0x748(0x08)
	char pad_750[0x130]; // 0x750(0x130)
	enum class EDynamicMeshComponentTangentsMode TangentsType; // 0x880(0x01)
	char pad_881[0x3f]; // 0x881(0x3f)
	enum class ECollisionTraceFlag CollisionType; // 0x8c0(0x01)
	bool bUseAsyncCooking; // 0x8c1(0x01)
	bool bEnableComplexCollision; // 0x8c2(0x01)
	bool bDeferCollisionUpdates; // 0x8c3(0x01)
	char pad_8C4[0x4]; // 0x8c4(0x04)
	struct UBodySetup* MeshBodySetup; // 0x8c8(0x08)
	char pad_8D0[0x38]; // 0x8d0(0x38)
	struct FKAggregateGeom AggGeom; // 0x908(0x78)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x980(0x10)
	char pad_990[0x10]; // 0x990(0x10)

	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots); // Function GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653890
	void UpdateCollision(bool bOnlyIfPending); // Function GeometryFramework.DynamicMeshComponent.UpdateCollision // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653270
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType); // Function GeometryFramework.DynamicMeshComponent.SetTangentsType // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653780
	void SetDynamicMesh(struct UDynamicMesh* NewMesh); // Function GeometryFramework.DynamicMeshComponent.SetDynamicMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653fb0
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate); // Function GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653370
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate); // Function GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653540
	void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors); // Function GeometryFramework.DynamicMeshComponent.NotifyMeshVertexAttributesModified // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653c70
	void NotifyMeshModified(); // Function GeometryFramework.DynamicMeshComponent.NotifyMeshModified // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5653f80
	enum class EDynamicMeshComponentTangentsMode GetTangentsTypePure(); // Function GeometryFramework.DynamicMeshComponent.GetTangentsTypePure // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x5653750
	enum class EDynamicMeshComponentTangentsMode GetTangentsType(); // Function GeometryFramework.DynamicMeshComponent.GetTangentsType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5653750
	void EnableComplexAsSimpleCollision(); // Function GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x56536d0
	void ConfigureMaterialSet(struct TArray<struct UMaterialInterface*>& NewMaterialSet); // Function GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5653af0
};

// Class GeometryFramework.DynamicMeshActor
// Size: 0x478 (Inherited: 0x460)
struct ADynamicMeshActor : AActor {
	struct UDynamicMeshComponent* DynamicMeshComponent; // 0x460(0x08)
	bool bEnableComputeMeshPool; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UDynamicMeshPool* DynamicMeshPool; // 0x470(0x08)

	bool ReleaseComputeMesh(struct UDynamicMesh* Mesh); // Function GeometryFramework.DynamicMeshActor.ReleaseComputeMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5659140
	void ReleaseAllComputeMeshes(); // Function GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x56590e0
	struct UDynamicMeshComponent* GetDynamicMeshComponent(); // Function GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x436c070
	struct UDynamicMeshPool* GetComputeMeshPool(); // Function GeometryFramework.DynamicMeshActor.GetComputeMeshPool // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5659370
	void FreeAllComputeMeshes(); // Function GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x5659050
	struct UDynamicMesh* AllocateComputeMesh(); // Function GeometryFramework.DynamicMeshActor.AllocateComputeMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x56592f0
};

// Class GeometryFramework.DynamicMeshGenerator
// Size: 0x30 (Inherited: 0x30)
struct UDynamicMeshGenerator : UObject {
};

// Class GeometryFramework.DynamicMesh
// Size: 0xb8 (Inherited: 0x30)
struct UDynamicMesh : UObject {
	char pad_30[0x48]; // 0x30(0x48)
	struct FMulticastInlineDelegate MeshModifiedBPEvent; // 0x78(0x10)
	char pad_88[0x20]; // 0x88(0x20)
	struct UDynamicMeshGenerator* MeshGenerator; // 0xa8(0x08)
	bool bEnableMeshGenerator; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct UDynamicMesh* ResetToCube(); // Function GeometryFramework.DynamicMesh.ResetToCube // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x565a730
	struct UDynamicMesh* Reset(); // Function GeometryFramework.DynamicMesh.Reset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x565a760
	bool IsEmpty(); // Function GeometryFramework.DynamicMesh.IsEmpty // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x565a700
	int32_t GetTriangleCount(); // Function GeometryFramework.DynamicMesh.GetTriangleCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x565a6d0
};

// Class GeometryFramework.DynamicMeshPool
// Size: 0x50 (Inherited: 0x30)
struct UDynamicMeshPool : UObject {
	struct TArray<struct UDynamicMesh*> CachedMeshes; // 0x30(0x10)
	struct TArray<struct UDynamicMesh*> AllCreatedMeshes; // 0x40(0x10)

	void ReturnMesh(struct UDynamicMesh* Mesh); // Function GeometryFramework.DynamicMeshPool.ReturnMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x565ab10
	void ReturnAllMeshes(); // Function GeometryFramework.DynamicMeshPool.ReturnAllMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x565aaf0
	struct UDynamicMesh* RequestMesh(); // Function GeometryFramework.DynamicMeshPool.RequestMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x565ac80
	void FreeAllMeshes(); // Function GeometryFramework.DynamicMeshPool.FreeAllMeshes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x565aa90
};

