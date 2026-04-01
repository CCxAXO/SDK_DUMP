// Class KawaiiPhysics.AnimNotifyState_KawaiiPhysicsAddExternalForce
// Size: 0x70 (Inherited: 0x38)
struct UAnimNotifyState_KawaiiPhysicsAddExternalForce : UAnimNotifyState {
	struct TArray<struct FInstancedStruct> AdditionalExternalForces; // 0x38(0x10)
	struct FGameplayTagContainer FilterTags; // 0x48(0x20)
	bool bFilterExactMatch; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class KawaiiPhysics.AnimNotify_KawaiiPhysicsAddExternalForce
// Size: 0x78 (Inherited: 0x40)
struct UAnimNotify_KawaiiPhysicsAddExternalForce : UAnimNotify {
	struct TArray<struct FInstancedStruct> AdditionalExternalForces; // 0x40(0x10)
	struct FGameplayTagContainer FilterTags; // 0x50(0x20)
	bool bFilterExactMatch; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class KawaiiPhysics.KawaiiPhysicsBoneConstraintsDataAsset
// Size: 0x50 (Inherited: 0x38)
struct UKawaiiPhysicsBoneConstraintsDataAsset : UDataAsset {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FModifyBoneConstraintData> BoneConstraintsData; // 0x40(0x10)
};

// Class KawaiiPhysics.KawaiiPhysics_CustomExternalForce
// Size: 0x38 (Inherited: 0x30)
struct UKawaiiPhysics_CustomExternalForce : UObject {
	bool bIsEnabled; // 0x30(0x01)
	bool bDrawDebug; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)

	void PreApply(struct FAnimNode_KawaiiPhysics& Node, struct USkeletalMeshComponent* SkelComp); // Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.PreApply // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x7739c90
	bool IsDebugEnabled(); // Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.IsDebugEnabled // (Native|Public|BlueprintCallable) // @ game+0x5a12f90
	void Apply(struct FAnimNode_KawaiiPhysics& Node, int32_t ModifyBoneIndex, struct USkeletalMeshComponent* SkelComp, struct FTransform& BoneTransform); // Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.Apply // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x7739560
};

// Class KawaiiPhysics.KawaiiPhysicsLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKawaiiPhysicsLibrary : UBlueprintFunctionLibrary {

	struct FKawaiiPhysicsReference SetWindScale(struct FKawaiiPhysicsReference& KawaiiPhysics, float WindScale); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetWindScale // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7741c70
	struct FKawaiiPhysicsReference SetTeleportRotationThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportRotationThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7742590
	struct FKawaiiPhysicsReference SetTeleportDistanceThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportDistanceThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7742890
	struct FKawaiiPhysicsReference SetRootBoneName(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FName& RootBoneName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetRootBoneName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77435a0
	struct FKawaiiPhysicsReference SetPhysicsSettings(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FKawaiiPhysicsSettings& PhysicsSettings); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetPhysicsSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7742eb0
	struct FKawaiiPhysicsReference SetNeedWarmUp(struct FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetNeedWarmUp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7741670
	struct FKawaiiPhysicsReference SetLimitsDataAsset(struct FKawaiiPhysicsReference& KawaiiPhysics, struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetLimitsDataAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7741370
	struct FKawaiiPhysicsReference SetGravity(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FVector Gravity); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetGravity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7742280
	void SetExternalForceWildcardProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, int32_t& Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceWildcardProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7751a60
	struct FKawaiiPhysicsReference SetExternalForceVectorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, struct FVector Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceVectorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x773eab0
	struct FKawaiiPhysicsReference SetExternalForceTransformProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, struct FTransform Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceTransformProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x773dc00
	struct FKawaiiPhysicsReference SetExternalForceRotatorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, struct FRotator Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceRotatorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x773e3a0
	struct FKawaiiPhysicsReference SetExternalForceIntProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, int32_t Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceIntProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x773f8a0
	struct FKawaiiPhysicsReference SetExternalForceFloatProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, float Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceFloatProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x773f1b0
	struct FKawaiiPhysicsReference SetExternalForceBoolProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, bool Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceBoolProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x773ff90
	struct FKawaiiPhysicsReference SetExcludeBoneNames(struct FKawaiiPhysicsReference& KawaiiPhysics, struct TArray<struct FName>& ExcludeBoneNames); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExcludeBoneNames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7743240
	struct FKawaiiPhysicsReference SetEnableWind(struct FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetEnableWind // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7741f70
	struct FKawaiiPhysicsReference SetDummyBoneLength(struct FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetDummyBoneLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7742b90
	struct FKawaiiPhysicsReference SetAllowWorldCollision(struct FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetAllowWorldCollision // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7741970
	struct FKawaiiPhysicsReference ResetDynamics(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.ResetDynamics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7743790
	bool RemoveExternalForcesFromComponent(struct USkeletalMeshComponent* MeshComp, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch); // Function KawaiiPhysics.KawaiiPhysicsLibrary.RemoveExternalForcesFromComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7740350
	float GetWindScale(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetWindScale // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7741b40
	float GetTeleportRotationThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportRotationThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7742460
	float GetTeleportDistanceThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportDistanceThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7742760
	struct FName GetRootBoneName(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetRootBoneName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7743460
	struct FKawaiiPhysicsSettings GetPhysicsSettings(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetPhysicsSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7742d60
	bool GetNeedWarmUp(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetNeedWarmUp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7741540
	struct UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetLimitsDataAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7741240
	struct FVector GetGravity(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetGravity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x7742140
	void GetExternalForceWildcardProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, int32_t& Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceWildcardProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7751e90
	struct FVector GetExternalForceVectorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceVectorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x773e770
	struct FTransform GetExternalForceTransformProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceTransformProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x773d820
	struct FRotator GetExternalForceRotatorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceRotatorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x773e060
	int32_t GetExternalForceIntProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceIntProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x773f570
	float GetExternalForceFloatProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceFloatProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x773ee80
	bool GetExternalForceBoolProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceBoolProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x773fc60
	struct TArray<struct FName> GetExcludeBoneNames(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExcludeBoneNames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77430b0
	bool GetEnableWind(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetEnableWind // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7741e40
	float GetDummyBoneLength(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetDummyBoneLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7742a60
	bool GetAllowWorldCollision(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetAllowWorldCollision // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7741840
	void ConvertToKawaiiPhysicsPure(struct FAnimNodeReference& Node, struct FKawaiiPhysicsReference& KawaiiPhysics, bool& Result); // Function KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysicsPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77438c0
	struct FKawaiiPhysicsReference ConvertToKawaiiPhysics(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7743b40
	struct FKawaiiPhysicsReference AddExternalForceWithExecResult(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, struct FInstancedStruct& ExternalForce, struct UObject* Owner); // Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForceWithExecResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7740ed0
	bool AddExternalForcesToComponent(struct USkeletalMeshComponent* MeshComp, struct TArray<struct FInstancedStruct>& ExternalForces, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot); // Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForcesToComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77406b0
	bool AddExternalForce(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FInstancedStruct& ExternalForce, struct UObject* Owner, bool bIsOneShot); // Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForce // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7740b80
};

// Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// Size: 0x80 (Inherited: 0x38)
struct UKawaiiPhysicsLimitsDataAsset : UDataAsset {
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x40(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x50(0x10)
	struct TArray<struct FBoxLimit> BoxLimits; // 0x60(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x70(0x10)
};

