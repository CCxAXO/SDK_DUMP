// Class Synthesis.AudioImpulseResponse
// Size: 0x60 (Inherited: 0x30)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x30(0x10)
	int32_t NumChannels; // 0x40(0x04)
	int32_t SampleRate; // 0x44(0x04)
	float NormalizationVolumeDb; // 0x48(0x04)
	bool bTrueStereo; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<float> IRData; // 0x50(0x10)
};

// Class Synthesis.ModularSynthPresetBank
// Size: 0x40 (Inherited: 0x30)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x30(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x30 (Inherited: 0x30)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x84ea730
};

// Class Synthesis.ModularSynthComponent
// Size: 0x1070 (Inherited: 0x9a0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x9a0(0x04)
	char pad_9A4[0x6cc]; // 0x9a4(0x6cc)

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84eaf70
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed3f0
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb780
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84eba00
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb640
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0x84ebb40
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x84ebc70
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb8c0
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee610
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed2b0
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0x84eecf0
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x84eee30
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee750
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0x84ef510
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee890
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0x84ef150
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0x84eeb10
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0x84ef330
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x84ef8d0
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0x84efab0
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x84ef6f0
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0x84eef70
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec8d0
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec790
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed180
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x84ecf10
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x84ecc90
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84eca10
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed050
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x84ecdd0
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84ecb50
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0x84edcb0
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed8f0
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0x84edad0
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x84ede90
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee070
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee250
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee430
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed7b0
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x84ebee0
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec010
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec150
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec290
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec3d0
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x84ebdb0
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0x84ee9d0
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec510
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0x84efc90
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0x84eaa40
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0x84ec650
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed530
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb140
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb280
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb500
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x84eb3c0
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x84ed670
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x84f0070
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x84efdd0
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84eac90
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x218 (Inherited: 0x70)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_70[0xe8]; // 0x70(0xe8)
	struct FSourceEffectBitCrusherSettings Settings; // 0x158(0xc0)

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f5330
	void SetSampleRateModulators(struct TSet<struct USoundModulatorBase*>& InModulators); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f5460
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f5690
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate // (Final|Native|Public|BlueprintCallable) // @ game+0x84f57a0
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f4f70
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits // (Final|Native|Public|BlueprintCallable) // @ game+0x84f5bf0
	void SetBitModulators(struct TSet<struct USoundModulatorBase*>& InModulators); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f58b0
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f5ae0
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x4e8 (Inherited: 0x70)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_70[0x250]; // 0x70(0x250)
	struct FSourceEffectChorusSettings Settings; // 0x2c0(0x228)

	void SetWetModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetWetModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f8750
	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f8980
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet // (Final|Native|Public|BlueprintCallable) // @ game+0x84f8a90
	void SetSpreadModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f7eb0
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f80e0
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x84f81f0
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f7d70
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f7c00
	void SetFrequencyModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f8ba0
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f8dd0
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x84f8ee0
	void SetFeedbackModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f8ff0
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f9220
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x84f9330
	void SetDryModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetDryModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f8300
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f8530
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry // (Final|Native|Public|BlueprintCallable) // @ game+0x84f8640
	void SetDepthModulators(struct TSet<struct USoundModulatorBase*>& Modulators); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulators // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84f9440
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x84f9670
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x84f9780
};

// Class Synthesis.SourceEffectConvolutionReverbPreset
// Size: 0xc8 (Inherited: 0x70)
struct USourceEffectConvolutionReverbPreset : USoundEffectSourcePreset {
	struct UAudioImpulseResponse* ImpulseResponse; // 0x70(0x08)
	struct FSourceEffectConvolutionReverbSettings Settings; // 0x78(0x10)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x88(0x01)
	bool bEnableHardwareAcceleration; // 0x89(0x01)
	char pad_8A[0x3e]; // 0x8a(0x3e)

