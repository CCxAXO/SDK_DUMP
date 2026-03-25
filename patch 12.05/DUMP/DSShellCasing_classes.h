// BlueprintGeneratedClass DSShellCasing.DSShellCasing_C
// Size: 0x648 (Inherited: 0x638)
struct ADSShellCasing_C : ABaseShellCasing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	double RotationSpeed; // 0x640(0x08)

	void ReceiveTick(float DeltaSeconds); // Function DSShellCasing.DSShellCasing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function DSShellCasing.DSShellCasing_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DSShellCasing(int32_t EntryPoint); // Function DSShellCasing.DSShellCasing_C.ExecuteUbergraph_DSShellCasing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

