// BlueprintGeneratedClass FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C
// Size: 0x678 (Inherited: 0x620)
struct AFXC_Sarge_StimBuff_Visuals_Fade_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter_Glow; // 0x628(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x630(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x638(0x08)
	float Timeline_FadeOut_HUDErosion_65A078624958FF20AD21E49D60154043; // 0x640(0x04)
	float Timeline_FadeOut_HUDAlpha_65A078624958FF20AD21E49D60154043; // 0x644(0x04)
	enum class ETimelineDirection Timeline_FadeOut__Direction_65A078624958FF20AD21E49D60154043; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct UTimelineComponent* Timeline_FadeOut; // 0x650(0x08)
	float Timeline_FadeIn_HUDErosion_66D70C7A4CF64A7FF69BBABCF89C1342; // 0x658(0x04)
	float Timeline_FadeIn_HUDAlpha_66D70C7A4CF64A7FF69BBABCF89C1342; // 0x65c(0x04)
	enum class ETimelineDirection Timeline_FadeIn__Direction_66D70C7A4CF64A7FF69BBABCF89C1342; // 0x660(0x01)
	char pad_661[0x7]; // 0x661(0x07)
	struct UTimelineComponent* Timeline_FadeIn; // 0x668(0x08)
	struct AShooterCharacter* OwningCharacter; // 0x670(0x08)

	void Timeline_FadeIn__FinishedFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_FadeIn__UpdateFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_FadeOut__FinishedFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x1af5410
	void Timeline_FadeOut__UpdateFunc(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.Timeline_FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopFadeIn(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void StopFadeOut(); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.StopFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_Sarge_StimBuff_Visuals_Fade(int32_t EntryPoint); // Function FXC_Sarge_StimBuff_Visuals_Fade.FXC_Sarge_StimBuff_Visuals_Fade_C.ExecuteUbergraph_FXC_Sarge_StimBuff_Visuals_Fade // (Final|UbergraphFunction) // @ game+0x1af5410
};

