// WidgetBlueprintGeneratedClass WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C
// Size: 0x431 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerLeaderboardPosition_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* Text_LeaderboardPosition; // 0x3e8(0x08)
	struct UCommonTextStyle* TextStyle; // 0x3f0(0x08)
	struct FText TextPrefix; // 0x3f8(0x18)
	int32_t PreviewLeaderboardPosition; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct UVM_PlayerLeaderboardPosition_C* PlayerLeaderboardPositionVM; // 0x418(0x08)
	struct FString PlayerSubject; // 0x420(0x10)
	bool bCollapseIfNoPosition; // 0x430(0x01)

	void SetTextColor(struct FSlateColor Color); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.SetTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnLeaderboardPositionChanged(int32_t CurrentLeaderboardPosition); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.OnLeaderboardPositionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerLeaderboardPosition(int32_t EntryPoint); // Function WBP_Panel_PlayerLeaderboardPosition.WBP_Panel_PlayerLeaderboardPosition_C.ExecuteUbergraph_WBP_Panel_PlayerLeaderboardPosition // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

