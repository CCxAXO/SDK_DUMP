// WidgetBlueprintGeneratedClass TransitionTriggers.TransitionTriggers_C
// Size: 0x340 (Inherited: 0x320)
struct UTransitionTriggers_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* BlackFade; // 0x328(0x08)
	struct UWidgetAnimation* FlashIn1; // 0x330(0x08)
	struct UImage* MaterialFlash; // 0x338(0x08)

	void SequenceEvent__ENTRYPOINTTransitionTriggers(); // Function TransitionTriggers.TransitionTriggers_C.SequenceEvent__ENTRYPOINTTransitionTriggers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayFadeBlack(); // Function TransitionTriggers.TransitionTriggers_C.PlayFadeBlack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function TransitionTriggers.TransitionTriggers_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayFlashIn1(); // Function TransitionTriggers.TransitionTriggers_C.PlayFlashIn1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TransitionTriggers.TransitionTriggers_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TransitionTriggers(int32_t EntryPoint); // Function TransitionTriggers.TransitionTriggers_C.ExecuteUbergraph_TransitionTriggers // (Final|UbergraphFunction) // @ game+0x1af5410
};

