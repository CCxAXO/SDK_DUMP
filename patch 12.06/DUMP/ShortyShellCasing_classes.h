// BlueprintGeneratedClass ShortyShellCasing.ShortyShellCasing_C
// Size: 0x648 (Inherited: 0x638)
struct AShortyShellCasing_C : ABaseShellCasing_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	double RotationSpeed; // 0x640(0x08)

	void ReceiveTick(float DeltaSeconds); // Function ShortyShellCasing.ShortyShellCasing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function ShortyShellCasing.ShortyShellCasing_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ShortyShellCasing(int32_t EntryPoint); // Function ShortyShellCasing.ShortyShellCasing_C.ExecuteUbergraph_ShortyShellCasing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

