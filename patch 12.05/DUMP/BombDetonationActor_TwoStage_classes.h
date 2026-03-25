// BlueprintGeneratedClass BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C
// Size: 0x531 (Inherited: 0x4f0)
struct ABombDetonationActor_TwoStage_C : ABombDetonationActor_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x4f8(0x08)
	struct TArray<struct ABasePlayerCharacter_C*> Hit Players; // 0x500(0x10)
	double Kill timer; // 0x510(0x08)
	struct FTimerHandle Killsphere Timer; // 0x518(0x08)
	struct TArray<struct ABasePlayerCharacter_C*> Hit PlayersKillSphere; // 0x520(0x10)
	bool Expanding; // 0x530(0x01)

	void AuthDamagePlayers(); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.AuthDamagePlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyDamageToPlayer(struct ABasePlayerCharacter_C* Player); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ApplyDamageToPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSphereSize(double DeltaTime); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.UpdateSphereSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterKilledByBomb(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.OnCharacterKilledByBomb // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BombDetonationActor_TwoStage(int32_t EntryPoint); // Function BombDetonationActor_TwoStage.BombDetonationActor_TwoStage_C.ExecuteUbergraph_BombDetonationActor_TwoStage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

