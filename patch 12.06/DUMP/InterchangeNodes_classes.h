// Class InterchangeNodes.InterchangeAnimationTrackSetNode
// Size: 0x98 (Inherited: 0x68)
struct UInterchangeAnimationTrackSetNode : UInterchangeBaseNode {
	char pad_68[0x30]; // 0x68(0x30)

	bool SetCustomFrameRate(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.SetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7add070
	bool RemoveCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.RemoveCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7add170
	bool GetCustomFrameRate(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7adcf70
	void GetCustomAnimationTrackUids(struct TArray<struct FString>& OutAnimationTrackUids); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7add5d0
	int32_t GetCustomAnimationTrackUidCount(); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7add700
	void GetCustomAnimationTrackUid(int32_t Index, struct FString& OutAnimationTrackUid); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.GetCustomAnimationTrackUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7add3f0
	bool AddCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeNodes.InterchangeAnimationTrackSetNode.AddCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7add2b0
};

// Class InterchangeNodes.InterchangeAnimationTrackBaseNode
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeAnimationTrackBaseNode : UInterchangeBaseNode {
	char pad_68[0x10]; // 0x68(0x10)

	bool SetCustomCompletionMode(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackBaseNode.SetCustomCompletionMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7addb60
	bool GetCustomCompletionMode(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackBaseNode.GetCustomCompletionMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7add9b0
};

// Class InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
// Size: 0xb8 (Inherited: 0x78)
struct UInterchangeAnimationTrackSetInstanceNode : UInterchangeAnimationTrackBaseNode {
	char pad_78[0x40]; // 0x78(0x40)

	bool SetCustomTrackSetDependencyUid(struct FString AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTrackSetDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7addfe0
	bool SetCustomTimeScale(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomTimeScale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ade830
	bool SetCustomStartFrame(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomStartFrame // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ade2d0
	bool SetCustomDuration(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.SetCustomDuration // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ade580
	bool GetCustomTrackSetDependencyUid(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTrackSetDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7addea0
	bool GetCustomTimeScale(float& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomTimeScale // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ade680
	bool GetCustomStartFrame(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomStartFrame // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ade120
	bool GetCustomDuration(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackSetInstanceNode.GetCustomDuration // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ade3d0
};

// Class InterchangeNodes.InterchangeAnimationTrackNode
// Size: 0xc8 (Inherited: 0x78)
struct UInterchangeAnimationTrackNode : UInterchangeAnimationTrackBaseNode {
	char pad_78[0x50]; // 0x78(0x50)

	bool SetCustomTargetedProperty(int32_t& TargetedProperty); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomTargetedProperty // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7adf700
	bool SetCustomFrameCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomFrameCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7adf120
	bool SetCustomAnimationPayloadKey(struct FString InUniqueId, enum class EInterchangeAnimationPayLoadType& InType); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomAnimationPayloadKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7adf360
	bool SetCustomActorDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeAnimationTrackNode.SetCustomActorDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7adf940
	bool GetCustomTargetedProperty(int32_t& TargetedProperty); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomTargetedProperty // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7adf550
	bool GetCustomFrameCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomFrameCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7adef70
	bool GetCustomAnimationPayloadKey(struct FInterchangeAnimationPayLoadKey& AnimationPayLoadKey); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomAnimationPayloadKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7adf220
	bool GetCustomActorDependencyUid(struct FString& DependencyUid); // Function InterchangeNodes.InterchangeAnimationTrackNode.GetCustomActorDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7adf800
};

// Class InterchangeNodes.InterchangeTransformAnimationTrackNode
// Size: 0xd8 (Inherited: 0xc8)
struct UInterchangeTransformAnimationTrackNode : UInterchangeAnimationTrackNode {
	char pad_C8[0x10]; // 0xc8(0x10)

	bool SetCustomUsedChannels(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeTransformAnimationTrackNode.SetCustomUsedChannels // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae0310
	bool GetCustomUsedChannels(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeTransformAnimationTrackNode.GetCustomUsedChannels // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae0160
};

// Class InterchangeNodes.InterchangeSkeletalAnimationTrackNode
// Size: 0x298 (Inherited: 0x78)
struct UInterchangeSkeletalAnimationTrackNode : UInterchangeAnimationTrackBaseNode {
	char pad_78[0x220]; // 0x78(0x220)

	bool SetCustomSkeletonNodeUid(struct FString AttributeValue); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomSkeletonNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae16a0
	bool SetCustomAnimationStopTime(double& StopTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStopTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae11a0
	bool SetCustomAnimationStartTime(double& StartTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationStartTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae13a0
	bool SetCustomAnimationSampleRate(double& SampleRate); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetCustomAnimationSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae15a0
	bool SetAnimationPayloadKeyForSceneNodeUid(struct FString SceneNodeUid, struct FString InUniqueId, enum class EInterchangeAnimationPayLoadType& InType); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForSceneNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae0b20
	bool SetAnimationPayloadKeyForMorphTargetNodeUid(struct FString MorphTargetNodeUid, struct FString InUniqueId, enum class EInterchangeAnimationPayLoadType& InType); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.SetAnimationPayloadKeyForMorphTargetNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae05a0
	void GetSceneNodeAnimationPayloadKeys(struct TMap<struct FString, struct FString>& OutSceneNodeAnimationPayloadKeyUids, struct TMap<struct FString, char>& OutSceneNodeAnimationPayloadKeyTypes); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetSceneNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae0e30
	void GetMorphTargetNodeAnimationPayloadKeys(struct TMap<struct FString, struct FString>& OutMorphTargetNodeAnimationPayloadKeyUids, struct TMap<struct FString, char>& OutMorphTargetNodeAnimationPayloadKeyTypes); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetMorphTargetNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae08b0
	bool GetCustomSkeletonNodeUid(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomSkeletonNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae17e0
	bool GetCustomAnimationStopTime(double& StopTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStopTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae10a0
	bool GetCustomAnimationStartTime(double& StartTime); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationStartTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae12a0
	bool GetCustomAnimationSampleRate(double& SampleRate); // Function InterchangeNodes.InterchangeSkeletalAnimationTrackNode.GetCustomAnimationSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae14a0
};

// Class InterchangeNodes.InterchangePhysicalCameraNode
// Size: 0xa8 (Inherited: 0x68)
struct UInterchangePhysicalCameraNode : UInterchangeBaseNode {
	char pad_68[0x40]; // 0x68(0x40)

	bool SetCustomSensorWidth(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae3d40
	bool SetCustomSensorHeight(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae3b40
	bool SetCustomFocalLength(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae3f40
	bool SetCustomEnableDepthOfField(bool& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.SetCustomEnableDepthOfField // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae3940
	bool GetCustomSensorWidth(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae3e40
	bool GetCustomSensorHeight(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae3c40
	bool GetCustomFocalLength(float& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4040
	bool GetCustomEnableDepthOfField(bool& AttributeValue); // Function InterchangeNodes.InterchangePhysicalCameraNode.GetCustomEnableDepthOfField // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae3a40
};

// Class InterchangeNodes.InterchangeStandardCameraNode
// Size: 0xc8 (Inherited: 0x68)
struct UInterchangeStandardCameraNode : UInterchangeBaseNode {
	char pad_68[0x60]; // 0x68(0x60)

	bool SetCustomWidth(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae50f0
	bool SetCustomProjectionMode(enum class EInterchangeCameraProjectionType& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae52f0
	bool SetCustomNearClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae4ef0
	bool SetCustomFieldOfView(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae48f0
	bool SetCustomFarClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae4cf0
	bool SetCustomAspectRatio(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.SetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae4af0
	bool GetCustomWidth(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae51f0
	bool GetCustomProjectionMode(enum class EInterchangeCameraProjectionType& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae53f0
	bool GetCustomNearClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4ff0
	bool GetCustomFieldOfView(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae49f0
	bool GetCustomFarClipPlane(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4df0
	bool GetCustomAspectRatio(float& AttributeValue); // Function InterchangeNodes.InterchangeStandardCameraNode.GetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae4bf0
};

// Class InterchangeNodes.InterchangeBaseLightNode
// Size: 0xa8 (Inherited: 0x68)
struct UInterchangeBaseLightNode : UInterchangeBaseNode {
	char pad_68[0x40]; // 0x68(0x40)

	bool SetCustomUseTemperature(bool AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomUseTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae7fe0
	bool SetCustomTemperature(float AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae81e0
	bool SetCustomLightColor(struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7ae85e0
	bool SetCustomIntensity(float AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.SetCustomIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae83e0
	bool GetCustomUseTemperature(bool& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomUseTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae80e0
	bool GetCustomTemperature(float& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae82e0
	bool GetCustomLightColor(struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae86e0
	bool GetCustomIntensity(float& AttributeValue); // Function InterchangeNodes.InterchangeBaseLightNode.GetCustomIntensity // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae84e0
};

// Class InterchangeNodes.InterchangeLightNode
// Size: 0xd8 (Inherited: 0xa8)
struct UInterchangeLightNode : UInterchangeBaseLightNode {
	char pad_A8[0x30]; // 0xa8(0x30)

	bool SetCustomIntensityUnits(enum class EInterchangeLightUnits& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.SetCustomIntensityUnits // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7ae92c0
	bool SetCustomIESTexture(struct FString AttributeValue); // Function InterchangeNodes.InterchangeLightNode.SetCustomIESTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae8e40
	bool SetCustomAttenuationRadius(float AttributeValue); // Function InterchangeNodes.InterchangeLightNode.SetCustomAttenuationRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae90c0
	bool GetCustomIntensityUnits(enum class EInterchangeLightUnits& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.GetCustomIntensityUnits // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae93c0
	bool GetCustomIESTexture(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.GetCustomIESTexture // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae8f80
	bool GetCustomAttenuationRadius(float& AttributeValue); // Function InterchangeNodes.InterchangeLightNode.GetCustomAttenuationRadius // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae91c0
};

// Class InterchangeNodes.InterchangePointLightNode
// Size: 0xf8 (Inherited: 0xd8)
struct UInterchangePointLightNode : UInterchangeLightNode {
	char pad_D8[0x20]; // 0xd8(0x20)

	bool SetCustomUseInverseSquaredFalloff(bool AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.SetCustomUseInverseSquaredFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae9af0
	bool SetCustomLightFalloffExponent(float AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.SetCustomLightFalloffExponent // (Final|Native|Public|BlueprintCallable) // @ game+0x7ae98f0
	bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.GetCustomUseInverseSquaredFalloff // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae9bf0
	bool GetCustomLightFalloffExponent(float& AttributeValue); // Function InterchangeNodes.InterchangePointLightNode.GetCustomLightFalloffExponent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7ae99f0
};

// Class InterchangeNodes.InterchangeSpotLightNode
// Size: 0x118 (Inherited: 0xf8)
struct UInterchangeSpotLightNode : UInterchangePointLightNode {
	char pad_F8[0x20]; // 0xf8(0x20)

	bool SetCustomOuterConeAngle(float AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.SetCustomOuterConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x7aea040
	bool SetCustomInnerConeAngle(float AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.SetCustomInnerConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x7aea240
	bool GetCustomOuterConeAngle(float& AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.GetCustomOuterConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aea140
	bool GetCustomInnerConeAngle(float& AttributeValue); // Function InterchangeNodes.InterchangeSpotLightNode.GetCustomInnerConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aea340
};

// Class InterchangeNodes.InterchangeRectLightNode
// Size: 0xf8 (Inherited: 0xd8)
struct UInterchangeRectLightNode : UInterchangeLightNode {
	char pad_D8[0x20]; // 0xd8(0x20)

	bool SetCustomSourceWidth(float AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x7aea860
	bool SetCustomSourceHeight(float AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.SetCustomSourceHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x7aea660
	bool GetCustomSourceWidth(float& AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aea960
	bool GetCustomSourceHeight(float& AttributeValue); // Function InterchangeNodes.InterchangeRectLightNode.GetCustomSourceHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aea760
};

// Class InterchangeNodes.InterchangeDirectionalLightNode
// Size: 0xa8 (Inherited: 0xa8)
struct UInterchangeDirectionalLightNode : UInterchangeBaseLightNode {
};

// Class InterchangeNodes.InterchangeTextureNode
// Size: 0x98 (Inherited: 0x68)
struct UInterchangeTextureNode : UInterchangeBaseNode {
	char pad_68[0x30]; // 0x68(0x30)

	void SetPayLoadKey(struct FString PayloadKey); // Function InterchangeNodes.InterchangeTextureNode.SetPayLoadKey // (Native|Public|BlueprintCallable) // @ game+0x7aecde0
	bool SetCustomSRGB(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.SetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7aecbe0
	bool SetCustomFilter(enum class EInterchangeTextureFilterMode& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.SetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7aec7e0
	bool SetCustombFlipGreenChannel(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.SetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7aec9e0
	bool GetCustomSRGB(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.GetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aecce0
	bool GetCustomFilter(enum class EInterchangeTextureFilterMode& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.GetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aec8e0
	bool GetCustombFlipGreenChannel(bool& AttributeValue); // Function InterchangeNodes.InterchangeTextureNode.GetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aecae0
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

	bool SetCustomVariantsPayloadKey(struct FString PayloadKey); // Function InterchangeNodes.InterchangeVariantSetNode.SetCustomVariantsPayloadKey // (Final|Native|Public|BlueprintCallable) // @ game+0x7aedb90
	bool SetCustomDisplayText(struct FString AttributeValue); // Function InterchangeNodes.InterchangeVariantSetNode.SetCustomDisplayText // (Final|Native|Public|BlueprintCallable) // @ game+0x7aedec0
	bool RemoveCustomDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeVariantSetNode.RemoveCustomDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7aed5c0
	bool GetCustomVariantsPayloadKey(struct FString& PayloadKey); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomVariantsPayloadKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aedcd0
	bool GetCustomDisplayText(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDisplayText // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aee000
	void GetCustomDependencyUids(struct TArray<struct FString>& OutDependencyUids); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aeda20
	int32_t GetCustomDependencyUidCount(); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aedb50
	void GetCustomDependencyUid(int32_t Index, struct FString& OutDependencyUid); // Function InterchangeNodes.InterchangeVariantSetNode.GetCustomDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aed840
	bool AddCustomDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeVariantSetNode.AddCustomDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7aed700
};

// Class InterchangeNodes.InterchangeSceneVariantSetsNode
// Size: 0x88 (Inherited: 0x68)
struct UInterchangeSceneVariantSetsNode : UInterchangeBaseNode {
	char pad_68[0x20]; // 0x68(0x20)

	bool RemoveCustomVariantSetUid(struct FString VariantUid); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.RemoveCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a9e340
	void GetCustomVariantSetUids(struct TArray<struct FString>& OutVariantUids); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a9e7a0
	int32_t GetCustomVariantSetUidCount(); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a9e8d0
	void GetCustomVariantSetUid(int32_t Index, struct FString& OutVariantUid); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.GetCustomVariantSetUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7a9e5c0
	bool AddCustomVariantSetUid(struct FString VariantUid); // Function InterchangeNodes.InterchangeSceneVariantSetsNode.AddCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7a9e480
};

// Class InterchangeNodes.InterchangeVolumeTextureNode
// Size: 0x98 (Inherited: 0x98)
struct UInterchangeVolumeTextureNode : UInterchangeTextureNode {
};

// Class InterchangeNodes.InterchangeMaterialInstanceNode
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeMaterialInstanceNode : UInterchangeBaseNode {
	char pad_68[0x10]; // 0x68(0x10)

	bool SetCustomParent(struct FString AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.SetCustomParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af54b0
	bool GetVectorParameterValue(struct FString ParameterName, struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetVectorParameterValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4a80
	bool GetTextureParameterValue(struct FString ParameterName, struct FString& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetTextureParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4590
	bool GetStaticSwitchParameterValue(struct FString ParameterName, bool& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetStaticSwitchParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4120
	bool GetScalarParameterValue(struct FString ParameterName, float& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetScalarParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af4f00
	bool GetCustomParent(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.GetCustomParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af5370
	bool AddVectorParameterValue(struct FString ParameterName, struct FLinearColor& AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddVectorParameterValue // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7af4cc0
	bool AddTextureParameterValue(struct FString ParameterName, struct FString AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddTextureParameterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x7af4810
	bool AddStaticSwitchParameterValue(struct FString ParameterName, bool AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddStaticSwitchParameterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x7af4360
	bool AddScalarParameterValue(struct FString ParameterName, float AttributeValue); // Function InterchangeNodes.InterchangeMaterialInstanceNode.AddScalarParameterValue // (Final|Native|Public|BlueprintCallable) // @ game+0x7af5140
};

// Class InterchangeNodes.InterchangeMeshNode
// Size: 0x1f0 (Inherited: 0x68)
struct UInterchangeMeshNode : UInterchangeBaseNode {
	char pad_68[0x188]; // 0x68(0x188)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af61d0
	bool SetSkinnedMesh(bool bIsSkinnedMesh); // Function InterchangeNodes.InterchangeMeshNode.SetSkinnedMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7af9820
	bool SetSkeletonDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetSkeletonDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af74e0
	bool SetSceneInstanceUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetSceneInstanceUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6940
	void SetPayLoadKey(struct FString PayloadKey, enum class EInterchangeMeshPayLoadType& PayloadType); // Function InterchangeNodes.InterchangeMeshNode.SetPayLoadKey // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af91a0
	bool SetMorphTargetName(struct FString MorphTargetName); // Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetName // (Final|Native|Public|BlueprintCallable) // @ game+0x7af9380
	bool SetMorphTargetDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.SetMorphTargetDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6f10
	bool SetMorphTarget(bool bIsMorphTarget); // Function InterchangeNodes.InterchangeMeshNode.SetMorphTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x7af96f0
	bool SetCustomVertexCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomVertexCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af8ef0
	bool SetCustomUVCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomUVCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af7970
	bool SetCustomPolygonCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomPolygonCount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af8c40
	bool SetCustomHasVertexTangent(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexTangent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af8180
	bool SetCustomHasVertexNormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexNormal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af86e0
	bool SetCustomHasVertexColor(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af7c20
	bool SetCustomHasVertexBinormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasVertexBinormal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af8430
	bool SetCustomHasSmoothGroup(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomHasSmoothGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7af7ed0
	bool SetCustomBoundingBox(struct FBox& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.SetCustomBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7af8990
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeNodes.InterchangeMeshNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6090
	bool RemoveSkeletonDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.RemoveSkeletonDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af73a0
	bool RemoveSceneInstanceUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.RemoveSceneInstanceUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6800
	bool RemoveMorphTargetDependencyUid(struct FString DependencyUid); // Function InterchangeNodes.InterchangeMeshNode.RemoveMorphTargetDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7af6dd0
	bool IsSkinnedMesh(); // Function InterchangeNodes.InterchangeMeshNode.IsSkinnedMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af9920
	bool IsMorphTarget(); // Function InterchangeNodes.InterchangeMeshNode.IsMorphTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af97f0
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6420
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6680
	void GetSkeletonDependency(int32_t Index, struct FString& OutDependency); // Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependency // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7620
	void GetSkeletonDependencies(struct TArray<struct FString>& OutDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7800
	int32_t GetSkeletonDependeciesCount(); // Function InterchangeNodes.InterchangeMeshNode.GetSkeletonDependeciesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7930
	int32_t GetSceneInstanceUidsCount(); // Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6d90
	void GetSceneInstanceUids(struct TArray<struct FString>& OutDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6c60
	void GetSceneInstanceUid(int32_t Index, struct FString& OutDependency); // Function InterchangeNodes.InterchangeMeshNode.GetSceneInstanceUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af6a80
	bool GetMorphTargetName(struct FString& OutMorphTargetName); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af94c0
	void GetMorphTargetDependency(int32_t Index, struct FString& OutDependency); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependency // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7050
	void GetMorphTargetDependencies(struct TArray<struct FString>& OutDependencies); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7230
	int32_t GetMorphTargetDependeciesCount(); // Function InterchangeNodes.InterchangeMeshNode.GetMorphTargetDependeciesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7360
	bool GetCustomVertexCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomVertexCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af8ff0
	bool GetCustomUVCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomUVCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7a70
	bool GetCustomPolygonCount(int32_t& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomPolygonCount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af8d40
	bool GetCustomHasVertexTangent(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexTangent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af8280
	bool GetCustomHasVertexNormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexNormal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af87e0
	bool GetCustomHasVertexColor(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexColor // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7d20
	bool GetCustomHasVertexBinormal(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasVertexBinormal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af8530
	bool GetCustomHasSmoothGroup(bool& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomHasSmoothGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af7fd0
	bool GetCustomBoundingBox(struct FBox& AttributeValue); // Function InterchangeNodes.InterchangeMeshNode.GetCustomBoundingBox // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7af8a90
};

// Class InterchangeNodes.InterchangeSceneNode
// Size: 0x330 (Inherited: 0x68)
struct UInterchangeSceneNode : UInterchangeBaseNode {
	char pad_68[0x2c8]; // 0x68(0x2c8)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeNodes.InterchangeSceneNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7aff3f0
	bool SetMorphTargetCurveWeight(struct FString MorphTargetName, float& Weight); // Function InterchangeNodes.InterchangeSceneNode.SetMorphTargetCurveWeight // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7aff090
	bool SetCustomTimeZeroLocalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache); // Function InterchangeNodes.InterchangeSceneNode.SetCustomTimeZeroLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7affdc0
	bool SetCustomLocalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache); // Function InterchangeNodes.InterchangeSceneNode.SetCustomLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b01160
	bool SetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.SetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b00ae0
	bool SetCustomBindPoseLocalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache); // Function InterchangeNodes.InterchangeSceneNode.SetCustomBindPoseLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7b00620
	bool SetCustomAssetInstanceUid(struct FString AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.SetCustomAssetInstanceUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7b01620
	bool SetCustomAnimationAssetUidToPlay(struct FString AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.SetCustomAnimationAssetUidToPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x7afedd0
	bool RemoveSpecializedType(struct FString SpecializedType); // Function InterchangeNodes.InterchangeSceneNode.RemoveSpecializedType // (Final|Native|Public|BlueprintCallable) // @ game+0x7b018a0
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeNodes.InterchangeSceneNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7aff2b0
	bool IsSpecializedTypeContains(struct FString SpecializedType); // Function InterchangeNodes.InterchangeSceneNode.IsSpecializedTypeContains // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b01e70
	void GetSpecializedTypes(struct TArray<struct FString>& OutSpecializedTypes); // Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b01b20
	int32_t GetSpecializedTypeCount(); // Function InterchangeNodes.InterchangeSceneNode.GetSpecializedTypeCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b01e30
	void GetSpecializedType(int32_t Index, struct FString& OutSpecializedType); // Function InterchangeNodes.InterchangeSceneNode.GetSpecializedType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b01c50
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aff640
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeNodes.InterchangeSceneNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7aff8a0
	void GetMorphTargetCurveWeights(struct TMap<struct FString, float>& OutMorphTargetCurveWeights); // Function InterchangeNodes.InterchangeSceneNode.GetMorphTargetCurveWeights // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afef10
	bool GetCustomTimeZeroLocalTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00070
	bool GetCustomTimeZeroGlobalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform& AttributeValue, bool bForceRecache); // Function InterchangeNodes.InterchangeSceneNode.GetCustomTimeZeroGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7affa20
	bool GetCustomLocalTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b01410
	bool GetCustomGlobalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform& AttributeValue, bool bForceRecache); // Function InterchangeNodes.InterchangeSceneNode.GetCustomGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00dc0
	bool GetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00c50
	bool GetCustomBindPoseLocalTransform(struct FTransform& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseLocalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b008d0
	bool GetCustomBindPoseGlobalTransform(struct UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform& AttributeValue, bool bForceRecache); // Function InterchangeNodes.InterchangeSceneNode.GetCustomBindPoseGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b00280
	bool GetCustomAssetInstanceUid(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomAssetInstanceUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b01760
	bool GetCustomAnimationAssetUidToPlay(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeSceneNode.GetCustomAnimationAssetUidToPlay // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7afec90
	bool AddSpecializedType(struct FString SpecializedType); // Function InterchangeNodes.InterchangeSceneNode.AddSpecializedType // (Final|Native|Public|BlueprintCallable) // @ game+0x7b019e0
};

// Class InterchangeNodes.InterchangeShaderPortsAPI
// Size: 0x30 (Inherited: 0x30)
struct UInterchangeShaderPortsAPI : UObject {

	struct FString MakeInputValueKey(struct FString InputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputValueKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b08320
	struct FString MakeInputName(struct FString InputKey); // Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b08190
	struct FString MakeInputConnectionKey(struct FString InputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.MakeInputConnectionKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b084b0
	bool IsAnInput(struct FString AttributeKey); // Function InterchangeNodes.InterchangeShaderPortsAPI.IsAnInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b08060
	bool HasInput(struct UInterchangeBaseNode* InterchangeNode, struct FName& InInputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.HasInput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7b07ec0
	bool GetInputConnection(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString& OutExpressionUid, struct FString& OutputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.GetInputConnection // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7b06e00
	void GatherInputs(struct UInterchangeBaseNode* InterchangeNode, struct TArray<struct FString>& OutInputNames); // Function InterchangeNodes.InterchangeShaderPortsAPI.GatherInputs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7b07ca0
	bool ConnectOuputToInputByName(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString ExpressionUid, struct FString OutputName); // Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b074b0
	bool ConnectOuputToInputByIndex(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString ExpressionUid, int32_t OutputIndex); // Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectOuputToInputByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b07190
	bool ConnectDefaultOuputToInput(struct UInterchangeBaseNode* InterchangeNode, struct FString InputName, struct FString ExpressionUid); // Function InterchangeNodes.InterchangeShaderPortsAPI.ConnectDefaultOuputToInput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7b079b0
};

// Class InterchangeNodes.InterchangeShaderNode
// Size: 0x78 (Inherited: 0x68)
struct UInterchangeShaderNode : UInterchangeBaseNode {
	char pad_68[0x10]; // 0x68(0x10)

	bool SetCustomShaderType(struct FString AttributeValue); // Function InterchangeNodes.InterchangeShaderNode.SetCustomShaderType // (Final|Native|Public|BlueprintCallable) // @ game+0x7b089c0
	bool GetCustomShaderType(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeShaderNode.GetCustomShaderType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08b00
};

// Class InterchangeNodes.InterchangeFunctionCallShaderNode
// Size: 0x88 (Inherited: 0x78)
struct UInterchangeFunctionCallShaderNode : UInterchangeShaderNode {
	char pad_78[0x10]; // 0x78(0x10)

	bool SetCustomMaterialFunction(struct FString AttributeValue); // Function InterchangeNodes.InterchangeFunctionCallShaderNode.SetCustomMaterialFunction // (Final|Native|Public|BlueprintCallable) // @ game+0x7b08e70
	bool GetCustomMaterialFunction(struct FString& AttributeValue); // Function InterchangeNodes.InterchangeFunctionCallShaderNode.GetCustomMaterialFunction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b08fb0
};

// Class InterchangeNodes.InterchangeShaderGraphNode
// Size: 0xc8 (Inherited: 0x78)
struct UInterchangeShaderGraphNode : UInterchangeShaderNode {
	char pad_78[0x50]; // 0x78(0x50)

	bool SetCustomTwoSidedTransmission(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSidedTransmission // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b09920
	bool SetCustomTwoSided(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b09b20
	bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b09270
	bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b09670
	bool SetCustomIsAShaderFunction(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.SetCustomIsAShaderFunction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b09470
	bool GetCustomTwoSidedTransmission(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSidedTransmission // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b09a20
	bool GetCustomTwoSided(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b09c20
	bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b09370
	bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b09820
	bool GetCustomIsAShaderFunction(bool& AttributeValue); // Function InterchangeNodes.InterchangeShaderGraphNode.GetCustomIsAShaderFunction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b09570
};

// Class InterchangeNodes.InterchangeTexture2DNode
// Size: 0x130 (Inherited: 0x98)
struct UInterchangeTexture2DNode : UInterchangeTextureNode {
	char pad_98[0x98]; // 0x98(0x98)

	bool SetCustomWrapV(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapV // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0dec0
	bool SetCustomWrapU(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.SetCustomWrapU // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7b0e0c0
	struct TMap<int32_t, struct FString> GetSourceBlocks(); // Function InterchangeNodes.InterchangeTexture2DNode.GetSourceBlocks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0e1c0
	bool GetCustomWrapV(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0ddc0
	bool GetCustomWrapU(enum class EInterchangeTextureWrapMode& AttributeValue); // Function InterchangeNodes.InterchangeTexture2DNode.GetCustomWrapU // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7b0dfc0
};

// Class InterchangeNodes.InterchangeTextureBlurNode
// Size: 0x130 (Inherited: 0x130)
struct UInterchangeTextureBlurNode : UInterchangeTexture2DNode {
};

