// BlueprintGeneratedClass Attachment_Base_Muzzle.Attachment_Base_Muzzle_C
// Size: 0x168 (Inherited: 0x110)
struct UAttachment_Base_Muzzle_C : UAttachment_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct USkeletalMesh* 1P Mesh; // 0x118(0x08)
	struct UStaticMesh* 3P Mesh; // 0x120(0x08)
	struct FName SocketName; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct USkeletalMeshComponent* 1pMesh_Spawned; // 0x138(0x08)
	struct UStaticMeshComponent* 3pMesh_Spawned; // 0x140(0x08)
	struct FVector Muzzle Location; // 0x148(0x18)
	struct USkeletalMeshComponent* 1P Parent Mesh; // 0x160(0x08)

	struct FName GetSocketNameForReconstruction(); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.GetSocketNameForReconstruction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct TArray<struct UMaterialInterface*> GetMaterialOverridesForReconstruction(); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.GetMaterialOverridesForReconstruction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UStaticMesh* Get3PMeshForReconstruction(); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.Get3PMeshForReconstruction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddToGun (Override This One)(); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Attachment_Base_Muzzle(int32_t EntryPoint); // Function Attachment_Base_Muzzle.Attachment_Base_Muzzle_C.ExecuteUbergraph_Attachment_Base_Muzzle // (Final|UbergraphFunction) // @ game+0x1b42740
};

