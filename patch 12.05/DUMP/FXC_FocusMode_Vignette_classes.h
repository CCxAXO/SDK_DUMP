// BlueprintGeneratedClass FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C
// Size: 0x660 (Inherited: 0x620)
struct AFXC_FocusMode_Vignette_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)
	float OutroTimeline_Dissolve_Amount_CD93B0AB4AE94F1E8DEB1FB52E030469; // 0x638(0x04)
	enum class ETimelineDirection OutroTimeline__Direction_CD93B0AB4AE94F1E8DEB1FB52E030469; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	struct UTimelineComponent* OutroTimeline; // 0x640(0x08)
	float IntroTimeline_Dissolve_Amount_AA09AE6E45255929617AEF84960364E5; // 0x648(0x04)
	enum class ETimelineDirection IntroTimeline__Direction_AA09AE6E45255929617AEF84960364E5; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct UTimelineComponent* IntroTimeline; // 0x650(0x08)
	double Outro_StartTime; // 0x658(0x08)

	void IntroTimeline__FinishedFunc(); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.IntroTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void IntroTimeline__UpdateFunc(); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.IntroTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void OutroTimeline__FinishedFunc(); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.OutroTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void OutroTimeline__UpdateFunc(); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.OutroTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FXC_SoftADS_Idle_Comp_FXC_HUD_Particle_K2Node_ComponentBoundEvent_0_HUD_ParticleCreated__DelegateSignature(struct UParticleSystemComponent* ParticleSystem); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.BndEvt__FXC_SoftADS_Idle_Comp_FXC_HUD_Particle_K2Node_ComponentBoundEvent_0_HUD_ParticleCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_FocusMode_Vignette(int32_t EntryPoint); // Function FXC_FocusMode_Vignette.FXC_FocusMode_Vignette_C.ExecuteUbergraph_FXC_FocusMode_Vignette // (Final|UbergraphFunction) // @ game+0x1af5410
};

