// WidgetBlueprintGeneratedClass EnrollmentButton.EnrollmentButton_C
// Size: 0x370 (Inherited: 0x318)
struct UEnrollmentButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* CaptainMustSelectZoneText; // 0x320(0x08)
	struct UOverlay* EnrollButton; // 0x328(0x08)
	struct UWBP_MenuButton_Premier_C* EnrollmentButton; // 0x330(0x08)
	struct UVerticalBox* EnrollmentDeadlineStatus; // 0x338(0x08)
	struct UWidgetSwitcher* EnrollmentSwitcher; // 0x340(0x08)
	struct UTextBlock* InviteMorePlayersText; // 0x348(0x08)
	struct UTextBlock* ServiceErrorText; // 0x350(0x08)
	struct UOverlay* UnenrollButton; // 0x358(0x08)
	struct UWBP_MenuButtonPrimary_C* UnenrollmentButton; // 0x360(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x368(0x08)

	void GetTeamOwner(struct URosterMemberModel*& RosterMember); // Function EnrollmentButton.EnrollmentButton_C.GetTeamOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Owner Must Select Zone Text(); // Function EnrollmentButton.EnrollmentButton_C.Update Owner Must Select Zone Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEnrollmentWarningStatus(bool showMinumumMemberWarning, bool enrolled); // Function EnrollmentButton.EnrollmentButton_C.UpdateEnrollmentWarningStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonState(); // Function EnrollmentButton.EnrollmentButton_C.UpdateButtonState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EnrollmentButton_UnenrollmentButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function EnrollmentButton.EnrollmentButton_C.BndEvt__EnrollmentButton_UnenrollmentButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnUnenrollSuccess(); // Function EnrollmentButton.EnrollmentButton_C.OnUnenrollSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnenrollError(); // Function EnrollmentButton.EnrollmentButton_C.OnUnenrollError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ConfirmUnenroll(); // Function EnrollmentButton.EnrollmentButton_C.ConfirmUnenroll // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CancelUnenroll(); // Function EnrollmentButton.EnrollmentButton_C.CancelUnenroll // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EnrollmentButton.EnrollmentButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EnrollmentButton_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function EnrollmentButton.EnrollmentButton_C.BndEvt__EnrollmentButton_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnRosterModelMembersUpdate(); // Function EnrollmentButton.EnrollmentButton_C.OnRosterModelMembersUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterMemberOwnerUpdated(); // Function EnrollmentButton.EnrollmentButton_C.OnRosterMemberOwnerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterMemberRoleUpdated(); // Function EnrollmentButton.EnrollmentButton_C.OnRosterMemberRoleUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterModelsUpdated(); // Function EnrollmentButton.EnrollmentButton_C.OnRosterModelsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function EnrollmentButton.EnrollmentButton_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConferenceChanged(struct FString NewValue); // Function EnrollmentButton.EnrollmentButton_C.OnConferenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDivisionChanged(int32_t NewValue); // Function EnrollmentButton.EnrollmentButton_C.OnDivisionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EnrollmentButton(int32_t EntryPoint); // Function EnrollmentButton.EnrollmentButton_C.ExecuteUbergraph_EnrollmentButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

