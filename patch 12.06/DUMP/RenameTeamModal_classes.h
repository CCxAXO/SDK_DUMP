// WidgetBlueprintGeneratedClass RenameTeamModal.RenameTeamModal_C
// Size: 0x3d0 (Inherited: 0x318)
struct URenameTeamModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG_2; // 0x320(0x08)
	struct URichTextBlock* Description; // 0x328(0x08)
	struct UTextBlock* ErrorText; // 0x330(0x08)
	struct UImage* Gradient; // 0x338(0x08)
	struct UImage* Logo; // 0x340(0x08)
	struct UImage* Pattern; // 0x348(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x350(0x08)
	struct USizeBox* SizeBoxConfirmation_2; // 0x358(0x08)
	struct UEditableTextBox* TeamName; // 0x360(0x08)
	struct UTextBlock* TeamNameLengthHint; // 0x368(0x08)
	struct UEditableTextBox* TeamTag; // 0x370(0x08)
	struct UTextBlock* TeamTagLengthHint; // 0x378(0x08)
	struct UThrobber* Throbber_237; // 0x380(0x08)
	struct UImage* tint_bg; // 0x388(0x08)
	struct UTextBlock* Title; // 0x390(0x08)
	struct UImage* topornament; // 0x398(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3a8(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x3b0(0x08)
	struct FText Description_Forced; // 0x3b8(0x18)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function RenameTeamModal.RenameTeamModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function RenameTeamModal.RenameTeamModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSuccess(struct FRoster& Roster); // Function RenameTeamModal.RenameTeamModal_C.OnSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function RenameTeamModal.RenameTeamModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TeamTag_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function RenameTeamModal.RenameTeamModal_C.BndEvt__TeamTag_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CreateTeamModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function RenameTeamModal.RenameTeamModal_C.BndEvt__CreateTeamModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnError(enum class ERosterCreateErrorType& ErrorType); // Function RenameTeamModal.RenameTeamModal_C.OnError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__RenameTeamModal_TeamName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function RenameTeamModal.RenameTeamModal_C.BndEvt__RenameTeamModal_TeamName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RenameTeamModal(int32_t EntryPoint); // Function RenameTeamModal.RenameTeamModal_C.ExecuteUbergraph_RenameTeamModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

