// WidgetBlueprintGeneratedClass TournamentsCreateTeamSection.TournamentsCreateTeamSection_C
// Size: 0x358 (Inherited: 0x318)
struct UTournamentsCreateTeamSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* HeaderDescriptionText; // 0x320(0x08)
	struct UTextBlock* HeaderText; // 0x328(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x330(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x338(0x08)
	bool hasShownCodeOfConduct; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FMulticastInlineDelegate BeginTeamCreation; // 0x348(0x10)

	void BndEvt__TournamentsCreateTeamSection_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TournamentsCreateTeamSection.TournamentsCreateTeamSection_C.BndEvt__TournamentsCreateTeamSection_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsCreateTeamSection(int32_t EntryPoint); // Function TournamentsCreateTeamSection.TournamentsCreateTeamSection_C.ExecuteUbergraph_TournamentsCreateTeamSection // (Final|UbergraphFunction) // @ game+0x1b42740
	void BeginTeamCreation__DelegateSignature(); // Function TournamentsCreateTeamSection.TournamentsCreateTeamSection_C.BeginTeamCreation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

