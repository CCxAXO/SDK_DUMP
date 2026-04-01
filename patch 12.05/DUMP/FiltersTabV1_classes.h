// WidgetBlueprintGeneratedClass FiltersTabV1.FiltersTabV1_C
// Size: 0x370 (Inherited: 0x318)
struct UFiltersTabV1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* ApplyButton; // 0x320(0x08)
	struct UHorizontalBox* FiltersHBox; // 0x328(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x330(0x08)
	struct FMulticastInlineDelegate OnApplyClicked; // 0x338(0x10)
	struct FMulticastInlineDelegate OnCancelClicked; // 0x348(0x10)
	struct UContentFilterViewModel* FiltersViewModel; // 0x358(0x08)
	double EvenRowOpacity; // 0x360(0x08)
	double OddRowOpacity; // 0x368(0x08)

	void SendFiltersTelemetry(enum class EActionType ActionType); // Function FiltersTabV1.FiltersTabV1_C.SendFiltersTelemetry // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RevertFilters(); // Function FiltersTabV1.FiltersTabV1_C.RevertFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyFilters(); // Function FiltersTabV1.FiltersTabV1_C.ApplyFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFiltersModel(struct UContentFilterViewModel* FiltersModel); // Function FiltersTabV1.FiltersTabV1_C.SetFiltersModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFilterUi(struct UContentFilterViewModel* FiltersModel); // Function FiltersTabV1.FiltersTabV1_C.UpdateFilterUi // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BuildMockUi(); // Function FiltersTabV1.FiltersTabV1_C.BuildMockUi // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function FiltersTabV1.FiltersTabV1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function FiltersTabV1.FiltersTabV1_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function FiltersTabV1.FiltersTabV1_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FiltersTabV1(int32_t EntryPoint); // Function FiltersTabV1.FiltersTabV1_C.ExecuteUbergraph_FiltersTabV1 // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnApplyClicked__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function FiltersTabV1.FiltersTabV1_C.OnApplyClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCancelClicked__DelegateSignature(); // Function FiltersTabV1.FiltersTabV1_C.OnCancelClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

