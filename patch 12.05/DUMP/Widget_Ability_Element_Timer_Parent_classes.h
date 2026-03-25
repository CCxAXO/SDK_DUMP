// WidgetBlueprintGeneratedClass Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C
// Size: 0x391 (Inherited: 0x320)
struct UWidget_Ability_Element_Timer_Parent_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	bool AutomaticTimerSet; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	double MaxTime; // 0x330(0x08)
	double StartingTime; // 0x338(0x08)
	bool AutoRemove; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	double TimeRemaining; // 0x348(0x08)
	bool ExpireWarningActived; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FMulticastInlineDelegate ExpireWarningActive; // 0x358(0x10)
	struct FMulticastInlineDelegate TimerComplete; // 0x368(0x10)
	bool ShowExpireWarning; // 0x378(0x01)
	bool FillBar; // 0x379(0x01)
	bool IsPausedForMatchTimeout; // 0x37a(0x01)
	bool AutomaticTimerIsPaused; // 0x37b(0x01)
	char pad_37C[0x4]; // 0x37c(0x04)
	double PauseStartTime; // 0x380(0x08)
	double TotalPauseTime; // 0x388(0x08)
	bool HasTickedAutomaticTimer; // 0x390(0x01)

	bool CheckExpiring(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.CheckExpiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetTimeRemaining(double TimeRemaining); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FText GetTimeRemainingText(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.GetTimeRemainingText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	double GetProgressBarPercent(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.GetProgressBarPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateTimerPercent(double NewPercent); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.UpdateTimerPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimerText(struct FText TimerText); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetTimerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimerSubText(struct FText TimerSubText); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetTimerSubText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupAutomaticTimer(double MaxTime, double CurrentTime, bool AutomaticallyRemove, struct FText TimerText, struct FText TimerSubText, bool ShowExpireWarning, bool FillBar); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.SetupAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExpireWarningActivated(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.ExpireWarningActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCinemtaticModeChanged(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.OnCinemtaticModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Handle Timeout State Changed(enum class EAresMatchTimeoutState TimeoutState, float Duration); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.Handle Timeout State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UnpauseAutomaticTimer(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.UnpauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PauseAutomaticTimer(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.PauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Element_Timer_Parent(int32_t EntryPoint); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.ExecuteUbergraph_Widget_Ability_Element_Timer_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void TimerComplete__DelegateSignature(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.TimerComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExpireWarningActive__DelegateSignature(); // Function Widget_Ability_Element_Timer_Parent.Widget_Ability_Element_Timer_Parent_C.ExpireWarningActive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

