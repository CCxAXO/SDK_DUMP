// BlueprintGeneratedClass GamePhaseTriggerState.GamePhaseTriggerState_C
// Size: 0x159 (Inherited: 0x150)
struct UGamePhaseTriggerState_C : UActorStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	enum class EAresGamePhase PhaseToTrigger; // 0x158(0x01)

	void ReceiveBeginPlay(); // Function GamePhaseTriggerState.GamePhaseTriggerState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Game Phase Changed(enum class EAresGamePhase NewPhase); // Function GamePhaseTriggerState.GamePhaseTriggerState_C.Game Phase Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GamePhaseTriggerState(int32_t EntryPoint); // Function GamePhaseTriggerState.GamePhaseTriggerState_C.ExecuteUbergraph_GamePhaseTriggerState // (Final|UbergraphFunction) // @ game+0x1b42740
};

