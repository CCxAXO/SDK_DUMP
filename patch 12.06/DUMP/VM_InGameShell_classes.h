// BlueprintGeneratedClass VM_InGameShell.VM_InGameShell_C
// Size: 0x55a (Inherited: 0x540)
struct UVM_InGameShell_C : UShellScreenViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct TArray<struct FString> URLsToPreload; // 0x548(0x10)
	bool IsPreloadingFinished; // 0x558(0x01)
	bool IsInitialNavComplete; // 0x559(0x01)

	void HUDElementsFinished(); // Function VM_InGameShell.VM_InGameShell_C.HUDElementsFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_InGameShell.VM_InGameShell_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_FinishedPreloadingUrls(); // Function VM_InGameShell.VM_InGameShell_C.BP_FinishedPreloadingUrls // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void TryNavToInitialURL(); // Function VM_InGameShell.VM_InGameShell_C.TryNavToInitialURL // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_TransitionWidgetVisibilityChanged(enum class ESlateVisibility NewVisibility); // Function VM_InGameShell.VM_InGameShell_C.BP_TransitionWidgetVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_InGameShell(int32_t EntryPoint); // Function VM_InGameShell.VM_InGameShell_C.ExecuteUbergraph_VM_InGameShell // (Final|UbergraphFunction) // @ game+0x1b42740
};

