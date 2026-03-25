// WidgetBlueprintGeneratedClass PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C
// Size: 0x379 (Inherited: 0x318)
struct UPremierScheduleWeekDropdownContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UWidgetAnimation* ArrowRotate; // 0x328(0x08)
	struct UImage* BackgroundColor; // 0x330(0x08)
	struct UButton* Button_199; // 0x338(0x08)
	struct UVerticalBox* EventsList; // 0x340(0x08)
	struct UImage* HoverGlow; // 0x348(0x08)
	struct UImage* Image_DropdownArrow; // 0x350(0x08)
	struct UTextBlock* Text_Left; // 0x358(0x08)
	struct UTextBlock* Text_Right; // 0x360(0x08)
	bool IsExpanded; // 0x368(0x01)
	bool IsCollapsible; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UImage* Image Dropdown Arrow; // 0x370(0x08)
	bool IsPast; // 0x378(0x01)

	void SetIsPast(bool IsPast); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.SetIsPast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeCollapsibility(); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.InitializeCollapsibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleExpanded(bool IsExpanded); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.ToggleExpanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddEventWidgetToList(struct UWidget* EventWidget); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.AddEventWidgetToList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearEventsList(); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.ClearEventsList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FText TextLeft, struct FText TextRight); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PremierScheduleWeekDropdownContainer_Button_198_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.BndEvt__PremierScheduleWeekDropdownContainer_Button_198_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PremierScheduleWeekDropdownContainer_Button_198_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.BndEvt__PremierScheduleWeekDropdownContainer_Button_198_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PremierScheduleWeekDropdownContainer_Button_198_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.BndEvt__PremierScheduleWeekDropdownContainer_Button_198_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierScheduleWeekDropdownContainer(int32_t EntryPoint); // Function PremierScheduleWeekDropdownContainer.PremierScheduleWeekDropdownContainer_C.ExecuteUbergraph_PremierScheduleWeekDropdownContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

