// WidgetBlueprintGeneratedClass KillBannerAnnouncement.KillBannerAnnouncement_C
// Size: 0x369 (Inherited: 0x330)
struct UKillBannerAnnouncement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UOverlay* BannerHolder; // 0x338(0x08)
	struct UScaleBox* BannerScaleBox; // 0x340(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x348(0x08)
	struct UKillBanner_Base_C* KillBanner; // 0x350(0x08)
	struct UKillBannerData_Parent_C* Fallbackdata; // 0x358(0x08)
	struct AAresEquippable* Killing Equippable; // 0x360(0x08)
	bool isSameEquippable; // 0x368(0x01)

	void UpdateKillBannersEnabled(); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.UpdateKillBannersEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetFallbackSettings(struct FKillBannerStruct& KillBannerStruct); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.GetFallbackSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnyPlayerKilled(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.OnAnyPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated_Event_1(); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.OnCinematicModeUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnKillBannerShowUpdated(); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.OnKillBannerShowUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.GameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.OnPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Manual Killbanner Configuration(struct UKillBannerData* KillBannerUIData, int32_t KillCount, int32_t MaxKills, bool WasHeadshot, bool bIsPreview, struct TArray<struct FAresAssist>& Assisters, struct AAresEquippable* Equippable); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.Manual Killbanner Configuration // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearCurrentEquippable(); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.ClearCurrentEquippable // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnKillBannerVisibilityChanged(enum class ESlateVisibility InVisibility); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.OnKillBannerVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KillBannerAnnouncement(int32_t EntryPoint); // Function KillBannerAnnouncement.KillBannerAnnouncement_C.ExecuteUbergraph_KillBannerAnnouncement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

