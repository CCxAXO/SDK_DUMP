// BlueprintGeneratedClass FXC_GrenadeAudioComponent_Location.FXC_GrenadeAudioComponent_Location_C
// Size: 0x648 (Inherited: 0x630)
struct AFXC_GrenadeAudioComponent_Location_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_Audio_Location_C* Comp_FXC_Audio_Location; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)

	void BndEvt__FXC_GrenadeAudioComponent_Location_Comp_FXC_Audio_Location_K2Node_ComponentBoundEvent_0_OnAudioEmitterStarted__DelegateSignature(struct UBaseAudioComponent_C* AudioEmitter); // Function FXC_GrenadeAudioComponent_Location.FXC_GrenadeAudioComponent_Location_C.BndEvt__FXC_GrenadeAudioComponent_Location_Comp_FXC_Audio_Location_K2Node_ComponentBoundEvent_0_OnAudioEmitterStarted__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_GrenadeAudioComponent_Location.FXC_GrenadeAudioComponent_Location_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_GrenadeAudioComponent_Location(int32_t EntryPoint); // Function FXC_GrenadeAudioComponent_Location.FXC_GrenadeAudioComponent_Location_C.ExecuteUbergraph_FXC_GrenadeAudioComponent_Location // (Final|UbergraphFunction) // @ game+0x1b42740
};

