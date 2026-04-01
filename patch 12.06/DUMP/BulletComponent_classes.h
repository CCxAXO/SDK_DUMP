// BlueprintGeneratedClass BulletComponent.BulletComponent_C
// Size: 0x170 (Inherited: 0x108)
struct UBulletComponent_C : UAresWeaponAttachmentComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	enum class BulletEnum BulletEnum; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<struct UStaticMesh*> BulletMeshList; // 0x118(0x10)
	int32_t numBullets; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct UStaticMeshComponent*> PrimaryBulletArray; // 0x130(0x10)
	struct FName SocketName; // 0x140(0x0c)
	bool HideBulletsOnFire?; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct UStaticMesh* MeshOverride; // 0x150(0x08)
	struct UMeshComponent* MeshParent; // 0x158(0x08)
	bool Visibility; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UMaterialInterface* Material Override; // 0x168(0x08)

	void UpdateBulletMaterialsWithIndex(struct UMaterialInterface* Material, int32_t Index); // Function BulletComponent.BulletComponent_C.UpdateBulletMaterialsWithIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAllMeshesVisible(); // Function BulletComponent.BulletComponent_C.SetAllMeshesVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReapplyMeshVisibility(); // Function BulletComponent.BulletComponent_C.ReapplyMeshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBulletMaterials(struct UMaterialInterface* Material); // Function BulletComponent.BulletComponent_C.UpdateBulletMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBulletArrayVisibility(bool Visibility); // Function BulletComponent.BulletComponent_C.UpdateBulletArrayVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetBulletMeshToUse(struct UStaticMesh*& BulletMesh); // Function BulletComponent.BulletComponent_C.GetBulletMeshToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateBulletArrayMeshes(struct UStaticMesh* BulletMesh, struct UMaterialInterface* BulletMaterial, struct FName Socket, struct UMeshComponent* New Parent, bool Visibility, int32_t Number Of Bullets); // Function BulletComponent.BulletComponent_C.UpdateBulletArrayMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateBullets(struct UMeshComponent* Parent, struct UStaticMesh* BulletMesh, struct TArray<struct UStaticMeshComponent*>& BulletArray, struct FName SocketName, int32_t Number Of Bullets, struct UMaterialInterface* Material Override); // Function BulletComponent.BulletComponent_C.CreateBullets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTarget(struct TScriptInterface<IPersonalizationVisualInterface_C> PersonalizationInterface); // Function BulletComponent.BulletComponent_C.GetTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BulletComponent.BulletComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Make Bullets(struct TScriptInterface<IPersonalizationVisualInterface_C> PersonalizationInterface); // Function BulletComponent.BulletComponent_C.Make Bullets // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BulletComponent(int32_t EntryPoint); // Function BulletComponent.BulletComponent_C.ExecuteUbergraph_BulletComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

