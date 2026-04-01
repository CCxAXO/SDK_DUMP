// WidgetBlueprintGeneratedClass AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C
// Size: 0x3a0 (Inherited: 0x318)
struct UAnnotatedProgressBarNoNumerals_BombTest_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* bar_left; // 0x320(0x08)
	struct UImage* bar_right; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UImage* blueGel; // 0x338(0x08)
	struct UImage* half; // 0x340(0x08)
	struct UHorizontalBox* HalfTicks; // 0x348(0x08)
	struct UImage* Image_134; // 0x350(0x08)
	struct UImage* Image_136; // 0x358(0x08)
	struct UImage* Image_137; // 0x360(0x08)
	struct UImage* Image_138; // 0x368(0x08)
	struct UProgressBar* ProgressBar_1; // 0x370(0x08)
	struct UImage* redGel; // 0x378(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x380(0x10)
	double Position Begin; // 0x390(0x08)
	double Position Factor; // 0x398(0x08)

	void SetProgress(double CurrentValue, double MaxValue); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.SetProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AnnotatedProgressBarNoNumerals_BombTest(int32_t EntryPoint); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.ExecuteUbergraph_AnnotatedProgressBarNoNumerals_BombTest // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void NewEventDispatcher_0__DelegateSignature(); // Function AnnotatedProgressBarNoNumerals_BombTest.AnnotatedProgressBarNoNumerals_BombTest_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

