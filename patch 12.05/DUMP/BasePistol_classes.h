// BlueprintGeneratedClass BasePistol.BasePistol_C
// Size: 0x14a0 (Inherited: 0x1478)
struct ABasePistol_C : AGun_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1478(0x08)
	struct UStabilityComponent* FlaggedBurstStability; // 0x1480(0x08)
	struct UComp_Gun_FlaggedStability_C* Comp_Gun_FlaggedStability_Burst; // 0x1488(0x08)
	struct UStabilityComponent* BurstStability; // 0x1490(0x08)
	struct UFiringStateComponent* FiringStateBurst; // 0x1498(0x08)

	struct UFiringStateComponent* GetBurstFiringState(); // Function BasePistol.BasePistol_C.GetBurstFiringState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnRep_Kills(); // Function BasePistol.BasePistol_C.OnRep_Kills // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BasePistol.BasePistol_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Server Update Kill Count(int32_t Kills); // Function BasePistol.BasePistol_C.Server Update Kill Count // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InputHandler(struct UScriptStateComponent* State, enum class EAresEquippableInput Input, enum class EAresEquippableInputAction InputAction, double FrameDeltaTime); // Function BasePistol.BasePistol_C.InputHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BasePistol(int32_t EntryPoint); // Function BasePistol.BasePistol_C.ExecuteUbergraph_BasePistol // (Final|UbergraphFunction) // @ game+0x1af5410
};

