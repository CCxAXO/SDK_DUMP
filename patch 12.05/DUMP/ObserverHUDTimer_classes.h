// WidgetBlueprintGeneratedClass ObserverHUDTimer.ObserverHUDTimer_C
// Size: 0x375 (Inherited: 0x330)
struct UObserverHUDTimer_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* backgroundimage2; // 0x338(0x08)
	struct UHorizontalBox* timerboundingbox; // 0x340(0x08)
	struct UTextBlock* TimerLine1; // 0x348(0x08)
	struct UTextBlock* TimerLine2; // 0x350(0x08)
	struct UBorder* TimerTextBorder; // 0x358(0x08)
	struct UCoordinatedHUDModel* Hud Model; // 0x360(0x08)
	int32_t CachedSeconds; // 0x368(0x04)
	int32_t CachedMilliseconds; // 0x36c(0x04)
	int32_t CachedMinutes; // 0x370(0x04)
	bool PulseOn; // 0x374(0x01)

	void UpdateView(); // Function ObserverHUDTimer.ObserverHUDTimer_C.UpdateView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function ObserverHUDTimer.ObserverHUDTimer_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PulseTimer(); // Function ObserverHUDTimer.ObserverHUDTimer_C.PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ObserverHUDTimer.ObserverHUDTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function ObserverHUDTimer.ObserverHUDTimer_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ObserverHUDTimer.ObserverHUDTimer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ObserverHUDTimer(int32_t EntryPoint); // Function ObserverHUDTimer.ObserverHUDTimer_C.ExecuteUbergraph_ObserverHUDTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

