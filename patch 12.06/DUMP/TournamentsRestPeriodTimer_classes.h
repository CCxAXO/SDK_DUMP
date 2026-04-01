// WidgetBlueprintGeneratedClass TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C
// Size: 0x360 (Inherited: 0x320)
struct UTournamentsRestPeriodTimer_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTextBlock* TimerText; // 0x328(0x08)
	struct UPartyModel* PartyModel; // 0x330(0x08)
	bool IsRestPeriod; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct FDateTime StageStartTime; // 0x340(0x08)
	struct FTimerHandle TimerHandle; // 0x348(0x08)
	struct FMulticastInlineDelegate RestPeriodOver; // 0x350(0x10)

	void SetSize(int32_t FontSize); // Function TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C.SetSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FDateTime StageStartTime); // Function TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTimeText(); // Function TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C.UpdateTimeText // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInit(); // Function TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C.OnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsRestPeriodTimer(int32_t EntryPoint); // Function TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C.ExecuteUbergraph_TournamentsRestPeriodTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void RestPeriodOver__DelegateSignature(); // Function TournamentsRestPeriodTimer.TournamentsRestPeriodTimer_C.RestPeriodOver__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

