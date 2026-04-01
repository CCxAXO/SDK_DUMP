// WidgetBlueprintGeneratedClass PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C
// Size: 0x3f0 (Inherited: 0x318)
struct UPremierMatchHistoryByeEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Button_1; // 0x320(0x08)
	struct UTextBlock* ByeLabel; // 0x328(0x08)
	struct UOverlay* ErrorLoadingMatchOverlay; // 0x330(0x08)
	struct UImage* Hoverborder; // 0x338(0x08)
	struct UImage* Image_58; // 0x340(0x08)
	struct UImage* Image_280; // 0x348(0x08)
	struct UTextBlock* LossesText; // 0x350(0x08)
	struct UTextBlock* LPEarned; // 0x358(0x08)
	struct UTextBlock* LPValue; // 0x360(0x08)
	struct UVerticalBox* MatchandPointsVB; // 0x368(0x08)
	struct UHorizontalBox* PointsHB; // 0x370(0x08)
	struct USizeBox* SB_MainWrap; // 0x378(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x380(0x08)
	struct USpacer* Spacer1; // 0x388(0x08)
	struct USpacer* Spacer2; // 0x390(0x08)
	struct USpacer* Spacer2_2; // 0x398(0x08)
	struct UTextBlock* TB_MATCHtext; // 0x3a0(0x08)
	struct UTextBlock* TB_RoundResult; // 0x3a8(0x08)
	struct UTextBlock* TB_SCRIMtext; // 0x3b0(0x08)
	struct UWidgetSwitcher* TBtextSwitcher; // 0x3b8(0x08)
	struct UTextBlock* WinsText; // 0x3c0(0x08)
	struct UWidgetSwitcher* WS_MatchEntryState; // 0x3c8(0x08)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x3d0(0x10)
	bool bIsHovered; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UPremierMatchHistoryEntryViewModel* ByeEntryVM; // 0x3e8(0x08)

	void SetStyleBasedOnMatchType(); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.SetStyleBasedOnMatchType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpMatchHistoryEntry(); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.SetUpMatchHistoryEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchResult(); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.SetMatchResult // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWinsLosses(); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.SetWinsLosses // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_Hover_K2Node_WidgetAnimationEvent_1(); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.WidgetAnimationEvt_Hover_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierMatchHistoryByeEntry(int32_t EntryPoint); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.ExecuteUbergraph_PremierMatchHistoryByeEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnMatchClicked__DelegateSignature(struct FString MatchID); // Function PremierMatchHistoryByeEntry.PremierMatchHistoryByeEntry_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

