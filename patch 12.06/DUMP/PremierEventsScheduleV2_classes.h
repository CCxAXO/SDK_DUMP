// WidgetBlueprintGeneratedClass PremierEventsScheduleV2.PremierEventsScheduleV2_C
// Size: 0x5a8 (Inherited: 0x318)
struct UPremierEventsScheduleV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Validate; // 0x320(0x08)
	struct UImage* Body_Background; // 0x328(0x08)
	struct UWidgetSwitcher* ConferenceDropdownWidgetSwitcher; // 0x330(0x08)
	struct UHorizontalBox* ConferenceSelectDropdown2; // 0x338(0x08)
	struct UScrollBox* Events_ScrollBox; // 0x340(0x08)
	struct UVerticalBox* EventsContainer; // 0x348(0x08)
	struct USizeBox* EventScrollBoxSize; // 0x350(0x08)
	struct UVerticalBox* EventsListBox; // 0x358(0x08)
	struct UImage* Header_Background; // 0x360(0x08)
	struct UVerticalBox* HeaderTextVerticalBox; // 0x368(0x08)
	struct UImage* Image_208; // 0x370(0x08)
	struct UImage* mountain; // 0x378(0x08)
	struct UTextBlock* NextStageStartsHeaderText; // 0x380(0x08)
	struct UOverlay* NoConferenceDropdown; // 0x388(0x08)
	struct UVerticalBox* NoUpcomingEvents; // 0x390(0x08)
	struct UOverlay* NoUpcomingEventsBody; // 0x398(0x08)
	struct UTextBlock* NoUpcomingEventsText; // 0x3a0(0x08)
	struct UPremierEvents_ConferenceFilterDropdown_C* PremierEvents_ConferenceFilterDropdown; // 0x3a8(0x08)
	struct USpacer* ScheduleSpacer; // 0x3b0(0x08)
	struct UOverlay* UpcomingEvents; // 0x3b8(0x08)
	struct UWidgetSwitcher* UpcomingEventsEmptySwitcher; // 0x3c0(0x08)
	struct UPremierScheduledEventModelOld* CurrentOrNextEventModel; // 0x3c8(0x08)
	struct UPremierScheduledEvent_C* CurrentOrNextEventWidget; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnConferenceSelectionChanged; // 0x3d8(0x10)
	struct UPremierEventModelOld* Selected Event Model; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnScheduledEventSelectionChanged; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnCurrentOrNextEventModelChanged; // 0x400(0x10)
	struct FString SelectedConference; // 0x410(0x10)
	bool ShouldShowConferenceDropdown; // 0x420(0x01)
	bool IsModal; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct TMap<struct UPremierScheduledEventModelOld*, struct UPremierScheduledEvent_C*> ScheduledEventModelToWidgetMap; // 0x428(0x50)
	struct UPremierScheduledEventModelOld* Selected Scheduled Event Model; // 0x478(0x08)
	struct TMap<int32_t, struct UPremierScheduleWeekDropdownContainer_C*> WeekNumberToDropdownMap; // 0x480(0x50)
	struct UPremierSeasonModelOld* ActiveSeasonModel; // 0x4d0(0x08)
	struct UPremierScheduledEventModelOld* FirstScheduledEvent; // 0x4d8(0x08)
	int32_t EventWeekIter; // 0x4e0(0x04)
	int32_t EventNumberIter; // 0x4e4(0x04)
	enum class EDivisionGroup DivisionGroup; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct TArray<struct UPremierScheduledEvent_C*> PreAllocatedEventWidgets; // 0x4f0(0x10)
	int32_t MaxEventWidgets; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct TMap<struct FGuid, struct UPremierScheduleWeekDropdownContainer_C*> EventIDToDropdownMap; // 0x508(0x50)
	struct TMap<struct FGuid, int32_t> EventIDToRoundCountMap; // 0x558(0x50)

	void CalculateRoundsForEvent ID(struct TArray<struct UPremierScheduledEventModelOld*>& ScheduledEvents); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.CalculateRoundsForEvent ID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNoUpcomingEventsState(); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.UpdateNoUpcomingEventsState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleProEventLabeling(struct UPremierScheduledEventModelOld* ScheduledEventModel, struct UPremierScheduledEvent_C* ScheduledEventWidget); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.HandleProEventLabeling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetWeekNumber(struct FDateTime DateTime, int32_t& WeekNumber); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.GetWeekNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Create New Widget for Event(struct UPremierScheduledEventModelOld* ScheduledEvent, int32_t Index, struct UPremierScheduledEvent_C*& ScheduledEventWidget); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Create New Widget for Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateNewHeaderForEvent(struct UPremierScheduledEventModelOld* ScheduledEvent, struct UPremierScheduleWeekDropdownContainer_C*& HeaderWidget); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.CreateNewHeaderForEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateEvents(); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.UpdateEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetModalStyle(bool IsModal); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.SetModalStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDropdownVisibility(bool ShowConferenceDropdown); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.SetDropdownVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Event Selected(struct UPremierScheduledEventModelOld* ScheduledEventModel); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Handle Event Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Selected Conference(struct FString SelectedConference); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Update Selected Conference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierEventsScheduleV2_PremierEvents_ConferenceFilterDropdown_K2Node_ComponentBoundEvent_0_OnConferenceSelectionChanged__DelegateSignature(struct FString ConferenceKey); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.BndEvt__PremierEventsScheduleV2_PremierEvents_ConferenceFilterDropdown_K2Node_ComponentBoundEvent_0_OnConferenceSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init With DivisionGroup(enum class EDivisionGroup DivisionGroup); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Init With DivisionGroup // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetConferenceAndDivisionGroup(struct FString ConferenceKey, enum class EDivisionGroup DivisionGroup); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.SetConferenceAndDivisionGroup // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AllocateEventWidgets(); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.AllocateEventWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierEventsScheduleV2(int32_t EntryPoint); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.ExecuteUbergraph_PremierEventsScheduleV2 // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCurrentOrNextEventModelChanged__DelegateSignature(struct UPremierEventModelOld* CurrentOrNextEvent); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.OnCurrentOrNextEventModelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScheduledEventSelectionChanged__DelegateSignature(struct UPremierScheduledEventModelOld* Scheduled Event Model, bool IsCurrentOrNext); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.OnScheduledEventSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnConferenceSelectionChanged__DelegateSignature(struct FString ConferenceKey); // Function PremierEventsScheduleV2.PremierEventsScheduleV2_C.OnConferenceSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

