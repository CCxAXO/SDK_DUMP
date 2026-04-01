// WidgetBlueprintGeneratedClass PremierEventsScheduleModal.PremierEventsScheduleModal_C
// Size: 0x370 (Inherited: 0x318)
struct UPremierEventsScheduleModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* ConferenceSelectDropdown2; // 0x320(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x328(0x08)
	struct UImage* Image_483; // 0x330(0x08)
	struct UTextBlock* LeagueMapHeaderText; // 0x338(0x08)
	struct UPremierConferenceDropdown_C* PremierConferenceDropdown; // 0x340(0x08)
	struct UPremierConferenceServerList_C* PremierConferenceServerList; // 0x348(0x08)
	struct UPremierDivisionDropdown_C* PremierDivisionDropdown; // 0x350(0x08)
	struct UPremierEventsScheduleV2_C* PremierEventsScheduleV2; // 0x358(0x08)
	enum class EPremierDivisionGroup CurrentSelectedDivisionGroup; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UPremierConferenceModelOld* CurrentSelectedConference; // 0x368(0x08)

	void Construct(); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierEventsScheduleModal_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.BndEvt__PremierEventsScheduleModal_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnConferenceSelectionChange(struct UPremierConferenceModelOld* ConferenceModel); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.OnConferenceSelectionChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnConferenceUpdated(); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.OnConferenceUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDivisionGroupUpdated(); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.OnDivisionGroupUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDivisionSelectionChanged(struct FPremierDivisionData DivisionData); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.OnDivisionSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierEventsScheduleModal(int32_t EntryPoint); // Function PremierEventsScheduleModal.PremierEventsScheduleModal_C.ExecuteUbergraph_PremierEventsScheduleModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

