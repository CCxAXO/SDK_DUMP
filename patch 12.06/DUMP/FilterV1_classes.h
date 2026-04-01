// WidgetBlueprintGeneratedClass FilterV1.FilterV1_C
// Size: 0x368 (Inherited: 0x320)
struct UFilterV1_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USharedButtonMaster_C* AllButton; // 0x328(0x08)
	struct UVerticalBox* Criteria; // 0x330(0x08)
	struct UTextBlock* HeaderLabel; // 0x338(0x08)
	struct USharedButtonMaster_C* NoneButton; // 0x340(0x08)
	double EvenRowOpacity; // 0x348(0x08)
	double OddRowOpacity; // 0x350(0x08)
	struct FMulticastInlineDelegate OnFilterChanged; // 0x358(0x10)

	void EnableOrClearAllCriteria(bool bIsEnabled); // Function FilterV1.FilterV1_C.EnableOrClearAllCriteria // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCriterionChanged(bool IsEnabled); // Function FilterV1.FilterV1_C.OnCriterionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddCriterion(struct UUserWidget* Widget); // Function FilterV1.FilterV1_C.AddCriterion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetName(struct FText Name); // Function FilterV1.FilterV1_C.SetName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BuildMockUi(); // Function FilterV1.FilterV1_C.BuildMockUi // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function FilterV1.FilterV1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FilterV2_AllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function FilterV1.FilterV1_C.BndEvt__FilterV2_AllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FilterV2_NoneButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function FilterV1.FilterV1_C.BndEvt__FilterV2_NoneButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FilterV1(int32_t EntryPoint); // Function FilterV1.FilterV1_C.ExecuteUbergraph_FilterV1 // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnFilterChanged__DelegateSignature(); // Function FilterV1.FilterV1_C.OnFilterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

