// BlueprintGeneratedClass Vector.Vector_C
// Size: 0x1640 (Inherited: 0x15ca)
struct AVector_C : AGun_Zoomable_C {
	char pad_15CA[0x6]; // 0x15ca(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15d0(0x08)
	struct UStabilityComponent* FlaggedBurstModeStability; // 0x15d8(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStabilityBurstMode; // 0x15e0(0x08)
	struct UStabilityVisualizationComponent* BurstModeStabilityVisualization; // 0x15e8(0x08)
	struct UCycleModeStateComponent* CycleModeState; // 0x15f0(0x08)
	struct UModeComponent* BurstMode; // 0x15f8(0x08)
	struct UStabilityComponent* BurstModeStability; // 0x1600(0x08)
	struct UFiringStateComponent* BurstFiringState; // 0x1608(0x08)
	struct FEffectID FXCRef1; // 0x1610(0x18)
	struct FEffectID FXCRef; // 0x1628(0x18)

	void GetIdleFiringState(struct UFiringStateComponent*& FiringState); // Function Vector.Vector_C.GetIdleFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetZoomedFiringState(struct UFiringStateComponent*& FiringState); // Function Vector.Vector_C.GetZoomedFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Vector.Vector_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BurstMode_K2Node_ComponentBoundEvent_0_OnModeChangedSignature__DelegateSignature(struct UModeComponent* ModeComponent, int32_t OldModeNumber, int32_t NewModeNumber); // Function Vector.Vector_C.BndEvt__BurstMode_K2Node_ComponentBoundEvent_0_OnModeChangedSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, double FrameDeltaTime); // Function Vector.Vector_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIdleStateTick(struct UScriptStateComponent* State, float DeltaTimeSeconds); // Function Vector.Vector_C.OnIdleStateTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Vector(int32_t EntryPoint); // Function Vector.Vector_C.ExecuteUbergraph_Vector // (Final|UbergraphFunction) // @ game+0x1af5410
};

