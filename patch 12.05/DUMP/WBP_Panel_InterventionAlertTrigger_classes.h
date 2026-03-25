// WidgetBlueprintGeneratedClass WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_InterventionAlertTrigger_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPriorityVisibleInterventionViewModel* PriorityVisibleInterventionViewModel; // 0x3e8(0x08)
	struct UWBP_Button_Social_Intervention_C* WBP_Button_Social_Intervention; // 0x3f0(0x08)

	void UpdateSocialVisibility(enum class ESlateVisibility InSocialVisibility); // Function WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C.UpdateSocialVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Intervention Type(enum class EInterventionType InterventionType); // Function WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C.Set Intervention Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleInterventionsChanged(enum class EInterventionType InterventionType); // Function WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C.HandleInterventionsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_InterventionAlertTrigger_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C.BndEvt__WBP_Panel_InterventionAlertTrigger_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_InterventionAlertTrigger(int32_t EntryPoint); // Function WBP_Panel_InterventionAlertTrigger.WBP_Panel_InterventionAlertTrigger_C.ExecuteUbergraph_WBP_Panel_InterventionAlertTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

