// WidgetBlueprintGeneratedClass TimerHUDElement.TimerHUDElement_C
// Size: 0x3c8 (Inherited: 0x330)
struct UTimerHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* BackgroundImage; // 0x338(0x08)
	struct UImage* Center; // 0x340(0x08)
	struct UTextBlock* CustomLabel; // 0x348(0x08)
	struct UVerticalBox* CustomLabelContainer; // 0x350(0x08)
	struct UCommonLazyImage* InfinityImage; // 0x358(0x08)
	struct UImage* Left; // 0x360(0x08)
	struct UImage* Right; // 0x368(0x08)
	struct UVerticalBox* Timer; // 0x370(0x08)
	struct UBorder* TimerBorder; // 0x378(0x08)
	struct UHorizontalBox* timerboundingbox; // 0x380(0x08)
	struct UTextBlock* TimerLine1; // 0x388(0x08)
	struct UTextBlock* TimerLine2; // 0x390(0x08)
	struct UWidgetSwitcher* TimerWidgetSwitcher; // 0x398(0x08)
	struct UCoordinatedHUDModel* Hud Model; // 0x3a0(0x08)
	int32_t CachedSeconds; // 0x3a8(0x04)
	int32_t CachedMilliseconds; // 0x3ac(0x04)
	int32_t CachedMinutes; // 0x3b0(0x04)
	bool PulseOn; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	double GamePhaseRemainingTime; // 0x3b8(0x08)
	struct ABaseGameState_C* BaseGameState; // 0x3c0(0x08)

	void UpdateView(); // Function TimerHUDElement.TimerHUDElement_C.UpdateView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TimerHUDElement.TimerHUDElement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TimerHUDElement.TimerHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TimerHUDElement.TimerHUDElement_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PulseTimer(); // Function TimerHUDElement.TimerHUDElement_C.PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateState(); // Function TimerHUDElement.TimerHUDElement_C.UpdateState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHUDVisibilityDataChanged(); // Function TimerHUDElement.TimerHUDElement_C.OnHUDVisibilityDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchTimerPausedChanged(bool bMatchTimerPaused); // Function TimerHUDElement.TimerHUDElement_C.OnMatchTimerPausedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TimerHUDElement(int32_t EntryPoint); // Function TimerHUDElement.TimerHUDElement_C.ExecuteUbergraph_TimerHUDElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

