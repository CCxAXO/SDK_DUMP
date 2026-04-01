// WidgetBlueprintGeneratedClass LeaderboardComboOption.LeaderboardComboOption_C
// Size: 0x360 (Inherited: 0x318)
struct ULeaderboardComboOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ActTextWidget; // 0x320(0x08)
	struct UTextBlock* EpisodeTextWidget; // 0x328(0x08)
	struct FText EpisodeText; // 0x330(0x18)
	struct FText ActText; // 0x348(0x18)

	void PreConstruct(bool IsDesignTime); // Function LeaderboardComboOption.LeaderboardComboOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void InitializeOption(struct FText EpisodeText, struct FText ActText, bool Selected, bool Enabled, bool IsComboButton); // Function LeaderboardComboOption.LeaderboardComboOption_C.InitializeOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LeaderboardComboOption(int32_t EntryPoint); // Function LeaderboardComboOption.LeaderboardComboOption_C.ExecuteUbergraph_LeaderboardComboOption // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

