// WidgetBlueprintGeneratedClass WBP_Screen_PremierLeaderboardContent.WBP_Screen_PremierLeaderboardContent_C
// Size: 0x368 (Inherited: 0x318)
struct UWBP_Screen_PremierLeaderboardContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPremierLeaderboardScreenViewModel* PremierLeaderboardScreenViewModel; // 0x320(0x08)
	struct UImage* BackgroundImage; // 0x328(0x08)
	struct UTextBlock* ErrorMessageScreen; // 0x330(0x08)
	struct UVerticalBox* LeaderboardsContainer; // 0x338(0x08)
	struct UImage* Loader; // 0x340(0x08)
	struct UWBP_Panel_PremierLeaderboard_C* WBP_Panel_PremierLeaderboard; // 0x348(0x08)
	struct UWBP_Panel_PremierPnPInfo_C* WBP_Panel_PremierPnPInfo; // 0x350(0x08)
	struct UWBP_Panel_PremierSeasonConferenceDivisionSelector_C* WBP_Panel_PremierSeasonConferenceDivisionSelector; // 0x358(0x08)
	struct UWidgetSwitcher* WS_LoadState; // 0x360(0x08)

	void Handle Valid Data Changed(bool Data is Valid); // Function WBP_Screen_PremierLeaderboardContent.WBP_Screen_PremierLeaderboardContent_C.Handle Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_PremierLeaderboardContent.WBP_Screen_PremierLeaderboardContent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_PremierLeaderboardContent.WBP_Screen_PremierLeaderboardContent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PremierLeaderboardContent(int32_t EntryPoint); // Function WBP_Screen_PremierLeaderboardContent.WBP_Screen_PremierLeaderboardContent_C.ExecuteUbergraph_WBP_Screen_PremierLeaderboardContent // (Final|UbergraphFunction) // @ game+0x1af5410
};

