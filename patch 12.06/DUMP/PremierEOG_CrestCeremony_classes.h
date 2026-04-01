// WidgetBlueprintGeneratedClass PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C
// Size: 0x379 (Inherited: 0x338)
struct UPremierEOG_CrestCeremony_C : UEOGCeremonyWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* PlayoffTeam; // 0x340(0x08)
	struct UWidgetAnimation* RunnerUp; // 0x348(0x08)
	struct UWidgetAnimation* Winner; // 0x350(0x08)
	struct UWidgetAnimation* Flawless; // 0x358(0x08)
	struct UTextBlock* CrestTypeName; // 0x360(0x08)
	struct UPremierCrest_Base_C* PremierCrestBase; // 0x368(0x08)
	struct UImage* PremierLogo; // 0x370(0x08)
	enum class EPremierCrestType Crest Type; // 0x378(0x01)

	void TriggerCeremony(); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.TriggerCeremony // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Data(enum class EPremierDivisionGroup Division Group, enum class EPremierCrestType CrestType); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.Init Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_PlayOffTeam_K2Node_WidgetAnimationEvent_1(); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.WidgetAnimationEvt_PlayOffTeam_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_RunnerUp_K2Node_WidgetAnimationEvent_2(); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.WidgetAnimationEvt_RunnerUp_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_Winner_K2Node_WidgetAnimationEvent_3(); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.WidgetAnimationEvt_Winner_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0x1b42740
	void WidgetAnimationEvt_Flawless_K2Node_WidgetAnimationEvent_4(); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.WidgetAnimationEvt_Flawless_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierEOG_CrestCeremony(int32_t EntryPoint); // Function PremierEOG_CrestCeremony.PremierEOG_CrestCeremony_C.ExecuteUbergraph_PremierEOG_CrestCeremony // (Final|UbergraphFunction) // @ game+0x1b42740
};

