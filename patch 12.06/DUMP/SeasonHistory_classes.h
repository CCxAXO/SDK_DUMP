// WidgetBlueprintGeneratedClass SeasonHistory.SeasonHistory_C
// Size: 0x3a0 (Inherited: 0x318)
struct USeasonHistory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* dot1; // 0x320(0x08)
	struct UImage* dot2; // 0x328(0x08)
	struct UImage* dot3; // 0x330(0x08)
	struct UImage* dot4; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_43; // 0x348(0x08)
	struct UImage* Image_362; // 0x350(0x08)
	struct USeasonalRank_C* SeasonalRank; // 0x358(0x08)
	struct USeasonalRankPopup_C* SeasonalRankPopup; // 0x360(0x08)
	struct USeasonComboBox_C* SeasonComboBox; // 0x368(0x08)
	struct UMatchHistoryViewModel* MatchHistoryViewModel; // 0x370(0x08)
	struct FString InitialActiveOption; // 0x378(0x10)
	struct USeasonDataAsset* ActiveSeasonAsset; // 0x388(0x08)
	struct FString Subject; // 0x390(0x10)

	void PreConstruct(bool IsDesignTime); // Function SeasonHistory.SeasonHistory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSeasonDataAvailable(); // Function SeasonHistory.SeasonHistory_C.OnSeasonDataAvailable // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UMatchHistoryViewModel* MatchHistoryViewModel, struct FString Subject); // Function SeasonHistory.SeasonHistory_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSelectionChanged(struct FGuid SeasonID); // Function SeasonHistory.SeasonHistory_C.OnSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SeasonHistory(int32_t EntryPoint); // Function SeasonHistory.SeasonHistory_C.ExecuteUbergraph_SeasonHistory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

