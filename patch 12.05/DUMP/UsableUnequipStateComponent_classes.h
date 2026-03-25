// BlueprintGeneratedClass UsableUnequipStateComponent.UsableUnequipStateComponent_C
// Size: 0x318 (Inherited: 0x308)
struct UUsableUnequipStateComponent_C : UUnequipStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UStateComponent* StillUsingTransitionState; // 0x310(0x08)

	void ReceiveBeginPlay(); // Function UsableUnequipStateComponent.UsableUnequipStateComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnStateTick_Event_1(struct UScriptStateComponent* State, float DeltaTimeSeconds); // Function UsableUnequipStateComponent.UsableUnequipStateComponent_C.OnStateTick_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_UsableUnequipStateComponent(int32_t EntryPoint); // Function UsableUnequipStateComponent.UsableUnequipStateComponent_C.ExecuteUbergraph_UsableUnequipStateComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

