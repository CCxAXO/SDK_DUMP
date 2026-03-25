// WidgetBlueprintGeneratedClass Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C
// Size: 0x3b8 (Inherited: 0x391)
struct UWidget_Ability_Element_Timer_C : UWidget_Ability_Element_Timer_Parent_C {
	char pad_391[0x7]; // 0x391(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* ClockExpiring; // 0x3a0(0x08)
	struct UProgressBar* ProgressBar_1; // 0x3a8(0x08)
	struct UTextBlock* TimeRemaningText; // 0x3b0(0x08)

	void UpdateTimerPercent(double NewPercent); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.UpdateTimerPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimeRemaining(double TimeRemaining); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.SetTimeRemaining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExpireWarningActivated(); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.ExpireWarningActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_Ability_Element_Timer(int32_t EntryPoint); // Function Widget_Ability_Element_Timer.Widget_Ability_Element_Timer_C.ExecuteUbergraph_Widget_Ability_Element_Timer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

