// WidgetBlueprintGeneratedClass WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C
// Size: 0x448 (Inherited: 0x418)
struct UWBP_Panel_PickemProgressBar_Simple_C : UWBP_Panel_PickemProgressBar_Base_C {
	struct UAresCommonText* Text_PickCount; // 0x418(0x08)
	struct UWBP_Panel_EsportsAnimatedProgressBar_C* WBP_Panel_EsportsAnimatedProgressBar; // 0x420(0x08)
	struct FLinearColor PartialPicksProgressBarColor; // 0x428(0x10)
	struct FLinearColor AllPicksProgressBarColor; // 0x438(0x10)

	void UpdateOnPickemScreenReady(); // Function WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C.UpdateOnPickemScreenReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcastViewModels(); // Function WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C.RefreshBroadcastViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeViewModels(); // Function WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C.InitializeViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDisplayedChoiceCount(); // Function WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C.UpdateDisplayedChoiceCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMaxChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C.HandleMaxChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClientChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemProgressBar_Simple.WBP_Panel_PickemProgressBar_Simple_C.HandleClientChoiceCountChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

