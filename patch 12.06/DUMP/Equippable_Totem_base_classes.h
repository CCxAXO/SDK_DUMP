// BlueprintGeneratedClass Equippable_Totem_base.Equippable_Totem_base_C
// Size: 0x11d0 (Inherited: 0x10b0)
struct AEquippable_Totem_base_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct USyncedTimerComponent* SyncedTimer; // 0x10b8(0x08)
	struct UAnimTriggeredStateComponent* DropActionState; // 0x10c0(0x08)
	struct UAnimTriggeredStateComponent* AltActionState; // 0x10c8(0x08)
	struct URespondToEventStateComponent* RespondToEventState; // 0x10d0(0x08)
	struct UAnimTriggeredStateComponent* ActionState; // 0x10d8(0x08)
	struct UScriptStateComponent* IdleState; // 0x10e0(0x08)
	struct UAresOutlineComponent* Outline1P; // 0x10e8(0x08)
	struct UAresOutlineComponent* Outline3P; // 0x10f0(0x08)
	struct UReadyingStateComponent* ReadyingState; // 0x10f8(0x08)
	struct UEquipStateComponent* EquipState; // 0x1100(0x08)
	struct UEffectManagerComponent* EffectManager; // 0x1108(0x08)
	struct FEffectID FXC Inspect ID; // 0x1110(0x18)
	struct AEffectContainer* FXC Inspect; // 0x1128(0x08)
	bool Inspect Animation Active; // 0x1130(0x01)
	char pad_1131[0x7]; // 0x1131(0x07)
	struct AEffectContainer* FXC WhileEquipped; // 0x1138(0x08)
	struct FEffectData EffectData; // 0x1140(0x58)
	struct FEffectID FXC_WhileEquipped_ID; // 0x1198(0x18)
	float Response Delay; // 0x11b0(0x04)
	float Time Until Transition; // 0x11b4(0x04)
	struct FTimerHandle CooldownTimer; // 0x11b8(0x08)
	struct FMulticastInlineDelegate Client_PreEquip; // 0x11c0(0x10)

	void GetFirstPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetFirstPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetThirdPersonMesh(struct USkeletalMeshComponent*& Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetThirdPersonMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonCosmeticMesh(struct USkeletalMeshComponent*& Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetFirstPersonCosmeticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetBulletComponent(struct UBulletComponent_C*& BulletComponent); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetBulletComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMagazine(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetMagazine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetMagazine3p(struct UStaticMeshComponent*& MagazineMesh, struct TArray<struct UMaterialInterface*>& ArrayOfMaterials); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetMagazine3p // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFirstPersonMaterial(int32_t Material Slot, struct UMaterialInstanceDynamic*& Dynamic Material, struct UMaterialInterface*& Original Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.GetFirstPersonMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsInspectingAndBroadcast(bool IsInspecting); // Function Equippable_Totem_base.Equippable_Totem_base_C.SetIsInspectingAndBroadcast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override1pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override1pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override3pMagazineMaterials(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override3pMagazineMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddVFXMeshes(struct UStaticMeshComponent* VFX Mesh); // Function Equippable_Totem_base.Equippable_Totem_base_C.AddVFXMeshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideAresMeshAttachmentComponentMap(struct TMap<struct FString, struct UAresEquippableMeshAttachmentComponent_C*> AresMeshAttachmentComponent Map); // Function Equippable_Totem_base.Equippable_Totem_base_C.OverrideAresMeshAttachmentComponentMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Equippable_Totem_base.Equippable_Totem_base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ClientItemUnEquipped(); // Function Equippable_Totem_base.Equippable_Totem_base_C.ClientItemUnEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Equippable_Totem_base.Equippable_Totem_base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Inspect(); // Function Equippable_Totem_base.Equippable_Totem_base_C.Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Cancel Inspect(); // Function Equippable_Totem_base.Equippable_Totem_base_C.Cancel Inspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClientItemEquipped(); // Function Equippable_Totem_base.Equippable_Totem_base_C.ClientItemEquipped // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Equippable_Totem_base_IdleState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature(struct UScriptStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function Equippable_Totem_base.Equippable_Totem_base_C.BndEvt__Equippable_Totem_base_IdleState_K2Node_ComponentBoundEvent_1_OnStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OverrideMaterialIndex(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.OverrideMaterialIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CancelInspect(); // Function Equippable_Totem_base.Equippable_Totem_base_C.CancelInspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override3pMaterial(int32_t Index, struct UMaterialInterface* Material); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override3pMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override1pMesh(struct USkeletalMesh* 1PMesh, struct USkeletalMesh* 1PCosmeticMesh, struct UStaticMesh* 1PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override1pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Override3pMesh(struct USkeletalMesh* 3PMesh, struct UStaticMesh* 3PMagazine, struct UAnimInstance* CosmeticAnimGraph); // Function Equippable_Totem_base.Equippable_Totem_base_C.Override3pMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Custom_OnAction(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function Equippable_Totem_base.Equippable_Totem_base_C.Custom_OnAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableTotemAltAction(); // Function Equippable_Totem_base.Equippable_Totem_base_C.EnableTotemAltAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnableTotemDropAction(); // Function Equippable_Totem_base.Equippable_Totem_base_C.EnableTotemDropAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Custom Event(); // Function Equippable_Totem_base.Equippable_Totem_base_C.Custom Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Equippable_Totem_base_SyncedTimer_K2Node_ComponentBoundEvent_3_OnTimerExpired__DelegateSignature(); // Function Equippable_Totem_base.Equippable_Totem_base_C.BndEvt__Equippable_Totem_base_SyncedTimer_K2Node_ComponentBoundEvent_3_OnTimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void CustomEvent2(); // Function Equippable_Totem_base.Equippable_Totem_base_C.CustomEvent2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Equippable_Totem_base(int32_t EntryPoint); // Function Equippable_Totem_base.Equippable_Totem_base_C.ExecuteUbergraph_Equippable_Totem_base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void Client_PreEquip__DelegateSignature(); // Function Equippable_Totem_base.Equippable_Totem_base_C.Client_PreEquip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

