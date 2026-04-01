// BlueprintGeneratedClass FXC_Buff_Decay.FXC_Buff_Decay_C
// Size: 0x698 (Inherited: 0x620)
struct AFXC_Buff_Decay_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_Audio_Loop_C* Comp_FXC_AudioLoop; // 0x628(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x630(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	float FadeOut_Opacity_75595FD041DD80E6B5534D8A43E9B14E; // 0x648(0x04)
	enum class ETimelineDirection FadeOut__Direction_75595FD041DD80E6B5534D8A43E9B14E; // 0x64c(0x01)
	char pad_64D[0x3]; // 0x64d(0x03)
	struct UTimelineComponent* FadeOut; // 0x650(0x08)
	float FadeIn_Opacity_2295E70442487475D8D88CBACF5B21BF; // 0x658(0x04)
	enum class ETimelineDirection FadeIn__Direction_2295E70442487475D8D88CBACF5B21BF; // 0x65c(0x01)
	char pad_65D[0x3]; // 0x65d(0x03)
	struct UTimelineComponent* FadeIn; // 0x660(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x668(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Dynamic3P_Materials; // 0x670(0x10)
	struct UParticleSystemComponent* OutroParticle; // 0x680(0x08)
	double FadeInTime; // 0x688(0x08)
	double MaxStrength; // 0x690(0x08)

	void FadeIn__FinishedFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void FadeIn__UpdateFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void FadeOut__FinishedFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void FadeOut__UpdateFunc(); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Buff_Decay(int32_t EntryPoint); // Function FXC_Buff_Decay.FXC_Buff_Decay_C.ExecuteUbergraph_FXC_Buff_Decay // (Final|UbergraphFunction) // @ game+0x1af5410
};

