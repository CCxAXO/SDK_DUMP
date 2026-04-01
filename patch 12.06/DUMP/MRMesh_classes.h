// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x3a0 (Inherited: 0x330)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x330(0x10)
	bool ScanWorld; // 0x340(0x01)
	bool RequestNormals; // 0x341(0x01)
	bool RequestVertexConfidence; // 0x342(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x343(0x01)
	char pad_344[0x4]; // 0x344(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x348(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x358(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x368(0x10)
	float UpdateInterval; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UMRMeshComponent* MRMesh; // 0x380(0x08)
	char pad_388[0x18]; // 0x388(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1b42740
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3be8d40
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3be8e30
};

// Class MRMesh.MRMeshBodyHolder
// Size: 0x238 (Inherited: 0x30)
struct UMRMeshBodyHolder : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UBodySetup* BodySetup; // 0x38(0x08)
	struct FBodyInstance BodyInstance; // 0x40(0x190)
	char pad_1D0[0x68]; // 0x1d0(0x68)
};

// Class MRMesh.MRMeshComponent
// Size: 0x710 (Inherited: 0x690)
struct UMRMeshComponent : UPrimitiveComponent {
	char pad_690[0x8]; // 0x690(0x08)
	struct UMaterialInterface* Material; // 0x698(0x08)
	struct UMaterialInterface* WireframeMaterial; // 0x6a0(0x08)
	bool bCreateMeshProxySections; // 0x6a8(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x6a9(0x01)
	char pad_6AA[0x1]; // 0x6aa(0x01)
	bool bNeverCreateCollisionMesh; // 0x6ab(0x01)
	char pad_6AC[0x44]; // 0x6ac(0x44)
	struct TArray<struct UMRMeshBodyHolder*> BodyHolders; // 0x6f0(0x10)
	char pad_700[0x10]; // 0x700(0x10)

	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bebc20
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3beb820
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3beb930
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3beba60
	void RequestNavMeshUpdate(); // Function MRMesh.MRMeshComponent.RequestNavMeshUpdate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bebd50
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bebdc0
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb7f0
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beb910
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3beba40
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bebd90
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bebd20
};

// Class MRMesh.MeshReconstructorBase
// Size: 0x30 (Inherited: 0x30)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bf07f0
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bf0820
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a8d30
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bf07b0
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a31c60
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (RequiredAPI|Native|Public) // @ game+0x28a8ad0
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (RequiredAPI|Native|Public) // @ game+0x3bf06b0
};

