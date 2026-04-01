// BlueprintGeneratedClass TestBranch_StateComponent.TestBranch_StateComponent_C
// Size: 0x338 (Inherited: 0x300)
struct UTestBranch_StateComponent_C : UScriptStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UStateComponent* FailState; // 0x308(0x08)
	struct FMulticastInlineDelegate FailedDispatcher; // 0x310(0x10)
	struct AEffectContainer* Fail Effect; // 0x320(0x08)
	struct FMulticastInlineDelegate PassedDispatched; // 0x328(0x10)

	void SetBranchStates(struct UStateComponent* NextState, struct UStateComponent* FailState); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.SetBranchStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool StateTest(struct UStateTransitionContext* StateTransitionContext); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.StateTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetFailState(struct UStateComponent* FailState); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.SetFailState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateEnter_Event_1(struct UScriptStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext, float StartTimeOffset); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.OnStateEnter_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TestBranch_StateComponent(int32_t EntryPoint); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.ExecuteUbergraph_TestBranch_StateComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void PassedDispatched__DelegateSignature(); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.PassedDispatched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FailedDispatcher__DelegateSignature(); // Function TestBranch_StateComponent.TestBranch_StateComponent_C.FailedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

