// WidgetBlueprintGeneratedClass EpisodeTitle.EpisodeTitle_C
// Size: 0x350 (Inherited: 0x318)
struct UEpisodeTitle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ActTitle; // 0x320(0x08)
	struct UTextBlock* ActTitle_2; // 0x328(0x08)
	struct UTextBlock* EpisodeTitle; // 0x330(0x08)
	struct UScaleBox* EpisodeTitleScale; // 0x338(0x08)
	struct USeasonHandle* ActiveEpisode; // 0x340(0x08)
	struct USeasonHandle* ActiveAct; // 0x348(0x08)

	void HandleActiveSeasonDataLoaded(struct USeasonHandle* SeasonHandle); // Function EpisodeTitle.EpisodeTitle_C.HandleActiveSeasonDataLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LoadActiveSeasonData(); // Function EpisodeTitle.EpisodeTitle_C.LoadActiveSeasonData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTextToActiveSeason(); // Function EpisodeTitle.EpisodeTitle_C.SetTextToActiveSeason // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActiveSeasonData(struct USeasonHandle* SeasonHandle); // Function EpisodeTitle.EpisodeTitle_C.SetActiveSeasonData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function EpisodeTitle.EpisodeTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EpisodeTitle.EpisodeTitle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSeasonExpired(struct USeasonDataAsset* SeasonDataAsset); // Function EpisodeTitle.EpisodeTitle_C.OnSeasonExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function EpisodeTitle.EpisodeTitle_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EpisodeTitle(int32_t EntryPoint); // Function EpisodeTitle.EpisodeTitle_C.ExecuteUbergraph_EpisodeTitle // (Final|UbergraphFunction) // @ game+0x1af5410
};

