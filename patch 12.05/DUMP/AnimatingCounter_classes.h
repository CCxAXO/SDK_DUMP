// WidgetBlueprintGeneratedClass AnimatingCounter.AnimatingCounter_C
// Size: 0x360 (Inherited: 0x318)
struct UAnimatingCounter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct URichTextBlock* CounterText; // 0x320(0x08)
	bool IsAnimating; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	int32_t AnimatingFrom; // 0x32c(0x04)
	int32_t AnimatingTo; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FDateTime AnimatingSince; // 0x338(0x08)
	struct FDateTime AnimatingUntil; // 0x340(0x08)
	struct FText TextFormat; // 0x348(0x18)

	void TickAnimation(); // Function AnimatingCounter.AnimatingCounter_C.TickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAmountInternal(int32_t NewAmount); // Function AnimatingCounter.AnimatingCounter_C.SetAmountInternal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAmount(int32_t Amount); // Function AnimatingCounter.AnimatingCounter_C.SetAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginAnimation(int32_t From, int32_t To, struct FTimespan Duration); // Function AnimatingCounter.AnimatingCounter_C.BeginAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AnimatingCounter.AnimatingCounter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnimatingCounter.AnimatingCounter_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AnimatingCounter(int32_t EntryPoint); // Function AnimatingCounter.AnimatingCounter_C.ExecuteUbergraph_AnimatingCounter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

