// WidgetBlueprintGeneratedClass BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C
// Size: 0x3e8 (Inherited: 0x3b8)
struct UBombPlantTimerNotificationWidget_C : UBaseTimerRingNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct FLinearColor RingColorA_Half; // 0x3c0(0x10)
	struct FLinearColor RingColorA_Full; // 0x3d0(0x10)
	double LastProgress; // 0x3e0(0x08)

	void UpdateRingColor(double CurrentValue, double MaxValue); // Function BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C.UpdateRingColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombPlantTimerNotificationWidget(int32_t EntryPoint); // Function BombPlantTimerNotificationWidget.BombPlantTimerNotificationWidget_C.ExecuteUbergraph_BombPlantTimerNotificationWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

