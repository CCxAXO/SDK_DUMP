// WidgetBlueprintGeneratedClass WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C
// Size: 0x1bf2 (Inherited: 0x1ae0)
struct UWBP_Button_NavBar_Main_Lobby_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UQueueViewModel_C* QueueViewModel; // 0x1ae8(0x08)
	struct UWidgetAnimation* QueActive_Anim; // 0x1af0(0x08)
	struct UWidgetAnimation* OnSelected_L; // 0x1af8(0x08)
	struct UWidgetAnimation* OnUnselected; // 0x1b00(0x08)
	struct UWidgetAnimation* OnSelected_R; // 0x1b08(0x08)
	struct UImage* ButtonImage_Img; // 0x1b10(0x08)
	struct UHorizontalBox* HRContents; // 0x1b18(0x08)
	struct UOverlay* Overlay_ButtonIcon; // 0x1b20(0x08)
	struct UOverlay* Overlay_InputAction; // 0x1b28(0x08)
	struct UOverlay* Overlay_PlayText; // 0x1b30(0x08)
	struct UCommonTextBlock* Text_QueueTimer; // 0x1b38(0x08)
	struct UScaleBox* TextContainer; // 0x1b40(0x08)
	struct UScaleBox* TextContainer_QueueTimer; // 0x1b48(0x08)
	struct UOverlay* TimerOverlay; // 0x1b50(0x08)
	bool bHideLabelWhenNotSelected; // 0x1b58(0x01)
	char pad_1B59[0x7]; // 0x1b59(0x07)
	double AnimationSpeedInSeconds; // 0x1b60(0x08)
	bool bIsQueueTimerActive; // 0x1b68(0x01)
	char pad_1B69[0x7]; // 0x1b69(0x07)
	struct FDataTableRowHandle Play_Action; // 0x1b70(0x18)
	struct FDataTableRowHandle CancelQueue_Action; // 0x1b88(0x18)
	bool FlipContent; // 0x1ba0(0x01)
	char pad_1BA1[0x7]; // 0x1ba1(0x07)
	double ShearAngle; // 0x1ba8(0x08)
	struct UMaterialInstanceDynamic* ButtonImage_MID; // 0x1bb0(0x08)
	struct FLinearColor ActiveQueIconColor; // 0x1bb8(0x10)
	struct FLinearColor InactiveQueIconColor; // 0x1bc8(0x10)
	bool _IsFocused; // 0x1bd8(0x01)
	bool _IsTimerActive; // 0x1bd9(0x01)
	char pad_1BDA[0x6]; // 0x1bda(0x06)
	struct UCommonTextStyle* ActiveQueTextStyle; // 0x1be0(0x08)
	struct UCommonTextStyle* InactiveQueTextStyle; // 0x1be8(0x08)
	bool TimerAnimIsPlaying; // 0x1bf0(0x01)
	bool TimerIsActive; // 0x1bf1(0x01)

	void ShowMaterialImage(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.ShowMaterialImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlaySelectedVisuals(bool bIsSelected); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.PlaySelectedVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShearMaterial(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.ShearMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTriggeringInput(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.UpdateTriggeringInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateButtonVisuals(bool bIsQueueTimerActive, bool bIsSelected); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.UpdateButtonVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQueueTimerTick(enum class ESlateVisibility Visibility, struct FText DisplayText); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.OnQueueTimerTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindVM(bool Bind); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BindVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BeginSelectedAnimation(bool bSelected, bool bSkipToTheEnd); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BeginSelectedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnSelected(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeselected(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnLongClicked(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BP_OnLongClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleDefault_VIZ(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.HandleDefault_VIZ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleQueTimerActive_VIZ(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.HandleQueTimerActive_VIZ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleQueTimerINACTIVE_VIZ(); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.HandleQueTimerINACTIVE_VIZ // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_NavBar_Main_Lobby(int32_t EntryPoint); // Function WBP_Button_NavBar_Main_Lobby.WBP_Button_NavBar_Main_Lobby_C.ExecuteUbergraph_WBP_Button_NavBar_Main_Lobby // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

