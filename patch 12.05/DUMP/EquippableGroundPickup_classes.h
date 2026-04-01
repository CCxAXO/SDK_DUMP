// BlueprintGeneratedClass EquippableGroundPickup.EquippableGroundPickup_C
// Size: 0x600 (Inherited: 0x530)
struct AEquippableGroundPickup_C : AAresOnGroundEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)
	struct UUsableComponent_EquippableGroundPickups* UsableComponent_EquippableGroundPickup; // 0x538(0x08)
	struct UBoxComponent* VisibleBounds; // 0x540(0x08)
	struct USphereComponent* CalloutCollider; // 0x548(0x08)
	struct UCalloutRegionTrackingComponent* CalloutRegionTracking; // 0x550(0x08)
	struct UBoxComponent* CollisionForPings; // 0x558(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x560(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x568(0x08)
	struct UComp_Actor_InWorldUsable_Pickup_C* Comp_Actor_InWorldUsable_Pickup; // 0x570(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x578(0x08)
	struct UGameObjectMinimapDisplayComponentDeprecated* GameObjectMinimapDisplay; // 0x580(0x08)
	struct UTexture* MinimapDisplayTextureToUse; // 0x588(0x08)
	double MinimapDisplayTextureU; // 0x590(0x08)
	double MinimapDisplayTextureV; // 0x598(0x08)
	double MinimapDisplayTextureUL; // 0x5a0(0x08)
	double MinimapDisplayTextureVL; // 0x5a8(0x08)
	struct FLinearColor MinimapDisplayColor; // 0x5b0(0x10)
	double MinimapDisplayScale; // 0x5c0(0x08)
	struct FText DisplayName; // 0x5c8(0x18)
	bool isBomb; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	struct UParticleSystem* CurrentBestUsableTemplate; // 0x5e8(0x08)
	struct UParticleSystem* NotCurrentBestUsableTemplate; // 0x5f0(0x08)
	struct UEquippableListAsset* NonLookingPickupWeights; // 0x5f8(0x08)

	void ShouldHideVFX(bool& bShouldHideVFX); // Function EquippableGroundPickup.EquippableGroundPickup_C.ShouldHideVFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void AuthMoveEquippableOutOfCollision(struct FVector ProjectileStartingLocation, struct FRotator ProjectileRotation); // Function EquippableGroundPickup.EquippableGroundPickup_C.AuthMoveEquippableOutOfCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsLegalNonLookingPickup(bool& NewParam); // Function EquippableGroundPickup.EquippableGroundPickup_C.IsLegalNonLookingPickup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void InitializeNonLookingPickupUsable(); // Function EquippableGroundPickup.EquippableGroundPickup_C.InitializeNonLookingPickupUsable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshCanUseString(); // Function EquippableGroundPickup.EquippableGroundPickup_C.RefreshCanUseString // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MyEquippableChanged(); // Function EquippableGroundPickup.EquippableGroundPickup_C.MyEquippableChanged // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function EquippableGroundPickup.EquippableGroundPickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated(); // Function EquippableGroundPickup.EquippableGroundPickup_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideWidgetOverridesUpdated(); // Function EquippableGroundPickup.EquippableGroundPickup_C.HideWidgetOverridesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_4_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_4_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_5_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_5_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_6_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_6_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_7_UsableComponentCurrentUsable__DelegateSignature(struct UInteractableUserComponent* User); // Function EquippableGroundPickup.EquippableGroundPickup_C.BndEvt__EquippableGroundPickup_UsableComponent_EquippableGroundPickup_K2Node_ComponentBoundEvent_7_UsableComponentCurrentUsable__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EquippableGroundPickup(int32_t EntryPoint); // Function EquippableGroundPickup.EquippableGroundPickup_C.ExecuteUbergraph_EquippableGroundPickup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

