// WidgetBlueprintGeneratedClass BombDefuseNotificationTimer.BombDefuseNotificationTimer_C
// Size: 0x3e8 (Inherited: 0x3b8)
struct UBombDefuseNotificationTimer_C : UBaseTimerRingNotificationWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct FLinearColor RingColorA_Half; // 0x3c0(0x10)
	struct FLinearColor RingColorA_Full; // 0x3d0(0x10)
	double LastProgress; // 0x3e0(0x08)

	void UpdateRingColor(double CurrentValue, double MaxValue); // Function BombDefuseNotificationTimer.BombDefuseNotificationTimer_C.UpdateRingColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BombDefuseNotificationTimer.BombDefuseNotificationTimer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BombDefuseNotificationTimer(int32_t EntryPoint); // Function BombDefuseNotificationTimer.BombDefuseNotificationTimer_C.ExecuteUbergraph_BombDefuseNotificationTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

