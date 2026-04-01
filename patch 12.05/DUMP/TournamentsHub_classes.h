// WidgetBlueprintGeneratedClass TournamentsHub.TournamentsHub_C
// Size: 0x3e0 (Inherited: 0x330)
struct UTournamentsHub_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UEligibilityStatesWidget_C* EligibilityStatesWidget; // 0x338(0x08)
	struct UButton* InfoBtn; // 0x340(0x08)
	struct UPremierMainInfoSection_C* PremierMainInfoSection; // 0x348(0x08)
	struct UWidgetSwitcher* StateSwitcher; // 0x350(0x08)
	struct UThrobber* Throbber_237; // 0x358(0x08)
	struct UTournamentsTeamRosterInfoDisplay_C* TournamentsTeamRosterInfoDisplay; // 0x360(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x368(0x08)
	struct URosterModel* Roster Model; // 0x370(0x08)
	bool Is Eligible; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FPlayerRestrictions PlayerRestrictions; // 0x380(0x30)
	bool IsAVSVerified; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FMulticastInlineDelegate OnScheduledEventSelected; // 0x3b8(0x10)
	struct UPremierScheduledEventModelOld* Scheduled Event; // 0x3c8(0x08)
	struct FMulticastInlineDelegate BeginTeamCreation; // 0x3d0(0x10)

	void ShouldShowEnrollmentButton(bool& ShowEnrollmentButton); // Function TournamentsHub.TournamentsHub_C.ShouldShowEnrollmentButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerEligibilityStatus(); // Function TournamentsHub.TournamentsHub_C.SetPlayerEligibilityStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateRosterViewState(); // Function TournamentsHub.TournamentsHub_C.PopulateRosterViewState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateState(); // Function TournamentsHub.TournamentsHub_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsHub.TournamentsHub_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnRostersUpdated(); // Function TournamentsHub.TournamentsHub_C.OnRostersUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAVSStatusChanged(bool IsVerified); // Function TournamentsHub.TournamentsHub_C.OnAVSStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On TournamentId Changed(struct FString NewValue); // Function TournamentsHub.TournamentsHub_C.On TournamentId Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTournamentDataChanged(struct FTournamentData TournamentData); // Function TournamentsHub.TournamentsHub_C.OnTournamentDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsTournamentChanged(bool NewValue); // Function TournamentsHub.TournamentsHub_C.OnIsTournamentChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Premier Eligibility Response(struct FPremierEligibility& PremierEligibility); // Function TournamentsHub.TournamentsHub_C.Premier Eligibility Response // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Premier Player Eligibility(); // Function TournamentsHub.TournamentsHub_C.Update Premier Player Eligibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Premier Eligibility Error(); // Function TournamentsHub.TournamentsHub_C.Premier Eligibility Error // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPremierRosterChanged(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function TournamentsHub.TournamentsHub_C.OnPremierRosterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentsHub_InfoBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsHub.TournamentsHub_C.BndEvt__TournamentsHub_InfoBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnPremierRestrictionsChanged(); // Function TournamentsHub.TournamentsHub_C.OnPremierRestrictionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentsHub_PremierMainInfoSection_K2Node_ComponentBoundEvent_1_OnScheduledEventSelected__DelegateSignature(struct UPremierScheduledEventModelOld* ScheduledEvent); // Function TournamentsHub.TournamentsHub_C.BndEvt__TournamentsHub_PremierMainInfoSection_K2Node_ComponentBoundEvent_1_OnScheduledEventSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnBeginTeamCreation(); // Function TournamentsHub.TournamentsHub_C.OnBeginTeamCreation // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function TournamentsHub.TournamentsHub_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsHub(int32_t EntryPoint); // Function TournamentsHub.TournamentsHub_C.ExecuteUbergraph_TournamentsHub // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void BeginTeamCreation__DelegateSignature(); // Function TournamentsHub.TournamentsHub_C.BeginTeamCreation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduledEventSelected__DelegateSignature(struct UPremierScheduledEventModelOld* ScheduledEvent); // Function TournamentsHub.TournamentsHub_C.OnScheduledEventSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

