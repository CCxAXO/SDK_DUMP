// BlueprintGeneratedClass FXC_CorpseReplace.FXC_CorpseReplace_C
// Size: 0x6c0 (Inherited: 0x630)
struct AFXC_CorpseReplace_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x638(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	float Timeline_0_FresnelFadeValue_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x650(0x04)
	float Timeline_0_FadeAmount_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x654(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A56D1F9D4F84763B2046BF87AE1F10B1; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct UTimelineComponent* Timeline_1; // 0x660(0x08)
	double SwapDelay; // 0x668(0x08)
	double EffectStartTime; // 0x670(0x08)
	double MinimapPulseTime; // 0x678(0x08)
	struct UCurveFloat* minimapDeadIconPulseCurve ; // 0x680(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x688(0x08)
	double AliveFresnelIntensity; // 0x690(0x08)
	struct FTimerHandle SwapCorpseTimer; // 0x698(0x08)
	double DefaultSwapDelay; // 0x6a0(0x08)
	double DifferenceFromDefaultSwapDelay; // 0x6a8(0x08)
	double AdditionalTimeOnSwap; // 0x6b0(0x08)
	struct FTimerHandle FinisherHideCorpseTimer; // 0x6b8(0x08)

	void ClearFinisherTimers(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ClearFinisherTimers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCharacterVisibility(bool NewVisibility); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.UpdateCharacterVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckForFinisherFXCs(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.CheckForFinisherFXCs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTimer(double AdditionalTime); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Timeline_0__FinishedFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1b42740
	void Timeline_0__UpdateFunc(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1b42740
	void SwapCorpse(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.SwapCorpse // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnExploited_Event_1(struct UCorpseExploitationComponent* ExploitationComponent); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.OnExploited_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnTeamChange(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.OnTeamChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Finisher_HideBody(bool HideCorpse, double HideCorpseTime, double AdditionalDeathSwapDelay); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Finisher_HideBody // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Event_UpdateMeshVisibility(); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.Event_UpdateMeshVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_CorpseReplace(int32_t EntryPoint); // Function FXC_CorpseReplace.FXC_CorpseReplace_C.ExecuteUbergraph_FXC_CorpseReplace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

