// WidgetBlueprintGeneratedClass WBP_Panel_FactionsArea.WBP_Panel_FactionsArea_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_FactionsArea_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Image_113; // 0x3e8(0x08)
	struct UWBP_Panel_FactionsLeaderboard_C* WBP_Panel_FactionsLeaderboard; // 0x3f0(0x08)
	struct UWBP_Panel_UserFactionArea_C* WBP_Panel_UserFactionArea; // 0x3f8(0x08)
	struct UPickemFactionsLeaderboardViewModel* Factions Leaderboard View Model; // 0x400(0x08)
	struct UEsportsTournamentViewModel* Esports Tournament View Model; // 0x408(0x08)

	void Init(struct FString TournamentID); // Function WBP_Panel_FactionsArea.WBP_Panel_FactionsArea_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_FactionsArea.WBP_Panel_FactionsArea_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_FactionsArea(int32_t EntryPoint); // Function WBP_Panel_FactionsArea.WBP_Panel_FactionsArea_C.ExecuteUbergraph_WBP_Panel_FactionsArea // (Final|UbergraphFunction) // @ game+0x1b42740
};

