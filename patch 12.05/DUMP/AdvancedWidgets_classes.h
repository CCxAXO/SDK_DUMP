// Class AdvancedWidgets.RadialSlider
// Size: 0x840 (Inherited: 0x1b8)
struct URadialSlider : UWidget {
	float Value; // 0x1b8(0x04)
	struct FDelegate ValueDelegate; // 0x1bc(0x14)
	bool bUseCustomDefaultValue; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float CustomDefaultValue; // 0x1d4(0x04)
	struct FRuntimeFloatCurve SliderRange; // 0x1d8(0x88)
	struct TArray<float> ValueTags; // 0x260(0x10)
	float SliderHandleStartAngle; // 0x270(0x04)
	float SliderHandleEndAngle; // 0x274(0x04)
	float AngularOffset; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FVector2D HandStartEndRatio; // 0x280(0x10)
	struct FSliderStyle WidgetStyle; // 0x290(0x500)
	struct FLinearColor SliderBarColor; // 0x790(0x10)
	struct FLinearColor SliderProgressColor; // 0x7a0(0x10)
	struct FLinearColor SliderHandleColor; // 0x7b0(0x10)
	struct FLinearColor CenterBackgroundColor; // 0x7c0(0x10)
	bool Locked; // 0x7d0(0x01)
	bool MouseUsesStep; // 0x7d1(0x01)
	bool RequiresControllerLock; // 0x7d2(0x01)
	char pad_7D3[0x1]; // 0x7d3(0x01)
	float StepSize; // 0x7d4(0x04)
	bool IsFocusable; // 0x7d8(0x01)
	bool UseVerticalDrag; // 0x7d9(0x01)
	bool ShowSliderHandle; // 0x7da(0x01)
	bool ShowSliderHand; // 0x7db(0x01)
	char pad_7DC[0x4]; // 0x7dc(0x04)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x7e0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x7f0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x800(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x810(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x820(0x10)
	char pad_830[0x10]; // 0x830(0x10)

	void SetValueTags(struct TArray<float>& InValueTags); // Function AdvancedWidgets.RadialSlider.SetValueTags // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8410740
	void SetValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8410cf0
	void SetUseVerticalDrag(bool InUseVerticalDrag); // Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x840f850
	void SetStepSize(float InValue); // Function AdvancedWidgets.RadialSlider.SetStepSize // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x840ff50
	void SetSliderRange(struct FRuntimeFloatCurve& InSliderRange); // Function AdvancedWidgets.RadialSlider.SetSliderRange // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8410890
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderProgressColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x840fc50
	void SetSliderHandleStartAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8410620
	void SetSliderHandleEndAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8410500
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x840fad0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderBarColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x840fdd0
	void SetShowSliderHandle(bool InShowSliderHandle); // Function AdvancedWidgets.RadialSlider.SetShowSliderHandle // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x840f750
	void SetShowSliderHand(bool InShowSliderHand); // Function AdvancedWidgets.RadialSlider.SetShowSliderHand // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x840f650
	void SetLocked(bool InValue); // Function AdvancedWidgets.RadialSlider.SetLocked // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8410090
	void SetHandStartEndRatio(struct FVector2D InValue); // Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x84102a0
	void SetCustomDefaultValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x8410b80
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x840f950
	void SetAngularOffset(float InValue); // Function AdvancedWidgets.RadialSlider.SetAngularOffset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x84103f0
	float GetValue(); // Function AdvancedWidgets.RadialSlider.GetValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8410f70
	float GetNormalizedSliderHandlePosition(); // Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8410e60
	float GetCustomDefaultValue(); // Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8410eb0
};

