// WidgetBlueprintGeneratedClass WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C
// Size: 0x4f8 (Inherited: 0x3e0)
struct UWBP_Template_AnimatedButtonContent_Social_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_StateTransition; // 0x3e8(0x08)
	struct UNamedSlot* NamedSlot_Content; // 0x3f0(0x08)
	struct UAresCommonButton* Button; // 0x3f8(0x08)
	double Interpolation; // 0x400(0x08)
	double PreviousScale; // 0x408(0x08)
	double CurrentScale; // 0x410(0x08)
	double DefaultScale; // 0x418(0x08)
	double SelectedScale; // 0x420(0x08)
	double HoveredScale; // 0x428(0x08)
	double PressedScale; // 0x430(0x08)
	double TargetScale; // 0x438(0x08)
	double TransitionDuration; // 0x440(0x08)
	struct UCurveFloat* TransitionCurve; // 0x448(0x08)
	struct FVector2D DefaultTranslation; // 0x450(0x10)
	struct FVector2D SelectedTranslation; // 0x460(0x10)
	struct FVector2D HoveredTranslation; // 0x470(0x10)
	struct FVector2D PressedTranslation; // 0x480(0x10)
	struct FVector2D PreviousTranslation; // 0x490(0x10)
	struct FVector2D CurrentTranslation; // 0x4a0(0x10)
	struct FVector2D TargetTranslation; // 0x4b0(0x10)
	double DefaultOpacity; // 0x4c0(0x08)
	double SelectedOpacity; // 0x4c8(0x08)
	double HoveredOpacity; // 0x4d0(0x08)
	double PressedOpacity; // 0x4d8(0x08)
	double PreviousOpacity; // 0x4e0(0x08)
	double CurrentOpacity; // 0x4e8(0x08)
	double TargetOpacity; // 0x4f0(0x08)

	void ApplyCurrentAppearance(); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.ApplyCurrentAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCurrentAppearance(); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.UpdateCurrentAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInterpolation(double NewValue); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.SetInterpolation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTargetValues(struct FVector2D& OutTargetTranslation, double& OutTargetScale, double& OutTargetOpacity); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.GetTargetValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTargetAppearance(enum class EAresSocialTransitionType TransitionType); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.UpdateTargetAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindButton(bool bDoBind); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.BindOrUnbindButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetButton(struct UAresCommonButton* InButton); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.SetButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInteractionStateChanged(struct UCommonButtonBase* InButton); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.OnInteractionStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectedChanged(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.OnSelectedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Template_AnimatedButtonContent_Social(int32_t EntryPoint); // Function WBP_Template_AnimatedButtonContent_Social.WBP_Template_AnimatedButtonContent_Social_C.ExecuteUbergraph_WBP_Template_AnimatedButtonContent_Social // (Final|UbergraphFunction) // @ game+0x1b42740
};

