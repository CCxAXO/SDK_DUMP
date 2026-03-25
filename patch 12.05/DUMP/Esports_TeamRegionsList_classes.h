// WidgetBlueprintGeneratedClass Esports_TeamRegionsList.Esports_TeamRegionsList_C
// Size: 0x3a8 (Inherited: 0x318)
struct UEsports_TeamRegionsList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* IMG_VCTspark; // 0x320(0x08)
	struct UVerticalBox* VB_RegionList; // 0x328(0x08)
	int32_t NumberOfTeams; // 0x330(0x04)
	enum class E_esportsTeamListStates E_ButtonState; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UEsports_VCTInfoSection_C* EsportsTeamInfoSection; // 0x338(0x08)
	struct UWBP_esports_TeamListItem_C* Selected Team; // 0x340(0x08)
	struct UEsports_TeamRegionsListItem_C* Expanded Region; // 0x348(0x08)
	struct TArray<struct FString> RegionNames; // 0x350(0x10)
	struct TArray<struct FTeamDTO> AmericasTeams; // 0x360(0x10)
	struct TArray<struct FTeamDTO> EMEATeams; // 0x370(0x10)
	struct TArray<struct FTeamDTO> PacificTeams; // 0x380(0x10)
	struct TArray<struct FTeamDTO> ChinaTeams; // 0x390(0x10)
	struct UEsports_TeamRegionsListItem_C* Highlighted Region; // 0x3a0(0x08)

	void UpdateHighlightedRegion(struct UEsports_TeamRegionsListItem_C* New Highlighted Region); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.UpdateHighlightedRegion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortTeamsByRegion(struct TArray<struct FTeamDTO>& Teams); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.SortTeamsByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateRegionsList(struct TArray<struct FTeamDTO>& Teams); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.PopulateRegionsList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEntrySelected(struct UEsports_TeamRegionsListItem_C* New Expanded Region); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.HandleEntrySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateRegionsListFromStrings(struct TArray<struct FString>& Regions); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.PopulateRegionsListFromStrings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleButton(enum class E_esportsTeamListStates ButtonState); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.StyleButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_TeamRegionsList(int32_t EntryPoint); // Function Esports_TeamRegionsList.Esports_TeamRegionsList_C.ExecuteUbergraph_Esports_TeamRegionsList // (Final|UbergraphFunction) // @ game+0x1af5410
};

