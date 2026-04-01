// BlueprintGeneratedClass AssaultRifle_Burst.AssaultRifle_Burst_C
// Size: 0x1630 (Inherited: 0x15ca)
struct AAssaultRifle_Burst_C : AGun_Zoomable_C {
	char pad_15CA[0x6]; // 0x15ca(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15d0(0x08)
	struct UStabilityVisualizationComponent* SecondaryStabilityVisualization; // 0x15d8(0x08)
	struct UCycleModeStateComponent* CycleModeState; // 0x15e0(0x08)
	struct UModeComponent* SecondaryMode; // 0x15e8(0x08)
	struct UStabilityComponent* SecondaryModeStability; // 0x15f0(0x08)
	struct UFiringStateComponent* SecondaryModeFiringState; // 0x15f8(0x08)
	struct FEffectID FXCRef; // 0x1600(0x18)
	struct FEffectID FXCRef1; // 0x1618(0x18)

	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AssaultRifle_Burst(int32_t EntryPoint); // Function AssaultRifle_Burst.AssaultRifle_Burst_C.ExecuteUbergraph_AssaultRifle_Burst // (Final|UbergraphFunction) // @ game+0x1af5410
};

