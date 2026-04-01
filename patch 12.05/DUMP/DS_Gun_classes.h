// BlueprintGeneratedClass DS_Gun.DS_Gun_C
// Size: 0x1638 (Inherited: 0x15e0)
struct ADS_Gun_C : AGun_Sniper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UDS_Gun_FiringStateComp_EffectSelector_C* ZoomedFiringState_FXC_Selector; // 0x15e8(0x08)
	struct UDS_Gun_FiringStateComp_EffectSelector_C* FiringState_FXC_Selector; // 0x15f0(0x08)
	struct UReloadStateComponent* ReloadStateEmpty; // 0x15f8(0x08)
	struct UStabilityComponent* ZoomedStability; // 0x1600(0x08)
	struct UFiringStateComponent* First Shot Zoomed Firing State; // 0x1608(0x08)
	struct UFiringStateComponent* First Shot Hipfire Firing State; // 0x1610(0x08)
	struct AProjectile* Projectile_HipfireFirstShot; // 0x1618(0x08)
	struct AProjectile* Projectile_HipFireSecondShot; // 0x1620(0x08)
	struct AProjectile* Projectile_ZoomedFireFirstShot; // 0x1628(0x08)
	struct AProjectile* Projectile_ZoomedFireSecondShot; // 0x1630(0x08)

	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function DS_Gun.DS_Gun_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetIdleReloadState(struct UReloadStateComponent*& ReloadState); // Function DS_Gun.DS_Gun_C.GetIdleReloadState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function DS_Gun.DS_Gun_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function DS_Gun.DS_Gun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DS_Gun_FiringState_FXC_Selector_K2Node_ComponentBoundEvent_2_StartedShooting__DelegateSignature(struct UFiringStateComponent* FiringState); // Function DS_Gun.DS_Gun_C.BndEvt__DS_Gun_FiringState_FXC_Selector_K2Node_ComponentBoundEvent_2_StartedShooting__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DS_Gun_ZoomedFiringState_FXC_Selector_K2Node_ComponentBoundEvent_3_StartedShooting__DelegateSignature(struct UFiringStateComponent* FiringState); // Function DS_Gun.DS_Gun_C.BndEvt__DS_Gun_ZoomedFiringState_FXC_Selector_K2Node_ComponentBoundEvent_3_StartedShooting__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DS_Gun(int32_t EntryPoint); // Function DS_Gun.DS_Gun_C.ExecuteUbergraph_DS_Gun // (Final|UbergraphFunction) // @ game+0x1af5410
};

