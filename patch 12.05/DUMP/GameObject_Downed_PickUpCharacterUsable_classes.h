// BlueprintGeneratedClass GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C
// Size: 0x532 (Inherited: 0x4b0)
struct AGameObject_Downed_PickUpCharacterUsable_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UUsableComponent* Usable; // 0x4b8(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x4c0(0x08)
	struct UComp_PlayerCharacter_Downed_C* DownedComponent; // 0x4c8(0x08)
	struct FTransform DownedCharacterTransformOffset; // 0x4d0(0x60)
	bool bAttachToDownedCharacter; // 0x530(0x01)
	bool bServerCanUse; // 0x531(0x01)

	void ReceiveBeginPlay(); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnRecovered(struct AShooterPlayerState* RecoveredByPlayer, struct AShooterCharacter* RecoveredCharacter); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.OnRecovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.OnCharacterDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_1_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_2_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GameObject_Downed_PickUpCharacterUsable(int32_t EntryPoint); // Function GameObject_Downed_PickUpCharacterUsable.GameObject_Downed_PickUpCharacterUsable_C.ExecuteUbergraph_GameObject_Downed_PickUpCharacterUsable // (Final|UbergraphFunction) // @ game+0x1af5410
};

