// WidgetBlueprintGeneratedClass WBP_esports_TeamListItem.WBP_esports_TeamListItem_C
// Size: 0x508 (Inherited: 0x318)
struct UWBP_esports_TeamListItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* OnHover; // 0x320(0x08)
	struct UWidgetAnimation* OnSelected; // 0x328(0x08)
	struct UButton* But_TeamName; // 0x330(0x08)
	struct UImage* IMG_BG; // 0x338(0x08)
	struct UImage* IMG_isSelectedBG; // 0x340(0x08)
	struct UImage* IMG_isSelectedTab; // 0x348(0x08)
	struct UTextBlock* TB_TeamName; // 0x350(0x08)
	bool IsSelected; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UEsports_VCTInfoSection_C* EsportsTeamInfoSection; // 0x360(0x08)
	struct FTeamDTO TeamDTO; // 0x368(0x190)
	bool IsEnterAnimPending; // 0x4f8(0x01)
	bool IsExitAnimPending; // 0x4f9(0x01)
	char pad_4FA[0x6]; // 0x4fa(0x06)
	struct UEsports_TeamList_C* EsportsTeamList; // 0x500(0x08)

	void SetSelectedState(bool SetIsSelected); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.SetSelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetItemPadding(); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.SetItemPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamInfo(struct FTeamDTO TeamDTO); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.SetTeamInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamName(struct FText TeamName); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.SetTeamName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Entry Selected(bool SkipAudio); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.Set Entry Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_esports_TeamListItem_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.BndEvt__WBP_esports_TeamListItem_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_esports_TeamListItem(int32_t EntryPoint); // Function WBP_esports_TeamListItem.WBP_esports_TeamListItem_C.ExecuteUbergraph_WBP_esports_TeamListItem // (Final|UbergraphFunction) // @ game+0x1b42740
};

