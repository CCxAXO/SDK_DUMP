// WidgetBlueprintGeneratedClass CharacterSelectTimerV2.CharacterSelectTimerV2_C
// Size: 0x3d0 (Inherited: 0x390)
struct UCharacterSelectTimerV2_C : UCharacterSelectTimerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UWidgetAnimation* NotSelectedAlert_anim; // 0x398(0x08)
	struct UWidgetAnimation* OnNotSelectedAlertCancelled_Event_anim; // 0x3a0(0x08)
	struct UWidgetAnimation* NotSelectedAlertIntro_anim; // 0x3a8(0x08)
	struct UTextBlock* MapText; // 0x3b0(0x08)
	struct UImage* ModeIcon; // 0x3b8(0x08)
	struct UTextBlock* ModeQueueText; // 0x3c0(0x08)
	struct UTextBlock* TimerText; // 0x3c8(0x08)

	void PreConstruct(bool IsDesignTime); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateMapText(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.UpdateMapText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateModeIcon(struct UObject* ImageToSet); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.UpdateModeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateModeQueueText(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.UpdateModeQueueText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimerTextBox(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.SetTimerTextBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnNotSelectedAlert_Event(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.OnNotSelectedAlert_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNotSelectedAlertCancelled_Event(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.OnNotSelectedAlertCancelled_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNotSelectedAlert_IntroAnim_finished(); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.OnNotSelectedAlert_IntroAnim_finished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterSelectTimerV2(int32_t EntryPoint); // Function CharacterSelectTimerV2.CharacterSelectTimerV2_C.ExecuteUbergraph_CharacterSelectTimerV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

