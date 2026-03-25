// WidgetBlueprintGeneratedClass WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C
// Size: 0x349 (Inherited: 0x318)
struct UWBP_BackgroundDimmer_Base_C : UUserWidget {
	struct UWidgetAnimation* TransitionAnimation; // 0x318(0x08)
	struct FMulticastInlineDelegate OnDimmerPressed; // 0x320(0x10)
	bool HideOnInitialize; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	double ShowDuration; // 0x338(0x08)
	double HideDuration; // 0x340(0x08)
	bool bDimmerIsActive; // 0x348(0x01)

	void DimmerIsActive(bool& bDimmerIsActive); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.DimmerIsActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPlaybackSpeed(double Duration, double& PlaybackSpeed); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.GetPlaybackSpeed // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayTransitionAnimation(struct UWidgetAnimation* Animation, double StartAtTime, enum class EUMGSequencePlayMode PlayMode, bool bSkipToEnd, double PlaybackSpeed); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.PlayTransitionAnimation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideDimmer(bool bPlayAnimation); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.HideDimmer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowDimmer(bool bPlayAnimation); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.ShowDimmer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UWidgetAnimation* TransitionAnimation); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDimmerPressed__DelegateSignature(); // Function WBP_BackgroundDimmer_Base.WBP_BackgroundDimmer_Base_C.OnDimmerPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

