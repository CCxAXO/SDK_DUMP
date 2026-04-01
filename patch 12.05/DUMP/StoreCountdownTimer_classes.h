// WidgetBlueprintGeneratedClass StoreCountdownTimer.StoreCountdownTimer_C
// Size: 0x350 (Inherited: 0x318)
struct UStoreCountdownTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCountdownTimer_C* CountdownTimer; // 0x320(0x08)
	struct UImage* Image_54; // 0x328(0x08)
	struct UTextBlock* TimerTextField; // 0x330(0x08)
	struct FText TimerText; // 0x338(0x18)

	void SetTimerLabel(); // Function StoreCountdownTimer.StoreCountdownTimer_C.SetTimerLabel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCountdown(struct FDateTime NewExpirationTime); // Function StoreCountdownTimer.StoreCountdownTimer_C.UpdateCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function StoreCountdownTimer.StoreCountdownTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function StoreCountdownTimer.StoreCountdownTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CountdownTimer_K2Node_ComponentBoundEvent_0_TimerExpired__DelegateSignature(); // Function StoreCountdownTimer.StoreCountdownTimer_C.BndEvt__CountdownTimer_K2Node_ComponentBoundEvent_0_TimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_StoreCountdownTimer(int32_t EntryPoint); // Function StoreCountdownTimer.StoreCountdownTimer_C.ExecuteUbergraph_StoreCountdownTimer // (Final|UbergraphFunction) // @ game+0x1af5410
};