	void SetSettings(struct FSourceEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84faf70
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x84fae70
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xe8 (Inherited: 0x70)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_70[0x50]; // 0x70(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0xc0(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84fc6b0
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xf8 (Inherited: 0xd8)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xd8(0x10)
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xb0 (Inherited: 0x70)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0xa4(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x84fd820
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x84fda30
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x84fd930
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0xb8 (Inherited: 0x70)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSourceEffectEQSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b41070
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0xd8 (Inherited: 0x70)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_70[0x48]; // 0x70(0x48)
	struct FSourceEffectFilterSettings Settings; // 0xb8(0x20)

	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8500c50
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0xb0 (Inherited: 0x70)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0xa4(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8502170
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0xa8 (Inherited: 0x70)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8502e80
};

// Class Synthesis.SourceEffectMotionFilterPreset
// Size: 0x188 (Inherited: 0x70)
struct USourceEffectMotionFilterPreset : USoundEffectSourcePreset {
	char pad_70[0xa0]; // 0x70(0xa0)
	struct FSourceEffectMotionFilterSettings Settings; // 0x110(0x78)

	void SetSettings(struct FSourceEffectMotionFilterSettings& InSettings); // Function Synthesis.SourceEffectMotionFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85049d0
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0xa8 (Inherited: 0x70)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSourceEffectPannerSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85076e0
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0xb8 (Inherited: 0x70)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8508680
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0xd8 (Inherited: 0x70)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_70[0x48]; // 0x70(0x48)
	struct FSourceEffectRingModulationSettings Settings; // 0xb8(0x20)

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8509660
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xc8 (Inherited: 0x70)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_70[0x40]; // 0x70(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0xb0(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x850a420
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0xe0 (Inherited: 0x70)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_70[0x4c]; // 0x70(0x4c)
	struct FSourceEffectStereoDelaySettings Settings; // 0xbc(0x24)

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x850b530
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0xa8 (Inherited: 0x70)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85076e0
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0x108 (Inherited: 0x70)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct UAudioImpulseResponse* ImpulseResponse; // 0x70(0x08)
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x78(0x30)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0xa8(0x01)
	bool bEnableHardwareAcceleration; // 0xa9(0x01)
	char pad_AA[0x5e]; // 0xaa(0x5e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x850ecd0
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x850ebd0
};

// Class Synthesis.SubmixEffectDelayStatics
// Size: 0x30 (Inherited: 0x30)
struct USubmixEffectDelayStatics : UBlueprintFunctionLibrary {

	struct FSubmixEffectDelaySettings SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength); // Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8510a60
	struct FSubmixEffectDelaySettings SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime); // Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8510880
	struct FSubmixEffectDelaySettings SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength); // Function Synthesis.SubmixEffectDelayStatics.SetDelayLength // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x85106a0
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0xc0 (Inherited: 0x70)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0xa4(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85110b0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8510e50
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x8510d30
	void SetDefaultSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8510f70
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3633750
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0xb0 (Inherited: 0x70)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_70[0x34]; // 0x70(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0xa4(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8512ab0
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x85129a0
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x8512450
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x8512560
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x8512670
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x8512780
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x8512890
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0xb8 (Inherited: 0x70)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8513ae0
};

// Class Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0x108 (Inherited: 0x70)
struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	char pad_70[0x60]; // 0x70(0x60)
	struct FSubmixEffectMultibandCompressorSettings Settings; // 0xd0(0x38)

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8514c60
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x8514e20
	void SetAudioBus(struct UAudioBus* AudioBus); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus // (Final|Native|Public|BlueprintCallable) // @ game+0x8514f90
	void ResetKey(); // Function Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey // (Final|Native|Public|BlueprintCallable) // @ game+0x8515100
};

// Class Synthesis.SubmixEffectStereoDelayPreset
// Size: 0xe0 (Inherited: 0x70)
struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	char pad_70[0x4c]; // 0x70(0x4c)
	struct FSubmixEffectStereoDelaySettings Settings; // 0xbc(0x24)

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x850b530
};

// Class Synthesis.SubmixEffectStereoToQuadPreset
// Size: 0xa8 (Inherited: 0x70)
struct USubmixEffectStereoToQuadPreset : USoundEffectSubmixPreset {
	char pad_70[0x30]; // 0x70(0x30)
	struct FSubmixEffectStereoToQuadSettings Settings; // 0xa0(0x08)

	void SetSettings(struct FSubmixEffectStereoToQuadSettings& InSettings); // Function Synthesis.SubmixEffectStereoToQuadPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8518080
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xe0 (Inherited: 0x70)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_70[0x40]; // 0x70(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0xb0(0x18)
	char pad_C8[0x18]; // 0xc8(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8519520
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8519b20
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8519070
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0x85197f0
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8519190
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85192f0
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x5a1c9f0
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8519970
};

