// WidgetBlueprintGeneratedClass Esports_VCTInfoSection.Esports_VCTInfoSection_C
// Size: 0x5e0 (Inherited: 0x318)
struct UEsports_VCTInfoSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UEsports_PlayerInfoCard_C* Esports_PlayerInfoCard; // 0x320(0x08)
	struct UEsports_PlayerInfoCard_C* Esports_PlayerInfoCard_2; // 0x328(0x08)
	struct UEsports_PlayerInfoCard_C* Esports_PlayerInfoCard_3; // 0x330(0x08)
	struct UEsports_PlayerInfoCard_C* Esports_PlayerInfoCard_4; // 0x338(0x08)
	struct UImage* IMG_TeamLogo; // 0x340(0x08)
	struct UTextBlock* Text_NoMatches; // 0x348(0x08)
	struct UTextBlock* Text_TeamLeague; // 0x350(0x08)
	struct UTextBlock* Text_TeamName; // 0x358(0x08)
	struct UVerticalBox* VB_UpcomingMatchList; // 0x360(0x08)
	struct UWrapBox* WB_TeamMembers; // 0x368(0x08)
	struct FTeamDTO TeamDTO; // 0x370(0x190)
	struct TMap<struct FString, struct UTexture2DDynamic*> Team Logos; // 0x500(0x50)
	struct FEventScheduleDTO Event Schedule; // 0x550(0x90)

	void Show Upcoming Matches for Team(struct FTeamDTO Team); // Function Esports_VCTInfoSection.Esports_VCTInfoSection_C.Show Upcoming Matches for Team // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_VCTInfoSection.Esports_VCTInfoSection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PopulateTeamInfoSection(struct FTeamDTO Team DTO); // Function Esports_VCTInfoSection.Esports_VCTInfoSection_C.PopulateTeamInfoSection // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateRosterPlayers(struct TArray<struct FPlayerDTO>& Players); // Function Esports_VCTInfoSection.Esports_VCTInfoSection_C.PopulateRosterPlayers // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_VCTInfoSection(int32_t EntryPoint); // Function Esports_VCTInfoSection.Esports_VCTInfoSection_C.ExecuteUbergraph_Esports_VCTInfoSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

