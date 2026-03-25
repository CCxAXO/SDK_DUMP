// WidgetBlueprintGeneratedClass ContentFilterButton.ContentFilterButton_C
// Size: 0x380 (Inherited: 0x318)
struct UContentFilterButton_C : UContentFilterWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* OnHover; // 0x320(0x08)
	struct UBreadcrumb_C* Breadcrumb; // 0x328(0x08)
	struct UOverlay* FilteredIcon; // 0x330(0x08)
	struct UButton* FiltersButton; // 0x338(0x08)
	struct UWidgetSwitcher* Icon; // 0x340(0x08)
	struct UOverlay* IconPips; // 0x348(0x08)
	struct UOverlay* UnfilteredIcon; // 0x350(0x08)
	struct UWidgetAnimation* hover; // 0x358(0x08)
	struct UContentFilterViewModel* FiltersModel; // 0x360(0x08)
	struct UFiltersModal_C* FiltersModal; // 0x368(0x08)
	struct FMulticastInlineDelegate FiltersApplied; // 0x370(0x10)

	void SetupConfigChangeHandler(); // Function ContentFilterButton.ContentFilterButton_C.SetupConfigChangeHandler // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFiltersModel(struct UContentFilterViewModel* NewFiltersModel); // Function ContentFilterButton.ContentFilterButton_C.SetFiltersModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIconState(bool FiltersChanged); // Function ContentFilterButton.ContentFilterButton_C.UpdateIconState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HaveFiltersChanged(bool& FiltersChanged); // Function ContentFilterButton.ContentFilterButton_C.HaveFiltersChanged // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnClientConfigChange(struct FName& ConfigName); // Function ContentFilterButton.ContentFilterButton_C.OnClientConfigChange // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClosePopUp(); // Function ContentFilterButton.ContentFilterButton_C.ClosePopUp // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenPopup(); // Function ContentFilterButton.ContentFilterButton_C.OpenPopup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCancel(); // Function ContentFilterButton.ContentFilterButton_C.OnCancel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayFilters(); // Function ContentFilterButton.ContentFilterButton_C.DisplayFilters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnApply(struct UContentFilterViewModel* FiltersViewModel); // Function ContentFilterButton.ContentFilterButton_C.OnApply // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FiltersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ContentFilterButton.ContentFilterButton_C.BndEvt__FiltersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FiltersButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ContentFilterButton.ContentFilterButton_C.BndEvt__FiltersButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FiltersButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ContentFilterButton.ContentFilterButton_C.BndEvt__FiltersButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function ContentFilterButton.ContentFilterButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContentFilterButton(int32_t EntryPoint); // Function ContentFilterButton.ContentFilterButton_C.ExecuteUbergraph_ContentFilterButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function ContentFilterButton.ContentFilterButton_C.FiltersApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

