// BlueprintGeneratedClass Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C
// Size: 0x239 (Inherited: 0x218)
struct UComp_FXC_Audio_Loop_C : UComp_FXC_AudioBasic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x218(0x08)
	struct UAkAudioEvent* StopEvent; // 0x220(0x08)
	bool UseStopEventForTailDuration; // 0x228(0x01)
	bool PlayStopEventOnPerspectiveSwitch; // 0x229(0x01)
	bool bStopLoopOnEffectEnd; // 0x22a(0x01)
	char pad_22B[0x5]; // 0x22b(0x05)
	double DefaultStopTail; // 0x230(0x08)
	bool StopPlayed; // 0x238(0x01)

	void RefreshAudioEmitterPlayback(bool ForceRefresh); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.RefreshAudioEmitterPlayback // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStopTailDuration(double StopTailDuration); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.SetStopTailDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TriggerLoopStopEvent(); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.TriggerLoopStopEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddAudioTailPadding(); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.AddAudioTailPadding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AttemptToStopAttenuationVisualization(); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.AttemptToStopAttenuationVisualization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerViewTargetChanged(); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.OnPlayerViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerViewTargetModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.OnPlayerViewTargetModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_Audio_Loop(int32_t EntryPoint); // Function Comp_FXC_Audio_Loop.Comp_FXC_Audio_Loop_C.ExecuteUbergraph_Comp_FXC_Audio_Loop // (Final|UbergraphFunction) // @ game+0x1b42740
};

