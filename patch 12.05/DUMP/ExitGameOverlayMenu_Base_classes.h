// WidgetBlueprintGeneratedClass ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C
// Size: 0x360 (Inherited: 0x328)
struct UExitGameOverlayMenu_Base_C : UWBP_MenuWidgetBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	int32_t VisibleButtonIndex; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FMulticastInlineDelegate Close; // 0x338(0x10)
	struct UAkAudioEvent* CloseSound; // 0x348(0x08)
	struct UAkAudioEvent* OpenSound; // 0x350(0x08)
	struct UMenuStackEntry* RegisteredOptionsMenuStackEntry; // 0x358(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetAboutMenuClass(struct UUserWidget*& AboutMenuClass); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.GetAboutMenuClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	enum class EMenuStackWidget_RequestCloseMenuResult RequestCloseMenu(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.RequestCloseMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateExitConfirmationPopup(struct FText MessageText, struct UExitGameConfirmationModal_C*& ExitGameConfirmationModal); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.CreateExitConfirmationPopup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenAboutScreen(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OpenAboutScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenSettingsScreen(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OpenSettingsScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenSupportPage(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OpenSupportPage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonVisibility(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.SetButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConfirmationPressed(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OnConfirmationPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCancelPressed(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OnCancelPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Exit(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Escape(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.Escape // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void LeaveMatch(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.LeaveMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExitSignoutAllowed(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OnExitSignoutAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExitSignoutNotAllowed(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OnExitSignoutNotAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchFoundChanged(bool MatchFound); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.OnMatchFoundChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ExitGameOverlayMenu_Base(int32_t EntryPoint); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.ExecuteUbergraph_ExitGameOverlayMenu_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void Close__DelegateSignature(); // Function ExitGameOverlayMenu_Base.ExitGameOverlayMenu_Base_C.Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

