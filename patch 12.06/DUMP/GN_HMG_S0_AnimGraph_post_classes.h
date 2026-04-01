// AnimBlueprintGeneratedClass GN_HMG_S0_AnimGraph_post.GN_HMG_S0_AnimGraph_post_C
// Size: 0xe90 (Inherited: 0x390)
struct UGN_HMG_S0_AnimGraph_post_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x398(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x3a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3a8(0x20)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x3d0(0x9c0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xd90(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xdb0(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0xdd0(0xc0)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function GN_HMG_S0_AnimGraph_post.GN_HMG_S0_AnimGraph_post_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EvaluateGraphExposedInputs_ExecuteUbergraph_GN_HMG_S0_AnimGraph_post_AnimGraphNode_RigidBody_2A98637241D44A44B8CAFF86AFF9A45F(); // Function GN_HMG_S0_AnimGraph_post.GN_HMG_S0_AnimGraph_post_C.EvaluateGraphExposedInputs_ExecuteUbergraph_GN_HMG_S0_AnimGraph_post_AnimGraphNode_RigidBody_2A98637241D44A44B8CAFF86AFF9A45F // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GN_HMG_S0_AnimGraph_post(int32_t EntryPoint); // Function GN_HMG_S0_AnimGraph_post.GN_HMG_S0_AnimGraph_post_C.ExecuteUbergraph_GN_HMG_S0_AnimGraph_post // (Final|UbergraphFunction) // @ game+0x1b42740
};

