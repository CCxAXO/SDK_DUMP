// WidgetBlueprintGeneratedClass SettingsNotificationBannerWidget.SettingsNotificationBannerWidget_C
// Size: 0x394 (Inherited: 0x318)
struct USettingsNotificationBannerWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* FadeOut; // 0x320(0x08)
	struct UWidgetAnimation* FadeIn; // 0x328(0x08)
	struct UBorder* Border_Color; // 0x330(0x08)
	struct UImage* Icon; // 0x338(0x08)
	struct UAresCommonText* Message; // 0x340(0x08)
	struct UTexture2D* NotificationIcon; // 0x348(0x08)
	struct FText NotificationMessage; // 0x350(0x18)
	struct FLinearColor BackgroundColor; // 0x368(0x10)
	double PopupDuration; // 0x378(0x08)
	struct FSlateColor NotificationIconTint; // 0x380(0x14)

	void UpdateNotification(struct UTexture2D* Icon, struct FText Message, struct FLinearColor BackgroundColor, struct FSlateColor IconTint); // Function SettingsNotificationBannerWidget.SettingsNotificationBannerWidget_C.UpdateNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SettingsNotificationBannerWidget.SettingsNotificationBannerWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayNotificationEvent(); // Function SettingsNotificationBannerWidget.SettingsNotificationBannerWidget_C.PlayNotificationEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SettingsNotificationBannerWidget(int32_t EntryPoint); // Function SettingsNotificationBannerWidget.SettingsNotificationBannerWidget_C.ExecuteUbergraph_SettingsNotificationBannerWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

