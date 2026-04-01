// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct USpatializationPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct USourceDataOverridePluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct UOcclusionPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct UReverbPluginSourceSettingsBase : UObject {
};

// Class AudioExtensions.AudioParameterControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAudioParameterControllerInterface : UInterface {

	void SetTriggerParameter(struct FName InName); // Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter // (Native|Public|BlueprintCallable) // @ game+0x26f1300
	void SetStringParameter(struct FName InName, struct FString InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter // (Native|Public|BlueprintCallable) // @ game+0x26f05e0
	void SetStringArrayParameter(struct FName InName, struct TArray<struct FString>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26f03e0
	void SetParameters_Blueprint(struct TArray<struct FAudioParameter>& InParameters); // Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26efec0
	void SetObjectParameter(struct FName InName, struct UObject* InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter // (Native|Public|BlueprintCallable) // @ game+0x26f0220
	void SetObjectArrayParameter(struct FName InName, struct TArray<struct UObject*>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26f0020
	void SetIntParameter(struct FName InName, int32_t inInt); // Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter // (Native|Public|BlueprintCallable) // @ game+0x26f0d80
	void SetIntArrayParameter(struct FName InName, struct TArray<int32_t>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26f0ba0
	void SetFloatParameter(struct FName InName, float InFloat); // Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter // (Native|Public|BlueprintCallable) // @ game+0x26f09e0
	void SetFloatArrayParameter(struct FName InName, struct TArray<float>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26f07e0
	void SetBoolParameter(struct FName InName, bool InBool); // Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter // (Native|Public|BlueprintCallable) // @ game+0x26f1140
	void SetBoolArrayParameter(struct FName InName, struct TArray<bool>& InValue); // Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x26f0f40
	void ResetParameters(); // Function AudioExtensions.AudioParameterControllerInterface.ResetParameters // (Native|Public|BlueprintCallable) // @ game+0x26f1410
};

// Class AudioExtensions.AudioCodecEncoderSettings
// Size: 0x38 (Inherited: 0x30)
struct UAudioCodecEncoderSettings : UObject {
	int32_t Version; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AudioExtensions.AudioEndpointSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct UAudioEndpointSettingsBase : UObject {
};

// Class AudioExtensions.DummyEndpointSettings
// Size: 0x30 (Inherited: 0x30)
struct UDummyEndpointSettings : UAudioEndpointSettingsBase {
};

// Class AudioExtensions.SoundModulatorBase
// Size: 0x38 (Inherited: 0x30)
struct USoundModulatorBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct USoundfieldEndpointSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct USoundfieldEncodingSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct USoundfieldEffectSettingsBase : UObject {
};

// Class AudioExtensions.SoundfieldEffectBase
// Size: 0x38 (Inherited: 0x30)
struct USoundfieldEffectBase : UObject {
	struct USoundfieldEffectSettingsBase* Settings; // 0x30(0x08)
};

// Class AudioExtensions.WaveformTransformationBase
// Size: 0x30 (Inherited: 0x30)
struct UWaveformTransformationBase : UObject {
};

// Class AudioExtensions.WaveformTransformationChain
// Size: 0x40 (Inherited: 0x30)
struct UWaveformTransformationChain : UObject {
	struct TArray<struct UWaveformTransformationBase*> Transformations; // 0x30(0x10)
};

