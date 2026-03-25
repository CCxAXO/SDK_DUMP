// WidgetBlueprintGeneratedClass BaseGameplayNotificationContainerWidget.BaseGameplayNotificationContainerWidget_C
// Size: 0x3c8 (Inherited: 0x3c0)
struct UBaseGameplayNotificationContainerWidget_C : UGameplayNotificationContainerHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)

	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BaseGameplayNotificationContainerWidget.BaseGameplayNotificationContainerWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function BaseGameplayNotificationContainerWidget.BaseGameplayNotificationContainerWidget_C.HandleGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function BaseGameplayNotificationContainerWidget.BaseGameplayNotificationContainerWidget_C.UpdateVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseGameplayNotificationContainerWidget(int32_t EntryPoint); // Function BaseGameplayNotificationContainerWidget.BaseGameplayNotificationContainerWidget_C.ExecuteUbergraph_BaseGameplayNotificationContainerWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

