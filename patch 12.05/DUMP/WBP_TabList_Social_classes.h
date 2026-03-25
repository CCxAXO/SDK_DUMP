// WidgetBlueprintGeneratedClass WBP_TabList_Social.WBP_TabList_Social_C
// Size: 0x4d4 (Inherited: 0x440)
struct UWBP_TabList_Social_C : UAresSocialTabListBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UGridPanel* GridPanel_Content; // 0x448(0x08)
	struct UHorizontalBox* HorizontalBox_ButtonList; // 0x450(0x08)
	struct UAresInputGate* InputGate_NextTabAction; // 0x458(0x08)
	struct UAresInputGate* InputGate_PreviousTabAction; // 0x460(0x08)
	struct USizeBox* SizeBox_NextTabAction; // 0x468(0x08)
	struct USizeBox* SizeBox_PreviousTabAction; // 0x470(0x08)
	struct UVerticalBox* VerticalBox_ButtonList; // 0x478(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ButtonList; // 0x480(0x08)
	struct FMargin PreviousTabInputActionPadding; // 0x488(0x10)
	enum class EHorizontalAlignment PreviousTabInputActionHorizontalAlignment; // 0x498(0x01)
	enum class EVerticalAlignment PreviousTabInputActionVerticalAlignment; // 0x499(0x01)
	char pad_49A[0x2]; // 0x49a(0x02)
	struct FMargin NextTabInputActionPadding; // 0x49c(0x10)
	enum class EHorizontalAlignment NextTabInputActionHorizontalAlignment; // 0x4ac(0x01)
	enum class EVerticalAlignment NextTabInputActionVerticalAlignment; // 0x4ad(0x01)
	char pad_4AE[0x2]; // 0x4ae(0x02)
	struct FMargin TabButtonListPadding; // 0x4b0(0x10)
	struct FMargin TabButtonPadding; // 0x4c0(0x10)
	enum class EHorizontalAlignment TabButtonHorizontalAlignment; // 0x4d0(0x01)
	enum class EVerticalAlignment TabButtonVerticalAlignment; // 0x4d1(0x01)
	enum class ESlateSizeRule TabButtonSizeRule; // 0x4d2(0x01)
	enum class EAresSocialTabBarOrientation TabBarOrientation; // 0x4d3(0x01)

	void RefreshAppearance(); // Function WBP_TabList_Social.WBP_TabList_Social_C.RefreshAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyTabButtonLayout(struct UWidget* Widget); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyTabButtonLayout // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyAllTabButtonsLayout(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyAllTabButtonsLayout // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyTabButtonListLayout(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyTabButtonListLayout // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetButtonListPanel(struct UPanelWidget*& Panel); // Function WBP_TabList_Social.WBP_TabList_Social_C.GetButtonListPanel // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ApplyInputActionLayout(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyInputActionLayout // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshLayout(); // Function WBP_TabList_Social.WBP_TabList_Social_C.RefreshLayout // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TransferListPanelContents(struct UPanelWidget* FromPanel, struct UPanelWidget* ToPanel); // Function WBP_TabList_Social.WBP_TabList_Social_C.TransferListPanelContents // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ValidateButtonListPanel(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ValidateButtonListPanel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyGridFill(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyGridFill // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyGridPositions(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyGridPositions // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyWidgetSwitcherIndex(); // Function WBP_TabList_Social.WBP_TabList_Social_C.ApplyWidgetSwitcherIndex // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshOrientation(); // Function WBP_TabList_Social.WBP_TabList_Social_C.RefreshOrientation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_TabList_Social.WBP_TabList_Social_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleTabRegistered(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function WBP_TabList_Social.WBP_TabList_Social_C.HandleTabRegistered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleTabRemoved(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function WBP_TabList_Social.WBP_TabList_Social_C.HandleTabRemoved // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_TabList_Social(int32_t EntryPoint); // Function WBP_TabList_Social.WBP_TabList_Social_C.ExecuteUbergraph_WBP_TabList_Social // (Final|UbergraphFunction) // @ game+0x1af5410
};

