// WidgetBlueprintGeneratedClass WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C
// Size: 0x6c8 (Inherited: 0x651)
struct UWBP_Screen_ProxyShell_PC_C : UWBP_Screen_ProxyShell_Base_C {
	char pad_651[0x7]; // 0x651(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	struct UWBP_Panel_ShellActivatableWidgetContainer_C* MainContainer; // 0x660(0x08)
	struct UAresSocialSafeZone* MainStackSocialPadding; // 0x668(0x08)
	struct UWBP_Panel_ShellBackground_C* ShellBackground; // 0x670(0x08)
	struct TMap<struct FName, struct UAresShellActivatableWidgetContainer*> ExternalStacksMap; // 0x678(0x50)

	void HandleStackPaddingUpdated(struct FName Stack Name, bool Has Padding); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.HandleStackPaddingUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToShellViewModel(bool bShouldBind); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.BindToShellViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetBackgroundWidgetFromChild(struct UWBP_Panel_ShellBackground_C*& Background); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.GetBackgroundWidgetFromChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateMenuStackMap(); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.PopulateMenuStackMap // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_ProxyShell_PC_MainContainer_K2Node_ComponentBoundEvent_0_OnActivatableContainerTransitionChanged__DelegateSignature(struct UCommonActivatableWidgetContainerBase* WidgetStack, bool bIsTransitioning); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.BndEvt__WBP_Screen_ProxyShell_PC_MainContainer_K2Node_ComponentBoundEvent_0_OnActivatableContainerTransitionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void RegisterExternalStacks(struct TMap<struct FName, struct UAresShellActivatableWidgetContainer*>& InShellStackMap); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.RegisterExternalStacks // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_ProxyShell_PC(int32_t EntryPoint); // Function WBP_Screen_ProxyShell_PC.WBP_Screen_ProxyShell_PC_C.ExecuteUbergraph_WBP_Screen_ProxyShell_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

