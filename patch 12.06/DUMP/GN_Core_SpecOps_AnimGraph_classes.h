// AnimBlueprintGeneratedClass GN_Core_SpecOps_AnimGraph.GN_Core_SpecOps_AnimGraph_C
// Size: 0x660 (Inherited: 0x390)
struct UGN_Core_SpecOps_AnimGraph_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x398(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3a8(0x20)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3c8(0xf0)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x4b8(0x158)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x610(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function GN_Core_SpecOps_AnimGraph.GN_Core_SpecOps_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GN_Core_SpecOps_AnimGraph(int32_t EntryPoint); // Function GN_Core_SpecOps_AnimGraph.GN_Core_SpecOps_AnimGraph_C.ExecuteUbergraph_GN_Core_SpecOps_AnimGraph // (Final|UbergraphFunction) // @ game+0x1b42740
};