// Class Synthesis.GranularSynth
// Size: 0xd80 (Inherited: 0x9a0)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x9a0(0x08)
	char pad_9A8[0x3d8]; // 0x9a8(0x3d8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x851cf10
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x851d190
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x851ba40
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0x851cdd0
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851b7c0
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x851c480
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x851c000
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x851c830
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0x851c6f0
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x851c240
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x851bdc0
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0x851c5c0
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x851bb80
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851d050
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851d050
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x851cb50
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x851c970
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x851b780
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x40a8fb0
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x851b7a0
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x178 (Inherited: 0x30)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x30(0x10)
	char bLockKeyframesToGridBool : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t LockKeyframesToGrid; // 0x44(0x04)
	int32_t WaveTableResolution; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x50(0x10)
	char bNormalizeWaveTables : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x117]; // 0x61(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0x10f0 (Inherited: 0x9a0)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x9a0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x9b0(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x9c0(0x08)
	char pad_9C8[0x728]; // 0x9c8(0x728)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x85213b0
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0x85218d0
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0x8520ef0
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x8521160
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x8521020
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x851f5f0
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851f4b0
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x851f370
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x851f0f0
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851f730
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x851f230
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x851efb0
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851f870
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0x8520db0
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0x85214f0
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x8521650
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x8521790
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x851fff0
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x851feb0
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8520130
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x851fd70
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x851faf0
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x851fc30
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x851f9b0
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8520270
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x851ec70
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x851e720
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0x851e9e0
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x85209f0
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x85208b0
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x8520770
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x85204f0
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8520b30
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x8520630
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x85203b0
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8520c70
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0x85212c0
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0x85212a0
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x8521b70
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x8521a10
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x8521dc0
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x851ef70
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x851e450
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x851e5b0
};

// Class Synthesis.SynthComponentToneGenerator
// Size: 0xa90 (Inherited: 0x9a0)
struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x9a0(0x04)
	float Volume; // 0x9a4(0x04)
	struct FRuntimeFloatCurve DistanceAttenuationCurve; // 0x9a8(0x88)
	struct FVector2D DistanceRange; // 0xa30(0x10)
	float AttenuationDbAtMaxRange; // 0xa40(0x04)
	char pad_A44[0x4c]; // 0xa44(0x4c)

	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x8524a30
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x8524bc0
};

// Class Synthesis.SynthSamplePlayer
// Size: 0xad0 (Inherited: 0x9a0)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x9a0(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x9a8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x9b8(0x10)
	char pad_9C8[0x108]; // 0x9c8(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x8526040
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x8525910
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x8525a50
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x8525e40
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8525b90
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8525870
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85258f0
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85258d0
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8525890
};

// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x8527040
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x8526bf0
};

// Class Synthesis.Synth2DSlider
// Size: 0x6b0 (Inherited: 0x1b8)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x1b8(0x04)
	float ValueY; // 0x1bc(0x04)
	struct FDelegate ValueXDelegate; // 0x1c0(0x14)
	struct FDelegate ValueYDelegate; // 0x1d4(0x14)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FSynth2DSliderStyle WidgetStyle; // 0x1f0(0x430)
	struct FLinearColor SliderHandleColor; // 0x620(0x10)
	bool IndentHandle; // 0x630(0x01)
	bool Locked; // 0x631(0x01)
	char pad_632[0x2]; // 0x632(0x02)
	float StepSize; // 0x634(0x04)
	bool IsFocusable; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x640(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x650(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x660(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x670(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x680(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x690(0x10)
	char pad_6A0[0x10]; // 0x6a0(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8533f80
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x8533bc0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8533ab0
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x8533d00
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x8533e40
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8534120
};

// Class Synthesis.SynthKnob
// Size: 0x5f0 (Inherited: 0x1b8)
struct USynthKnob : UWidget {
	float Value; // 0x1b8(0x04)
	float StepSize; // 0x1bc(0x04)
	float MouseSpeed; // 0x1c0(0x04)
	float MouseFineTuneSpeed; // 0x1c4(0x04)
	char ShowTooltipInfo : 1; // 0x1c8(0x01)
	char pad_1C8_1 : 7; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct FText ParameterName; // 0x1d0(0x18)
	struct FText ParameterUnits; // 0x1e8(0x18)
	struct FDelegate ValueDelegate; // 0x200(0x14)
	char pad_214[0xc]; // 0x214(0x0c)
	struct FSynthKnobStyle WidgetStyle; // 0x220(0x360)
	bool Locked; // 0x580(0x01)
	bool IsFocusable; // 0x581(0x01)
	char pad_582[0x6]; // 0x582(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x588(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x598(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x5a8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x5b8(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x5c8(0x10)
	char pad_5D8[0x18]; // 0x5d8(0x18)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x8536090
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x8535e50
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x8535f50
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85361d0
};

