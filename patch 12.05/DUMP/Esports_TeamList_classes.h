// WidgetBlueprintGeneratedClass Esports_TeamList.Esports_TeamList_C
// Size: 0x358 (Inherited: 0x318)
struct UEsports_TeamList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* VB_TeamList; // 0x320(0x08)
	int32_t NumberOfTeams; // 0x328(0x04)
	enum class E_esportsTeamListStates E_ButtonState; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct TArray<struct FString> TeamNames; // 0x330(0x10)
	struct UEsports_VCTInfoSection_C* EsportsTeamInfoSection; // 0x340(0x08)
	struct UWBP_esports_TeamListItem_C* Selected Team; // 0x348(0x08)
	struct UEsports_TeamRegionsListItem_C* OwningRegion; // 0x350(0x08)

	void HandleEntrySelected(struct UWBP_esports_TeamListItem_C* New Selected Team); // Function Esports_TeamList.Esports_TeamList_C.HandleEntrySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateTeamsListFromStrings(struct TArray<struct FString>& Teams); // Function Esports_TeamList.Esports_TeamList_C.PopulateTeamsListFromStrings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleButton(enum class E_esportsTeamListStates ButtonState); // Function Esports_TeamList.Esports_TeamList_C.StyleButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateTeamsList(struct TArray<struct FTeamDTO>& Teams); // Function Esports_TeamList.Esports_TeamList_C.PopulateTeamsList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_TeamList.Esports_TeamList_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Esports_TeamList.Esports_TeamList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_TeamList(int32_t EntryPoint); // Function Esports_TeamList.Esports_TeamList_C.ExecuteUbergraph_Esports_TeamList // (Final|UbergraphFunction) // @ game+0x1af5410
};

