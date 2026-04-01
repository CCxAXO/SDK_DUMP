// BlueprintGeneratedClass GameStateVoteComponent.GameStateVoteComponent_C
// Size: 0x208 (Inherited: 0x1f0)
struct UGameStateVoteComponent_C : UTimeGameStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	struct AGameplayVoteBase_C* QueuedVote; // 0x1f8(0x08)
	struct ABaseGameMode_C* BaseGameMode; // 0x200(0x08)

	void Reset Queued Vote(); // Function GameStateVoteComponent.GameStateVoteComponent_C.Reset Queued Vote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Queue Phased Vote(struct AGameplayVoteBase_C* QueuedVote); // Function GameStateVoteComponent.GameStateVoteComponent_C.Queue Phased Vote // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCurrentStateUpdated_Event_1(struct AGameplayVote* Vote, enum class EVoteState NewState); // Function GameStateVoteComponent.GameStateVoteComponent_C.OnCurrentStateUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function GameStateVoteComponent.GameStateVoteComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnStateEnterImplementation(); // Function GameStateVoteComponent.GameStateVoteComponent_C.OnStateEnterImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStateExitImplementation(); // Function GameStateVoteComponent.GameStateVoteComponent_C.OnStateExitImplementation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameStateVoteComponent(int32_t EntryPoint); // Function GameStateVoteComponent.GameStateVoteComponent_C.ExecuteUbergraph_GameStateVoteComponent // (Final|UbergraphFunction) // @ game+0x1b42740
};

