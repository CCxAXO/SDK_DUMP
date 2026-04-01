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

	void PreApply(struct FAnimNode_KawaiiPhysics& Node, struct USkeletalMeshComponent* SkelComp); // Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.PreApply // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x77c8380
	bool IsDebugEnabled(); // Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.IsDebugEnabled // (Native|Public|BlueprintCallable) // @ game+0x5a75ef0
	void Apply(struct FAnimNode_KawaiiPhysics& Node, int32_t ModifyBoneIndex, struct USkeletalMeshComponent* SkelComp, struct FTransform& BoneTransform); // Function KawaiiPhysics.KawaiiPhysics_CustomExternalForce.Apply // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x77c7c50
};

// Class KawaiiPhysics.KawaiiPhysicsLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKawaiiPhysicsLibrary : UBlueprintFunctionLibrary {

	struct FKawaiiPhysicsReference SetWindScale(struct FKawaiiPhysicsReference& KawaiiPhysics, float WindScale); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetWindScale // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d0210
	struct FKawaiiPhysicsReference SetTeleportRotationThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportRotationThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d0b30
	struct FKawaiiPhysicsReference SetTeleportDistanceThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetTeleportDistanceThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d0e30
	struct FKawaiiPhysicsReference SetRootBoneName(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FName& RootBoneName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetRootBoneName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d1b40
	struct FKawaiiPhysicsReference SetPhysicsSettings(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FKawaiiPhysicsSettings& PhysicsSettings); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetPhysicsSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d1450
	struct FKawaiiPhysicsReference SetNeedWarmUp(struct FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetNeedWarmUp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cfc10
	struct FKawaiiPhysicsReference SetLimitsDataAsset(struct FKawaiiPhysicsReference& KawaiiPhysics, struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetLimitsDataAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cf910
	struct FKawaiiPhysicsReference SetGravity(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FVector Gravity); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetGravity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77d0820
	void SetExternalForceWildcardProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, int32_t& Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceWildcardProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77e0000
	struct FKawaiiPhysicsReference SetExternalForceVectorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, struct FVector Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceVectorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77cd050
	struct FKawaiiPhysicsReference SetExternalForceTransformProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, struct FTransform Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceTransformProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77cc1a0
	struct FKawaiiPhysicsReference SetExternalForceRotatorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, struct FRotator Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceRotatorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77cc940
	struct FKawaiiPhysicsReference SetExternalForceIntProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, int32_t Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceIntProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cde40
	struct FKawaiiPhysicsReference SetExternalForceFloatProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, float Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceFloatProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cd750
	struct FKawaiiPhysicsReference SetExternalForceBoolProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, bool Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExternalForceBoolProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77ce530
	struct FKawaiiPhysicsReference SetExcludeBoneNames(struct FKawaiiPhysicsReference& KawaiiPhysics, struct TArray<struct FName>& ExcludeBoneNames); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetExcludeBoneNames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d17e0
	struct FKawaiiPhysicsReference SetEnableWind(struct FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetEnableWind // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d0510
	struct FKawaiiPhysicsReference SetDummyBoneLength(struct FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetDummyBoneLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d1130
	struct FKawaiiPhysicsReference SetAllowWorldCollision(struct FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision); // Function KawaiiPhysics.KawaiiPhysicsLibrary.SetAllowWorldCollision // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cff10
	struct FKawaiiPhysicsReference ResetDynamics(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.ResetDynamics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d1d30
	bool RemoveExternalForcesFromComponent(struct USkeletalMeshComponent* MeshComp, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch); // Function KawaiiPhysics.KawaiiPhysicsLibrary.RemoveExternalForcesFromComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77ce8f0
	float GetWindScale(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetWindScale // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d00e0
	float GetTeleportRotationThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportRotationThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d0a00
	float GetTeleportDistanceThreshold(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetTeleportDistanceThreshold // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d0d00
	struct FName GetRootBoneName(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetRootBoneName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d1a00
	struct FKawaiiPhysicsSettings GetPhysicsSettings(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetPhysicsSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d1300
	bool GetNeedWarmUp(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetNeedWarmUp // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77cfae0
	struct UKawaiiPhysicsLimitsDataAsset* GetLimitsDataAsset(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetLimitsDataAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77cf7e0
	struct FVector GetGravity(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetGravity // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x77d06e0
	void GetExternalForceWildcardProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName, int32_t& Value); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceWildcardProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77e0430
	struct FVector GetExternalForceVectorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceVectorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77ccd10
	struct FTransform GetExternalForceTransformProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceTransformProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77cbdc0
	struct FRotator GetExternalForceRotatorProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceRotatorProperty // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77cc600
	int32_t GetExternalForceIntProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceIntProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cdb10
	float GetExternalForceFloatProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceFloatProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cd420
	bool GetExternalForceBoolProperty(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, int32_t ExternalForceIndex, struct FName PropertyName); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExternalForceBoolProperty // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77ce200
	struct TArray<struct FName> GetExcludeBoneNames(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetExcludeBoneNames // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d1650
	bool GetEnableWind(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetEnableWind // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d03e0
	float GetDummyBoneLength(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetDummyBoneLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d1000
	bool GetAllowWorldCollision(struct FKawaiiPhysicsReference& KawaiiPhysics); // Function KawaiiPhysics.KawaiiPhysicsLibrary.GetAllowWorldCollision // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77cfde0
	void ConvertToKawaiiPhysicsPure(struct FAnimNodeReference& Node, struct FKawaiiPhysicsReference& KawaiiPhysics, bool& Result); // Function KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysicsPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x77d1e60
	struct FKawaiiPhysicsReference ConvertToKawaiiPhysics(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function KawaiiPhysics.KawaiiPhysicsLibrary.ConvertToKawaiiPhysics // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77d20e0
	struct FKawaiiPhysicsReference AddExternalForceWithExecResult(enum class EKawaiiPhysicsAccessExternalForceResult& ExecResult, struct FKawaiiPhysicsReference& KawaiiPhysics, struct FInstancedStruct& ExternalForce, struct UObject* Owner); // Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForceWithExecResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cf470
	bool AddExternalForcesToComponent(struct USkeletalMeshComponent* MeshComp, struct TArray<struct FInstancedStruct>& ExternalForces, struct UObject* Owner, struct FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot); // Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForcesToComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cec50
	bool AddExternalForce(struct FKawaiiPhysicsReference& KawaiiPhysics, struct FInstancedStruct& ExternalForce, struct UObject* Owner, bool bIsOneShot); // Function KawaiiPhysics.KawaiiPhysicsLibrary.AddExternalForce // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x77cf120
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

