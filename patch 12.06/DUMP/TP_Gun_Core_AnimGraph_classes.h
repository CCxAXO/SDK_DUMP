// AnimBlueprintGeneratedClass TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C
// Size: 0x6f0 (Inherited: 0x650)
struct UTP_Gun_Core_AnimGraph_C : UAresEquippableAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x658(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x660(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x668(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x688(0x50)
	struct FRotator Mag Rotator; // 0x6d8(0x18)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TP_Gun_Core_AnimGraph(int32_t EntryPoint); // Function TP_Gun_Core_AnimGraph.TP_Gun_Core_AnimGraph_C.ExecuteUbergraph_TP_Gun_Core_AnimGraph // (Final|UbergraphFunction) // @ game+0x1b42740
};

