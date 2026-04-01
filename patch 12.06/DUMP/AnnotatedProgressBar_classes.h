// WidgetBlueprintGeneratedClass AnnotatedProgressBar.AnnotatedProgressBar_C
// Size: 0x38a (Inherited: 0x318)
struct UAnnotatedProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* blueGel; // 0x328(0x08)
	struct UImage* half; // 0x330(0x08)
	struct UHorizontalBox* HalfTicks; // 0x338(0x08)
	struct UInvalidationBox* InvalidationBox_AnnotatedProgressBar; // 0x340(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x348(0x08)
	struct UProgressBar* ProgressBar_1; // 0x350(0x08)
	struct UOverlay* ProgressBarContainer; // 0x358(0x08)
	struct UImage* redGel; // 0x360(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x368(0x10)
	double Position Begin; // 0x378(0x08)
	double Position Factor; // 0x380(0x08)
	bool ShowNumerals; // 0x388(0x01)
	bool ShowProgressIndicators; // 0x389(0x01)

	void SetInvalidationBoxCanCache(bool NewParam); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.SetInvalidationBoxCanCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetProgress(double CurrentValue, double MaxValue); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AnnotatedProgressBar(int32_t EntryPoint); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.ExecuteUbergraph_AnnotatedProgressBar // (Final|UbergraphFunction) // @ game+0x1b42740
	void NewEventDispatcher_0__DelegateSignature(); // Function AnnotatedProgressBar.AnnotatedProgressBar_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

