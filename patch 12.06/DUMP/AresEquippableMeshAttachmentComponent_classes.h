// BlueprintGeneratedClass AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C
// Size: 0x201 (Inherited: 0x108)
struct UAresEquippableMeshAttachmentComponent_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct USkeletalMesh* 1P Mesh; // 0x110(0x08)
	struct USkeletalMesh* 3P Mesh; // 0x118(0x08)
	struct FString Attach Point; // 0x120(0x10)
	bool 3P Custom Attachpoint; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FString Attach Point 3P; // 0x138(0x10)
	struct FVector Attach point 3P location offset; // 0x148(0x18)
	struct FRotator Attach point 3P rotation offset; // 0x160(0x18)
	struct TArray<struct UMaterialInterface*> 1P Material Overrides; // 0x178(0x10)
	struct TArray<struct UMaterialInterface*> 3P Material Overrides; // 0x188(0x10)
	struct UAnimInstance* Anim Instance; // 0x198(0x08)
	struct USkeletalMeshComponent* Mesh Component 3P; // 0x1a0(0x08)
	struct USkeletalMeshComponent* Mesh Component 1P; // 0x1a8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> VFX Mesh Dynamic Materials; // 0x1b0(0x10)
	struct TArray<struct UStaticMeshComponent*> VFX Spawned Meshes; // 0x1c0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> 1P Mesh Dynamic Materials; // 0x1d0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> 3P Mesh Dynamic Materials; // 0x1e0(0x10)
	struct TArray<struct FGunSkinVFXMeshInfo> VFX Meshes; // 0x1f0(0x10)
	bool Use 3P VFX?; // 0x200(0x01)

	void Attach Component(struct UMeshComponent* Component, struct UMeshComponent* Parent, bool is3P); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Attach Component // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Detach Component(struct USceneComponent* Component); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Detach Component // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Add VFX Meshes(struct USkeletalMeshComponent* Mesh Component); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Add VFX Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override Materials With Dynamic Materials(bool Override 3P Materials?, struct USkeletalMeshComponent*& Mesh, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Override Materials With Dynamic Materials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get VFX Meshes And Materials(struct TArray<None>& Meshes, struct TArray<struct UMaterialInstanceDynamic*>& Dynamic Materials); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Get VFX Meshes And Materials // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Setup Skeletal Mesh 3P(struct USceneComponent* Attach Parent, struct UMeshComponent* Mesh Parent, struct USkeletalMeshComponent*& Mesh Component 3P); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Setup Skeletal Mesh 3P // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override Materials(struct TArray<struct UMaterialInterface*>& Material Array, struct USkeletalMeshComponent* Mesh Component); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Override Materials // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Setup Skeletal Mesh 1P(struct USceneComponent* Attach Parent, struct UMeshComponent* Mesh Parent, struct USkeletalMeshComponent*& Mesh Component 1P); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.Setup Skeletal Mesh 1P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AresEquippableMeshAttachmentComponent(int32_t EntryPoint); // Function AresEquippableMeshAttachmentComponent.AresEquippableMeshAttachmentComponent_C.ExecuteUbergraph_AresEquippableMeshAttachmentComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

