// WidgetBlueprintGeneratedClass WBP_AssistBanner.WBP_AssistBanner_C
// Size: 0x458 (Inherited: 0x330)
struct UWBP_AssistBanner_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* AssistAnim; // 0x338(0x08)
	struct UOverlay* AssistBanner; // 0x340(0x08)
	struct UImage* AssistIcon; // 0x348(0x08)
	struct UOverlay* BannerHolder; // 0x350(0x08)
	struct UScaleBox* BannerScaleBox; // 0x358(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x360(0x08)
	struct FTimerHandle StopTimer; // 0x368(0x08)
	struct FSlateBrush DefaultAssistIcon; // 0x370(0xd0)
	struct UAkAudioEvent* SoundAppear; // 0x440(0x08)
	bool AssistBannerEnabled; // 0x448(0x01)
	bool IsKillBannerVisible; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct UAresAudioComponent* AppearSoundAudioComponent; // 0x450(0x08)

	void StopAssistBannerSound(); // Function WBP_AssistBanner.WBP_AssistBanner_C.StopAssistBannerSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Start Assist Banner Animation(); // Function WBP_AssistBanner.WBP_AssistBanner_C.Start Assist Banner Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Play Assist Banner Sound(); // Function WBP_AssistBanner.WBP_AssistBanner_C.Play Assist Banner Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopAssistBannerAnimation(); // Function WBP_AssistBanner.WBP_AssistBanner_C.StopAssistBannerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsPlayerAnAssister(struct TArray<struct FAresAssist>& Assists, bool& Assister, struct AAresEquippable*& AssistingEquippableClass); // Function WBP_AssistBanner.WBP_AssistBanner_C.IsPlayerAnAssister // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Assist Banners Enabled(); // Function WBP_AssistBanner.WBP_AssistBanner_C.Update Assist Banners Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function WBP_AssistBanner.WBP_AssistBanner_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnyPlayerKilled(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function WBP_AssistBanner.WBP_AssistBanner_C.OnAnyPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerKilledEnemy(); // Function WBP_AssistBanner.WBP_AssistBanner_C.OnPlayerKilledEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function WBP_AssistBanner.WBP_AssistBanner_C.OnPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCinematicModeUpdated_Event_1(); // Function WBP_AssistBanner.WBP_AssistBanner_C.OnCinematicModeUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function WBP_AssistBanner.WBP_AssistBanner_C.GameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnKillBannerVisibilityChanged(bool bIsVisible); // Function WBP_AssistBanner.WBP_AssistBanner_C.OnKillBannerVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_AssistBanner(int32_t EntryPoint); // Function WBP_AssistBanner.WBP_AssistBanner_C.ExecuteUbergraph_WBP_AssistBanner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

