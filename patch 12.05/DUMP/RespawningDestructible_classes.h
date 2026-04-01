// BlueprintGeneratedClass RespawningDestructible.RespawningDestructible_C
// Size: 0x558 (Inherited: 0x4b0)
struct ARespawningDestructible_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UUsableComponent* Usable; // 0x4b8(0x08)
	struct UComp_NavLinkManager_C* NavLinkManager; // 0x4c0(0x08)
	struct USimpleReplicationSleepComponent* SimpleReplicationSleep; // 0x4c8(0x08)
	struct UParticleSystem* DeathVFX; // 0x4d0(0x08)
	struct FMulticastInlineDelegate ServerDeathEvent; // 0x4d8(0x10)
	bool IsAlive_1; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UAkAudioEvent* Ak Event Destruction; // 0x4f0(0x08)
	struct UChildDamageSectionComponent* CurrentHealthSection; // 0x4f8(0x08)
	bool ShouldBreakOnOverlap; // 0x500(0x01)
	bool CanBeCrushed; // 0x501(0x01)
	char pad_502[0x2]; // 0x502(0x02)
	struct FName DoNotBreakTag; // 0x504(0x0c)
	struct FMulticastInlineDelegate OnDeath; // 0x510(0x10)
	bool bHasKnownGoodDamageSectionState; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TSoftObjectPtr<AAkAcousticPortal> AcousticPortal; // 0x528(0x30)

	bool OnCrushed(struct AActor* CrushingObject, float CrushDamage); // Function RespawningDestructible.RespawningDestructible_C.OnCrushed // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FTransform GetExplosionLocation(); // Function RespawningDestructible.RespawningDestructible_C.GetExplosionLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnLoaded_E0F8D2844B39C28D49548A8403768B9F(struct UObject* Loaded); // Function RespawningDestructible.RespawningDestructible_C.OnLoaded_E0F8D2844B39C28D49548A8403768B9F // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoaded_7390D6704B9D7501029B03934CFFB931(struct UObject* Loaded); // Function RespawningDestructible.RespawningDestructible_C.OnLoaded_7390D6704B9D7501029B03934CFFB931 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoaded_211FCF6149208D3F57F42CBDF64ED734(struct UObject* Loaded); // Function RespawningDestructible.RespawningDestructible_C.OnLoaded_211FCF6149208D3F57F42CBDF64ED734 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuthRoundBegin(); // Function RespawningDestructible.RespawningDestructible_C.OnAuthRoundBegin // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnDie(struct AActor* DamageCauser); // Function RespawningDestructible.RespawningDestructible_C.OnDie // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RoundBeginBroadcast(); // Function RespawningDestructible.RespawningDestructible_C.RoundBeginBroadcast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_133_OnDamagedSignature__DelegateSignature(struct UDamageResponse* Response); // Function RespawningDestructible.RespawningDestructible_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_133_OnDamagedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function RespawningDestructible.RespawningDestructible_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Event Respawn(); // Function RespawningDestructible.RespawningDestructible_C.Event Respawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function RespawningDestructible.RespawningDestructible_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RespawningDestructible_DamageHandler_K2Node_ComponentBoundEvent_0_OnDamageSectionDirtiedSignature__DelegateSignature(); // Function RespawningDestructible.RespawningDestructible_C.BndEvt__RespawningDestructible_DamageHandler_K2Node_ComponentBoundEvent_0_OnDamageSectionDirtiedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnAudioGraphGenerated(); // Function RespawningDestructible.RespawningDestructible_C.OnAudioGraphGenerated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RespawningDestructible.RespawningDestructible_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateSet(struct UObject* TargetObject, struct AGameStateBase* GameState); // Function RespawningDestructible.RespawningDestructible_C.OnGameStateSet // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RespawningDestructible_Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function RespawningDestructible.RespawningDestructible_C.BndEvt__RespawningDestructible_Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RespawningDestructible(int32_t EntryPoint); // Function RespawningDestructible.RespawningDestructible_C.ExecuteUbergraph_RespawningDestructible // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnDeath__DelegateSignature(); // Function RespawningDestructible.RespawningDestructible_C.OnDeath__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ServerDeathEvent__DelegateSignature(); // Function RespawningDestructible.RespawningDestructible_C.ServerDeathEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

