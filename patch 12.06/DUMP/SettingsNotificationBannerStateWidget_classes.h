// WidgetBlueprintGeneratedClass SettingsNotificationBannerStateWidget.SettingsNotificationBannerStateWidget_C
// Size: 0x3e8 (Inherited: 0x394)
struct USettingsNotificationBannerStateWidget_C : USettingsNotificationBannerWidget_C {
	char pad_394[0x4]; // 0x394(0x04)
	struct TMap<enum class SettingsNotificationState, struct FSettingsNotificationBannerAppearance> StateToNotificationAppearance; // 0x398(0x50)

	void PlayNotification(struct FText Message, enum class SettingsNotificationState NotifyState); // Function SettingsNotificationBannerStateWidget.SettingsNotificationBannerStateWidget_C.PlayNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

