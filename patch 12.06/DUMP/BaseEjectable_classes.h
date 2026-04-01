// BlueprintGeneratedClass BaseEjectable.BaseEjectable_C
// Size: 0x638 (Inherited: 0x5f0)
struct ABaseEjectable_C : AAresEjectable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f0(0x08)
	struct UAresOutlineComponent* AresOutline3P; // 0x5f8(0x08)
	struct UAresOutlineComponent* AresOutline1P; // 0x600(0x08)
	struct UStaticMeshComponent* Mesh1P; // 0x608(0x08)
	struct UStaticMeshComponent* Mesh3P; // 0x610(0x08)
	struct UStaticMeshComponent* ActiveMesh; // 0x618(0x08)
	bool ApplyScaleOnGround; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct UStaticMesh* Original Mesh 1P; // 0x628(0x08)
	struct UStaticMesh* Original Mesh 3P; // 0x630(0x08)

	void RotateToClosestRestNormal(struct FVector SurfaceNormal, struct TArray<struct FVector>& RestNormalz); // Function BaseEjectable.BaseEjectable_C.RotateToClosestRestNormal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BuildRotatorFromTwoVectors(struct FVector A, struct FVector B, struct FRotator& Result); // Function BaseEjectable.BaseEjectable_C.BuildRotatorFromTwoVectors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void Has1PMesh(bool& Has1PMesh); // Function BaseEjectable.BaseEjectable_C.Has1PMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void Calc1PSpawnPosition(struct FVector InWorldPosition, struct FVector& OutWorldPosition); // Function BaseEjectable.BaseEjectable_C.Calc1PSpawnPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EventSpawned(); // Function BaseEjectable.BaseEjectable_C.EventSpawned // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BaseEjectable.BaseEjectable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void EventOverrideMesh(struct UStaticMesh* OverrideMesh1P, struct UStaticMesh* OverrideMesh3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideMesh // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EventOverrideMaterial(struct UMaterialInterface* OverrideMaterial1P, struct UMaterialInterface* OverrideMaterial3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideMaterial // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EventOverride1PMesh(struct UStaticMesh* OverrideMesh); // Function BaseEjectable.BaseEjectable_C.EventOverride1PMesh // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EventOverride3PMesh(struct UStaticMesh* OverrideMesh); // Function BaseEjectable.BaseEjectable_C.EventOverride3PMesh // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EventOverride1PMaterial(struct UMaterialInterface* OverrideMaterial); // Function BaseEjectable.BaseEjectable_C.EventOverride1PMaterial // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EventOverride3PMaterial(struct UMaterialInterface* OverrideMaterial); // Function BaseEjectable.BaseEjectable_C.EventOverride3PMaterial // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void EventOverrideAdditional1PMaterials(struct TArray<struct UMaterialInterface*>& OverrideMaterials); // Function BaseEjectable.BaseEjectable_C.EventOverrideAdditional1PMaterials // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void EventOverrideAdditional3PMaterials(struct TArray<struct UMaterialInterface*>& OverrideMaterials); // Function BaseEjectable.BaseEjectable_C.EventOverrideAdditional3PMaterials // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void EventOverrideAdditionalMaterials(struct TArray<struct UMaterialInterface*>& OverrideMaterials1P, struct TArray<struct UMaterialInterface*>& OverrideMaterials3P); // Function BaseEjectable.BaseEjectable_C.EventOverrideAdditionalMaterials // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseEjectable(int32_t EntryPoint); // Function BaseEjectable.BaseEjectable_C.ExecuteUbergraph_BaseEjectable // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

