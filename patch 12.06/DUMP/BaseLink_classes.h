// BlueprintGeneratedClass BaseLink.BaseLink_C
// Size: 0x649 (Inherited: 0x638)
struct ABaseLink_C : ABaseEjectable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x638(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x640(0x08)
	bool bDebugBounceVelocity; // 0x648(0x01)

	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_273_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BaseLink.BaseLink_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_273_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseLink(int32_t EntryPoint); // Function BaseLink.BaseLink_C.ExecuteUbergraph_BaseLink // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

