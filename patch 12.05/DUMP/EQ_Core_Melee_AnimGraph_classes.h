// AnimBlueprintGeneratedClass EQ_Core_Melee_AnimGraph.EQ_Core_Melee_AnimGraph_C
// Size: 0x418 (Inherited: 0x390)
struct UEQ_Core_Melee_AnimGraph_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x398(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3a8(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x3c8(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function EQ_Core_Melee_AnimGraph.EQ_Core_Melee_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EQ_Core_Melee_AnimGraph(int32_t EntryPoint); // Function EQ_Core_Melee_AnimGraph.EQ_Core_Melee_AnimGraph_C.ExecuteUbergraph_EQ_Core_Melee_AnimGraph // (Final|UbergraphFunction) // @ game+0x1af5410
};

