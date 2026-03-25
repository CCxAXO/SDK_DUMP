// BlueprintGeneratedClass Bomb_Defuser.Bomb_Defuser_C
// Size: 0x10e8 (Inherited: 0x10b0)
struct ABomb_Defuser_C : AAresEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UUsableUnequipStateComponent_C* UsableUnequipStateComponent; // 0x10b8(0x08)
	struct UTimedStateComponent* CancelCommitState; // 0x10c0(0x08)
	struct UTimedStateComponent* CompleteCommitState; // 0x10c8(0x08)
	struct UWhileUsingUsableStateComponent* WhileUsingUsableState; // 0x10d0(0x08)
	struct UEquipStateComponent* EquipState; // 0x10d8(0x08)
	struct APlantedBomb_C* PlantedBomb; // 0x10e0(0x08)

	struct UBaseCrosshairHudElement* GetCurrentCrosshairHudElementClass(); // Function Bomb_Defuser.Bomb_Defuser_C.GetCurrentCrosshairHudElementClass // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function Bomb_Defuser.Bomb_Defuser_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Bomb_Defuser(int32_t EntryPoint); // Function Bomb_Defuser.Bomb_Defuser_C.ExecuteUbergraph_Bomb_Defuser // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

