// BlueprintGeneratedClass CountdownState.CountdownState_C
// Size: 0x1a0 (Inherited: 0x150)
struct UCountdownState_C : UActorStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	double CountdownTime; // 0x158(0x08)
	double EndTimeStamp; // 0x160(0x08)
	struct FTimerHandle CountDownTimerHandle; // 0x168(0x08)
	double PreviewDuration; // 0x170(0x08)
	struct FMulticastInlineDelegate PreviewTimeStarted; // 0x178(0x10)
	double PreviewCompletedDuration; // 0x188(0x08)
	struct FMulticastInlineDelegate EndTimeStampUpdated; // 0x190(0x10)

	void GetTimeRemaining(double& TimeRemaining); // Function CountdownState.CountdownState_C.GetTimeRemaining // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function CountdownState.CountdownState_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnEnterState(struct UActorStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function CountdownState.CountdownState_C.OnEnterState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Countdown Complete(); // Function CountdownState.CountdownState_C.Countdown Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnExitState(struct UActorStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function CountdownState.CountdownState_C.OnExitState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPreviewTimeStarted(); // Function CountdownState.CountdownState_C.OnPreviewTimeStarted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CountdownState(int32_t EntryPoint); // Function CountdownState.CountdownState_C.ExecuteUbergraph_CountdownState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void EndTimeStampUpdated__DelegateSignature(double end stamp); // Function CountdownState.CountdownState_C.EndTimeStampUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreviewTimeStarted__DelegateSignature(); // Function CountdownState.CountdownState_C.PreviewTimeStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

