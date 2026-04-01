// Class InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangeAnimationTrackSetFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomFrameRate(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.SetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ab5ac0
	bool RemoveCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.RemoveCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68210
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetCustomFrameRate(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ab5910
	void GetCustomAnimationTrackUids(struct TArray<struct FString>& OutAnimationTrackUids); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68670
	int32_t GetCustomAnimationTrackUidCount(); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a687a0
	void GetCustomAnimationTrackUid(int32_t Index, struct FString& OutAnimationTrackUid); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68490
	bool AddCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.AddCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68350
};

// Class InterchangeFactoryNodes.InterchangeActorFactoryNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangeActorFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae1b90
	bool SetCustomGlobalTransform(struct FTransform& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7ae20c0
	bool SetCustomActorClassName(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae1e40
	bool GetCustomMobility(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae1d40
	bool GetCustomGlobalTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae22d0
	bool GetCustomActorClassName(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae1f80
};

// Class InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
// Size: 0x1b8 (Inherited: 0x178)
struct UInterchangePhysicalCameraFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x40]; // 0x178(0x40)

	bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abbe80
	bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abbb20
	bool SetCustomFocusMethod(enum class ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abb7c0
	bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abc1e0
	bool GetCustomSensorWidth(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abc030
	bool GetCustomSensorHeight(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abbcd0
	bool GetCustomFocusMethod(enum class ECameraFocusMethod& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abb970
	bool GetCustomFocalLength(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abc390
};

// Class InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
// Size: 0x1d8 (Inherited: 0x178)
struct UInterchangeStandardCameraFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x60]; // 0x178(0x60)

	bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abd900
	bool SetCustomProjectionMode(enum class ECameraProjectionMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abdc60
	bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abd5a0
	bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abcb80
	bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abd240
	bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7abcee0
	bool GetCustomWidth(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abdab0
	bool GetCustomProjectionMode(enum class ECameraProjectionMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abde10
	bool GetCustomNearClipPlane(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abd750
	bool GetCustomFieldOfView(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abcd30
	bool GetCustomFarClipPlane(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abd3f0
	bool GetCustomAspectRatio(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abd090
};

// Class InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
// Size: 0x1b8 (Inherited: 0x178)
struct UInterchangeBaseLightFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x40]; // 0x178(0x40)

	bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7abec40
	bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7abefa0
	bool SetCustomLightColor(struct FColor& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7abf640
	bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x7abf2f0
	bool GetCustomUseTemperature(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abedf0
	bool GetCustomTemperature(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abf140
	bool GetCustomLightColor(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abf7e0
	bool GetCustomIntensity(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7abf490
};

// Class InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
// Size: 0x1b8 (Inherited: 0x1b8)
struct UInterchangeDirectionalLightFactoryNode : UInterchangeBaseLightFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeLightFactoryNode
// Size: 0x1e8 (Inherited: 0x1b8)
struct UInterchangeLightFactoryNode : UInterchangeBaseLightFactoryNode {
	char pad_1B8[0x30]; // 0x1b8(0x30)

	bool SetCustomIntensityUnits(enum class ELightUnits AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac0640
	bool SetCustomIESTexture(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac0070
	bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac02f0
	bool GetCustomIntensityUnits(enum class ELightUnits& AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac07d0
	bool GetCustomIESTexture(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac01b0
	bool GetCustomAttenuationRadius(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac0490
};

// Class InterchangeFactoryNodes.InterchangeRectLightFactoryNode
// Size: 0x208 (Inherited: 0x1e8)
struct UInterchangeRectLightFactoryNode : UInterchangeLightFactoryNode {
	char pad_1E8[0x20]; // 0x1e8(0x20)

	bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac1100
	bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac0db0
	bool GetCustomSourceWidth(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac12a0
	bool GetCustomSourceHeight(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac0f50
};

// Class InterchangeFactoryNodes.InterchangePointLightFactoryNode
// Size: 0x208 (Inherited: 0x1e8)
struct UInterchangePointLightFactoryNode : UInterchangeLightFactoryNode {
	char pad_1E8[0x20]; // 0x1e8(0x20)

	bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac19c0
	bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac1670
	bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac1b70
	bool GetCustomLightFalloffExponent(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac1810
};

// Class InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
// Size: 0x228 (Inherited: 0x208)
struct UInterchangeSpotLightFactoryNode : UInterchangePointLightFactoryNode {
	char pad_208[0x20]; // 0x208(0x20)

	bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac2070
	bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac23c0
	bool GetCustomOuterConeAngle(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac2210
	bool GetCustomInnerConeAngle(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac2560
};

// Class InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangePhysicsAssetFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomSkeletalMeshUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac30f0
	void InitializePhysicsAssetNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac3370
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetCustomSkeletalMeshUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac3230
};

// Class InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
// Size: 0x168 (Inherited: 0x148)
struct UInterchangeSceneVariantSetsFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x20]; // 0x148(0x20)

	bool RemoveCustomVariantSetUid(struct FString VariantUid); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac39e0
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	void GetCustomVariantSetUids(struct TArray<struct FString>& OutVariantUids); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac3e40
	int32_t GetCustomVariantSetUidCount(); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac3f70
	void GetCustomVariantSetUid(int32_t Index, struct FString& OutVariantUid); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac3c60
	bool AddCustomVariantSetUid(struct FString VariantUid); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac3b20
};

// Class InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
// Size: 0x198 (Inherited: 0x148)
struct UInterchangeSkeletonFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x50]; // 0x148(0x50)

	bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ac72d0
	bool SetCustomSkeletalMeshFactoryNodeUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac7050
	bool SetCustomRootJointUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac7580
	void InitializeSkeletonNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac7800
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac73d0
	bool GetCustomSkeletalMeshFactoryNodeUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac7190
	bool GetCustomRootJointUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac76c0
};

// Class InterchangeFactoryNodes.InterchangeTextureFactoryNode
// Size: 0x3d8 (Inherited: 0x148)
struct UInterchangeTextureFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x290]; // 0x148(0x290)

	bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad4410
	bool SetCustomTranslatedTextureNodeUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ad9e80
	bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad4ad0
	bool SetCustomPreferCompressedSourceData(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad25c0
	bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad5840
	bool SetCustomPaddingColor(struct FColor& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7ad54f0
	bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad4e30
	bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad3d50
	bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad6bf0
	bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad6f50
	bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad3690
	bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad39f0
	bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad5190
	bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad3080
	bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad33e0
	bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad72b0
	bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad6530
	bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad6890
	bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad7610
	bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad2d20
	bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad29c0
	bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad7cc0
	bool SetCustomChromaKeyColor(struct FColor& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7ad7970
	bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad4770
	bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad40b0
	bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad5ba0
	bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad5e50
	bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad8020
	bool SetCustomAlphaCoverageThresholds(struct FVector4& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7ad61b0
	bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad27c0
	bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad9460
	bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad9100
	bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad8da0
	bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad86e0
	bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad8380
	bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad8a40
	bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad97c0
	bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad9b20
	void InitializeTextureNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetName); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode // (Final|Native|Public|BlueprintCallable) // @ game+0x7ada100
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetCustomVirtualTextureStreaming(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad45c0
	bool GetCustomTranslatedTextureNodeUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad9fc0
	bool GetCustomSRGB(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad4c80
	bool GetCustomPreferCompressedSourceData(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad26c0
	bool GetCustomPowerOfTwoMode(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad59f0
	bool GetCustomPaddingColor(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad5690
	bool GetCustomMipLoadOptions(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad4fe0
	bool GetCustomMipGenSettings(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad3f00
	bool GetCustomMaxTextureSize(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad6da0
	bool GetCustomLossyCompressionAmount(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad7100
	bool GetCustomLODGroup(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad3840
	bool GetCustomLODBias(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad3ba0
	bool GetCustomFilter(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad5340
	bool GetCustomDownscaleOptions(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad3230
	bool GetCustomDownscale(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad3590
	bool GetCustomDeferCompression(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad7460
	bool GetCustomCompressionSettings(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad66e0
	bool GetCustomCompressionQuality(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad6a40
	bool GetCustomCompressionNoAlpha(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad77c0
	bool GetCustomCompositeTextureMode(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad2ed0
	bool GetCustomCompositePower(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad2b70
	bool GetCustomChromaKeyThreshold(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad7e70
	bool GetCustomChromaKeyColor(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad7b10
	bool GetCustombUseLegacyGamma(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad4920
	bool GetCustombPreserveBorder(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad4260
	bool GetCustombFlipGreenChannel(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad5d50
	bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad6000
	bool GetCustombChromaKeyTexture(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad81d0
	bool GetCustomAlphaCoverageThresholds(struct FVector4& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad6370
	bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad28c0
	bool GetCustomAdjustVibrance(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad9610
	bool GetCustomAdjustSaturation(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad92b0
	bool GetCustomAdjustRGBCurve(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad8f50
	bool GetCustomAdjustMinAlpha(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad8890
	bool GetCustomAdjustMaxAlpha(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad8530
	bool GetCustomAdjustHue(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad8bf0
	bool GetCustomAdjustBrightnessCurve(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad9970
	bool GetCustomAdjustBrightness(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad9cd0
};

// Class InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
// Size: 0x408 (Inherited: 0x3d8)
struct UInterchangeTexture2DArrayFactoryNode : UInterchangeTextureFactoryNode {
	char pad_3D8[0x30]; // 0x3d8(0x30)

	bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ // (Final|Native|Public|BlueprintCallable) // @ game+0x7acec40
	bool GetCustomAddressZ(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7acedd0
	bool GetCustomAddressY(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7acef80
	bool GetCustomAddressX(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7acf130
};

// Class InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
// Size: 0x470 (Inherited: 0x3d8)
struct UInterchangeTexture2DFactoryNode : UInterchangeTextureFactoryNode {
	char pad_3D8[0x98]; // 0x3d8(0x98)

	void SetSourceBlocks(struct TMap<int32_t, struct FString>& InSourceBlocks); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ad1340
	void SetSourceBlockByCoordinates(int32_t X, int32_t Y, struct FString InSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates // (Final|Native|Public|BlueprintCallable) // @ game+0x7ad0c70
	void SetSourceBlock(int32_t BlockIndex, struct FString InSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock // (Final|Native|Public|BlueprintCallable) // @ game+0x7ad0a90
	bool SetCustomAddressY(enum class TextureAddress AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY // (Final|Native|Public|BlueprintCallable) // @ game+0x7ad1640
	bool SetCustomAddressX(enum class TextureAddress AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX // (Final|Native|Public|BlueprintCallable) // @ game+0x7ad1980
	struct TMap<int32_t, struct FString> GetSourceBlocks(); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad1540
	bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, struct FString& OutSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad10c0
	bool GetSourceBlock(int32_t BlockIndex, struct FString& OutSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad0ee0
	bool GetCustomAddressY(enum class TextureAddress& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad17d0
	bool GetCustomAddressX(enum class TextureAddress& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ad1b10
};

// Class InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
// Size: 0x3d8 (Inherited: 0x3d8)
struct UInterchangeTextureCubeArrayFactoryNode : UInterchangeTextureFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
// Size: 0x3d8 (Inherited: 0x3d8)
struct UInterchangeTextureCubeFactoryNode : UInterchangeTextureFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
// Size: 0x490 (Inherited: 0x470)
struct UInterchangeTextureLightProfileFactoryNode : UInterchangeTexture2DFactoryNode {
	char pad_470[0x20]; // 0x470(0x20)

	bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae0cc0
	bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae1010
	bool GetCustomTextureMultiplier(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae0e60
	bool GetCustomBrightness(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae11b0
};

// Class InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
// Size: 0x3d8 (Inherited: 0x3d8)
struct UInterchangeVolumeTextureFactoryNode : UInterchangeTextureFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
// Size: 0x488 (Inherited: 0x148)
struct UInterchangeAnimSequenceFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x340]; // 0x148(0x340)

	bool SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7ae4100
	bool SetCustomSkeletonFactoryNodeUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae7320
	bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae6060
	bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae5530
	bool SetCustomImportBoneTracksSampleRate(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae6f20
	bool SetCustomImportBoneTracksRangeStop(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae6b20
	bool SetCustomImportBoneTracksRangeStart(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae6d20
	bool SetCustomImportBoneTracks(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae7120
	bool SetCustomImportAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae6870
	bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae65c0
	bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae4430
	bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae5db0
	bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae46e0
	bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae6310
	void SetAnimationPayloadKeysForSceneNodeUids(struct TMap<struct FString, struct FString>& SceneNodeAnimationPayloadKeyUids, struct TMap<struct FString, char>& SceneNodeAnimationPayloadKeyTypes); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae3d10
	void SetAnimationPayloadKeysForMorphTargetNodeUids(struct TMap<struct FString, struct FString>& MorphTargetAnimationPayloadKeyUids, struct TMap<struct FString, char>& MorphTargetAnimationPayloadKeyTypes); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae3920
	bool SetAnimatedMaterialCurveSuffixe(struct FString MaterialCurveSuffixe); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae50a0
	bool SetAnimatedAttributeStepCurveName(struct FString AttributeStepCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae4ad0
	bool SetAnimatedAttributeCurveName(struct FString AttributeCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae5920
	bool RemoveAnimatedMaterialCurveSuffixe(struct FString MaterialCurveSuffixe); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae4f60
	bool RemoveAnimatedAttributeStepCurveName(struct FString AttributeStepCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae4990
	bool RemoveAnimatedAttributeCurveName(struct FString AttributeCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae57e0
	void InitializeAnimSequenceNode(struct FString UniqueId, struct FString DisplayLabel); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae7650
	void GetSceneNodeAnimationPayloadKeys(struct TMap<struct FString, struct FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae3f80
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	void GetMorphTargetNodeAnimationPayloadKeys(struct TMap<struct FString, struct FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae3b90
	bool GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4240
	bool GetCustomSkeletonFactoryNodeUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae7460
	bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae6160
	bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae5630
	bool GetCustomImportBoneTracksSampleRate(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae7020
	bool GetCustomImportBoneTracksRangeStop(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae6c20
	bool GetCustomImportBoneTracksRangeStart(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae6e20
	bool GetCustomImportBoneTracks(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae7220
	bool GetCustomImportAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae6970
	bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae66c0
	bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4530
	bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae5eb0
	bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae47e0
	bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae6410
	int32_t GetAnimatedMaterialCurveSuffixesCount(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae54f0
	void GetAnimatedMaterialCurveSuffixes(struct TArray<struct FString>& OutMaterialCurveSuffixes); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae53c0
	void GetAnimatedMaterialCurveSuffixe(int32_t Index, struct FString& OutMaterialCurveSuffixe); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae51e0
	int32_t GetAnimatedAttributeStepCurveNamesCount(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4f20
	void GetAnimatedAttributeStepCurveNames(struct TArray<struct FString>& OutAttributeStepCurveNames); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4df0
	void GetAnimatedAttributeStepCurveName(int32_t Index, struct FString& OutAttributeStepCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4c10
	int32_t GetAnimatedAttributeCurveNamesCount(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae5d70
	void GetAnimatedAttributeCurveNames(struct TArray<struct FString>& OutAttributeCurveNames); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae5c40
	void GetAnimatedAttributeCurveName(int32_t Index, struct FString& OutAttributeCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae5a60
};

// Class InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
// Size: 0x168 (Inherited: 0x148)
struct UInterchangeCommonPipelineDataFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x20]; // 0x148(0x20)

	bool SetCustomGlobalOffsetTransform(struct UInterchangeBaseNodeContainer* NodeContainer, struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7aec9a0
	bool SetBakeMeshes(struct UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7aec710
	bool GetCustomGlobalOffsetTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aecbb0
	bool GetBakeMeshes(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aec8a0
};

// Class InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
// Size: 0x148 (Inherited: 0x148)
struct UInterchangeBaseMaterialFactoryNode : UInterchangeFactoryBaseNode {
};

// Class InterchangeFactoryNodes.InterchangeMaterialFactoryNode
// Size: 0x1b8 (Inherited: 0x148)
struct UInterchangeMaterialFactoryNode : UInterchangeBaseMaterialFactoryNode {
	char pad_148[0x70]; // 0x148(0x70)

	bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af4ce0
	bool SetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af52f0
	bool SetCustomShadingModel(enum class EMaterialShadingModel& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af55a0
	bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af4420
	bool SetCustomRefractionMethod(enum class ERefractionMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af46d0
	bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af4980
	bool SetCustomBlendMode(enum class EBlendMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af5040
	bool GetTransmissionColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6eb0
	bool GetTangentConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afb130
	bool GetSubsurfaceConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afa8e0
	bool GetSpecularConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afdac0
	bool GetRoughnessConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afd270
	bool GetRefractionConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af8ff0
	bool GetOpacityConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afa090
	bool GetOcclusionConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af9840
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetNormalConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afb980
	bool GetMetallicConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afe310
	bool GetFuzzColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6660
	bool GetEmissiveColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afc1d0
	bool GetCustomTwoSided(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4e90
	bool GetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af54a0
	bool GetCustomShadingModel(enum class EMaterialShadingModel& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af5750
	bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4520
	bool GetCustomRefractionMethod(enum class ERefractionMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4880
	bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4b30
	bool GetCustomBlendMode(enum class EBlendMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af51f0
	bool GetClothConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af5e10
	bool GetClearCoatRoughnessConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7f50
	bool GetClearCoatNormalConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7700
	bool GetClearCoatConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af87a0
	bool GetBaseColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afeb60
	bool GetAnisotropyConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afca20
	bool ConnectToTransmissionColor(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6ce0
	bool ConnectToTangent(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x7afaf60
	bool ConnectToSubsurface(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface // (Final|Native|Public|BlueprintCallable) // @ game+0x7afa710
	bool ConnectToSpecular(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular // (Final|Native|Public|BlueprintCallable) // @ game+0x7afd8f0
	bool ConnectToRoughness(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x7afd0a0
	bool ConnectToRefraction(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction // (Final|Native|Public|BlueprintCallable) // @ game+0x7af8e20
	bool ConnectToOpacity(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x7af9ec0
	bool ConnectToOcclusion(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x7af9670
	bool ConnectToNormal(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x7afb7b0
	bool ConnectToMetallic(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic // (Final|Native|Public|BlueprintCallable) // @ game+0x7afe140
	bool ConnectToFuzzColor(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6490
	bool ConnectToEmissiveColor(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7afc000
	bool ConnectToCloth(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth // (Final|Native|Public|BlueprintCallable) // @ game+0x7af5c40
	bool ConnectToClearCoatRoughness(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x7af7d80
	bool ConnectToClearCoatNormal(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x7af7530
	bool ConnectToClearCoat(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat // (Final|Native|Public|BlueprintCallable) // @ game+0x7af85d0
	bool ConnectToBaseColor(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7afe990
	bool ConnectToAnisotropy(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy // (Final|Native|Public|BlueprintCallable) // @ game+0x7afc850
	bool ConnectOutputToTransmissionColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7af68f0
	bool ConnectOutputToTangent(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x7afab70
	bool ConnectOutputToSubsurface(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface // (Final|Native|Public|BlueprintCallable) // @ game+0x7afa320
	bool ConnectOutputToSpecular(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular // (Final|Native|Public|BlueprintCallable) // @ game+0x7afd500
	bool ConnectOutputToRoughness(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x7afccb0
	bool ConnectOutputToRefraction(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction // (Final|Native|Public|BlueprintCallable) // @ game+0x7af8a30
	bool ConnectOutputToOpacity(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x7af9ad0
	bool ConnectOutputToOcclusion(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x7af9280
	bool ConnectOutputToNormal(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x7afb3c0
	bool ConnectOutputToMetallic(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic // (Final|Native|Public|BlueprintCallable) // @ game+0x7afdd50
	bool ConnectOutputToFuzzColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7af60a0
	bool ConnectOutputToEmissiveColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7afbc10
	bool ConnectOutputToCloth(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth // (Final|Native|Public|BlueprintCallable) // @ game+0x7af5850
	bool ConnectOutputToClearCoatRoughness(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x7af7990
	bool ConnectOutputToClearCoatNormal(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x7af7140
	bool ConnectOutputToClearCoat(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat // (Final|Native|Public|BlueprintCallable) // @ game+0x7af81e0
	bool ConnectOutputToBaseColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor // (Final|Native|Public|BlueprintCallable) // @ game+0x7afe5a0
	bool ConnectOutputToAnisotropy(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy // (Final|Native|Public|BlueprintCallable) // @ game+0x7afc460
};

// Class InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
// Size: 0x158 (Inherited: 0x148)
struct UInterchangeMaterialExpressionFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x10]; // 0x148(0x10)

	bool SetCustomExpressionClassName(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName // (Final|Native|Public|BlueprintCallable) // @ game+0x7b001a0
	bool GetCustomExpressionClassName(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b002e0
};

// Class InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
// Size: 0x168 (Inherited: 0x148)
struct UInterchangeMaterialInstanceFactoryNode : UInterchangeBaseMaterialFactoryNode {
	char pad_148[0x20]; // 0x148(0x20)

	bool SetCustomParent(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent // (Final|Native|Public|BlueprintCallable) // @ game+0x7b00700
	bool SetCustomInstanceClassName(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName // (Final|Native|Public|BlueprintCallable) // @ game+0x7b00980
	bool GetCustomParent(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00840
	bool GetCustomInstanceClassName(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00ac0
};

// Class InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
// Size: 0x168 (Inherited: 0x158)
struct UInterchangeMaterialFunctionCallExpressionFactoryNode : UInterchangeMaterialExpressionFactoryNode {
	char pad_158[0x10]; // 0x158(0x10)

	bool SetCustomMaterialFunctionDependency(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency // (Final|Native|Public|BlueprintCallable) // @ game+0x7b00e30
	bool GetCustomMaterialFunctionDependency(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00f70
};

// Class InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
// Size: 0x148 (Inherited: 0x148)
struct UInterchangeMaterialFunctionFactoryNode : UInterchangeBaseMaterialFactoryNode {

	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetInputConnection(struct FString InputName, struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b012f0
};

// Class InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
// Size: 0x210 (Inherited: 0x178)
struct UInterchangeMeshActorFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x98]; // 0x178(0x98)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a67be0
	bool SetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b04aa0
	bool SetCustomAnimationAssetUidToPlay(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x7b04ec0
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a67aa0
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a67e30
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68090
	bool GetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b04c10
	bool GetCustomAnimationAssetUidToPlay(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b04d80
};

// Class InterchangeFactoryNodes.InterchangeMeshFactoryNode
// Size: 0x2b8 (Inherited: 0x148)
struct UInterchangeMeshFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x170]; // 0x148(0x170)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b07be0
	bool SetCustomVertexColorReplace(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b08610
	bool SetCustomVertexColorOverride(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b08210
	bool SetCustomVertexColorIgnore(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b08410
	bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b06db0
	bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b066f0
	bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b06390
	bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b06030
	bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b05cd0
	bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b07110
	bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b07470
	bool SetCustomLODGroup(struct FName& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b077d0
	bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b06a50
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b07a80
	bool RemoveLodDataUniqueId(struct FString LodDataUniqueId); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId // (Final|Native|Public|BlueprintCallable) // @ game+0x7b08810
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b07e30
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08090
	void GetLodDataUniqueIds(struct TArray<struct FString>& OutLodDataUniqueIds); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08a90
	int32_t GetLodDataCount(); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08bc0
	bool GetCustomVertexColorReplace(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08710
	bool GetCustomVertexColorOverride(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08310
	bool GetCustomVertexColorIgnore(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08510
	bool GetCustomUseMikkTSpace(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b06f60
	bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b068a0
	bool GetCustomUseFullPrecisionUVs(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b06540
	bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b061e0
	bool GetCustomRemoveDegenerates(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b05e80
	bool GetCustomRecomputeTangents(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b072c0
	bool GetCustomRecomputeNormals(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b07620
	bool GetCustomLODGroup(struct FName& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b07980
	bool GetCustomComputeWeightedNormals(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b06c00
	bool AddLodDataUniqueId(struct FString LodDataUniqueId); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId // (Final|Native|Public|BlueprintCallable) // @ game+0x7b08950
};

// Class InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
// Size: 0x148 (Inherited: 0x148)
struct UInterchangeSceneImportAssetFactoryNode : UInterchangeFactoryBaseNode {
};

// Class InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
// Size: 0x380 (Inherited: 0x2b8)
struct UInterchangeSkeletalMeshFactoryNode : UInterchangeMeshFactoryNode {
	char pad_2B8[0xc8]; // 0x2b8(0xc8)

	bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0fca0
	bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0f280
	bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0f5e0
	bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0f940
	bool SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b10b50
	bool SetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b102c0
	bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0ef20
	bool SetCustomImportMorphTarget(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b108a0
	bool SetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b10000
	bool SetCustomCreatePhysicsAsset(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b105f0
	bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0ebc0
	void InitializeSkeletalMeshNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode // (Final|Native|Public|BlueprintCallable) // @ game+0x7b10e80
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0fe50
	bool GetCustomThresholdUV(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0f430
	bool GetCustomThresholdTangentNormal(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0f790
	bool GetCustomThresholdPosition(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0faf0
	bool GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b10c90
	bool GetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b10400
	bool GetCustomMorphThresholdPosition(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0f0d0
	bool GetCustomImportMorphTarget(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b109a0
	bool GetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b10100
	bool GetCustomCreatePhysicsAsset(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b106f0
	bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0ed70
};

// Class InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangeSkeletalMeshLodDataNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomSkeletonUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b15210
	bool RemoveMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68210
	bool RemoveAllMeshes(); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x7b151d0
	int32_t GetMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a687a0
	void GetMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68670
	bool GetCustomSkeletonUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b15350
	bool AddMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68350
};

// Class InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
// Size: 0x3a0 (Inherited: 0x2b8)
struct UInterchangeStaticMeshFactoryNode : UInterchangeMeshFactoryNode {
	char pad_2B8[0xe8]; // 0x2b8(0xe8)

	bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b17e20
	bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b17760
	bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b17ac0
	bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b165f0
	bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b184e0
	bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b18180
	bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b17400
	bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b16d40
	bool SetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b16950
	bool SetCustomBuildScale3D(struct FVector& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b170a0
	bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b18840
	bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b190d0
	bool RemoveSocketUd(struct FString SocketUid); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd // (Final|Native|Public|BlueprintCallable) // @ game+0x7b18ba0
	void InitializeStaticMeshNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode // (Final|Native|Public|BlueprintCallable) // @ game+0x7b19400
	void GetSocketUids(struct TArray<struct FString>& OutSocketUids); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b18f60
	int32_t GetSocketUidCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b19090
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5ad7c30
	bool GetCustomSupportFaceRemap(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b17fd0
	bool GetCustomSrcLightmapIndex(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b17910
	bool GetCustomMinLightmapResolution(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b17c70
	bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b167a0
	bool GetCustomGenerateLightmapUVs(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b18690
	bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b18330
	bool GetCustomDstLightmapIndex(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b175b0
	bool GetCustomDistanceFieldResolutionScale(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b16ef0
	bool GetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b16b50
	bool GetCustomBuildScale3D(struct FVector& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b17250
	bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b189f0
	bool GetCustomBuildNanite(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b19250
	bool AddSocketUids(struct TArray<struct FString>& InSocketUids); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b18ce0
	bool AddSocketUid(struct FString SocketUid); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b18e20
};

// Class InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
// Size: 0x208 (Inherited: 0x148)
struct UInterchangeStaticMeshLodDataNode : UInterchangeFactoryBaseNode {
	char pad_148[0xc0]; // 0x148(0xc0)

	bool SetOneConvexHullPerUCX(bool AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e2b0
	bool SetImportCollision(bool AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e0b0
	bool RemoveSphereCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e920
	bool RemoveMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac39e0
	bool RemoveConvexCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e4f0
	bool RemoveCapsuleCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1ed50
	bool RemoveBoxCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1f180
	bool RemoveAllSphereCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e8e0
	bool RemoveAllMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1f570
	bool RemoveAllConvexCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e4b0
	bool RemoveAllCapsuleCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1ed10
	bool RemoveAllBoxCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1f140
	int32_t GetSphereCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1ecd0
	void GetSphereCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1eba0
	bool GetOneConvexHullPerUCX(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1e3b0
	int32_t GetMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac3f70
	void GetMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ac3e40
	bool GetImportCollision(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1e1b0
	int32_t GetConvexCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1e8a0
	void GetConvexCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1e770
	int32_t GetCapsuleCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1f100
	void GetCapsuleCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1efd0
	int32_t GetBoxCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1f530
	void GetBoxCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b1f400
	bool AddSphereCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1ea60
	bool AddMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ac3b20
	bool AddConvexCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1e630
	bool AddCapsuleCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1ee90
	bool AddBoxCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b1f2c0
};

