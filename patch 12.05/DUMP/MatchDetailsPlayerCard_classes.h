// WidgetBlueprintGeneratedClass MatchDetailsPlayerCard.MatchDetailsPlayerCard_C
// Size: 0x399 (Inherited: 0x320)
struct UMatchDetailsPlayerCard_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* ScoreCard_Intro; // 0x328(0x08)
	struct UImage* BG; // 0x330(0x08)
	struct UTextBlock* CombatScore; // 0x338(0x08)
	struct UVerticalBox* CombatScoreBox; // 0x340(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x348(0x08)
	struct UImage* DecoLine; // 0x350(0x08)
	struct UImage* diamond; // 0x358(0x08)
	struct UTextBlock* KDA; // 0x360(0x08)
	struct UImage* MVPGradient; // 0x368(0x08)
	struct UOverlay* MVPOverlay; // 0x370(0x08)
	struct UTextBlock* MVPTitle; // 0x378(0x08)
	struct UImage* MVPTitleBG; // 0x380(0x08)
	struct UTextBlock* PlayerCharacterName; // 0x388(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x390(0x08)
	bool IsAlly; // 0x398(0x01)

	void SequenceEvent__ENTRYPOINTMatchDetailsPlayerCard(); // Function MatchDetailsPlayerCard.MatchDetailsPlayerCard_C.SequenceEvent__ENTRYPOINTMatchDetailsPlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayerNameColor(struct FString Subject); // Function MatchDetailsPlayerCard.MatchDetailsPlayerCard_C.UpdatePlayerNameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function MatchDetailsPlayerCard.MatchDetailsPlayerCard_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeWithPlayer(struct FProcessedPlayerDetails ProcessedPlayerDetails, bool bIsMVP, int32_t NumRounds); // Function MatchDetailsPlayerCard.MatchDetailsPlayerCard_C.InitializeWithPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsPlayerCard.MatchDetailsPlayerCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsPlayerCard(int32_t EntryPoint); // Function MatchDetailsPlayerCard.MatchDetailsPlayerCard_C.ExecuteUbergraph_MatchDetailsPlayerCard // (Final|UbergraphFunction) // @ game+0x1af5410
};

