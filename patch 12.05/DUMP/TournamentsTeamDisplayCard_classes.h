// WidgetBlueprintGeneratedClass TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C
// Size: 0x3e0 (Inherited: 0x320)
struct UTournamentsTeamDisplayCard_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UOverlay* CardOverlay; // 0x328(0x08)
	struct UPremierTeamInfoModule_C* PremierTeamInfoModule_Crest; // 0x330(0x08)
	struct UPremierTeamInfoModule_C* PremierTeamInfoModule_Division; // 0x338(0x08)
	struct UPremierTeamInfoModule_C* PremierTeamInfoModule_PremierScore; // 0x340(0x08)
	struct UHorizontalBox* TeamInfoDisplayModules; // 0x348(0x08)
	struct UTournamentsTeamDisplay_C* TournamentsTeamPersonalizationDisplay; // 0x350(0x08)
	struct URosterModel* Roster Model; // 0x358(0x08)
	bool ShowRank; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UMaterialInterface* DefaultMaterial; // 0x368(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x370(0x08)
	struct FGuid DefaultGuid; // 0x378(0x10)
	struct FUnverifiedMetadataPersonalization PersonalizationData; // 0x388(0x40)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x3c8(0x08)
	struct URosterMemberModel* SelfRosterMemberModel; // 0x3d0(0x08)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x3d8(0x08)

	void UpdateSettingsButtonVisibility(); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.UpdateSettingsButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RUMBLE UpdateDivisionAndPoints(struct UPremierRosterViewModel* Updated Premier Roster View Model); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.RUMBLE UpdateDivisionAndPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void InitWithModel(struct URosterModel* Roster Model); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.InitWithModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPremierRosterViewModelUpdated(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.OnPremierRosterViewModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterModelMembersUpdated(); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.OnRosterModelMembersUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFromPremierViewModel(struct UPremierRosterViewModel* Roster); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.UpdateFromPremierViewModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsTeamDisplayCard(int32_t EntryPoint); // Function TournamentsTeamDisplayCard.TournamentsTeamDisplayCard_C.ExecuteUbergraph_TournamentsTeamDisplayCard // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

