// WidgetBlueprintGeneratedClass ReportPlayerReason.ReportPlayerReason_C
// Size: 0x360 (Inherited: 0x320)
struct UReportPlayerReason_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UCheckBox* CheckBox; // 0x328(0x08)
	struct UTextBlock* Details; // 0x330(0x08)
	struct UTextBlock* Text; // 0x338(0x08)
	struct UButton* TextButton; // 0x340(0x08)
	enum class EPlayerReportReason Reason; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FMulticastInlineDelegate OnToggle; // 0x350(0x10)

	void GetDetailsText(struct FText& DetailsText); // Function ReportPlayerReason.ReportPlayerReason_C.GetDetailsText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsChecked(bool& IsChecked); // Function ReportPlayerReason.ReportPlayerReason_C.IsChecked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetDisplayText(struct FText& DisplayText); // Function ReportPlayerReason.ReportPlayerReason_C.GetDisplayText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function ReportPlayerReason.ReportPlayerReason_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function ReportPlayerReason.ReportPlayerReason_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ReportPlayerReason.ReportPlayerReason_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCheckStateChanged(bool bIsChecked); // Function ReportPlayerReason.ReportPlayerReason_C.OnCheckStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReportPlayerReason(int32_t EntryPoint); // Function ReportPlayerReason.ReportPlayerReason_C.ExecuteUbergraph_ReportPlayerReason // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnToggle__DelegateSignature(); // Function ReportPlayerReason.ReportPlayerReason_C.OnToggle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

