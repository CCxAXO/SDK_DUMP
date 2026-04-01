// WidgetBlueprintGeneratedClass Countdowntimer.CountdownTimer_C
// Size: 0x3b4 (Inherited: 0x320)
struct UCountdownTimer_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTextBlock* TimerTextBlock; // 0x328(0x08)
	struct FDateTime ExpirationDateTime; // 0x330(0x08)
	struct FMulticastInlineDelegate TimerExpired; // 0x338(0x10)
	bool HasExpired; // 0x348(0x01)
	bool UsingUTC; // 0x349(0x01)
	char pad_34A[0x2]; // 0x34a(0x02)
	int32_t HideSecondsDisplayWhenRemainingMinutesGreaterThan; // 0x34c(0x04)
	struct FSlateFontInfo Font; // 0x350(0x60)
	int32_t HideDaysDisplayWhenRemainingDaysLessThan1; // 0x3b0(0x04)

	void SetFormattedTimerValue(struct FTimespan CountdownTimeSpan); // Function Countdowntimer.CountdownTimer_C.SetFormattedTimerValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTimerDisplay(); // Function Countdowntimer.CountdownTimer_C.UpdateTimerDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRemainingDuration(struct FDateTime OffersExpirationTime); // Function Countdowntimer.CountdownTimer_C.UpdateRemainingDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Countdowntimer.CountdownTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Countdowntimer.CountdownTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CountdownTimer(int32_t EntryPoint); // Function Countdowntimer.CountdownTimer_C.ExecuteUbergraph_CountdownTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void TimerExpired__DelegateSignature(); // Function Countdowntimer.CountdownTimer_C.TimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

