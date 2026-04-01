// WidgetBlueprintGeneratedClass RosterConferenceDivision.RosterConferenceDivision_C
// Size: 0x398 (Inherited: 0x318)
struct URosterConferenceDivision_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* Conference; // 0x320(0x08)
	struct UImage* Divider; // 0x328(0x08)
	struct UVerticalBox* Division; // 0x330(0x08)
	struct UTextBlock* DivisionGroup; // 0x338(0x08)
	struct UTextBlock* DivisionName; // 0x340(0x08)
	struct UImage* IMG_Conference; // 0x348(0x08)
	struct UButton* PremierDivisionsInfoButton; // 0x350(0x08)
	struct UTextBlock* PremierScore; // 0x358(0x08)
	struct UImage* PromotionStatusImage; // 0x360(0x08)
	struct UWBP_ProRosterIcon_C* ProRosterIcon; // 0x368(0x08)
	struct UWidgetSwitcher* RightSideSwitcher; // 0x370(0x08)
	struct UWBP_Division_Icon_C* WBP_Division_Icon; // 0x378(0x08)
	struct UTextBlock* Zone; // 0x380(0x08)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x388(0x08)
	struct UPremierConferenceModelOld* ConferenceModel; // 0x390(0x08)

	void Set Icon Visibilities(); // Function RosterConferenceDivision.RosterConferenceDivision_C.Set Icon Visibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateConference(); // Function RosterConferenceDivision.RosterConferenceDivision_C.UpdateConference // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDivisionGroup(struct FText& DivisionGroup); // Function RosterConferenceDivision.RosterConferenceDivision_C.GetDivisionGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateDivision(); // Function RosterConferenceDivision.RosterConferenceDivision_C.UpdateDivision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateModels(); // Function RosterConferenceDivision.RosterConferenceDivision_C.PopulateModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update(); // Function RosterConferenceDivision.RosterConferenceDivision_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RosterConferenceDivision.RosterConferenceDivision_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnEnrolledChanged(bool NewValue); // Function RosterConferenceDivision.RosterConferenceDivision_C.OnEnrolledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPointsChanged(int32_t NewValue); // Function RosterConferenceDivision.RosterConferenceDivision_C.OnPointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRosterModelsUpdated(); // Function RosterConferenceDivision.RosterConferenceDivision_C.HandleRosterModelsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function RosterConferenceDivision.RosterConferenceDivision_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RosterConferenceDivision_PremierDivisionsInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RosterConferenceDivision.RosterConferenceDivision_C.BndEvt__RosterConferenceDivision_PremierDivisionsInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RosterConferenceDivision(int32_t EntryPoint); // Function RosterConferenceDivision.RosterConferenceDivision_C.ExecuteUbergraph_RosterConferenceDivision // (Final|UbergraphFunction) // @ game+0x1af5410
};

