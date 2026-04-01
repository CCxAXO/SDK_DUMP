// BlueprintGeneratedClass DMR.DMR_C
// Size: 0x1620 (Inherited: 0x15ca)
struct ADMR_C : AGun_Zoomable_C {
	char pad_15CA[0x6]; // 0x15ca(0x06)
	struct FEffectID NewVar_0_1; // 0x15d0(0x18)
	struct FEffectID FXCRef; // 0x15e8(0x18)
	struct FEffectID FXCRef1; // 0x1600(0x18)
	struct UFiringStateComponent* ReturnFiringState; // 0x1618(0x08)

	void CanCycleZoom(bool& CanZoom); // Function DMR.DMR_C.CanCycleZoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetIdleReloadState(struct UReloadStateComponent*& ReloadState); // Function DMR.DMR_C.GetIdleReloadState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function DMR.DMR_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};

