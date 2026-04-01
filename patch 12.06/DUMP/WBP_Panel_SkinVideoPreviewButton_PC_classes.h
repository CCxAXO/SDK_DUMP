// WidgetBlueprintGeneratedClass WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_SkinVideoPreviewButton_PC_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Ghost_C* WBP_Button_SkinVideoPreview; // 0x3e8(0x08)
	struct UWBP_Modal_SkinVideoPreview_C* VideoPreviewModal; // 0x3f0(0x08)
	struct UVM_GunSkinPreview_PC_C* GunSkinPreview_VM; // 0x3f8(0x08)
	struct FText DefaultText; // 0x400(0x18)
	struct FMulticastInlineDelegate OnPopupClosed; // 0x418(0x10)

	void HandlePopupClosed(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.HandlePopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleStreamedVideoChanged(struct UStreamedVideoDataAsset* StreamedVideo); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.HandleStreamedVideoChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsVideoAvailableChanged(bool IsVideoAvailable); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.HandleIsVideoAvailableChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePreviewTextChanged(struct FText PreviewText); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.HandlePreviewTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePreviewTitleChanged(struct FText TitleText); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.HandlePreviewTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayPreview(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.DisplayPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClosePopUp(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.ClosePopUp // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenPopup(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.OpenPopup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SkinVideoPreviewButton_PC_WBP_Button_SkinVideoPreview_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.BndEvt__WBP_Panel_SkinVideoPreviewButton_PC_WBP_Button_SkinVideoPreview_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SkinVideoPreviewButton_PC(int32_t EntryPoint); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.ExecuteUbergraph_WBP_Panel_SkinVideoPreviewButton_PC // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnPopupClosed__DelegateSignature(); // Function WBP_Panel_SkinVideoPreviewButton_PC.WBP_Panel_SkinVideoPreviewButton_PC_C.OnPopupClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

