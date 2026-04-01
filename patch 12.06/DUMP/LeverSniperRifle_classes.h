// BlueprintGeneratedClass LeverSniperRifle.LeverSniperRifle_C
// Size: 0x1608 (Inherited: 0x15e0)
struct ALeverSniperRifle_C : AGun_Sniper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UStabilityComponent* ZoomedStability; // 0x15e8(0x08)
	struct UFiringStateComponent* ZoomedFiringState; // 0x15f0(0x08)
	bool WeaponVisibility2; // 0x15f8(0x01)
	char pad_15F9[0x7]; // 0x15f9(0x07)
	struct AShooterCharacter* Owner Character; // 0x1600(0x08)

	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function LeverSniperRifle.LeverSniperRifle_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void CustomEvent_1(struct UFiringStateComponent* FiringState, int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function LeverSniperRifle.LeverSniperRifle_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function LeverSniperRifle.LeverSniperRifle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LeverSniperRifle(int32_t EntryPoint); // Function LeverSniperRifle.LeverSniperRifle_C.ExecuteUbergraph_LeverSniperRifle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

