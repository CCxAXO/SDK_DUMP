// Class AnimGraphRuntime.BlendSpaceLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlendSpaceLibrary : UBlueprintFunctionLibrary {

	void SnapToPosition(struct FBlendSpaceReference& BlendSpace, struct FVector NewPosition); // Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x367d390
	struct FVector GetPosition(struct FBlendSpaceReference& BlendSpace); // Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x367d6c0
	struct FVector GetFilteredPosition(struct FBlendSpaceReference& BlendSpace); // Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x367d570
	void ConvertToBlendSpacePure(struct FAnimNodeReference& Node, struct FBlendSpaceReference& BlendSpace, bool& Result); // Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x367d810
	struct FBlendSpaceReference ConvertToBlendSpace(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x367da90
};

// Class AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimationStateMachineLibrary : UBlueprintFunctionLibrary {

	void SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName TargetState, float Duration, enum class ETransitionLogicType BlendType, struct UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, struct UCurveFloat* CustomBlendCurve); // Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x367f890
	bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x367fe40
	bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3680060
	struct FName GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x367f650
	float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x367f1f0
	float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x367f420
	void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3680770
	void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3680a00
	void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3680280
	void ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3680510
};

// Class AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAnimExecutionContextLibrary : UBlueprintFunctionLibrary {

	float GetDeltaTime(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3681d70
	float GetCurrentWeight(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3681c30
	struct FAnimNodeReference GetAnimNodeReference(struct UAnimInstance* Instance, int32_t Index); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x36822f0
	struct UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3682510
	struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3681eb0
	struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3681a10
	struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36820d0
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3681780
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x3a0 (Inherited: 0x390)
struct UAnimSequencerInstance : UAnimInstance {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class AnimGraphRuntime.BlendListBaseLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlendListBaseLibrary : UBlueprintFunctionLibrary {

	void ResetNode(struct FBlendListBaseReference& BlendListBase); // Function AnimGraphRuntime.BlendListBaseLibrary.ResetNode // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b7720
	struct FBlendListBaseReference ConvertToBlendListBase(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.BlendListBaseLibrary.ConvertToBlendListBase // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b7890
};

// Class AnimGraphRuntime.BlendSpacePlayerLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlendSpacePlayerLibrary : UBlueprintFunctionLibrary {

	void SnapToPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer, struct FVector NewPosition); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36b7e80
	bool ShouldResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x36b8060
	struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b8b40
	struct FBlendSpacePlayerReference SetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b8970
	struct FBlendSpacePlayerReference SetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b87a0
	struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace, float BlendTime); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b8d10
	struct FBlendSpacePlayerReference SetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b9040
	float GetStartPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x36b83f0
	struct FVector GetPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x36b8520
	float GetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x36b82c0
	bool GetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x36b8190
	struct UBlendSpace* GetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x36b8670
	void ConvertToBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x36b9210
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36b9490
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3700000
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x36fd850
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x36fe990
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x36fe730
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x36ffb20
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x36fd660
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x36ff350
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x36ff010
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36fd870
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36fe2b0
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x36fd4b0
};

// Class AnimGraphRuntime.LayeredBoneBlendLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULayeredBoneBlendLibrary : UBlueprintFunctionLibrary {

	struct FLayeredBoneBlendReference SetBlendMask(struct FAnimUpdateContext& UpdateContext, struct FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, struct FName BlendMaskName); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3701b80
	int32_t GetNumPoses(struct FLayeredBoneBlendReference& LayeredBoneBlend); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3701ec0
	struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3702270
	void ConvertToLayeredBlendPerBonePure(struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3701ff0
};

// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULinkedAnimGraphLibrary : UBlueprintFunctionLibrary {

	bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3702ba0
	struct UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3702a70
	void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3702cd0
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3702f50
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xb0 (Inherited: 0x30)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x30(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x40(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x50(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x60(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|RequiredAPI|Native|Protected|HasOutParms) // @ game+0x3703340
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived // (Final|RequiredAPI|Native|Protected|HasOutParms) // @ game+0x3703530
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded // (Final|RequiredAPI|Native|Protected) // @ game+0x3703720
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut // (Final|RequiredAPI|Native|Protected) // @ game+0x37038f0
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3703ac0
};

// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// Size: 0x30 (Inherited: 0x30)
struct USequenceEvaluatorLibrary : UBlueprintFunctionLibrary {

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371e080
	struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371e3b0
	struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371e840
	struct UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371de20
	float GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371df50
	void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371ea10
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371ec90
	struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371e580
};

// Class AnimGraphRuntime.SequencePlayerLibrary
// Size: 0x30 (Inherited: 0x30)
struct USequencePlayerLibrary : UBlueprintFunctionLibrary {

	struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float StartPosition); // Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37206a0
	struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371ffd0
	struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3720300
	struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float PlayRate); // Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37204d0
	struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float Time); // Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3720870
	float GetStartPosition(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371fa70
	struct UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371fcd0
	struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase*& SequenceBase); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x371fe00
	float GetPlayRate(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371f940
	bool GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371f810
	float GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371fba0
	void ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3720a40
	struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3720cc0
	float ComputePlayRateFromDuration(struct FSequencePlayerReference& SequencePlayer, float Duration); // Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x371f5f0
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x30 (Inherited: 0x30)
struct USequencerAnimationSupport : UInterface {
};

// Class AnimGraphRuntime.SkeletalControlLibrary
// Size: 0x30 (Inherited: 0x30)
struct USkeletalControlLibrary : UBlueprintFunctionLibrary {

	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& SkeletalControl, float Alpha); // Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3721820
	float GetAlpha(struct FSkeletalControlReference& SkeletalControl); // Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37216f0
	void ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x37219f0
	struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3721c70
};

