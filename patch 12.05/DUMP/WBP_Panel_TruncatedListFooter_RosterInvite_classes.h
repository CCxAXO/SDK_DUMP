// WidgetBlueprintGeneratedClass WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C
// Size: 0x428 (Inherited: 0x408)
struct UWBP_Panel_TruncatedListFooter_RosterInvite_C : UWBP_Panel_TruncatedListFooter_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UAresCommonText* Text_Closed; // 0x410(0x08)
	struct UAresCommonText* Text_Open; // 0x418(0x08)
	struct UWBP_Button_Social_List_Empty_C* WBP_Button_Social_List_Empty; // 0x420(0x08)

	void UpdateText(); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnFilteredElementCountChanged(int32_t FilteredElementCount); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.OnFilteredElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVisibleElementCountChanged(int32_t VisibleElementCount); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.OnVisibleElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceOpenInterpolationChanged(double OpenInterpolation); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.OnSocialExperienceOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceIsOpenChanged(bool bIsOpen); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.OnSocialExperienceIsOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_TruncatedListFooter_PartyMessage_WBP_Button_Social_List_Empty_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.BndEvt__WBP_Panel_TruncatedListFooter_PartyMessage_WBP_Button_Social_List_Empty_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TruncatedListFooter_RosterInvite(int32_t EntryPoint); // Function WBP_Panel_TruncatedListFooter_RosterInvite.WBP_Panel_TruncatedListFooter_RosterInvite_C.ExecuteUbergraph_WBP_Panel_TruncatedListFooter_RosterInvite // (Final|UbergraphFunction) // @ game+0x1af5410
};

