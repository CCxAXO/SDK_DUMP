// WidgetBlueprintGeneratedClass TimerHUDElement_v2.TimerHUDElement_v2_C
// Size: 0x3a0 (Inherited: 0x330)
struct UTimerHUDElement_v2_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* BackgroundImage; // 0x338(0x08)
	struct UImage* Center; // 0x340(0x08)
	struct UImage* Left; // 0x348(0x08)
	struct UImage* Right; // 0x350(0x08)
	struct UBorder* TimerBorder; // 0x358(0x08)
	struct UHorizontalBox* timerboundingbox; // 0x360(0x08)
	struct UTextBlock* TimerLine1; // 0x368(0x08)
	struct UTextBlock* TimerLine2; // 0x370(0x08)
	struct UCoordinatedHUDModel* Hud Model; // 0x378(0x08)
	int32_t CachedSeconds; // 0x380(0x04)
	int32_t CachedMilliseconds; // 0x384(0x04)
	int32_t CachedMinutes; // 0x388(0x04)
	bool PulseOn; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct ABaseGameState_C* Base Game State; // 0x390(0x08)
	double Game Phase Remaining Time; // 0x398(0x08)

	void UpdateView(); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.UpdateView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PulseTimer(); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.PulseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TimerHUDElement_v2(int32_t EntryPoint); // Function TimerHUDElement_v2.TimerHUDElement_v2_C.ExecuteUbergraph_TimerHUDElement_v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

