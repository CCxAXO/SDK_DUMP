// WidgetBlueprintGeneratedClass BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C
// Size: 0x3b8 (Inherited: 0x368)
struct UBaseTimerRingNotificationWidget_C : UBaseGameplayNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UImage* TimerRing; // 0x370(0x08)
	double PreviewFillScalar; // 0x378(0x08)
	struct FLinearColor RingColorA; // 0x380(0x10)
	struct UMaterialInstanceDynamic* RingMaterialInstance; // 0x390(0x08)
	struct FLinearColor RingColorB; // 0x398(0x10)
	struct FLinearColor RingColorC; // 0x3a8(0x10)

	void SetTimerProgress(double CurrentValue, double MaxValue); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.SetTimerProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseTimerRingNotificationWidget(int32_t EntryPoint); // Function BaseTimerRingNotificationWidget.BaseTimerRingNotificationWidget_C.ExecuteUbergraph_BaseTimerRingNotificationWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

