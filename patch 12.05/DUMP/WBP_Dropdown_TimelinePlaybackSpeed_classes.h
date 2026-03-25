// WidgetBlueprintGeneratedClass WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C
// Size: 0x424 (Inherited: 0x3e0)
struct UWBP_Dropdown_TimelinePlaybackSpeed_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x3e8(0x08)
	struct UImage* IMG_Input_Overlay_Playback_Speed; // 0x3f0(0x08)
	struct TArray<struct UWBP_Button_TimelineUI_C*> PlaybackButtonArray; // 0x3f8(0x10)
	struct FMulticastInlineDelegate On Playback Speed Index Selected; // 0x408(0x10)
	struct UTimelineUIViewModel* TimelineUIVM; // 0x418(0x08)
	int32_t CurrentHoveredIndex; // 0x420(0x04)

	void SetTimelineUIVM(struct UTimelineUIViewModel* Timeline UI); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.SetTimelineUIVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetHoveredSelection(); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.ResetHoveredSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* CustomDownNavigation(enum class EUINavigation Navigation); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.CustomDownNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Set Visibility Of Input Overlays(bool Hide Input Overlays); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.Set Visibility Of Input Overlays // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPlaybackSpeedButtonClicked(struct UCommonButtonBase* Button); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.OnPlaybackSpeedButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnChildWidgetFocusChanged(struct UUserWidget* ChildWidget); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.BP_OnChildWidgetFocusChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Dropdown_TimelinePlaybackSpeed(int32_t EntryPoint); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.ExecuteUbergraph_WBP_Dropdown_TimelinePlaybackSpeed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void On Playback Speed Index Selected__DelegateSignature(int32_t Playback Speed Index); // Function WBP_Dropdown_TimelinePlaybackSpeed.WBP_Dropdown_TimelinePlaybackSpeed_C.On Playback Speed Index Selected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

