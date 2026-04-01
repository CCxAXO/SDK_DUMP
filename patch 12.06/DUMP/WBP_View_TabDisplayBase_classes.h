// WidgetBlueprintGeneratedClass WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C
// Size: 0x40d (Inherited: 0x3e0)
struct UWBP_View_TabDisplayBase_C : UAresCommonUserWidget {
	struct FMulticastInlineDelegate OnTabsChanged; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnSelectedIndexChanged; // 0x3f0(0x10)
	double TabDisplayDuration; // 0x400(0x08)
	int32_t SelectedIndex; // 0x408(0x04)
	bool IsManualSelection; // 0x40c(0x01)

	void IsManuallySelected(bool& NewParam); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.IsManuallySelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Stop(); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.Stop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Restart(); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.Restart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Resume(); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.Resume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Pause(); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.Pause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsManuallySelected(bool IsManuallySelected); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.SetIsManuallySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CallTabsChanged(struct TArray<struct UObject*>& TabObjects); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.CallTabsChanged // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CallSelectedIndexChanged(int32_t InNewIndex); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.CallSelectedIndexChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedIndex(int32_t InSelectedIndex); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.SetSelectedIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(double InTabDisplayDuration); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectedIndexChanged__DelegateSignature(int32_t SelectedIndex); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.OnSelectedIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTabsChanged__DelegateSignature(struct TArray<struct UObject*>& InNewTabObjects); // Function WBP_View_TabDisplayBase.WBP_View_TabDisplayBase_C.OnTabsChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

