// BlueprintGeneratedClass Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C
// Size: 0x2b1 (Inherited: 0x240)
struct UAttachment_Base_Reflex_RedDot_Prototype_C : UAttachment_Base_Reflex_RedDot_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	bool ScopeMeshVisibility; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct FTransform ScopeMeshTransform; // 0x250(0x60)
	bool ShouldShowScopeVFX; // 0x2b0(0x01)

	bool ShouldDisplayVFX(); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.ShouldDisplayVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetOrCreateScopeComponent(struct UScopeComponent_C*& ScopeComponent); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.GetOrCreateScopeComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdjustSpawnedMesh(struct UMeshComponent* Mesh); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.AdjustSpawnedMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddToGun (Override This One)(); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.AddToGun (Override This One) // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Attachment_Base_Reflex_RedDot_Prototype(int32_t EntryPoint); // Function Attachment_Base_Reflex_RedDot_Prototype.Attachment_Base_Reflex_RedDot_Prototype_C.ExecuteUbergraph_Attachment_Base_Reflex_RedDot_Prototype // (Final|UbergraphFunction) // @ game+0x1af5410
};

