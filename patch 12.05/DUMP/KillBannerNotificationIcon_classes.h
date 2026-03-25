// WidgetBlueprintGeneratedClass KillBannerNotificationIcon.KillBannerNotificationIcon_C
// Size: 0x388 (Inherited: 0x368)
struct UKillBannerNotificationIcon_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UOverlay* BannerHolder; // 0x370(0x08)
	struct UKillBanner_Base_C* KillBanner; // 0x378(0x08)
	struct UKillBannerData_Parent_C* Fallbackdata; // 0x380(0x08)

	void UpdateKillBannersEnabled(); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.UpdateKillBannersEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetFallbackSettings(struct FKillBannerStruct& KillBannerStruct); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.GetFallbackSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAnyPlayerKilled(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.OnAnyPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnKillBannerShowUpdated(); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.OnKillBannerShowUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayEditorPreview(); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.DisplayEditorPreview // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleKillBannerFinishedPlaying(); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.HandleKillBannerFinishedPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KillBannerNotificationIcon(int32_t EntryPoint); // Function KillBannerNotificationIcon.KillBannerNotificationIcon_C.ExecuteUbergraph_KillBannerNotificationIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

