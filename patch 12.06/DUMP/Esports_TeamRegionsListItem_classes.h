// WidgetBlueprintGeneratedClass Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C
// Size: 0x531 (Inherited: 0x318)
struct UEsports_TeamRegionsListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* HideBG; // 0x320(0x08)
	struct UWidgetAnimation* ShowBG; // 0x328(0x08)
	struct UWidgetAnimation* HideTab; // 0x330(0x08)
	struct UWidgetAnimation* ShowTab; // 0x338(0x08)
	struct UWidgetAnimation* ResetText; // 0x340(0x08)
	struct UWidgetAnimation* offsetText; // 0x348(0x08)
	struct UButton* But_RegionName; // 0x350(0x08)
	struct UEsports_TeamList_C* EsportsTeamList; // 0x358(0x08)
	struct UImage* IMG_ExpandArrow; // 0x360(0x08)
	struct UImage* IMG_isSelectedBG; // 0x368(0x08)
	struct UImage* IMG_isSelectedTab; // 0x370(0x08)
	struct UTextBlock* TB_RegionName; // 0x378(0x08)
	bool IsExpanded; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UEsports_VCTInfoSection_C* EsportsTeamInfoSection; // 0x388(0x08)
	struct FTeamDTO TeamDTO; // 0x390(0x190)
	bool IsEnterAnimPending; // 0x520(0x01)
	bool IsExitAnimPending; // 0x521(0x01)
	char pad_522[0x6]; // 0x522(0x06)
	struct UEsports_TeamRegionsList_C* EsportsTeamRegionsList; // 0x528(0x08)
	bool IsHighlighted; // 0x530(0x01)

	void ClearTeamSelection(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.ClearTeamSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHighlightedState(bool SetIsHighlighted); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.SetHighlightedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleTeamSelected(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.HandleTeamSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitTeamList(struct TArray<struct FTeamDTO>& Teams); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.InitTeamList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRegionName(struct FText RegionName); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.SetRegionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetExpandedState(bool SetIsExpanded); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.SetExpandedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetItemPadding(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.SetItemPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Finished_EEF897F846E20D50707E36A1051A42A7(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.Finished_EEF897F846E20D50707E36A1051A42A7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Set Entry Selected(bool SkipAudio); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.Set Entry Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_esports_TeamListItem_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.BndEvt__WBP_esports_TeamListItem_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_TeamRegionsListItem(int32_t EntryPoint); // Function Esports_TeamRegionsListItem.Esports_TeamRegionsListItem_C.ExecuteUbergraph_Esports_TeamRegionsListItem // (Final|UbergraphFunction) // @ game+0x1b42740
};

