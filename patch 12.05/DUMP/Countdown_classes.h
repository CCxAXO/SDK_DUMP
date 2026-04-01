// WidgetBlueprintGeneratedClass Countdown.Countdown_C
// Size: 0x338 (Inherited: 0x318)
struct UCountdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_44; // 0x320(0x08)
	struct UTextBlock* Timer; // 0x328(0x08)
	struct UPregameViewModel* ViewModel; // 0x330(0x08)

	void UpdateTimer(float NewParam); // Function Countdown.Countdown_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPregameViewModel* ViewModel); // Function Countdown.Countdown_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Countdown.Countdown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Countdown(int32_t EntryPoint); // Function Countdown.Countdown_C.ExecuteUbergraph_Countdown // (Final|UbergraphFunction) // @ game+0x1af5410
};

