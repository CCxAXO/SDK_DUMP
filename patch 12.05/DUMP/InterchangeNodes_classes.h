// Class InterchangeNodes.InterchangeAnimationTrackSetNode
// Size: 0x98 (Inherited: 0x68)
struct UInterchangeAnimationTrackSetNode : UInterchangeBaseNode {
	char pad_68[0x30]; // 0x68(0x30)

	bool SetCustomFrameRate(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.SetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a4ea80
	bool RemoveCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a4eb80
	bool GetCustomFrameRate(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4e980
	void GetCustomAnimationTrackUids(struct TArray<struct FString>& OutAnimationTrackUids); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4efe0
	int32_t GetCustomAnimationTrackUidCount(); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4f110
	void GetCustomAnimationTrackUid(int32_t Index, struct FString& OutAnimationTrackUid); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4ee00
	bool AddCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a4ecc0
};

// Class InterchangeNodes.InterchangeAnimationTrackBaseNode
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeAnimationTrackBaseNode : UInterchangeBaseNode {
	char pad_68[0x10]; // 0x68(0x10)

	bool SetCustomCompletionMode(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackBaseNode.SetCustomCompletionMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a4f570
	bool GetCustomCompletionMode(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4f3c0
};

// Class InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
// Size: 0xb8 (Inherited: 0x78)
struct UInterchangeAnimationTrackSetInstanceNode : UInterchangeAnimationTrackBaseNode {
	char pad_78[0x40]; // 0x78(0x40)

	bool SetCustomTrackSetDependencyUid(struct FString AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTrackSetDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a4f9f0
	bool SetCustomTimeScale(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a50240
	bool SetCustomStartFrame(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a4fce0
	bool SetCustomDuration(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a4ff90
	bool GetCustomTrackSetDependencyUid(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4f8b0
	bool GetCustomTimeScale(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a50090
	bool GetCustomStartFrame(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4fb30
	bool GetCustomDuration(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a4fde0
};

// Class InterchangeNodes.InterchangeAnimationTrackNode
// Size: 0xc8 (Inherited: 0x78)
struct UInterchangeAnimationTrackNode : UInterchangeAnimationTrackBaseNode {
	char pad_78[0x50]; // 0x78(0x50)

	bool SetCustomTargetedProperty(int32_t& TargetedProperty); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomTargetedProperty // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a51110
	bool SetCustomFrameCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a50b30
	bool SetCustomAnimationPayloadKey(struct FString InUniqueId, enum class EInterchangeAnimationPayLoadType& InType); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a50d70
	bool SetCustomActorDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a51350
	bool GetCustomTargetedProperty(int32_t& TargetedProperty); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a50f60
	bool GetCustomFrameCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a50980
	bool GetCustomAnimationPayloadKey(struct FInterchangeAnimationPayLoadKey& AnimationPayLoadKey); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a50c30
	bool GetCustomActorDependencyUid(struct FString& DependencyUid); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a51210
};

// Class InterchangeNodes.InterchangeTransformAnimationTrackNode
// Size: 0xd8 (Inherited: 0xc8)
struct UInterchangeTransformAnimationTrackNode : UInterchangeAnimationTrackNode {
	char pad_C8[0x10]; // 0xc8(0x10)

	bool SetCustomUsedChannels(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeTransformAnimationTrackNode.SetCustomUsedChannels // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a51d20
	bool GetCustomUsedChannels(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a51b70
};

// Class InterchangeNodes.InterchangeSkeletalAnimationTrackNode
// Size: 0x298 (Inherited: 0x78)
struct UInterchangeSkeletalAnimationTrackNode : UInterchangeAnimationTrackBaseNode {
	char pad_78[0x220]; // 0x78(0x220)

	bool SetCustomSkeletonNodeUid(struct FString AttributeValue); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomSkeletonNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a530b0
	bool SetCustomAnimationStopTime(double& StopTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a52bb0
	bool SetCustomAnimationStartTime(double& StartTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a52db0
	bool SetCustomAnimationSampleRate(double& SampleRate); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a52fb0
	bool SetAnimationPayloadKeyForSceneNodeUid(struct FString SceneNodeUid, struct FString InUniqueId, enum class EInterchangeAnimationPayLoadType& InType); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a52530
	bool SetAnimationPayloadKeyForMorphTargetNodeUid(struct FString MorphTargetNodeUid, struct FString InUniqueId, enum class EInterchangeAnimationPayLoadType& InType); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a51fb0
	void GetSceneNodeAnimationPayloadKeys(struct TMap<struct FString, struct FString>& OutSceneNodeAnimationPayloadKeyUids, struct TMap<struct FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a52840
	void GetMorphTargetNodeAnimationPayloadKeys(struct TMap<struct FString, struct FString>& OutMorphTargetNodeAnimationPayloadKeyUids, struct TMap<struct FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a522c0
	bool GetCustomSkeletonNodeUid(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a531f0
	bool GetCustomAnimationStopTime(double& StopTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a52ab0
	bool GetCustomAnimationStartTime(double& StartTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a52cb0
	bool GetCustomAnimationSampleRate(double& SampleRate); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a52eb0
};

// Class InterchangeNodes.InterchangePhysicalCameraNode
// Size: 0xa8 (Inherited: 0x68)
struct UInterchangePhysicalCameraNode : UInterchangeBaseNode {
	char pad_68[0x40]; // 0x68(0x40)

	bool SetCustomSensorWidth(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a55750
	bool SetCustomSensorHeight(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a55550
	bool SetCustomFocalLength(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a55950
	bool SetCustomEnableDepthOfField(bool& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a55350
	bool GetCustomSensorWidth(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a55850
	bool GetCustomSensorHeight(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a55650
	bool GetCustomFocalLength(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a55a50
	bool GetCustomEnableDepthOfField(bool& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a55450
};

// Class InterchangeNodes.InterchangeStandardCameraNode
// Size: 0xc8 (Inherited: 0x68)
struct UInterchangeStandardCameraNode : UInterchangeBaseNode {
	char pad_68[0x60]; // 0x68(0x60)

	bool SetCustomWidth(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a56b00
	bool SetCustomProjectionMode(enum class EInterchangeCameraProjectionType& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a56d00
	bool SetCustomNearClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a56900
	bool SetCustomFieldOfView(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a56300
	bool SetCustomFarClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a56700
	bool SetCustomAspectRatio(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a56500
	bool GetCustomWidth(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a56c00
	bool GetCustomProjectionMode(enum class EInterchangeCameraProjectionType& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a56e00
	bool GetCustomNearClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a56a00
	bool GetCustomFieldOfView(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a56400
	bool GetCustomFarClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a56800
	bool GetCustomAspectRatio(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a56600
};

// Class InterchangeNodes.InterchangeBaseLightNode
// Size: 0xa8 (Inherited: 0x68)
struct UInterchangeBaseLightNode : UInterchangeBaseNode {
	char pad_68[0x40]; // 0x68(0x40)

	bool SetCustomUseTemperature(bool AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomUseTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7a599f0
	bool SetCustomTemperature(float AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7a59bf0
	bool SetCustomLightColor(struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a59ff0
	bool SetCustomIntensity(float AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x7a59df0
	bool GetCustomUseTemperature(bool& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a59af0
	bool GetCustomTemperature(float& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a59cf0
	bool GetCustomLightColor(struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5a0f0
	bool GetCustomIntensity(float& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a59ef0
};

// Class InterchangeNodes.InterchangeLightNode
// Size: 0xd8 (Inherited: 0xa8)
struct UInterchangeLightNode : UInterchangeBaseLightNode {
	char pad_A8[0x30]; // 0xa8(0x30)

	bool SetCustomIntensityUnits(enum class EInterchangeLightUnits& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a5acd0
	bool SetCustomIESTexture(struct FString AttributeValue); // Function InterchangeNodes.InterchangeLightNode.SetCustomIESTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5a850
	bool SetCustomAttenuationRadius(float AttributeValue); // Function InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5aad0
	bool GetCustomIntensityUnits(enum class EInterchangeLightUnits& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5add0
	bool GetCustomIESTexture(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.GetCustomIESTexture // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5a990
	bool GetCustomAttenuationRadius(float& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5abd0
};

// Class InterchangeNodes.InterchangePointLightNode
// Size: 0xf8 (Inherited: 0xd8)
struct UInterchangePointLightNode : UInterchangeLightNode {
	char pad_D8[0x20]; // 0xd8(0x20)

	bool SetCustomUseInverseSquaredFalloff(bool AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.SetCustomUseInverseSquaredFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5b500
	bool SetCustomLightFalloffExponent(float AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5b300
	bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5b600
	bool GetCustomLightFalloffExponent(float& AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5b400
};

// Class InterchangeNodes.InterchangeSpotLightNode
// Size: 0x118 (Inherited: 0xf8)
struct UInterchangeSpotLightNode : UInterchangePointLightNode {
	char pad_F8[0x20]; // 0xf8(0x20)

	bool SetCustomOuterConeAngle(float AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.SetCustomOuterConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5ba50
	bool SetCustomInnerConeAngle(float AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5bc50
	bool GetCustomOuterConeAngle(float& AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5bb50
	bool GetCustomInnerConeAngle(float& AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5bd50
};

// Class InterchangeNodes.InterchangeRectLightNode
// Size: 0xf8 (Inherited: 0xd8)
struct UInterchangeRectLightNode : UInterchangeLightNode {
	char pad_D8[0x20]; // 0xd8(0x20)

	bool SetCustomSourceWidth(float AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5c270
	bool SetCustomSourceHeight(float AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5c070
	bool GetCustomSourceWidth(float& AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5c370
	bool GetCustomSourceHeight(float& AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5c170
};

// Class InterchangeNodes.InterchangeDirectionalLightNode
// Size: 0xa8 (Inherited: 0xa8)
struct UInterchangeDirectionalLightNode : UInterchangeBaseLightNode {
};

// Class InterchangeNodes.InterchangeTextureNode
// Size: 0x98 (Inherited: 0x68)
struct UInterchangeTextureNode : UInterchangeBaseNode {
	char pad_68[0x30]; // 0x68(0x30)

	void SetPayLoadKey(struct FString PayloadKey); // Function InterchangeNodes.InterchangeTextureNode.SetPayLoadKey // (Native|Public|BlueprintCallable) // @ game+0x7a5e7f0
	bool SetCustomSRGB(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.SetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a5e5f0
	bool SetCustomFilter(enum class EInterchangeTextureFilterMode& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.SetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a5e1f0
	bool SetCustombFlipGreenChannel(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a5e3f0
	bool GetCustomSRGB(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.GetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5e6f0
	bool GetCustomFilter(enum class EInterchangeTextureFilterMode& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.GetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5e2f0
	bool GetCustombFlipGreenChannel(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5e4f0
};

// Class InterchangeNodes.InterchangeTexture2DArrayNode
// Size: 0x98 (Inherited: 0x98)
struct UInterchangeTexture2DArrayNode : UInterchangeTextureNode {
};

// Class InterchangeNodes.InterchangeTextureCubeArrayNode
// Size: 0x98 (Inherited: 0x98)
struct UInterchangeTextureCubeArrayNode : UInterchangeTextureNode {
};

// Class InterchangeNodes.InterchangeTextureCubeNode
// Size: 0x98 (Inherited: 0x98)
struct UInterchangeTextureCubeNode : UInterchangeTextureNode {
};

// Class InterchangeNodes.InterchangeTextureLightProfileNode
// Size: 0x98 (Inherited: 0x98)
struct UInterchangeTextureLightProfileNode : UInterchangeTextureNode {
};

// Class InterchangeNodes.InterchangeVariantSetNode
// Size: 0xa8 (Inherited: 0x68)
struct UInterchangeVariantSetNode : UInterchangeBaseNode {
	char pad_68[0x40]; // 0x68(0x40)

	bool SetCustomVariantsPayloadKey(struct FString PayloadKey); // Function InterchangeNodes.InterchangeVariantSetNode.SetCustomVariantsPayloadKey // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5f5a0
	bool SetCustomDisplayText(struct FString AttributeValue); // Function InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5f8d0
	bool RemoveCustomDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5efd0
	bool GetCustomVariantsPayloadKey(struct FString& PayloadKey); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5f6e0
	bool GetCustomDisplayText(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5fa10
	void GetCustomDependencyUids(struct TArray<struct FString>& OutDependencyUids); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5f430
	int32_t GetCustomDependencyUidCount(); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5f560
	void GetCustomDependencyUid(int32_t Index, struct FString& OutDependencyUid); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a5f250
	bool AddCustomDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a5f110
};

// Class InterchangeNodes.InterchangeSceneVariantSetsNode
// Size: 0x88 (Inherited: 0x68)
struct UInterchangeSceneVariantSetsNode : UInterchangeBaseNode {
	char pad_68[0x20]; // 0x68(0x20)

	bool RemoveCustomVariantSetUid(struct FString VariantUid); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.RemoveCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a0fd50
	void GetCustomVariantSetUids(struct TArray<struct FString>& OutVariantUids); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a101b0
	int32_t GetCustomVariantSetUidCount(); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a102e0
	void GetCustomVariantSetUid(int32_t Index, struct FString& OutVariantUid); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a0ffd0
	bool AddCustomVariantSetUid(struct FString VariantUid); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a0fe90
};

// Class InterchangeNodes.InterchangeVolumeTextureNode
// Size: 0x98 (Inherited: 0x98)
struct UInterchangeVolumeTextureNode : UInterchangeTextureNode {
};

// Class InterchangeNodes.InterchangeMaterialInstanceNode
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeMaterialInstanceNode : UInterchangeBaseNode {
	char pad_68[0x10]; // 0x68(0x10)

	bool SetCustomParent(struct FString AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.SetCustomParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a66ec0
	bool GetVectorParameterValue(struct FString ParameterName, struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a66490
	bool GetTextureParameterValue(struct FString ParameterName, struct FString& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a65fa0
	bool GetStaticSwitchParameterValue(struct FString ParameterName, bool& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a65b30
	bool GetScalarParameterValue(struct FString ParameterName, float& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a66910
	bool GetCustomParent(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a66d80
	bool AddVectorParameterValue(struct FString ParameterName, struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a666d0
	bool AddTextureParameterValue(struct FString ParameterName, struct FString AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x7a66220
	bool AddStaticSwitchParameterValue(struct FString ParameterName, bool AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x7a65d70
	bool AddScalarParameterValue(struct FString ParameterName, float AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x7a66b50
};

// Class InterchangeNodes.InterchangeMeshNode
// Size: 0x1f0 (Inherited: 0x68)
struct UInterchangeMeshNode : UInterchangeBaseNode {
	char pad_68[0x188]; // 0x68(0x188)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a67be0
	bool SetSkinnedMesh(bool bIsSkinnedMesh); // Function InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7a6b230
	bool SetSkeletonDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68ef0
	bool SetSceneInstanceUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68350
	void SetPayLoadKey(struct FString PayloadKey, enum class EInterchangeMeshPayLoadType& PayloadType); // Function InterchangeNodes.InterchangeMeshNode.SetPayLoadKey // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a6abb0
	bool SetMorphTargetName(struct FString MorphTargetName); // Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetName // (Final|Native|Public|BlueprintCallable) // @ game+0x7a6ad90
	bool SetMorphTargetDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68920
	bool SetMorphTarget(bool bIsMorphTarget); // Function InterchangeNodes.InterchangeMeshNode.SetMorphTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x7a6b100
	bool SetCustomVertexCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a6a900
	bool SetCustomUVCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomUVCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a69380
	bool SetCustomPolygonCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a6a650
	bool SetCustomHasVertexTangent(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a69b90
	bool SetCustomHasVertexNormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a6a0f0
	bool SetCustomHasVertexColor(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a69630
	bool SetCustomHasVertexBinormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a69e40
	bool SetCustomHasSmoothGroup(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a698e0
	bool SetCustomBoundingBox(struct FBox& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a6a3a0
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a67aa0
	bool RemoveSkeletonDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68db0
	bool RemoveSceneInstanceUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a68210
	bool RemoveMorphTargetDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a687e0
	bool IsSkinnedMesh(); // Function InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6b330
	bool IsMorphTarget(); // Function InterchangeNodes.InterchangeMeshNode.IsMorphTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6b200
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a67e30
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68090
	void GetSkeletonDependency(int32_t Index, struct FString& OutDependency); // Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69030
	void GetSkeletonDependencies(struct TArray<struct FString>& OutDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69210
	int32_t GetSkeletonDependeciesCount(); // Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69340
	int32_t GetSceneInstanceUidsCount(); // Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a687a0
	void GetSceneInstanceUids(struct TArray<struct FString>& OutDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68670
	void GetSceneInstanceUid(int32_t Index, struct FString& OutDependency); // Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68490
	bool GetMorphTargetName(struct FString& OutMorphTargetName); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6aed0
	void GetMorphTargetDependency(int32_t Index, struct FString& OutDependency); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68a60
	void GetMorphTargetDependencies(struct TArray<struct FString>& OutDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68c40
	int32_t GetMorphTargetDependeciesCount(); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a68d70
	bool GetCustomVertexCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6aa00
	bool GetCustomUVCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomUVCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69480
	bool GetCustomPolygonCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6a750
	bool GetCustomHasVertexTangent(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69c90
	bool GetCustomHasVertexNormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6a1f0
	bool GetCustomHasVertexColor(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69730
	bool GetCustomHasVertexBinormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a69f40
	bool GetCustomHasSmoothGroup(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a699e0
	bool GetCustomBoundingBox(struct FBox& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a6a4a0
};

// Class InterchangeNodes.InterchangeSceneNode
// Size: 0x330 (Inherited: 0x68)
struct UInterchangeSceneNode : UInterchangeBaseNode {
	char pad_68[0x2c8]; // 0x68(0x2c8)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeNodes.InterchangeSceneNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a70e00
	bool SetMorphTargetCurveWeight(struct FString MorphTargetName, float& Weight); // Function InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a70aa0
	bool SetCustomTimeZeroLocalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache); // Function InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a717d0
	bool SetCustomLocalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache); // Function InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a72b70
	bool SetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a724f0
	bool SetCustomBindPoseLocalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache); // Function InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7a72030
	bool SetCustomAssetInstanceUid(struct FString AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a73030
	bool SetCustomAnimationAssetUidToPlay(struct FString AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x7a707e0
	bool RemoveSpecializedType(struct FString SpecializedType); // Function InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType // (Final|Native|Public|BlueprintCallable) // @ game+0x7a732b0
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a70cc0
	bool IsSpecializedTypeContains(struct FString SpecializedType); // Function InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a73880
	void GetSpecializedTypes(struct TArray<struct FString>& OutSpecializedTypes); // Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a73530
	int32_t GetSpecializedTypeCount(); // Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a73840
	void GetSpecializedType(int32_t Index, struct FString& OutSpecializedType); // Function InterchangeNodes.InterchangeSceneNode.GetSpecializedType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a73660
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a71050
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a712b0
	void GetMorphTargetCurveWeights(struct TMap<struct FString, float>& OutMorphTargetCurveWeights); // Function InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a70920
	bool GetCustomTimeZeroLocalTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a71a80
	bool GetCustomTimeZeroGlobalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform& AttributeValue, bool bForceRecache); // Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a71430
	bool GetCustomLocalTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a72e20
	bool GetCustomGlobalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform& AttributeValue, bool bForceRecache); // Function InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a727d0
	bool GetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a72660
	bool GetCustomBindPoseLocalTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a722e0
	bool GetCustomBindPoseGlobalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform& AttributeValue, bool bForceRecache); // Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a71c90
	bool GetCustomAssetInstanceUid(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a73170
	bool GetCustomAnimationAssetUidToPlay(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a706a0
	bool AddSpecializedType(struct FString SpecializedType); // Function InterchangeNodes.InterchangeSceneNode.AddSpecializedType // (Final|Native|Public|BlueprintCallable) // @ game+0x7a733f0
};

// Class InterchangeNodes.InterchangeShaderPortsAPI
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeShaderPortsAPI : UObject {

	struct FString MakeInputValueKey(struct FString InputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputValueKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a79d30
	struct FString MakeInputName(struct FString InputKey); // Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a79ba0
	struct FString MakeInputConnectionKey(struct FString InputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a79ec0
	bool IsAnInput(struct FString AttributeKey); // Function InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a79a70
	bool HasInput(struct UInterchangeBaseNode* InterchangeNode, struct FName& InInputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.HasInput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a798d0
	bool GetInputConnection(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString& OutExpressionUid, struct FString& OutputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a78810
	void GatherInputs(struct UInterchangeBaseNode* InterchangeNode, struct TArray<struct FString>& OutInputNames); // Function InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7a796b0
	bool ConnectOuputToInputByName(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString ExpressionUid, struct FString OutputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a78ec0
	bool ConnectOuputToInputByIndex(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString ExpressionUid, int32_t OutputIndex); // Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a78ba0
	bool ConnectDefaultOuputToInput(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString ExpressionUid); // Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7a793c0
};

// Class InterchangeNodes.InterchangeShaderNode
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeShaderNode : UInterchangeBaseNode {
	char pad_68[0x10]; // 0x68(0x10)

	bool SetCustomShaderType(struct FString AttributeValue); // Function InterchangeNodes.InterchangeShaderNode.SetCustomShaderType // (Final|Native|Public|BlueprintCallable) // @ game+0x7a7a3d0
	bool GetCustomShaderType(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeShaderNode.GetCustomShaderType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7a510
};

// Class InterchangeNodes.InterchangeFunctionCallShaderNode
// Size: 0x88 (Inherited: 0x78)
struct UInterchangeFunctionCallShaderNode : UInterchangeShaderNode {
	char pad_78[0x10]; // 0x78(0x10)

	bool SetCustomMaterialFunction(struct FString AttributeValue); // Function InterchangeNodes.InterchangeFunctionCallShaderNode.SetCustomMaterialFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x7a7a880
	bool GetCustomMaterialFunction(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7a9c0
};

// Class InterchangeNodes.InterchangeShaderGraphNode
// Size: 0xc8 (Inherited: 0x78)
struct UInterchangeShaderGraphNode : UInterchangeShaderNode {
	char pad_78[0x50]; // 0x78(0x50)

	bool SetCustomTwoSidedTransmission(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSidedTransmission // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7b330
	bool SetCustomTwoSided(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7b530
	bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7ac80
	bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7b080
	bool SetCustomIsAShaderFunction(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7ae80
	bool GetCustomTwoSidedTransmission(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7b430
	bool GetCustomTwoSided(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7b630
	bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7ad80
	bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7b230
	bool GetCustomIsAShaderFunction(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7af80
};

// Class InterchangeNodes.InterchangeTexture2DNode
// Size: 0x130 (Inherited: 0x98)
struct UInterchangeTexture2DNode : UInterchangeTextureNode {
	char pad_98[0x98]; // 0x98(0x98)

	bool SetCustomWrapV(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapV // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7f8d0
	bool SetCustomWrapU(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7a7fad0
	struct TMap<int32_t, struct FString> GetSourceBlocks(); // Function InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7fbd0
	bool GetCustomWrapV(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7f7d0
	bool GetCustomWrapU(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a7f9d0
};

// Class InterchangeNodes.InterchangeTextureBlurNode
// Size: 0x130 (Inherited: 0x130)
struct UInterchangeTextureBlurNode : UInterchangeTexture2DNode {
};

