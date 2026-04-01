// WidgetBlueprintGeneratedClass EligibilityStatesWidget.EligibilityStatesWidget_C
// Size: 0x388 (Inherited: 0x318)
struct UEligibilityStatesWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAccountVerificationSection_C* AccountVerificationSection; // 0x320(0x08)
	struct UWidgetSwitcher* EligibilityStepsWidgetSwitcher; // 0x328(0x08)
	struct UHorizontalBox* HB_Header_PremierLogoWrap; // 0x330(0x08)
	struct UImage* IMG_HeaderBG; // 0x338(0x08)
	struct UImage* IMG_MainBackground; // 0x340(0x08)
	struct UImage* IMG_PremierLogo; // 0x348(0x08)
	struct UImage* IMG_PremierType; // 0x350(0x08)
	struct UThrobber* LoadingThrobber; // 0x358(0x08)
	struct URankedPlacementRequirementSection_C* RankedPlacementVerificationSection; // 0x360(0x08)
	struct URestrictionsPremierEligibilitySection_C* RestrictionsPremierEligibilitySection; // 0x368(0x08)
	struct UTournamentsCreateTeamSection_C* TournamentsCreateTeamSection; // 0x370(0x08)
	struct FMulticastInlineDelegate BeginTeamCreation; // 0x378(0x10)

	void Construct(); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Update Eligibility State(); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.Update Eligibility State // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EligibilitySuccess(struct FPremierEligibility& PremierEligibility); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.EligibilitySuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EligibilityError(); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.EligibilityError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAVSStatusChanged(bool IsVerified); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.OnAVSStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPremierRestrictionsChanged(); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.OnPremierRestrictionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBeginTeamCreation(); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.OnBeginTeamCreation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EligibilityStatesWidget(int32_t EntryPoint); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.ExecuteUbergraph_EligibilityStatesWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void BeginTeamCreation__DelegateSignature(); // Function EligibilityStatesWidget.EligibilityStatesWidget_C.BeginTeamCreation__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

