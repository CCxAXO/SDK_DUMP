// WidgetBlueprintGeneratedClass WBP_Panel_EquipButton.WBP_Panel_EquipButton_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_EquipButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_AlphaShortcut_C* EquipButton; // 0x3e8(0x08)
	struct UWBP_Button_Primary_C* EquipButtonMouseKBD; // 0x3f0(0x08)
	struct UImage* EquippedIcon; // 0x3f8(0x08)
	struct USizeBox* EquippedIconContainer; // 0x400(0x08)
	struct UOfferDTO* IndividualOfferDTO; // 0x408(0x08)
	struct FMulticastInlineDelegate OnEquipButtonClicked; // 0x410(0x10)
	struct UVM_EquipButton_C* VM_EquipButton; // 0x420(0x08)

	void UpdateButtonText(struct FText ButtonText); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.UpdateButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquipCandidateChanged(bool IsEquipCandidate); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.HandleIsEquipCandidateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonIcon(); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.UpdateButtonIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsEquippedChanged(bool IsEquipped); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.HandleIsEquippedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromHandle(struct UBaseHandle* BaseHandle); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsValidDataChanged(bool NewValue); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.HandleIsValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool BindEvents); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EquipButton_EquipButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.BndEvt__WBP_Panel_EquipButton_EquipButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EquipButton_EquipButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.BndEvt__WBP_Panel_EquipButton_EquipButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EquipButton_EquipButtonPC_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.BndEvt__WBP_Panel_EquipButton_EquipButtonPC_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_EquipButton_EquipButtonPC_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.BndEvt__WBP_Panel_EquipButton_EquipButtonPC_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EquipButton(int32_t EntryPoint); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.ExecuteUbergraph_WBP_Panel_EquipButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnEquipButtonClicked__DelegateSignature(struct UOfferDTO* OfferDTO); // Function WBP_Panel_EquipButton.WBP_Panel_EquipButton_C.OnEquipButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

