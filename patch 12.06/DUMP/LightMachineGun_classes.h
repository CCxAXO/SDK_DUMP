// BlueprintGeneratedClass LightMachineGun.LightMachineGun_C
// Size: 0x15e4 (Inherited: 0x15ca)
struct ALightMachineGun_C : AGun_Zoomable_C {
	char pad_15CA[0x6]; // 0x15ca(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15d0(0x08)
	struct FActiveGameplayEffectHandle BuffReference; // 0x15d8(0x08)
	int32_t ShotCount; // 0x15e0(0x04)

	void BndEvt__FiringState_K2Node_ComponentBoundEvent_0_OnShot__DelegateSignature(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function LightMachineGun.LightMachineGun_C.BndEvt__FiringState_K2Node_ComponentBoundEvent_0_OnShot__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ReceiveAuthClearOwningCharacter(struct AShooterCharacter* OldCharacter); // Function LightMachineGun.LightMachineGun_C.ReceiveAuthClearOwningCharacter // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void AuthOnUnEquipped(); // Function LightMachineGun.LightMachineGun_C.AuthOnUnEquipped // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FiringState_K2Node_ComponentBoundEvent_1_StoppedShooting__DelegateSignature(struct UFiringStateComponent* FiringState); // Function LightMachineGun.LightMachineGun_C.BndEvt__FiringState_K2Node_ComponentBoundEvent_1_StoppedShooting__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LightMachineGun(int32_t EntryPoint); // Function LightMachineGun.LightMachineGun_C.ExecuteUbergraph_LightMachineGun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

