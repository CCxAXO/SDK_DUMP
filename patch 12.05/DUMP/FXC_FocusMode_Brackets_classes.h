// BlueprintGeneratedClass FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C
// Size: 0x6c0 (Inherited: 0x620)
struct AFXC_FocusMode_Brackets_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)
	struct FVector IntroTL_Focus_Offset_Scale_5AA4A2E0425DFB7A7EB43DA6B63BB76A; // 0x638(0x18)
	struct FVector IntroTL_Focus_Offset_Horizontal_5AA4A2E0425DFB7A7EB43DA6B63BB76A; // 0x650(0x18)
	float IntroTL_Focus_HUD_Alpha_5AA4A2E0425DFB7A7EB43DA6B63BB76A; // 0x668(0x04)
	enum class ETimelineDirection IntroTL_Focus__Direction_5AA4A2E0425DFB7A7EB43DA6B63BB76A; // 0x66c(0x01)
	char pad_66D[0x3]; // 0x66d(0x03)
	struct UTimelineComponent* IntroTL_Focus; // 0x670(0x08)
	struct FVector OutroTL_Focus_Offset_Scale_1584DD61441143EB07B8AEACF1132A23; // 0x678(0x18)
	struct FVector OutroTL_Focus_Offset_Horizontal_1584DD61441143EB07B8AEACF1132A23; // 0x690(0x18)
	float OutroTL_Focus_HUD_Alpha_1584DD61441143EB07B8AEACF1132A23; // 0x6a8(0x04)
	enum class ETimelineDirection OutroTL_Focus__Direction_1584DD61441143EB07B8AEACF1132A23; // 0x6ac(0x01)
	char pad_6AD[0x3]; // 0x6ad(0x03)
	struct UTimelineComponent* OutroTL_Focus; // 0x6b0(0x08)
	double Outro_StartTime; // 0x6b8(0x08)

	void IntroTL_Focus__FinishedFunc(); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.IntroTL_Focus__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void IntroTL_Focus__UpdateFunc(); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.IntroTL_Focus__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void OutroTL_Focus__FinishedFunc(); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.OutroTL_Focus__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void OutroTL_Focus__UpdateFunc(); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.OutroTL_Focus__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FXC_SoftADS_Idle_Comp_FXC_HUD_Particle_K2Node_ComponentBoundEvent_0_HUD_ParticleCreated__DelegateSignature(struct UParticleSystemComponent* ParticleSystem); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.BndEvt__FXC_SoftADS_Idle_Comp_FXC_HUD_Particle_K2Node_ComponentBoundEvent_0_HUD_ParticleCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_FocusMode_Brackets(int32_t EntryPoint); // Function FXC_FocusMode_Brackets.FXC_FocusMode_Brackets_C.ExecuteUbergraph_FXC_FocusMode_Brackets // (Final|UbergraphFunction) // @ game+0x1af5410
};

