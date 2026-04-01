// WidgetBlueprintGeneratedClass FiltersModal.FiltersModal_C
// Size: 0x358 (Inherited: 0x318)
struct UFiltersModal_C : UContentFilterDialog {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UFiltersTabV1_C* FiltersV1; // 0x320(0x08)
	struct UWidgetSwitcher* FiltersWidgetSwitcher; // 0x328(0x08)
	struct FMulticastInlineDelegate OnCancel; // 0x330(0x10)
	struct UContentFilterViewModel* FiltersModel; // 0x340(0x08)
	struct FMulticastInlineDelegate OnApply; // 0x348(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function FiltersModal.FiltersModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function FiltersModal.FiltersModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFiltersModel(struct UContentFilterViewModel* FiltersModel); // Function FiltersModal.FiltersModal_C.SetFiltersModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FiltersModal_FiltersV2_K2Node_ComponentBoundEvent_1_OnApplyClicked__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function FiltersModal.FiltersModal_C.BndEvt__FiltersModal_FiltersV2_K2Node_ComponentBoundEvent_1_OnApplyClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FiltersModal_FiltersV2_K2Node_ComponentBoundEvent_3_OnCancelClicked__DelegateSignature(); // Function FiltersModal.FiltersModal_C.BndEvt__FiltersModal_FiltersV2_K2Node_ComponentBoundEvent_3_OnCancelClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FiltersModal(int32_t EntryPoint); // Function FiltersModal.FiltersModal_C.ExecuteUbergraph_FiltersModal // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnApply__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function FiltersModal.FiltersModal_C.OnApply__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCancel__DelegateSignature(); // Function FiltersModal.FiltersModal_C.OnCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

