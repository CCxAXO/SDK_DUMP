// WidgetBlueprintGeneratedClass WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C
// Size: 0x390 (Inherited: 0x318)
struct UWBP_RosterHistoryBo3Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresCommonText* GameNumberText; // 0x320(0x08)
	struct UImage* Image_121; // 0x328(0x08)
	struct UImage* img_Hover; // 0x330(0x08)
	struct UTextBlock* LossesText; // 0x338(0x08)
	struct UAresCommonText* MapNameText; // 0x340(0x08)
	struct UButton* MatchButton; // 0x348(0x08)
	struct UWidgetSwitcher* O_ExpandWrap; // 0x350(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x358(0x08)
	struct UAresCommonText* WinLossText; // 0x360(0x08)
	struct UTextBlock* WinsText; // 0x368(0x08)
	struct UPremierRosterMatchHistoryEntryOld* MatchHistoryEntry; // 0x370(0x08)
	int32_t GameNumber; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x380(0x10)

	void OnMapHandleLoaded(struct UMapHandle* MapHandle); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.OnMapHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpMatchHistoryEntry(); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.SetUpMatchHistoryEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchResult(); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.SetMatchResult // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWinAndLose(); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.SetWinAndLose // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_RosterHistoryBo3Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.BndEvt__WBP_RosterHistoryBo3Entry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_RosterHistoryBo3Entry(int32_t EntryPoint); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.ExecuteUbergraph_WBP_RosterHistoryBo3Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnMatchClicked__DelegateSignature(struct FString MatchID); // Function WBP_RosterHistoryBo3Entry.WBP_RosterHistoryBo3Entry_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

