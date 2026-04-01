// WidgetBlueprintGeneratedClass WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C
// Size: 0x5b1 (Inherited: 0x5a8)
struct UWBP_Screen_Shell_Base_C : UAresShellScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	bool Back Actions Enabled; // 0x5b0(0x01)

	void PostNavigateToInitialURL(); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.PostNavigateToInitialURL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDesiredBackActionName(struct FText& InDesiredBackActionName); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.SetDesiredBackActionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackActionEnabled(bool bBackActionsEnabled); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.SetBackActionEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundVisibility(enum class EWidgetVisibilityOption ShellBackgroundVisibilityOption); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.SetBackgroundVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundVideo(struct FMenuStackMediaSourceParams BackgroundVideoParams); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.SetBackgroundVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBackgroundImage(struct FSlateBrush& BackgroundImage); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.SetBackgroundImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToShellViewModel(bool bShouldBind); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.BindToShellViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_Shell_Base(int32_t EntryPoint); // Function WBP_Screen_Shell_Base.WBP_Screen_Shell_Base_C.ExecuteUbergraph_WBP_Screen_Shell_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

