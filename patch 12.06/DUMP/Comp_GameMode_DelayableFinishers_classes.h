// BlueprintGeneratedClass Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C
// Size: 0xe8 (Inherited: 0xd8)
struct UComp_GameMode_DelayableFinishers_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AShooterCharacter* QueuedFinisherVictim; // 0xe0(0x08)

	void TryToPlayQueuedFinisher(struct UObject* AllyObject); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.TryToPlayQueuedFinisher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Cleanup Queued Finisher(); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.Cleanup Queued Finisher // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsFinisherDelayed(struct AShooterCharacter* Victim, bool& IsDelayed); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.IsFinisherDelayed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void QueueDelayedFinisher(struct AShooterCharacter* VictimCharacter, struct AEffectContainer* FinisherFXC, struct UObject* FinisherContext, struct AAresEquippable* KillingEquippable); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.QueueDelayedFinisher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRoundEnd_Event_1(int32_t RoundNumberEnding); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.OnRoundEnd_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_GameMode_DelayableFinishers(int32_t EntryPoint); // Function Comp_GameMode_DelayableFinishers.Comp_GameMode_DelayableFinishers_C.ExecuteUbergraph_Comp_GameMode_DelayableFinishers // (Final|UbergraphFunction) // @ game+0x1b42740
};

