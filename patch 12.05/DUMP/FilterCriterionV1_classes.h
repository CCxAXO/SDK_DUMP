// WidgetBlueprintGeneratedClass FilterCriterionV1.FilterCriterionV1_C
// Size: 0x398 (Inherited: 0x318)
struct UFilterCriterionV1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* CellBackground; // 0x320(0x08)
	struct UButton* CriterionButton; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UFilterCheckboxButton_C* FilterCheckboxButton; // 0x338(0x08)
	struct UFilterCriterionHoverBG_C* HoveredBG; // 0x340(0x08)
	struct UImage* IconImage; // 0x348(0x08)
	struct USizeBox* IconSizeBox; // 0x350(0x08)
	struct UBaseContentFilterCriterion* BaseContentFilterCriterion; // 0x358(0x08)
	double HoveredOpacity; // 0x360(0x08)
	double NotHoveredOpacity; // 0x368(0x08)
	struct FMulticastInlineDelegate OnCriterionChanged; // 0x370(0x10)
	bool IsChecked; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FString Name; // 0x388(0x10)

	void OnPressed(); // Function FilterCriterionV1.FilterCriterionV1_C.OnPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHover(bool IsHovered); // Function FilterCriterionV1.FilterCriterionV1_C.SetHover // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Setup Checkbox(struct FString Name, bool InIsChecked); // Function FilterCriterionV1.FilterCriterionV1_C.Setup Checkbox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCriterionEnabled(bool IsEnabled); // Function FilterCriterionV1.FilterCriterionV1_C.OnCriterionEnabled // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function FilterCriterionV1.FilterCriterionV1_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function FilterCriterionV1.FilterCriterionV1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function FilterCriterionV1.FilterCriterionV1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function FilterCriterionV1.FilterCriterionV1_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function FilterCriterionV1.FilterCriterionV1_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FilterCriterionV2_CriterionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function FilterCriterionV1.FilterCriterionV1_C.BndEvt__FilterCriterionV2_CriterionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FilterCriterionV1(int32_t EntryPoint); // Function FilterCriterionV1.FilterCriterionV1_C.ExecuteUbergraph_FilterCriterionV1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnCriterionChanged__DelegateSignature(bool IsEnabled); // Function FilterCriterionV1.FilterCriterionV1_C.OnCriterionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

