// WidgetBlueprintGeneratedClass WBP_View_CEFModal.WBP_View_CEFModal_C
// Size: 0x550 (Inherited: 0x544)
struct UWBP_View_CEFModal_C : UWBP_Screen_CustomModal_Base_C {
	char pad_544[0x4]; // 0x544(0x04)
	struct UWebBrowser* WebBrowser; // 0x548(0x08)

	bool BP_OnHandleBackAction(); // Function WBP_View_CEFModal.WBP_View_CEFModal_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUrlChanged(struct FString WebURL); // Function WBP_View_CEFModal.WBP_View_CEFModal_C.OnUrlChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToCustomModalViewModel(struct UCustomModalViewModelBase* CustomModalViewModel, bool Bind); // Function WBP_View_CEFModal.WBP_View_CEFModal_C.BindToCustomModalViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

