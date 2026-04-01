// WidgetBlueprintGeneratedClass WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C
// Size: 0x698 (Inherited: 0x5b0)
struct UWBP_Screen_TimelineOptions_PC_C : UWBP_Screen_TimelineOptionsBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* AscendDisplay; // 0x5b8(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* CombatReportDisplay; // 0x5c0(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* DescendDisplay; // 0x5c8(0x08)
	struct UInvalidationBox* DrawMatchInvalidationBox; // 0x5d0(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ExitMenuDisplay; // 0x5d8(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* Forward5Display; // 0x5e0(0x08)
	struct UImage* IMG_topHightlightGrad; // 0x5e8(0x08)
	struct UTextBlock* MatchIdText; // 0x5f0(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* NextRoundDisplay; // 0x5f8(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ObserverNextDisplay; // 0x600(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ObserverPlayersDisplay; // 0x608(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ObserverPreviousDisplay; // 0x610(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* OpenReplayVisibilityWheelDisplay; // 0x618(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* PlayerLoadoutVisibilityDisplay; // 0x620(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* PlayPauseDisplay; // 0x628(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* PrevRoundDisplay; // 0x630(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ReleaseCursorDisplay; // 0x638(0x08)
	struct UAresCommonText* ResultText; // 0x640(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* Rewind5Display; // 0x648(0x08)
	struct USharedBackButton_C* SharedBackButton_349; // 0x650(0x08)
	struct UAresCommonText* TitleText; // 0x658(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ToggleCameraDisplay; // 0x660(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* ToggleReplayUIDisplay; // 0x668(0x08)
	struct UOverlay* TopOrnaments; // 0x670(0x08)
	struct UTimelineUIOptionsViewModel* TimelineUIOptionsVM; // 0x678(0x08)
	double ConsoleOptionsInputColumnWidth; // 0x680(0x08)
	struct TArray<struct UWBP_Panel_ActionBindingDIsplay_C*> ActionBindingArray; // 0x688(0x10)

	void SetConsoleKeybindColumnSpacing(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.SetConsoleKeybindColumnSpacing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Match Id Changed(struct FString NewValue); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.On Match Id Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnActivated(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeactivated(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_TimelineOptions_PC(int32_t EntryPoint); // Function WBP_Screen_TimelineOptions_PC.WBP_Screen_TimelineOptions_PC_C.ExecuteUbergraph_WBP_Screen_TimelineOptions_PC // (Final|UbergraphFunction) // @ game+0x1b42740
};

