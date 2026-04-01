// WidgetBlueprintGeneratedClass MatchDetailsRoundScreenScoreboardEntryV5.MatchDetailsRoundScreenScoreboardEntryV5_C
// Size: 0x878 (Inherited: 0x318)
struct UMatchDetailsRoundScreenScoreboardEntryV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Armor; // 0x320(0x08)
	struct UTextBlock* Assists; // 0x328(0x08)
	struct UTextBlock* Bank; // 0x330(0x08)
	struct UImage* BGAssist; // 0x338(0x08)
	struct UImage* BgEquipment; // 0x340(0x08)
	struct UImage* BGkilld; // 0x348(0x08)
	struct UImage* Bgmoney; // 0x350(0x08)
	struct UImage* BGName; // 0x358(0x08)
	struct UImage* BGScore; // 0x360(0x08)
	struct UTextBlock* CharacterName; // 0x368(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x370(0x08)
	struct UTextBlock* Interest; // 0x378(0x08)
	struct UTextBlock* Kills; // 0x380(0x08)
	struct UTextBlock* Loadout; // 0x388(0x08)
	struct UImage* PlayerIcon; // 0x390(0x08)
	struct UTextBlock* Score; // 0x398(0x08)
	struct UImage* teamBackground; // 0x3a0(0x08)
	struct UImage* TeamBar; // 0x3a8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x3b0(0x08)
	struct UTextBlock* Weapon; // 0x3b8(0x08)
	struct FProcessedPlayerRoundResult ProcessedPlayerRoundResult; // 0x3c0(0x220)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x5e0(0x278)
	struct FString Subject; // 0x858(0x10)
	struct FString TargetSubject; // 0x868(0x10)

	void Construct(); // Function MatchDetailsRoundScreenScoreboardEntryV5.MatchDetailsRoundScreenScoreboardEntryV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsRoundScreenScoreboardEntryV5(int32_t EntryPoint); // Function MatchDetailsRoundScreenScoreboardEntryV5.MatchDetailsRoundScreenScoreboardEntryV5_C.ExecuteUbergraph_MatchDetailsRoundScreenScoreboardEntryV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

