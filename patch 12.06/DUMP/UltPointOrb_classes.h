// BlueprintGeneratedClass UltPointOrb.UltPointOrb_C
// Size: 0x658 (Inherited: 0x604)
struct AUltPointOrb_C : ABaseCollectableOrb_C {
	char pad_604[0x4]; // 0x604(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	int32_t PlayerUltimatePointsReward; // 0x610(0x04)
	bool bShrinkOrbMesh; // 0x614(0x01)
	char pad_615[0x3]; // 0x615(0x03)
	struct FVector StartingMeshScale; // 0x618(0x18)
	struct FVector FinalMeshScale; // 0x630(0x18)
	bool ResetScaleGate; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	struct FName ParticleFloatScale; // 0x64c(0x0c)

	void GrantOrbEffect(struct AShooterCharacter* ShooterCharacter); // Function UltPointOrb.UltPointOrb_C.GrantOrbEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function UltPointOrb.UltPointOrb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__UltPointOrb_Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function UltPointOrb.UltPointOrb_C.BndEvt__UltPointOrb_Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function UltPointOrb.UltPointOrb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_UltPointOrb(int32_t EntryPoint); // Function UltPointOrb.UltPointOrb_C.ExecuteUbergraph_UltPointOrb // (Final|UbergraphFunction) // @ game+0x1b42740
};

