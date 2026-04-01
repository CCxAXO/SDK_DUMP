// WidgetBlueprintGeneratedClass TextBannerNotificationWidget.TextBannerNotificationWidget_C
// Size: 0x3ac (Inherited: 0x368)
struct UTextBannerNotificationWidget_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UImage* Background; // 0x370(0x08)
	struct UTextBlock* Text; // 0x378(0x08)
	struct FText BannerText; // 0x380(0x18)
	struct FSlateColor BackgroundColor; // 0x398(0x14)

	void PreConstruct(bool IsDesignTime); // Function TextBannerNotificationWidget.TextBannerNotificationWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TextBannerNotificationWidget(int32_t EntryPoint); // Function TextBannerNotificationWidget.TextBannerNotificationWidget_C.ExecuteUbergraph_TextBannerNotificationWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

