// WidgetBlueprintGeneratedClass PremierMainInfoSection.PremierMainInfoSection_C
// Size: 0x3b8 (Inherited: 0x318)
struct UPremierMainInfoSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UEnrollmentButton_C* EnrollmentButton; // 0x328(0x08)
	struct UWidgetSwitcher* EventScheduleWidgetSwitcher; // 0x330(0x08)
	struct UImage* Image_208; // 0x338(0x08)
	struct UOverlay* LaunchEventsModalView; // 0x340(0x08)
	struct UWidgetSwitcher* MiddleViewSwitcher; // 0x348(0x08)
	struct UImage* mountain; // 0x350(0x08)
	struct UPremierCurrentEventSection_C* PremierCurrentEventSection; // 0x358(0x08)
	struct UPremierEventsScheduleV2_C* PremierEventsScheduleV2; // 0x360(0x08)
	struct UTournamentsEnrollmentPeriod_C* TournamentsEnrollmentPeriod; // 0x368(0x08)
	struct UTournamentsSteps_C* TournamentsSteps; // 0x370(0x08)
	struct UVerticalBox* UpcomingEventsSectionView; // 0x378(0x08)
	struct UWBP_MenuButtonSecondary_Premier_C* WBP_MenuButtonSecondary_Premier; // 0x380(0x08)
	struct UObject* TournamentsViewController; // 0x388(0x08)
	struct UObject* TournamentsModel; // 0x390(0x08)
	struct UPremierSeasonDataAsset* CurrentPremierSeasonAsset; // 0x398(0x08)
	struct UPremierEventModelOld* CurrentOrUpcomingEventModel; // 0x3a0(0x08)
	struct FMulticastInlineDelegate OnScheduledEventSelected; // 0x3a8(0x10)

	void UpdateEventScheduleView(); // Function PremierMainInfoSection.PremierMainInfoSection_C.UpdateEventScheduleView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Middle View(); // Function PremierMainInfoSection.PremierMainInfoSection_C.Update Middle View // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowEnrollButton(bool ShowEnrollmentButton); // Function PremierMainInfoSection.PremierMainInfoSection_C.ShowEnrollButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierMainInfoSection.PremierMainInfoSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateActiveSeason(); // Function PremierMainInfoSection.PremierMainInfoSection_C.UpdateActiveSeason // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentsMainInfoSection_WBP_MenuButtonSecondary_Premier_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PremierMainInfoSection.PremierMainInfoSection_C.BndEvt__TournamentsMainInfoSection_WBP_MenuButtonSecondary_Premier_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnScheduledEventSelectionChanged(struct UPremierScheduledEventModelOld* Scheduled Event Model, bool IsCurrentOrNext); // Function PremierMainInfoSection.PremierMainInfoSection_C.OnScheduledEventSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRostersUpdated(); // Function PremierMainInfoSection.PremierMainInfoSection_C.OnRostersUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPremierRosterChanged(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function PremierMainInfoSection.PremierMainInfoSection_C.OnPremierRosterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConferenceChanged(struct FString NewValue); // Function PremierMainInfoSection.PremierMainInfoSection_C.OnConferenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDivisionChanged(int32_t NewValue); // Function PremierMainInfoSection.PremierMainInfoSection_C.OnDivisionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function PremierMainInfoSection.PremierMainInfoSection_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Unbind From PremierEventsScheduleV2(); // Function PremierMainInfoSection.PremierMainInfoSection_C.Unbind From PremierEventsScheduleV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierMainInfoSection(int32_t EntryPoint); // Function PremierMainInfoSection.PremierMainInfoSection_C.ExecuteUbergraph_PremierMainInfoSection // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnScheduledEventSelected__DelegateSignature(struct UPremierScheduledEventModelOld* ScheduledEvent); // Function PremierMainInfoSection.PremierMainInfoSection_C.OnScheduledEventSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

