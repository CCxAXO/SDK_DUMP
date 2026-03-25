// WidgetBlueprintGeneratedClass TournamentsSteps.TournamentsSteps_C
// Size: 0x3e8 (Inherited: 0x318)
struct UTournamentsSteps_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* check; // 0x320(0x08)
	struct UImage* check_2; // 0x328(0x08)
	struct UImage* check_5; // 0x330(0x08)
	struct UImage* check_9; // 0x338(0x08)
	struct UOverlay* CheckBox; // 0x340(0x08)
	struct UOverlay* checkbox_empty; // 0x348(0x08)
	struct UOverlay* checkbox_empty_3; // 0x350(0x08)
	struct UOverlay* checkbox_empty_6; // 0x358(0x08)
	struct UImage* devider; // 0x360(0x08)
	struct UVerticalBox* EnrollmentPhaseOverBox; // 0x368(0x08)
	struct UImage* IMG_PremierLogo; // 0x370(0x08)
	struct UTextBlock* Option1; // 0x378(0x08)
	struct UTextBlock* Option2; // 0x380(0x08)
	struct UTextBlock* Option2Detail; // 0x388(0x08)
	struct UTextBlock* Step1; // 0x390(0x08)
	struct UTextBlock* Step1Detail; // 0x398(0x08)
	struct UTextBlock* Step2; // 0x3a0(0x08)
	struct UTextBlock* Step3; // 0x3a8(0x08)
	struct UTextBlock* Step3Detail; // 0x3b0(0x08)
	struct UVerticalBox* StepsContainer; // 0x3b8(0x08)
	struct UTextBlock* Text_PremierStageName_2; // 0x3c0(0x08)
	struct UTextBlock* Text_SeasonMatchDetails_Body; // 0x3c8(0x08)
	struct UImage* TS_Check1; // 0x3d0(0x08)
	struct UWidgetSwitcher* WS_PhaseSteps; // 0x3d8(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x3e0(0x08)

	void ShouldShowCreationPhaseEndedSteps(bool& ShowCreationPhaseEndedSteps); // Function TournamentsSteps.TournamentsSteps_C.ShouldShowCreationPhaseEndedSteps // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Update Tournament Steps(); // Function TournamentsSteps.TournamentsSteps_C.Update Tournament Steps // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoaded_0482E73843054819213B9F81AD4AA963(struct UObject* Loaded); // Function TournamentsSteps.TournamentsSteps_C.OnLoaded_0482E73843054819213B9F81AD4AA963 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterModelUpdate(); // Function TournamentsSteps.TournamentsSteps_C.OnRosterModelUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsSteps.TournamentsSteps_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TournamentsSteps.TournamentsSteps_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsSteps(int32_t EntryPoint); // Function TournamentsSteps.TournamentsSteps_C.ExecuteUbergraph_TournamentsSteps // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

