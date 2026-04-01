// WidgetBlueprintGeneratedClass WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C
// Size: 0x648 (Inherited: 0x5b1)
struct UWBP_Screen_InGameShell_PC_C : UWBP_Screen_Shell_Base_C {
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ContextContainer; // 0x5c0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* InGameUIContainer; // 0x5c8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* MainContainer; // 0x5d0(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* ModalContainer; // 0x5d8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* PopupContainer; // 0x5e0(0x08)
	struct UWBP_Panel_ShellBackground_C* ShellBG; // 0x5e8(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* SystemErrorContainer; // 0x5f0(0x08)
	struct UWBP_Panel_TopNavigation_InGame_PC_C* TopNavigation; // 0x5f8(0x08)
	struct FName MainStackName; // 0x600(0x0c)
	struct FName ContextStackName; // 0x60c(0x0c)
	struct FName PopupStackName; // 0x618(0x0c)
	struct FName ModalStackName; // 0x624(0x0c)
	struct FName SystemErrorStackName; // 0x630(0x0c)
	struct FName InGameUIElementsStackName; // 0x63c(0x0c)

	void SetBackActionEnabled(bool bBackActionsEnabled); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.SetBackActionEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToShellViewModel(bool bShouldBind); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.BindToShellViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundVideo(struct FMenuStackMediaSourceParams BackgroundVideoParams); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.SetBackgroundVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundVisibility(enum class EWidgetVisibilityOption ShellBackgroundVisibilityOption); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.SetBackgroundVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundImage(struct FSlateBrush& BackgroundImage); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.SetBackgroundImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool BP_OnHandleBackAction(); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateMenuStackMap(); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.PopulateMenuStackMap // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_InGameShell_PC(int32_t EntryPoint); // Function WBP_Screen_InGameShell_PC.WBP_Screen_InGameShell_PC_C.ExecuteUbergraph_WBP_Screen_InGameShell_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

