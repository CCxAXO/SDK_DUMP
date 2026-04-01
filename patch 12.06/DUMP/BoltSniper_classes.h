// BlueprintGeneratedClass BoltSniper.BoltSniper_C
// Size: 0x1e00 (Inherited: 0x15e0)
struct ABoltSniper_C : AGun_Sniper_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15e0(0x08)
	struct UFiringStateComponent* ZoomedFiringState; // 0x15e8(0x08)
	struct UStabilityComponent* ZoomedStability; // 0x15f0(0x08)
	char pad_15F8[0x8]; // 0x15f8(0x08)
	struct FPostProcessSettings NewVar_0_1; // 0x1600(0x800)

	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function BoltSniper.BoltSniper_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BoltSniper.BoltSniper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void CosmeticZoomPercentageReached(struct UZoomComponent* ZoomComponent); // Function BoltSniper.BoltSniper_C.CosmeticZoomPercentageReached // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BoltSniper(int32_t EntryPoint); // Function BoltSniper.BoltSniper_C.ExecuteUbergraph_BoltSniper // (Final|UbergraphFunction) // @ game+0x1b42740
};

