// WidgetBlueprintGeneratedClass ExpirationTimer.ExpirationTimer_C
// Size: 0x371 (Inherited: 0x318)
struct UExpirationTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct URichTextBlock* ExpirationTimer; // 0x320(0x08)
	struct FDateTime ExpirationTime; // 0x328(0x08)
	bool UTC; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FTimespan UrgentTimeRemaining; // 0x338(0x08)
	bool IsUrgent; // 0x340(0x01)
	bool UseUrgentTimeRemaning; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct FMulticastInlineDelegate OnTimerExpired; // 0x348(0x10)
	bool IsRunning; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FTimerHandle TimerHandle; // 0x360(0x08)
	struct UDataTable* StyleSet; // 0x368(0x08)
	bool PrintDebugTimeRemaining; // 0x370(0x01)

	void StopTimer(); // Function ExpirationTimer.ExpirationTimer_C.StopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartTimer(); // Function ExpirationTimer.ExpirationTimer_C.StartTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUrgentTimeRemaining(struct FTimespan UrgentTimeRemaining, bool UseUrgentTimeRemaining); // Function ExpirationTimer.ExpirationTimer_C.SetUrgentTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTextStyle(struct UDataTable* TextStyleSet); // Function ExpirationTimer.ExpirationTimer_C.SetTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetExpirationTime(struct FDateTime ExpirationTime); // Function ExpirationTimer.ExpirationTimer_C.SetExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateExpirationTimer(); // Function ExpirationTimer.ExpirationTimer_C.UpdateExpirationTimer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ExpirationTimer.ExpirationTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ExpirationTimer.ExpirationTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ExpirationTimer(int32_t EntryPoint); // Function ExpirationTimer.ExpirationTimer_C.ExecuteUbergraph_ExpirationTimer // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnTimerExpired__DelegateSignature(); // Function ExpirationTimer.ExpirationTimer_C.OnTimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

