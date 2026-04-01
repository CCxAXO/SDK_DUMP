// BlueprintGeneratedClass BombDetonationActor.BombDetonationActor_C
// Size: 0x4f0 (Inherited: 0x4b0)
struct ABombDetonationActor_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct USphereComponent* Sphere; // 0x4b8(0x08)
	struct UParticleSystemComponent* SonarEffect; // 0x4c0(0x08)
	struct TArray<struct APawn*> PingedPawns; // 0x4c8(0x10)
	double ExpandMaxSize; // 0x4d8(0x08)
	double ExpandTime; // 0x4e0(0x08)
	double Damage; // 0x4e8(0x08)

	void ReplicateBombHit(struct AShooterCharacter* HitCharacter); // Function BombDetonationActor.BombDetonationActor_C.ReplicateBombHit // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function BombDetonationActor.BombDetonationActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BombDetonationActor.BombDetonationActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_228_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BombDetonationActor.BombDetonationActor_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_228_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombDetonationActor(int32_t EntryPoint); // Function BombDetonationActor.BombDetonationActor_C.ExecuteUbergraph_BombDetonationActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

