// BlueprintGeneratedClass FXC_GrenadeAudioComponent_Attached.FXC_GrenadeAudioComponent_Attached_C
// Size: 0x650 (Inherited: 0x630)
struct AFXC_GrenadeAudioComponent_Attached_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_Audio_Loop_C* Comp_FXC_Audio_Loop; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct UBaseAudioComponent_C* AudioEmitter; // 0x648(0x08)

	void BndEvt__FXC_GrenadeAudioComponent_Attached_Comp_FXC_Audio_Loop_K2Node_ComponentBoundEvent_0_OnAudioEmitterStarted__DelegateSignature(struct UBaseAudioComponent_C* AudioEmitter); // Function FXC_GrenadeAudioComponent_Attached.FXC_GrenadeAudioComponent_Attached_C.BndEvt__FXC_GrenadeAudioComponent_Attached_Comp_FXC_Audio_Loop_K2Node_ComponentBoundEvent_0_OnAudioEmitterStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_GrenadeAudioComponent_Attached.FXC_GrenadeAudioComponent_Attached_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_GrenadeAudioComponent_Attached.FXC_GrenadeAudioComponent_Attached_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_GrenadeAudioComponent_Attached(int32_t EntryPoint); // Function FXC_GrenadeAudioComponent_Attached.FXC_GrenadeAudioComponent_Attached_C.ExecuteUbergraph_FXC_GrenadeAudioComponent_Attached // (Final|UbergraphFunction) // @ game+0x1b42740
};

