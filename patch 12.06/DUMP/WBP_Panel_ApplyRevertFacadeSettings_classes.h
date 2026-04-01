// WidgetBlueprintGeneratedClass WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_ApplyRevertFacadeSettings_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UFacadeSettingsViewModel* FacadeSettingsViewModel; // 0x3e8(0x08)
	struct UWBP_Button_Ghost_C* ApplyButton_Ghost; // 0x3f0(0x08)
	struct UWBP_Button_Ghost_C* RevertButton_Ghost; // 0x3f8(0x08)

	void OnModalRevert(struct FGuid& ModalID); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.OnModalRevert // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnModalConfirm(struct FGuid& ModalID); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.OnModalConfirm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenConfirmModal(); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.OpenConfirmModal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ApplyRevertFacadeSettings_ApplyButton_Ghost_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.BndEvt__WBP_Panel_ApplyRevertFacadeSettings_ApplyButton_Ghost_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ApplyRevertFacadeSettings_RevertButton_Ghost_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.BndEvt__WBP_Panel_ApplyRevertFacadeSettings_RevertButton_Ghost_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ApplyRevertFacadeSettings(int32_t EntryPoint); // Function WBP_Panel_ApplyRevertFacadeSettings.WBP_Panel_ApplyRevertFacadeSettings_C.ExecuteUbergraph_WBP_Panel_ApplyRevertFacadeSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

