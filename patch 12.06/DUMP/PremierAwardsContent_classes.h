// WidgetBlueprintGeneratedClass PremierAwardsContent.PremierAwardsContent_C
// Size: 0x3b0 (Inherited: 0x330)
struct UPremierAwardsContent_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UPremierAwardsFrame_C* BasicPlatingFrame; // 0x338(0x08)
	struct UPremierAwardsFrame_C* ChampsAuraFrame; // 0x340(0x08)
	struct UImage* DarkTint; // 0x348(0x08)
	struct UImage* Img-TournamentBG; // 0x350(0x08)
	struct UButton* InfoBtn; // 0x358(0x08)
	struct UImage* Line; // 0x360(0x08)
	struct UImage* Line_2; // 0x368(0x08)
	struct UImage* LineEnd; // 0x370(0x08)
	struct UImage* LineEnd_2; // 0x378(0x08)
	struct UImage* Lock; // 0x380(0x08)
	struct UOverlay* NoTeamPrestigeOverlay; // 0x388(0x08)
	struct UPremierAwards_StageEndAwardWidget_C* PlayerCardAward; // 0x390(0x08)
	struct UPremierAwards_StageEndAwardWidget_C* PlayoffAward; // 0x398(0x08)
	struct UPremierAwardsFrame_C* QualifiedPlatingFrame; // 0x3a0(0x08)
	struct UPremierAwardHubViewModel* AwardHubViewModel; // 0x3a8(0x08)

	void SetHighlightedTeamAward(); // Function PremierAwardsContent.PremierAwardsContent_C.SetHighlightedTeamAward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStageEndAwardUnlockStatus(); // Function PremierAwardsContent.PremierAwardsContent_C.SetStageEndAwardUnlockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeTeamTag(); // Function PremierAwardsContent.PremierAwardsContent_C.InitializeTeamTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeTeamAwardUnlockStatus(); // Function PremierAwardsContent.PremierAwardsContent_C.InitializeTeamAwardUnlockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierAwardsContent.PremierAwardsContent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnBasicPlatingStatusChanged(enum class EPremierPrestigesAwardUnlockStatus& BasicPlatingStatus); // Function PremierAwardsContent.PremierAwardsContent_C.OnBasicPlatingStatusChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQualifiedPlatingStatusChanged(enum class EPremierPrestigesAwardUnlockStatus& QualifiedPlatingStatus); // Function PremierAwardsContent.PremierAwardsContent_C.OnQualifiedPlatingStatusChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnChampsAuraStatusChanged(enum class EPremierPrestigesAwardUnlockStatus& ChampsAuraStatus); // Function PremierAwardsContent.PremierAwardsContent_C.OnChampsAuraStatusChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierAwardsContent_InfoBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PremierAwardsContent.PremierAwardsContent_C.BndEvt__PremierAwardsContent_InfoBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierAwardsContent.PremierAwardsContent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnHasEarnedTeamPrestigeChanged_Event(bool NewValue); // Function PremierAwardsContent.PremierAwardsContent_C.OnHasEarnedTeamPrestigeChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierAwardsContent(int32_t EntryPoint); // Function PremierAwardsContent.PremierAwardsContent_C.ExecuteUbergraph_PremierAwardsContent // (Final|UbergraphFunction) // @ game+0x1b42740
};

