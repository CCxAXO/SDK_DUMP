// BlueprintGeneratedClass PumpShotgun.PumpShotgun_C
// Size: 0x14b0 (Inherited: 0x1478)
struct APumpShotgun_C : AGun_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1478(0x08)
	struct UReusableHitScanProjectileComponent* ReusableHitScanProjectile; // 0x1480(0x08)
	struct UStabilityComponent* StabilityPreBurst; // 0x1488(0x08)
	struct UFiringStateComponent* FiringStateAirBurst; // 0x1490(0x08)
	struct UStabilityComponent* StabilityAirBurst; // 0x1498(0x08)
	struct UFiringStateComponent* FiringStateReference; // 0x14a0(0x08)
	struct AEffectContainer* FXC Air Burst; // 0x14a8(0x08)

	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, float FrameDeltaTimeSeconds); // Function PumpShotgun.PumpShotgun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_1_OnReloadStateHandleInputActionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, double FrameDeltaTime); // Function PumpShotgun.PumpShotgun_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature(struct UReloadStateComponent* ReloadState); // Function PumpShotgun.PumpShotgun_C.BndEvt__ReloadState_K2Node_ComponentBoundEvent_0_OnAmmoLoaded__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Custom_OnShot(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<>& FiringResults); // Function PumpShotgun.PumpShotgun_C.Custom_OnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function PumpShotgun.PumpShotgun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Round Begin Custom(int32_t RoundNumberBeginning); // Function PumpShotgun.PumpShotgun_C.Round Begin Custom // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PumpShotgun(int32_t EntryPoint); // Function PumpShotgun.PumpShotgun_C.ExecuteUbergraph_PumpShotgun // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

