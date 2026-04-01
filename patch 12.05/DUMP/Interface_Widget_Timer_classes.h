// BlueprintGeneratedClass Interface_Widget_Timer.Interface_Widget_Timer_C
// Size: 0x30 (Inherited: 0x30)
struct UInterface_Widget_Timer_C : UInterface {

	void SetTimerSubText(struct FText TimerSubText); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.SetTimerSubText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnpauseAutomaticTimer(); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.UnpauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PauseAutomaticTimer(); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.PauseAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimerText(struct FText TimerText); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.SetTimerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupAutomaticTimer(double MaxTime, double CurrentTime, bool AutomaticallyRemove, struct FText TimerText, struct FText TimerSubText, bool ShowExpireWarning, bool FillBar); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.SetupAutomaticTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTimerPercent(double NewPercent); // Function Interface_Widget_Timer.Interface_Widget_Timer_C.UpdateTimerPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

