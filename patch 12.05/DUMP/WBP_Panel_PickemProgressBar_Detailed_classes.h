// WidgetBlueprintGeneratedClass WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C
// Size: 0x4d0 (Inherited: 0x418)
struct UWBP_Panel_PickemProgressBar_Detailed_C : UWBP_Panel_PickemProgressBar_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* CorrectPickCelebration; // 0x420(0x08)
	struct UWBP_Timer_Countdown_C* CountdownTimer_Open; // 0x428(0x08)
	struct UWBP_Timer_Countdown_C* CountdownTimer_Upcoming; // 0x430(0x08)
	struct UImage* Divider; // 0x438(0x08)
	struct UImage* Image_CompletionIcon_Checkmark; // 0x440(0x08)
	struct UImage* ProgressGlow; // 0x448(0x08)
	struct USizeBox* SizeBox_CompletionIcon; // 0x450(0x08)
	struct UAresCommonText* Text_PickCount; // 0x458(0x08)
	struct UWBP_Panel_EsportsAnimatedProgressBar_C* WBP_Panel_EsportsAnimatedProgressBar; // 0x460(0x08)
	struct UWBP_Panel_Pickem_Autosave_Banner_C* WBP_Panel_Pickem_Autosave_Banner; // 0x468(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_PerStageDisplay; // 0x470(0x08)
	enum class EAresPickemStage PreviewStage; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	struct FLinearColor PartialPicksProgressBarColor; // 0x47c(0x10)
	struct FLinearColor AllPicksProgressBarColor; // 0x48c(0x10)
	struct FLinearColor PartialPicksIconColor; // 0x49c(0x10)
	struct FLinearColor AllPicksIconColor; // 0x4ac(0x10)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct UPickemBlockStageViewModel* PickemStageViewModel; // 0x4c0(0x08)
	struct UBasePickemAutosaveViewModel* AutosaveViewModel; // 0x4c8(0x08)

	void HandleAutosaveStateChanged(enum class EEsportsPickemAutosaveState AutosaveState); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.HandleAutosaveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTimeToNextStageChanged(struct FDateTime& NewValue); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.HandleTimeToNextStageChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePickemStageChanged(enum class EAresPickemStage PickemStage); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.HandlePickemStageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetViewModels(); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.ResetViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcastViewModels(); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.RefreshBroadcastViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.BindOrUnbindViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeViewModels(); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.InitializeViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeViewModels(); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.MakeViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDisplayedChoiceCount(); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.UpdateDisplayedChoiceCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMaxChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.HandleMaxChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleClientChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.HandleClientChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PickemProgressBar_Detailed(int32_t EntryPoint); // Function WBP_Panel_PickemProgressBar_Detailed.WBP_Panel_PickemProgressBar_Detailed_C.ExecuteUbergraph_WBP_Panel_PickemProgressBar_Detailed // (Final|UbergraphFunction) // @ game+0x1af5410
};

