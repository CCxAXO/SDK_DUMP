// WidgetBlueprintGeneratedClass ReportPlayerOptionV2.ReportPlayerOptionV2_C
// Size: 0x3b0 (Inherited: 0x320)
struct UReportPlayerOptionV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UButton* ReasonButton; // 0x330(0x08)
	struct USharedClickableCheckboxButton_C* ReasonCheckBox; // 0x338(0x08)
	struct UImage* ReasonIcon; // 0x340(0x08)
	struct UTextBlock* ReasonName; // 0x348(0x08)
	double BGOpacity; // 0x350(0x08)
	struct FMulticastInlineDelegate OnToggle; // 0x358(0x10)
	struct FUserActionDisplayInfo ActionDisplayInfo; // 0x368(0x48)

	void SetDisplayInfo(struct FUserActionDisplayInfo ActionDisplayInfo); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.SetDisplayInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsChecked(bool& IsChecked); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.IsChecked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateDisplay(); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.UpdateDisplay // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupCheckBox(); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.SetupCheckBox // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerReasonV2_ReasonButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.BndEvt__ReportPlayerReasonV2_ReasonButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerReasonV2_ReasonButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.BndEvt__ReportPlayerReasonV2_ReasonButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerReasonV2_ReasonButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.BndEvt__ReportPlayerReasonV2_ReasonButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ReportPlayerReasonV2_ReasonCheckBox_K2Node_ComponentBoundEvent_3_OnCheckedChanged__DelegateSignature(bool NewState); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.BndEvt__ReportPlayerReasonV2_ReasonCheckBox_K2Node_ComponentBoundEvent_3_OnCheckedChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ReportPlayerOptionV2(int32_t EntryPoint); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.ExecuteUbergraph_ReportPlayerOptionV2 // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnToggle__DelegateSignature(bool IsToggledOn); // Function ReportPlayerOptionV2.ReportPlayerOptionV2_C.OnToggle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

