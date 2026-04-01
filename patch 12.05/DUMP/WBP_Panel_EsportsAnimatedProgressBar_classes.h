// WidgetBlueprintGeneratedClass WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C
// Size: 0x3a0 (Inherited: 0x318)
struct UWBP_Panel_EsportsAnimatedProgressBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_ProgressBar; // 0x320(0x08)
	struct UCurveFloat* ProgressTweenCurve; // 0x328(0x08)
	struct FTimerHandle TweenTimerHandle; // 0x330(0x08)
	struct UMaterialInterface* ProgressBarMaterial; // 0x338(0x08)
	struct UMaterialInstanceDynamic* ProgressBarMaterialInstance; // 0x340(0x08)
	struct FLinearColor FillColor; // 0x348(0x10)
	struct FName FillColorParameterName; // 0x358(0x0c)
	struct FName PercentageParamaterName; // 0x364(0x0c)
	double FillPercentage; // 0x370(0x08)
	double TweenGoalFillPercentage; // 0x378(0x08)
	double TweenStartFillPercentage; // 0x380(0x08)
	double TweenCurrentTime; // 0x388(0x08)
	double TweenDuration; // 0x390(0x08)
	double TweenFramesPerSecond; // 0x398(0x08)

	void GetTweenLerpAlpha(double& Return Value); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.GetTweenLerpAlpha // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetFillPercentage(double NewFillPercentage, bool bUseAnimatedTween); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.SetFillPercentage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFillColor(struct FLinearColor NewValue); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.SetFillColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	double GetTweenDeltaTime(); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.GetTweenDeltaTime // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ClearProgressBarTweenTimer(); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.ClearProgressBarTweenTimer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopProgressBarAnimation(); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.StopProgressBarAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeProgressBarMaterial(); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.InitializeProgressBarMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InternalSetFillPercentage(double NewFillPercentage); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.InternalSetFillPercentage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateProgressBarTween(); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.UpdateProgressBarTween // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginProgressBarTween(double GoalFillPercentage); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.BeginProgressBarTween // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EsportsAnimatedProgressBar(int32_t EntryPoint); // Function WBP_Panel_EsportsAnimatedProgressBar.WBP_Panel_EsportsAnimatedProgressBar_C.ExecuteUbergraph_WBP_Panel_EsportsAnimatedProgressBar // (Final|UbergraphFunction) // @ game+0x1af5410
};

