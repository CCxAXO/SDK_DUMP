// WidgetBlueprintGeneratedClass WBP_CharacterSelectCountdownTimer.WBP_CharacterSelectCountdownTimer_C
// Size: 0x330 (Inherited: 0x318)
struct UWBP_CharacterSelectCountdownTimer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* NotSelectedAlertAnimation; // 0x320(0x08)
	struct UAresCommonText* TimerText; // 0x328(0x08)

	void PlayNotSelectedAnimation(); // Function WBP_CharacterSelectCountdownTimer.WBP_CharacterSelectCountdownTimer_C.PlayNotSelectedAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayBlinkingAnimation(); // Function WBP_CharacterSelectCountdownTimer.WBP_CharacterSelectCountdownTimer_C.PlayBlinkingAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAnimations(); // Function WBP_CharacterSelectCountdownTimer.WBP_CharacterSelectCountdownTimer_C.StopAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_CharacterSelectCountdownTimer(int32_t EntryPoint); // Function WBP_CharacterSelectCountdownTimer.WBP_CharacterSelectCountdownTimer_C.ExecuteUbergraph_WBP_CharacterSelectCountdownTimer // (Final|UbergraphFunction) // @ game+0x1af5410
};

