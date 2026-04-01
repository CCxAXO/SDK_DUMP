// WidgetBlueprintGeneratedClass WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C
// Size: 0x650 (Inherited: 0x5b1)
struct UWBP_Screen_InGameShell_Console_C : UWBP_Screen_Shell_Base_C {
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ContextContainer; // 0x5c0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* InGameUIContainer; // 0x5c8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* MainContainer; // 0x5d0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ModalContainer; // 0x5d8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* PopupContainer; // 0x5e0(0x08)
	struct UWBP_Panel_ShellBackground_C* ShellBG; // 0x5e8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* SystemErrorContainer; // 0x5f0(0x08)
	struct UWBP_MenuActionHintBar_C* WBP_MenuActionHintBar; // 0x5f8(0x08)
	struct UWBP_Panel_TopNavigation_Console_C* WBP_Panel_TopNavigation_Console; // 0x600(0x08)
	struct FName MainStackName; // 0x608(0x0c)
	struct FName ContextStackName; // 0x614(0x0c)
	struct FName PopupStackName; // 0x620(0x0c)
	struct FName ModalStackName; // 0x62c(0x0c)
	struct FName SystemErrorStackName; // 0x638(0x0c)
	struct FName InGameUIElementsStackName; // 0x644(0x0c)

	void BindInputActions(); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.BindInputActions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOptionsButtonPressed(struct FName ActionName); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.OnOptionsButtonPressed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundVideo(struct FMenuStackMediaSourceParams BackgroundVideoParams); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.SetBackgroundVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundVisibility(enum class EWidgetVisibilityOption ShellBackgroundVisibilityOption); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.SetBackgroundVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundImage(struct FSlateBrush& BackgroundImage); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.SetBackgroundImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool BP_OnHandleBackAction(); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PopulateMenuStackMap(); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.PopulateMenuStackMap // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_InGameShell_Console(int32_t EntryPoint); // Function WBP_Screen_InGameShell_Console.WBP_Screen_InGameShell_Console_C.ExecuteUbergraph_WBP_Screen_InGameShell_Console // (Final|UbergraphFunction) // @ game+0x1b42740
};

