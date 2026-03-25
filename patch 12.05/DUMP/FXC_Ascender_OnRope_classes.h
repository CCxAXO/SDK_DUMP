// BlueprintGeneratedClass FXC_Ascender_OnRope.FXC_Ascender_OnRope_C
// Size: 0x720 (Inherited: 0x620)
struct AFXC_Ascender_OnRope_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x628(0x08)
	struct UStaticMeshComponent* ZipLine_Attachment_VFX; // 0x630(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct ABP_RopeAscender_C* Ascender; // 0x648(0x08)
	struct FVector DesiredOffset; // 0x650(0x18)
	struct FVector VisualOffset; // 0x668(0x18)
	struct FVector RopeOffset; // 0x680(0x18)
	struct UMaterialInstanceDynamic* BendingRopeMaterial; // 0x698(0x08)
	struct UMaterial* BaseBendingRopeMaterial; // 0x6a0(0x08)
	struct UMaterialInterface* OriginalRopeMaterial; // 0x6a8(0x08)
	bool MaterialApplied; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct UStaticMeshComponent* BendableRopeMesh; // 0x6b8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x6c0(0x08)
	double StartTime; // 0x6c8(0x08)
	double StartLerpTime; // 0x6d0(0x08)
	double StopTime; // 0x6d8(0x08)
	struct FVector AttacherOffset; // 0x6e0(0x18)
	struct FName BeamSocket; // 0x6f8(0x0c)
	bool VerticalRope; // 0x704(0x01)
	char pad_705[0x3]; // 0x705(0x03)
	struct FVector LineOrigin; // 0x708(0x18)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void FirstPersonRopeUpdate(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.FirstPersonRopeUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void InitializeRopeActor(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.InitializeRopeActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetVisuals(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ResetVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UpdateAttacher(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateAttacher // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateParticleSystem(); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.UpdateParticleSystem // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Ascender_OnRope(int32_t EntryPoint); // Function FXC_Ascender_OnRope.FXC_Ascender_OnRope_C.ExecuteUbergraph_FXC_Ascender_OnRope // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

