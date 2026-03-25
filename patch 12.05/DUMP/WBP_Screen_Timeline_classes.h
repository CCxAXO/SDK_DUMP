// WidgetBlueprintGeneratedClass WBP_Screen_Timeline.WBP_Screen_Timeline_C
// Size: 0x521 (Inherited: 0x4a8)
struct UWBP_Screen_Timeline_C : UTimelineScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* Anim_Overlay_Outro; // 0x4b0(0x08)
	struct UWidgetAnimation* Anim_Overlay_SkipRound; // 0x4b8(0x08)
	struct UWidgetAnimation* Anim_ShowUI_v2; // 0x4c0(0x08)
	struct UWidgetAnimation* Anim_HideUI_v2; // 0x4c8(0x08)
	struct UImage* FastForwardOverlay; // 0x4d0(0x08)
	struct UVerticalBox* InputPrompts; // 0x4d8(0x08)
	struct UWBP_Panel_InputShortcut_C* WBP_Panel_InputShortcut; // 0x4e0(0x08)
	struct UWBP_Panel_ReplaysToggleMouse_C* WBP_Panel_ReplaysToggleMouse; // 0x4e8(0x08)
	struct UWBP_Panel_TimelineUI_PC_C* WBP_Panel_TimelineUI_PC; // 0x4f0(0x08)
	struct UTimelineUIViewModel* TimelineUIVM; // 0x4f8(0x08)
	bool Is Time Jumping; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	struct UInformationalScreen_Gamepad_C* InformationalScreen; // 0x508(0x08)
	struct UReplayUIVisibilityViewModel* Replay UIVisibility VM; // 0x510(0x08)
	struct UAresScreenBase* InteractableHUDParent; // 0x518(0x08)
	bool CursorVisibility; // 0x520(0x01)

	void CREATEDELEGATE_PROXYFUNCTION_2(bool NewValue); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.CREATEDELEGATE_PROXYFUNCTION_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CREATEDELEGATE_PROXYFUNCTION_1(enum class ESlateVisibility NewValue); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.CREATEDELEGATE_PROXYFUNCTION_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetReplayInputMode(bool IsInputModeAll); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.SetReplayInputMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAresWidgetParent(struct UAresScreenBase* New Parent); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.SetAresWidgetParent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCombatReportVisibilityChanged(bool Visible); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.HandleCombatReportVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle UIVisibility Wheel Is Visible Changed(bool IsVisible); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.Handle UIVisibility Wheel Is Visible Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindReplayUIVisibilityWheelEvents(struct UReplayUIVisibilityViewModel* ReplayUIVisibilityVM); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.BindReplayUIVisibilityWheelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIsFreeCamControllable(); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.UpdateIsFreeCamControllable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Handle on Mouse Cursor Visibility Changed(bool bIsVisible); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.Handle on Mouse Cursor Visibility Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTimeJumpStatusChanged(bool& NewIsTimeJumping); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.HandleTimeJumpStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Timeline Window Panel Visibility Changed(bool NewVisibility); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.Handle Timeline Window Panel Visibility Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTimelineWindowVisibilityChanged(enum class ESlateVisibility& Visibility); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.HandleTimelineWindowVisibilityChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeactivated(); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnShellClosed(struct TArray<struct FName>& ScreenUrl); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.OnShellClosed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_Timeline(int32_t EntryPoint); // Function WBP_Screen_Timeline.WBP_Screen_Timeline_C.ExecuteUbergraph_WBP_Screen_Timeline // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

