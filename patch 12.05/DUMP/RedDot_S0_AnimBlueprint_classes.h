// AnimBlueprintGeneratedClass RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C
// Size: 0x600 (Inherited: 0x390)
struct URedDot_S0_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x398(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3a8(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3c8(0x50)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x418(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x440(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x468(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x488(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x4d0(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4f0(0x100)
	bool Status; // 0x5f0(0x01)
	char pad_5F1[0x7]; // 0x5f1(0x07)
	struct UAnimSequence* Idle Sequence; // 0x5f8(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RedDot_S0_AnimBlueprint(int32_t EntryPoint); // Function RedDot_S0_AnimBlueprint.RedDot_S0_AnimBlueprint_C.ExecuteUbergraph_RedDot_S0_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1af5410
};

