// Class ControlRig.ControlRigShapeLibraryLink
// Size: 0x120 (Inherited: 0x108)
struct UControlRigShapeLibraryLink : UNameSpacedUserData {
	struct UControlRigShapeLibrary* ShapeLibrary; // 0x108(0x08)
	struct TArray<struct FName> ShapeNames; // 0x110(0x10)

	void SetShapeLibrary(struct UControlRigShapeLibrary* InShapeLibrary); // Function ControlRig.ControlRigShapeLibraryLink.SetShapeLibrary // (Final|Native|Public|BlueprintCallable) // @ game+0x75b8410
	struct UControlRigShapeLibrary* GetShapeLibrary(); // Function ControlRig.ControlRigShapeLibraryLink.GetShapeLibrary // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x533e630
};

// Class ControlRig.RigHierarchy
// Size: 0x390 (Inherited: 0x30)
struct URigHierarchy : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	struct FMulticastInlineDelegate ModifiedEventDynamic; // 0x48(0x10)
	char pad_58[0x48]; // 0x58(0x48)
	uint16_t TopologyVersion; // 0xa0(0x02)
	uint16_t MetadataVersion; // 0xa2(0x02)
	uint16_t MetadataTagVersion; // 0xa4(0x02)
	bool bEnableDirtyPropagation; // 0xa6(0x01)
	char pad_A7[0x99]; // 0xa7(0x99)
	int32_t TransformStackIndex; // 0x140(0x04)
	char pad_144[0x74]; // 0x144(0x74)
	struct URigHierarchyController* HierarchyController; // 0x1b8(0x08)
	char pad_1C0[0x58]; // 0x1c0(0x58)
	struct TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap; // 0x218(0x50)
	char pad_268[0x80]; // 0x268(0x80)
	struct URigHierarchy* HierarchyForCacheValidation; // 0x2e8(0x08)
	char pad_2F0[0xa0]; // 0x2f0(0xa0)

	void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x75c2bc0
	void UnsetCurveValue(struct FRigElementKey InKey, bool bSetupUndo); // Function ControlRig.RigHierarchy.UnsetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x75c2d70
	bool SwitchToWorldSpace(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToWorldSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x75be820
	bool SwitchToParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToParent // (Final|Native|Public|BlueprintCallable) // @ game+0x75bed40
	bool SwitchToDefaultParent(struct FRigElementKey InChild, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SwitchToDefaultParent // (Final|Native|Public|BlueprintCallable) // @ game+0x75beab0
	struct TArray<struct FRigElementKey> SortKeys(struct TArray<struct FRigElementKey>& InKeys); // Function ControlRig.RigHierarchy.SortKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ca3f0
	bool SetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector InValue); // Function ControlRig.RigHierarchy.SetVectorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75d0270
	bool SetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FVector> InValue); // Function ControlRig.RigHierarchy.SetVectorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cfe00
	bool SetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform InValue); // Function ControlRig.RigHierarchy.SetTransformMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75cd2d0
	bool SetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FTransform> InValue); // Function ControlRig.RigHierarchy.SetTransformArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cce60
	bool SetTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.SetTag // (Final|Native|Public|BlueprintCallable) // @ game+0x75ca9f0
	bool SetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator InValue); // Function ControlRig.RigHierarchy.SetRotatorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75cf2f0
	bool SetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRotator> InValue); // Function ControlRig.RigHierarchy.SetRotatorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cee80
	bool SetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cb410
	bool SetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FRigElementKey> InValue); // Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cafa0
	bool SetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat InValue); // Function ControlRig.RigHierarchy.SetQuatMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75ce390
	bool SetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FQuat> InValue); // Function ControlRig.RigHierarchy.SetQuatArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cdf20
	void SetPose_ForBlueprint(struct FRigPose InPose); // Function ControlRig.RigHierarchy.SetPose_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x75bd830
	bool SetParentWeightArray(struct FRigElementKey InChild, struct TArray<struct FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeightArray // (Final|Native|Public|BlueprintCallable) // @ game+0x75bf020
	bool SetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, struct FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // Function ControlRig.RigHierarchy.SetParentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x75bf4c0
	bool SetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName InValue); // Function ControlRig.RigHierarchy.SetNameMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d11f0
	bool SetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FName> InValue); // Function ControlRig.RigHierarchy.SetNameArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d0d80
	void SetLocalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c93d0
	void SetLocalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c98e0
	bool SetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor InValue); // Function ControlRig.RigHierarchy.SetLinearColorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75cc380
	bool SetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<struct FLinearColor> InValue); // Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75cbf10
	bool SetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t InValue); // Function ControlRig.RigHierarchy.SetInt32Metadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d1f90
	bool SetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<int32_t> InValue); // Function ControlRig.RigHierarchy.SetInt32ArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d1b80
	void SetGlobalTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c83b0
	void SetGlobalTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchy.SetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c88c0
	bool SetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float InValue); // Function ControlRig.RigHierarchy.SetFloatMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d2ed0
	bool SetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<float> InValue); // Function ControlRig.RigHierarchy.SetFloatArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d2a60
	void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x75c2ff0
	void SetCurveValue(struct FRigElementKey InKey, float InValue, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x75c3290
	void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibilityByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x75c3c40
	void SetControlVisibility(struct FRigElementKey InKey, bool bVisibility); // Function ControlRig.RigHierarchy.SetControlVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x75c3e40
	void SetControlValueByIndex(int32_t InElementIndex, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValueByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x75c4090
	void SetControlValue(struct FRigElementKey InKey, struct FRigControlValue InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlValue // (Final|Native|Public|BlueprintCallable) // @ game+0x75c44e0
	void SetControlShapeTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c18a0
	void SetControlShapeTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bSetupUndo); // Function ControlRig.RigHierarchy.SetControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c1c70
	void SetControlSettingsByIndex(int32_t InElementIndex, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettingsByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x75c1010
	void SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x75c13c0
	void SetControlPreferredRotatorByIndex(int32_t InElementIndex, struct FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x75c61e0
	void SetControlPreferredRotator(struct FRigElementKey InKey, struct FRotator& InRotator, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x75c6520
	void SetControlPreferredRotationOrderByIndex(int32_t InElementIndex, enum class EEulerRotationOrder InRotationOrder); // Function ControlRig.RigHierarchy.SetControlPreferredRotationOrderByIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x75c4a00
	void SetControlPreferredRotationOrder(struct FRigElementKey InKey, enum class EEulerRotationOrder InRotationOrder); // Function ControlRig.RigHierarchy.SetControlPreferredRotationOrder // (Final|Native|Public|BlueprintCallable) // @ game+0x75c4bb0
	void SetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, struct FVector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredEulerAnglesByIndex // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x75c52c0
	void SetControlPreferredEulerAngles(struct FRigElementKey InKey, struct FVector& InEulerAngles, enum class EEulerRotationOrder InRotationOrder, bool bInitial, bool bFixEulerFlips); // Function ControlRig.RigHierarchy.SetControlPreferredEulerAngles // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x75c5680
	void SetControlOffsetTransformByIndex(int32_t InElementIndex, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c20f0
	void SetControlOffsetTransform(struct FRigElementKey InKey, struct FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchy.SetControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75c25f0
	bool SetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool InValue); // Function ControlRig.RigHierarchy.SetBoolMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d3e30
	bool SetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct TArray<bool> InValue); // Function ControlRig.RigHierarchy.SetBoolArrayMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d39c0
	void SendAutoKeyEvent(struct FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous); // Function ControlRig.RigHierarchy.SendAutoKeyEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x75bdfd0
	void ResetToDefault(); // Function ControlRig.RigHierarchy.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x75d7f40
	void ResetPoseToInitial(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.ResetPoseToInitial // (Final|Native|Public|BlueprintCallable) // @ game+0x75d79d0
	void ResetCurveValues(); // Function ControlRig.RigHierarchy.ResetCurveValues // (Final|Native|Public|BlueprintCallable) // @ game+0x75d7940
	void Reset(); // Function ControlRig.RigHierarchy.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x75d7f60
	bool RemoveMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.RemoveMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d4b00
	bool RemoveAllMetadata(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.RemoveAllMetadata // (Final|Native|Public|BlueprintCallable) // @ game+0x75d4920
	int32_t Num(); // Function ControlRig.RigHierarchy.Num // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3633750
	struct FRigControlValue MakeControlValueFromVector2D(struct FVector2D InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector2D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bd040
	struct FRigControlValue MakeControlValueFromVector(struct FVector InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bcd70
	struct FRigControlValue MakeControlValueFromTransformNoScale(struct FTransformNoScale InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bbeb0
	struct FRigControlValue MakeControlValueFromTransform(struct FTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bc680
	struct FRigControlValue MakeControlValueFromRotator(struct FRotator InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromRotator // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bca90
	struct FRigControlValue MakeControlValueFromInt(int32_t InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromInt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bd300
	struct FRigControlValue MakeControlValueFromFloat(float InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bd560
	struct FRigControlValue MakeControlValueFromEulerTransform(struct FEulerTransform InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bc250
	struct FRigControlValue MakeControlValueFromBool(bool InValue); // Function ControlRig.RigHierarchy.MakeControlValueFromBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bd6f0
	bool IsValidIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsValidIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d7840
	bool IsSelectedByIndex(int32_t InIndex); // Function ControlRig.RigHierarchy.IsSelectedByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ca590
	bool IsSelected(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ca6b0
	bool IsProcedural(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.IsProcedural // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d7540
	bool IsParentedTo(struct FRigElementKey InChild, struct FRigElementKey InParent); // Function ControlRig.RigHierarchy.IsParentedTo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75be3f0
	bool IsCurveValueSetByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.IsCurveValueSetByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c3600
	bool IsCurveValueSet(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.IsCurveValueSet // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c3730
	bool IsControllerAvailable(); // Function ControlRig.RigHierarchy.IsControllerAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5c1d640
	bool HasTag(struct FRigElementKey InItem, struct FName InTag); // Function ControlRig.RigHierarchy.HasTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cabc0
	struct FVector GetVectorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FVector DefaultValue); // Function ControlRig.RigHierarchy.GetVectorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d09e0
	struct FVector GetVectorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVectorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bcc30
	struct TArray<struct FVector> GetVectorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetVectorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d0630
	struct FVector2D GetVector2DFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetVector2DFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bcf10
	struct FTransformNoScale GetTransformNoScaleFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bbd20
	struct FTransform GetTransformMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FTransform DefaultValue); // Function ControlRig.RigHierarchy.GetTransformMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cdac0
	struct FTransform GetTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetTransformFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bc4b0
	struct TArray<struct FTransform> GetTransformArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetTransformArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cd710
	struct TArray<struct FName> GetTags(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cae00
	struct TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InTypeFilter); // Function ControlRig.RigHierarchy.GetSelectedKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ca890
	struct FRotator GetRotatorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRotator DefaultValue); // Function ControlRig.RigHierarchy.GetRotatorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cfa60
	struct FRotator GetRotatorFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetRotatorFromControlValue // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x75bc950
	struct TArray<struct FRotator> GetRotatorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRotatorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cf6b0
	struct TArray<struct FRigElementKey> GetRootElementKeys(); // Function ControlRig.RigHierarchy.GetRootElementKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5330
	struct TArray<struct FRigElementKey> GetRigidBodyKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetRigidBodyKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5640
	struct FRigElementKey GetRigElementKeyMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FRigElementKey DefaultValue); // Function ControlRig.RigHierarchy.GetRigElementKeyMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cbb80
	struct TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cb7d0
	struct TArray<struct FRigElementKey> GetReferenceKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetReferenceKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5400
	struct FQuat GetQuatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FQuat DefaultValue); // Function ControlRig.RigHierarchy.GetQuatMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ceaf0
	struct TArray<struct FQuat> GetQuatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetQuatArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ce740
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75bba60
	struct FName GetPreviousName(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.GetPreviousName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75bbc00
	struct FRigPose GetPose(bool bInitial); // Function ControlRig.RigHierarchy.GetPose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75bdc40
	struct TArray<struct FRigElementWeight> GetParentWeightArray(struct FRigElementKey InChild, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeightArray // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75bf870
	struct FRigElementWeight GetParentWeight(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bInitial); // Function ControlRig.RigHierarchy.GetParentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75bfb60
	struct FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c0ab0
	struct FTransform GetParentTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetParentTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c0cf0
	struct TArray<struct FRigElementKey> GetParents(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c0650
	int32_t GetNumberOfParents(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetNumberOfParents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c00c0
	struct TArray<struct FRigElementKey> GetNullKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetNullKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5c50
	struct FName GetNameMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FName DefaultValue); // Function ControlRig.RigHierarchy.GetNameMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d17f0
	struct TArray<struct FName> GetNameArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetNameArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d15b0
	enum class ERigMetadataType GetMetadataType(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetMetadataType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75d4da0
	struct TArray<struct FName> GetMetadataNames(struct FRigElementKey InItem); // Function ControlRig.RigHierarchy.GetMetadataNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75d5050
	struct FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c9ec0
	struct FTransform GetLocalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ca120
	int32_t GetLocalIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d71a0
	struct FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c78d0
	struct FTransform GetLocalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetLocalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c7b20
	struct FLinearColor GetLinearColorMetadata(struct FRigElementKey InItem, struct FName InMetadataName, struct FLinearColor DefaultValue); // Function ControlRig.RigHierarchy.GetLinearColorMetadata // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ccae0
	struct TArray<struct FLinearColor> GetLinearColorArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75cc730
	struct TArray<struct FRigElementKey> GetKeys(struct TArray<int32_t> InElementIndices); // Function ControlRig.RigHierarchy.GetKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d6d80
	struct FRigElementKey GetKey(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d7070
	int32_t GetIntFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetIntFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bd1e0
	int32_t GetInt32Metadata(struct FRigElementKey InItem, struct FName InMetadataName, int32_t DefaultValue); // Function ControlRig.RigHierarchy.GetInt32Metadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d26d0
	struct TArray<int32_t> GetInt32ArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetInt32ArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d2340
	int32_t GetIndex_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetIndex_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d7380
	struct FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c8ea0
	struct FTransform GetGlobalTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c9100
	struct FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c7350
	struct FTransform GetGlobalControlShapeTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c75a0
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c7e50
	struct FTransform GetGlobalControlOffsetTransform(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c8090
	float GetFloatMetadata(struct FRigElementKey InItem, struct FName InMetadataName, float DefaultValue); // Function ControlRig.RigHierarchy.GetFloatMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d3630
	float GetFloatFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetFloatFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bd440
	struct TArray<float> GetFloatArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetFloatArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d3280
	struct FRigElementKey GetFirstParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetFirstParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c02d0
	struct FEulerTransform GetEulerTransformFromControlValue(struct FRigControlValue InValue); // Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75bc0a0
	struct FRigElementKey GetDefaultParent(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetDefaultParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c0530
	float GetCurveValueByIndex(int32_t InElementIndex); // Function ControlRig.RigHierarchy.GetCurveValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c3920
	float GetCurveValue(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.GetCurveValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c3a50
	struct TArray<struct FRigElementKey> GetCurveKeys(); // Function ControlRig.RigHierarchy.GetCurveKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5880
	struct FRigControlValue GetControlValueByIndex(int32_t InElementIndex, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValueByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c6dc0
	struct FRigControlValue GetControlValue(struct FRigElementKey InKey, enum class ERigControlValueType InValueType); // Function ControlRig.RigHierarchy.GetControlValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c7020
	struct FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c68d0
	struct FRotator GetControlPreferredRotator(struct FRigElementKey InKey, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c6af0
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrderByIndex(int32_t InElementIndex, bool bFromSettings); // Function ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrderByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c4e30
	enum class EEulerRotationOrder GetControlPreferredEulerRotationOrder(struct FRigElementKey InKey, bool bFromSettings); // Function ControlRig.RigHierarchy.GetControlPreferredEulerRotationOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c5020
	struct FVector GetControlPreferredEulerAnglesByIndex(int32_t InElementIndex, enum class EEulerRotationOrder InRotationOrder, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredEulerAnglesByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c5ab0
	struct FVector GetControlPreferredEulerAngles(struct FRigElementKey InKey, enum class EEulerRotationOrder InRotationOrder, bool bInitial); // Function ControlRig.RigHierarchy.GetControlPreferredEulerAngles // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c5e00
	struct URigHierarchyController* GetController(bool bCreateIfNeeded); // Function ControlRig.RigHierarchy.GetController // (Final|Native|Public|BlueprintCallable) // @ game+0x75bded0
	struct TArray<struct FRigElementKey> GetControlKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetControlKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5a10
	struct TArray<struct FRigElementKey> GetChildren(struct FRigElementKey InKey, bool bRecursive); // Function ControlRig.RigHierarchy.GetChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75c0880
	bool GetBoolMetadata(struct FRigElementKey InItem, struct FName InMetadataName, bool DefaultValue); // Function ControlRig.RigHierarchy.GetBoolMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d4590
	struct TArray<bool> GetBoolArrayMetadata(struct FRigElementKey InItem, struct FName InMetadataName); // Function ControlRig.RigHierarchy.GetBoolArrayMetadata // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d41e0
	struct TArray<struct FRigElementKey> GetBoneKeys(bool bTraverse); // Function ControlRig.RigHierarchy.GetBoneKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d5e90
	struct TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse); // Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75be260
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d60d0
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d6460
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InKey); // Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly // (Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d6a80
	void CopyPose(struct URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // Function ControlRig.RigHierarchy.CopyPose // (Final|Native|Public|BlueprintCallable) // @ game+0x75d7ac0
	void CopyHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchy.CopyHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x75d7e50
	bool Contains_ForBlueprint(struct FRigElementKey InKey); // Function ControlRig.RigHierarchy.Contains_ForBlueprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75d7680
};

// Class ControlRig.TransformableControlHandle
// Size: 0xa0 (Inherited: 0x60)
struct UTransformableControlHandle : UTransformableHandle {
	struct TSoftObjectPtr<UControlRig> ControlRig; // 0x60(0x30)
	struct FName ControlName; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class ControlRig.ControlRig
// Size: 0x620 (Inherited: 0x348)
struct UControlRig : URigVMHost {
	char pad_348[0x8]; // 0x348(0x08)
	enum class ERigExecutionType ExecutionType; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FRigHierarchySettings HierarchySettings; // 0x354(0x04)
	struct TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations; // 0x358(0x50)
	struct URigHierarchy* DynamicHierarchy; // 0x3a8(0x08)
	struct TArray<struct TSoftObjectPtr<UControlRigShapeLibrary>> ShapeLibraries; // 0x3b0(0x10)
	struct TMap<struct FString, struct FString> ShapeLibraryNameMap; // 0x3c0(0x50)
	char pad_410[0x18]; // 0x410(0x18)
	struct UAnimationDataSourceRegistry* DataSourceRegistry; // 0x428(0x08)
	char pad_430[0x90]; // 0x430(0x90)
	struct FRigInfluenceMapPerEvent Influences; // 0x4c0(0x60)
	struct UControlRig* InteractionRig; // 0x520(0x08)
	struct UControlRig* InteractionRigClass; // 0x528(0x08)
	char pad_530[0xd0]; // 0x530(0xd0)
	struct FMulticastSparseDelegate OnControlSelected_BP; // 0x600(0x01)
	char pad_601[0x1f]; // 0x601(0x1f)

	void SetInteractionRigClass(struct UControlRig* InInteractionRigClass); // Function ControlRig.ControlRig.SetInteractionRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x75ec2e0
	void SetInteractionRig(struct UControlRig* InInteractionRig); // Function ControlRig.ControlRig.SetInteractionRig // (Final|Native|Public|BlueprintCallable) // @ game+0x75ec550
	void SelectControl(struct FName& InControlName, bool bSelect); // Function ControlRig.ControlRig.SelectControl // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x75ec840
	void RequestConstruction(); // Function ControlRig.ControlRig.RequestConstruction // (Final|Native|Public|BlueprintCallable) // @ game+0x75eca00
	void OnControlSelectedBP__DelegateSignature(struct UControlRig* Rig, struct FRigControlElement& Control, bool bSelected); // SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1b42740
	bool IsControlSelected(struct FName& InControlName); // Function ControlRig.ControlRig.IsControlSelected // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ec640
	struct UControlRig* GetInteractionRigClass(); // Function ControlRig.ControlRig.GetInteractionRigClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5899320
	struct UControlRig* GetInteractionRig(); // Function ControlRig.ControlRig.GetInteractionRig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5899340
	struct AActor* GetHostingActor(); // Function ControlRig.ControlRig.GetHostingActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75eca30
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.ControlRig.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x5899ce0
	struct TArray<struct UControlRig*> FindControlRigs(struct UObject* Outer, struct UControlRig* OptionalClass); // Function ControlRig.ControlRig.FindControlRigs // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x75ecc30
	struct TArray<struct FName> CurrentControlSelection(); // Function ControlRig.ControlRig.CurrentControlSelection // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x75ec750
	struct UTransformableControlHandle* CreateTransformableControlHandle(struct UObject* Outer, struct FName& ControlName); // Function ControlRig.ControlRig.CreateTransformableControlHandle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x75eca80
	bool ClearControlSelection(); // Function ControlRig.ControlRig.ClearControlSelection // (Native|Public|BlueprintCallable) // @ game+0x75ec800
};

// Class ControlRig.ControlRigAnimInstance
// Size: 0x390 (Inherited: 0x390)
struct UControlRigAnimInstance : UAnimInstance {
};

// Class ControlRig.ControlRigBlueprintGeneratedClass
// Size: 0x3a0 (Inherited: 0x3a0)
struct UControlRigBlueprintGeneratedClass : URigVMBlueprintGeneratedClass {
};

// Class ControlRig.ControlRigComponent
// Size: 0x7f0 (Inherited: 0x690)
struct UControlRigComponent : UPrimitiveComponent {
	struct UControlRig* ControlRigClass; // 0x690(0x08)
	struct FMulticastInlineDelegate OnPreInitializeDelegate; // 0x698(0x10)
	struct FMulticastInlineDelegate OnPostInitializeDelegate; // 0x6a8(0x10)
	struct FMulticastInlineDelegate OnPreConstructionDelegate; // 0x6b8(0x10)
	struct FMulticastInlineDelegate OnPostConstructionDelegate; // 0x6c8(0x10)
	struct FMulticastInlineDelegate OnPreForwardsSolveDelegate; // 0x6d8(0x10)
	struct FMulticastInlineDelegate OnPostForwardsSolveDelegate; // 0x6e8(0x10)
	struct TArray<struct FControlRigComponentMappedElement> UserDefinedElements; // 0x6f8(0x10)
	struct TArray<struct FControlRigComponentMappedElement> MappedElements; // 0x708(0x10)
	bool bEnableLazyEvaluation; // 0x718(0x01)
	char pad_719[0x3]; // 0x719(0x03)
	float LazyEvaluationPositionThreshold; // 0x71c(0x04)
	float LazyEvaluationRotationThreshold; // 0x720(0x04)
	float LazyEvaluationScaleThreshold; // 0x724(0x04)
	bool bResetTransformBeforeTick; // 0x728(0x01)
	bool bResetInitialsBeforeConstruction; // 0x729(0x01)
	bool bUpdateRigOnTick; // 0x72a(0x01)
	bool bUpdateInEditor; // 0x72b(0x01)
	bool bDrawBones; // 0x72c(0x01)
	bool bShowDebugDrawing; // 0x72d(0x01)
	char pad_72E[0x2]; // 0x72e(0x02)
	struct UControlRig* ControlRig; // 0x730(0x08)
	char pad_738[0xb8]; // 0x738(0xb8)

	void Update(float DeltaTime); // Function ControlRig.ControlRigComponent.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x7600430
	void SetObjectBinding(struct UObject* InObjectToBind); // Function ControlRig.ControlRigComponent.SetObjectBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x75faea0
	void SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.SetMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x76002a0
	void SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fb090
	void SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fe7d0
	void SetControlVector2D(struct FName ControlName, struct FVector2D Value); // Function ControlRig.ControlRigComponent.SetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fd0a0
	void SetControlTransform(struct FName ControlName, struct FTransform Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fc030
	void SetControlScale(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fc3c0
	void SetControlRotator(struct FName ControlName, struct FRotator Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fc800
	void SetControlRigClass(struct UControlRig* InControlRigClass); // Function ControlRig.ControlRigComponent.SetControlRigClass // (Final|Native|Public|BlueprintCallable) // @ game+0x75faf90
	void SetControlPosition(struct FName ControlName, struct FVector Value, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fcc70
	void SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.SetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fb9e0
	void SetControlInt(struct FName ControlName, int32_t Value); // Function ControlRig.ControlRigComponent.SetControlInt // (Final|Native|Public|BlueprintCallable) // @ game+0x75fd320
	void SetControlFloat(struct FName ControlName, float Value); // Function ControlRig.ControlRigComponent.SetControlFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x75fd530
	void SetControlBool(struct FName ControlName, bool Value); // Function ControlRig.ControlRigComponent.SetControlBool // (Final|Native|Public|BlueprintCallable) // @ game+0x75fd750
	void SetBoneTransform(struct FName BoneName, struct FTransform Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // Function ControlRig.ControlRigComponent.SetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75feb40
	void SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh); // Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x75ffa70
	void OnPreInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x7600840
	void OnPreForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x47ca880
	void OnPreConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPreConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x7600640
	void OnPostInitialize(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostInitialize // (Native|Event|Public|BlueprintEvent) // @ game+0x7600740
	void OnPostForwardsSolve(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostForwardsSolve // (Native|Event|Public|BlueprintEvent) // @ game+0x3bebc20
	void OnPostConstruction(struct UControlRigComponent* Component); // Function ControlRig.ControlRigComponent.OnPostConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x7600540
	void Initialize(); // Function ControlRig.ControlRigComponent.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x7600520
	struct FTransform GetSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fb700
	struct FTransform GetInitialSpaceTransform(struct FName SpaceName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialSpaceTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fb420
	struct FTransform GetInitialBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetInitialBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fef50
	struct TArray<struct FName> GetElementNames(enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.GetElementNames // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75ff860
	struct FVector2D GetControlVector2D(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlVector2D // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fe140
	struct FTransform GetControlTransform(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fd950
	struct FVector GetControlScale(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fdb50
	struct FRotator GetControlRotator(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlRotator // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fdd40
	struct UControlRig* GetControlRig(); // Function ControlRig.ControlRigComponent.GetControlRig // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7600a00
	struct FVector GetControlPosition(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75fdf50
	struct FTransform GetControlOffset(struct FName ControlName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetControlOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75fbd70
	int32_t GetControlInt(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlInt // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75fe300
	float GetControlFloat(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75fe4a0
	bool GetControlBool(struct FName ControlName); // Function ControlRig.ControlRigComponent.GetControlBool // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75fe640
	struct FTransform GetBoneTransform(struct FName BoneName, enum class EControlRigComponentSpace Space); // Function ControlRig.ControlRigComponent.GetBoneTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x75ff2d0
	float GetAbsoluteTime(); // Function ControlRig.ControlRigComponent.GetAbsoluteTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7600940
	bool DoesElementExist(struct FName Name, enum class ERigElementType ElementType); // Function ControlRig.ControlRigComponent.DoesElementExist // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x75ff660
	void ClearMappedElements(); // Function ControlRig.ControlRigComponent.ClearMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7600410
	bool CanExecute(); // Function ControlRig.ControlRigComponent.CanExecute // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7600980
	void AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves); // Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x75ffca0
	void AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements); // Function ControlRig.ControlRigComponent.AddMappedElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7600130
	void AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components); // Function ControlRig.ControlRigComponent.AddMappedComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x75fffb0
	void AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent); // Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x75ffb90
};

// Class ControlRig.ControlRigControlActor
// Size: 0x520 (Inherited: 0x460)
struct AControlRigControlActor : AActor {
	struct AActor* ActorToTrack; // 0x460(0x08)
	struct UControlRig* ControlRigClass; // 0x468(0x08)
	bool bRefreshOnTick; // 0x470(0x01)
	bool bIsSelectable; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct UMaterialInterface* MaterialOverride; // 0x478(0x08)
	struct FString ColorParameter; // 0x480(0x10)
	bool bCastShadows; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct USceneComponent* ActorRootComponent; // 0x498(0x08)
	struct TSoftObjectPtr<UControlRig> ControlRig; // 0x4a0(0x30)
	struct TArray<struct FName> ControlNames; // 0x4d0(0x10)
	struct TArray<struct FTransform> ShapeTransforms; // 0x4e0(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x4f0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Materials; // 0x500(0x10)
	struct FName ColorParameterName; // 0x510(0x0c)
	char pad_51C[0x4]; // 0x51c(0x04)

	void ResetControlActor(); // Function ControlRig.ControlRigControlActor.ResetControlActor // (Final|Native|Public|BlueprintCallable) // @ game+0x760cf30
	void Refresh(); // Function ControlRig.ControlRigControlActor.Refresh // (Final|Native|Public|BlueprintCallable) // @ game+0x760cef0
	void Clear(); // Function ControlRig.ControlRigControlActor.Clear // (Final|Native|Public|BlueprintCallable) // @ game+0x760cf10
};

// Class ControlRig.ControlRigShapeActor
// Size: 0x4b8 (Inherited: 0x460)
struct AControlRigShapeActor : AActor {
	struct USceneComponent* ActorRootComponent; // 0x460(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x468(0x08)
	uint32_t ControlRigIndex; // 0x470(0x04)
	struct TWeakObjectPtr<struct UControlRig> ControlRig; // 0x474(0x08)
	struct FName ControlName; // 0x47c(0x0c)
	struct FName ShapeName; // 0x488(0x0c)
	struct FName ColorParameterName; // 0x494(0x0c)
	char pad_4A0[0x10]; // 0x4a0(0x10)
	char bSelected : 1; // 0x4b0(0x01)
	char bHovered : 1; // 0x4b0(0x01)
	char pad_4B0_2 : 6; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)

	void SetSelected(bool bInSelected); // Function ControlRig.ControlRigShapeActor.SetSelected // (Native|Public|BlueprintCallable) // @ game+0x7610150
	void SetSelectable(bool bInSelectable); // Function ControlRig.ControlRigShapeActor.SetSelectable // (Native|Public|BlueprintCallable) // @ game+0x7610050
	void SetHovered(bool bInHovered); // Function ControlRig.ControlRigShapeActor.SetHovered // (Native|Public|BlueprintCallable) // @ game+0x760ff50
	void SetGlobalTransform(struct FTransform& InTransform); // Function ControlRig.ControlRigShapeActor.SetGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x760fdd0
	void SetEnabled(bool bInEnabled); // Function ControlRig.ControlRigShapeActor.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x3669190
	void OnTransformChanged(struct FTransform& NewTransform); // Function ControlRig.ControlRigShapeActor.OnTransformChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1b42740
	void OnSelectionChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnManipulatingChanged(bool bIsManipulating); // Function ControlRig.ControlRigShapeActor.OnManipulatingChanged // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnHoveredChanged(bool bIsSelected); // Function ControlRig.ControlRigShapeActor.OnHoveredChanged // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnEnabledChanged(bool bIsEnabled); // Function ControlRig.ControlRigShapeActor.OnEnabledChanged // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	bool IsSelectedInEditor(); // Function ControlRig.ControlRigShapeActor.IsSelectedInEditor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42ce510
	bool IsHovered(); // Function ControlRig.ControlRigShapeActor.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5910050
	bool IsEnabled(); // Function ControlRig.ControlRigShapeActor.IsEnabled // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7610250
	struct FTransform GetGlobalTransform(); // Function ControlRig.ControlRigShapeActor.GetGlobalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x760fd20
};

// Class ControlRig.ControlRigShapeLibrary
// Size: 0x170 (Inherited: 0x30)
struct UControlRigShapeLibrary : UObject {
	struct FControlRigShapeDefinition DefaultShape; // 0x30(0xb0)
	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0xe0(0x30)
	struct TSoftObjectPtr<UMaterial> XRayMaterial; // 0x110(0x30)
	struct FName MaterialColorParameter; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FControlRigShapeDefinition> Shapes; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
};

// Class ControlRig.ControlRigTestData
// Size: 0x160 (Inherited: 0x30)
struct UControlRigTestData : UObject {
	struct FSoftObjectPath ControlRigObjectPath; // 0x30(0x28)
	struct FControlRigTestDataFrame Initial; // 0x58(0x90)
	struct TArray<struct FControlRigTestDataFrame> InputFrames; // 0xe8(0x10)
	struct TArray<struct FControlRigTestDataFrame> OutputFrames; // 0xf8(0x10)
	struct TArray<int32_t> FramesToSkip; // 0x108(0x10)
	double Tolerance; // 0x118(0x08)
	char pad_120[0x40]; // 0x120(0x40)

	bool SetupReplay(struct UControlRig* InControlRig, bool bGroundTruth); // Function ControlRig.ControlRigTestData.SetupReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x7612d70
	void ReleaseReplay(); // Function ControlRig.ControlRigTestData.ReleaseReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x7612d10
	bool Record(struct UControlRig* InControlRig, double InRecordingDuration); // Function ControlRig.ControlRigTestData.Record // (Final|Native|Public|BlueprintCallable) // @ game+0x7613090
	bool IsReplaying(); // Function ControlRig.ControlRigTestData.IsReplaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7612c70
	bool IsRecording(); // Function ControlRig.ControlRigTestData.IsRecording // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7612c40
	struct FVector2D GetTimeRange(bool bInput); // Function ControlRig.ControlRigTestData.GetTimeRange // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7613560
	enum class EControlRigTestDataPlaybackMode GetPlaybackMode(); // Function ControlRig.ControlRigTestData.GetPlaybackMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7612cb0
	int32_t GetFrameIndexForTime(double InSeconds, bool bInput); // Function ControlRig.ControlRigTestData.GetFrameIndexForTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x76133c0
	struct UControlRigTestData* CreateNewAsset(struct FString InDesiredPackagePath, struct FString InBlueprintPathName); // Function ControlRig.ControlRigTestData.CreateNewAsset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7613690
};

// Class ControlRig.ControlRigValidator
// Size: 0x70 (Inherited: 0x30)
struct UControlRigValidator : UObject {
	struct TArray<struct UControlRigValidationPass*> Passes; // 0x30(0x10)
	char pad_40[0x30]; // 0x40(0x30)
};

// Class ControlRig.ControlRigValidationPass
// Size: 0x30 (Inherited: 0x30)
struct UControlRigValidationPass : UObject {
};

// Class ControlRig.AdditiveControlRig
// Size: 0x630 (Inherited: 0x620)
struct UAdditiveControlRig : UControlRig {
	char pad_620[0x10]; // 0x620(0x10)
};

// Class ControlRig.FKControlRig
// Size: 0x660 (Inherited: 0x620)
struct UFKControlRig : UControlRig {
	struct TArray<bool> IsControlActive; // 0x620(0x10)
	enum class EControlRigFKRigExecuteMode ApplyMode; // 0x630(0x01)
	char pad_631[0x2f]; // 0x631(0x2f)
};

// Class ControlRig.RigHierarchyController
// Size: 0xa0 (Inherited: 0x30)
struct URigHierarchyController : UObject {
	bool bReportWarningsAndErrors; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct TWeakObjectPtr<struct URigHierarchy> Hierarchy; // 0x34(0x08)
	char pad_3C[0x64]; // 0x3c(0x64)

	bool SetSelection(struct TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x764bab0
	bool SetParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7646b60
	void SetHierarchy(struct URigHierarchy* InHierarchy); // Function ControlRig.RigHierarchyController.SetHierarchy // (Final|Native|Public|BlueprintCallable) // @ game+0x764c000
	struct FName SetDisplayName(struct FRigElementKey InControl, struct FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.SetDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x76478a0
	bool SetControlSettings(struct FRigElementKey InKey, struct FRigControlSettings InSettings, bool bSetupUndo); // Function ControlRig.RigHierarchyController.SetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7649760
	bool SelectElement(struct FRigElementKey InKey, bool bSelect, bool bClearSelection); // Function ControlRig.RigHierarchyController.SelectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x764bda0
	bool ReorderElement(struct FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ReorderElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7647cc0
	struct FRigElementKey RenameElement(struct FRigElementKey InElement, struct FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // Function ControlRig.RigHierarchyController.RenameElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7648020
	bool RemoveParent(struct FRigElementKey InChild, struct FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveParent // (Final|Native|Public|BlueprintCallable) // @ game+0x76471c0
	bool RemoveElement(struct FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveElement // (Final|Native|Public|BlueprintCallable) // @ game+0x7648460
	bool RemoveAllParents(struct FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.RemoveAllParents // (Final|Native|Public|BlueprintCallable) // @ game+0x7646ed0
	struct TArray<struct FRigElementKey> MirrorElements(struct TArray<struct FRigElementKey> InKeys, struct FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.MirrorElements // (Final|Native|Public|BlueprintCallable) // @ game+0x7646250
	struct TArray<struct FRigElementKey> ImportFromText(struct FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.ImportFromText // (Final|Native|Public|BlueprintCallable) // @ game+0x7648730
	struct TArray<struct FRigElementKey> ImportCurves(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportCurves // (Final|Native|Public|BlueprintCallable) // @ game+0x7648e60
	struct TArray<struct FRigElementKey> ImportBones(struct USkeleton* InSkeleton, struct FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.ImportBones // (Final|Native|Public|BlueprintCallable) // @ game+0x7649220
	struct URigHierarchy* GetHierarchy(); // Function ControlRig.RigHierarchyController.GetHierarchy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x764c0f0
	struct FRigControlSettings GetControlSettings(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.GetControlSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x76499d0
	struct FString ExportToText(struct TArray<struct FRigElementKey> InKeys); // Function ControlRig.RigHierarchyController.ExportToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7648b90
	struct FString ExportSelectionToText(); // Function ControlRig.RigHierarchyController.ExportSelectionToText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7648d70
	struct TArray<struct FRigElementKey> DuplicateElements(struct TArray<struct FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // Function ControlRig.RigHierarchyController.DuplicateElements // (Final|Native|Public|BlueprintCallable) // @ game+0x76467b0
	bool DeselectElement(struct FRigElementKey InKey); // Function ControlRig.RigHierarchyController.DeselectElement // (Final|Native|Public|BlueprintCallable) // @ game+0x764bc90
	bool ClearSelection(); // Function ControlRig.RigHierarchyController.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x764ba80
	struct FRigElementKey AddRigidBody(struct FName InName, struct FRigElementKey InParent, struct FRigRigidBodySettings InSettings, struct FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddRigidBody // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7649e80
	bool AddParent(struct FRigElementKey InChild, struct FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // Function ControlRig.RigHierarchyController.AddParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7647530
	struct FRigElementKey AddNull(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddNull // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x764b070
	struct FRigElementKey AddCurve(struct FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x764a330
	struct FRigElementKey AddControl_ForBlueprint(struct FName InName, struct FRigElementKey InParent, struct FRigControlSettings InSettings, struct FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddControl_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x764aa20
	struct FRigElementKey AddBone(struct FName InName, struct FRigElementKey InParent, struct FTransform InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddBone // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x764b530
	struct FRigElementKey AddAnimationChannel_ForBlueprint(struct FName InName, struct FRigElementKey InParentControl, struct FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint // (Final|Native|Public|BlueprintCallable) // @ game+0x764a630
};

// Class ControlRig.ControlRigLayerInstance
// Size: 0x3a0 (Inherited: 0x390)
struct UControlRigLayerInstance : UAnimInstance {
	char pad_390[0x10]; // 0x390(0x10)
};

// Class ControlRig.ControlRigObjectHolder
// Size: 0x40 (Inherited: 0x30)
struct UControlRigObjectHolder : UObject {
	struct TArray<struct UObject*> Objects; // 0x30(0x10)
};

// Class ControlRig.MovieSceneControlRigParameterSection
// Size: 0x3d8 (Inherited: 0x160)
struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	char pad_160[0x48]; // 0x160(0x48)
	struct UControlRig* ControlRig; // 0x1a8(0x08)
	struct UControlRig* ControlRigClass; // 0x1b0(0x08)
	struct TArray<bool> ControlsMask; // 0x1b8(0x10)
	struct FMovieSceneTransformMask TransformMask; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x1d0(0x110)
	struct TMap<struct FName, struct FChannelMapInfo> ControlChannelMap; // 0x2e0(0x50)
	struct TArray<struct FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x330(0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x340(0x10)
	struct TArray<struct FSpaceControlNameAndChannel> SpaceChannels; // 0x350(0x10)
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels; // 0x360(0x10)
	char pad_370[0x68]; // 0x370(0x68)
};

// Class ControlRig.MovieSceneControlRigParameterTrack
// Size: 0x160 (Inherited: 0xa0)
struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	char pad_A0[0x40]; // 0xa0(0x40)
	struct UControlRig* ControlRig; // 0xe0(0x08)
	struct UMovieSceneSection* SectionToKey; // 0xe8(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xf0(0x10)
	struct FName TrackName; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TMap<struct FName, struct FControlRotationOrder> ControlsRotationOrder; // 0x110(0x50)
};

// Class ControlRig.ControlRigSettings
// Size: 0x48 (Inherited: 0x48)
struct UControlRigSettings : UDeveloperSettings {
};

// Class ControlRig.ControlRigEditorSettings
// Size: 0x48 (Inherited: 0x48)
struct UControlRigEditorSettings : URigVMEditorSettings {
};

// Class ControlRig.ControlRigPoseAsset
// Size: 0x90 (Inherited: 0x30)
struct UControlRigPoseAsset : UObject {
	struct FControlRigControlPose Pose; // 0x30(0x60)

	void SelectControls(struct UControlRig* InControlRig, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.SelectControls // (Final|Native|Public|BlueprintCallable) // @ game+0x767ce10
	void SavePose(struct UControlRig* InControlRig, bool bUseAll); // Function ControlRig.ControlRigPoseAsset.SavePose // (Final|Native|Public|BlueprintCallable) // @ game+0x767d1f0
	void ReplaceControlName(struct FName& CurrentName, struct FName& NewName); // Function ControlRig.ControlRigPoseAsset.ReplaceControlName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x767c7e0
	void PastePose(struct UControlRig* InControlRig, bool bDoKey, bool bDoMirror); // Function ControlRig.ControlRigPoseAsset.PastePose // (Final|Native|Public|BlueprintCallable) // @ game+0x767cfa0
	void GetCurrentPose(struct UControlRig* InControlRig, struct FControlRigControlPose& OutPose); // Function ControlRig.ControlRigPoseAsset.GetCurrentPose // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x767caf0
	struct TArray<struct FName> GetControlNames(); // Function ControlRig.ControlRigPoseAsset.GetControlNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x767ca40
	bool DoesMirrorMatch(struct UControlRig* ControlRig, struct FName& ControlName); // Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x767c640
};

// Class ControlRig.ControlRigPoseMirrorSettings
// Size: 0x58 (Inherited: 0x30)
struct UControlRigPoseMirrorSettings : UObject {
	struct FString RightSide; // 0x30(0x10)
	struct FString LeftSide; // 0x40(0x10)
	enum class EAxis MirrorAxis; // 0x50(0x01)
	enum class EAxis AxisToFlip; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class ControlRig.ControlRigPoseProjectSettings
// Size: 0x40 (Inherited: 0x30)
struct UControlRigPoseProjectSettings : UObject {
	struct TArray<struct FDirectoryPath> RootSaveDirs; // 0x30(0x10)
};

// Class ControlRig.ControlRigWorkflowOptions
// Size: 0xc0 (Inherited: 0xa8)
struct UControlRigWorkflowOptions : URigVMUserWorkflowOptions {
	struct URigHierarchy* Hierarchy; // 0xa8(0x08)
	struct TArray<struct FRigElementKey> Selection; // 0xb0(0x10)

	bool EnsureAtLeastOneRigElementSelected(); // Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7685d00
};

// Class ControlRig.ControlRigTransformWorkflowOptions
// Size: 0xc8 (Inherited: 0xc0)
struct UControlRigTransformWorkflowOptions : UControlRigWorkflowOptions {
	enum class ERigTransformType TransformType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct TArray<struct FRigVMUserWorkflow> ProvideWorkflows(struct UObject* InSubject); // Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows // (Final|Native|Public) // @ game+0x7685f20
};

// Class ControlRig.ControlRigNumericalValidationPass
// Size: 0xd0 (Inherited: 0x30)
struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x30(0x01)
	bool bCheckBones; // 0x31(0x01)
	bool bCheckCurves; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float TranslationPrecision; // 0x34(0x04)
	float RotationPrecision; // 0x38(0x04)
	float ScalePrecision; // 0x3c(0x04)
	float CurvePrecision; // 0x40(0x04)
	struct FName EventNameA; // 0x44(0x0c)
	struct FName EventNameB; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FRigPose Pose; // 0x60(0x70)
};

