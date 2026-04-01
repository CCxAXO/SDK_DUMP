// Class AICopilot.AICopilotComponent
// Size: 0x110 (Inherited: 0xd8)
struct UAICopilotComponent : UActorComponent {
	struct AAIController* AIControllerClass; // 0xd8(0x08)
	struct FMulticastInlineDelegate OnAIActiveChangedDelegate; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnOwningPawnChangedDelegate; // 0xf0(0x10)
	struct AAIController* SpawnedAIController; // 0x100(0x08)
	bool bAIActive; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	void SetAIControllerClass(struct AAIController* ControllerClass); // Function AICopilot.AICopilotComponent.SetAIControllerClass // (Final|Native|Public|BlueprintCallable) // @ game+0x53a09f0
	void ServerSetAIActive(bool IsActive); // Function AICopilot.AICopilotComponent.ServerSetAIActive // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x53098f0
	void OnOwningPawnChanged(struct APawn* OldPawn, struct APawn* NewPawn); // Function AICopilot.AICopilotComponent.OnOwningPawnChanged // (Final|Native|Private) // @ game+0x53a0740
	void MulticastSetBoolAIActive(bool IsActive); // Function AICopilot.AICopilotComponent.MulticastSetBoolAIActive // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x53a08d0
	struct APawn* GetOwningPawn(); // Function AICopilot.AICopilotComponent.GetOwningPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53a0bc0
	struct AAIController* GetAIController(); // Function AICopilot.AICopilotComponent.GetAIController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37a6360
	bool GetAIActive(); // Function AICopilot.AICopilotComponent.GetAIActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x53a09d0
};

// Class AICopilot.AICopilotLifecycleInterface
// Size: 0x30 (Inherited: 0x30)
struct UAICopilotLifecycleInterface : UInterface {

	void InitializeForCopilotActivation(struct APawn* PossessedPawn); // Function AICopilot.AICopilotLifecycleInterface.InitializeForCopilotActivation // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CleanupForCopilotDeactivation(struct APawn* UnpossessedPawn); // Function AICopilot.AICopilotLifecycleInterface.CleanupForCopilotDeactivation // (Event|Public|BlueprintEvent) // @ game+0x1b42740
};

