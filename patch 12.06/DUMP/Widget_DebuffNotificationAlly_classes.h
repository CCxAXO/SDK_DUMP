// WidgetBlueprintGeneratedClass Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C
// Size: 0x530 (Inherited: 0x330)
struct UWidget_DebuffNotificationAlly_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* OnSuppression_v2; // 0x338(0x08)
	struct UWidgetAnimation* OnSuppression; // 0x340(0x08)
	struct UImage* DebuffSourceImage; // 0x348(0x08)
	struct UHUD_DebuffNotification_Container_C* HUD_DebuffNotification_Container; // 0x350(0x08)
	struct UOverlay* Overlay_157; // 0x358(0x08)
	struct UImage* pulseborder; // 0x360(0x08)
	double X Minimap Offset; // 0x368(0x08)
	double Y Minimap Offset; // 0x370(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x378(0x08)
	int32_t LastActivePortraitCount; // 0x380(0x04)
	char pad_384[0xc]; // 0x384(0x0c)
	struct FSlateBrush EmptySourceIcon; // 0x390(0xd0)
	struct FSlateBrush CachedSourceIcon; // 0x460(0xd0)

	void SetupHUDModel(struct UCoordinatedHUDModel* NewHUDModel); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.SetupHUDModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReinitializeWidgets(); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.ReinitializeWidgets // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Set Widget Position(double Scale Multiplier); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.Set Widget Position // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Adjust Widget Position(enum class EAresFloatSettingName SettingName, float OldValue, float NewValue); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.Adjust Widget Position // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNeedPortraitReset(); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.OnNeedPortraitReset // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHUDPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.OnHUDPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_DebuffNotificationAlly(int32_t EntryPoint); // Function Widget_DebuffNotificationAlly.Widget_DebuffNotificationAlly_C.ExecuteUbergraph_Widget_DebuffNotificationAlly // (Final|UbergraphFunction) // @ game+0x1b42740
};

