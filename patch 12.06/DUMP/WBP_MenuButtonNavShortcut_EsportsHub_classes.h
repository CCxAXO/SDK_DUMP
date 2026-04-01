// WidgetBlueprintGeneratedClass WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C
// Size: 0x642 (Inherited: 0x610)
struct UWBP_MenuButtonNavShortcut_EsportsHub_C : UWBP_MenuButtonNavShortcut_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x610(0x08)
	struct UEsportsLiveEventTimesViewModel* EsportsVM; // 0x618(0x08)
	struct FLinearColor EventColor; // 0x620(0x10)
	enum class EAresMainMenuTopNavigationState CurrentLegacyNavigationState; // 0x630(0x01)
	enum class EEsportsLiveTickerState LiveEventState; // 0x631(0x01)
	char pad_632[0x6]; // 0x632(0x06)
	struct UMaterialInstanceDynamic* VCTSparkMaterial; // 0x638(0x08)
	bool HasVisitedEsportsHubCurrentSession; // 0x640(0x01)
	enum class E2024VCTEvent LiveTournamentID; // 0x641(0x01)

	void CreateEsportsLiveEventsVM(); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.CreateEsportsLiveEventsVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleHasEnteredEsportsHubChanged(bool NewValue); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.HandleHasEnteredEsportsHubChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshView(); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.RefreshView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNavigationStateChanged(); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.HandleNavigationStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLiveTournamentIDChanged(struct FString NewValue); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.HandleLiveTournamentIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEsportsTickerStateChanged(enum class EEsportsLiveTickerState& LiveTickerState); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.HandleEsportsTickerStateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindViewModels(bool Bind); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.BindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Apply Appearance For Current State(); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.Apply Appearance For Current State // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_MenuButtonNavShortcut_EsportsHub(int32_t EntryPoint); // Function WBP_MenuButtonNavShortcut_EsportsHub.WBP_MenuButtonNavShortcut_EsportsHub_C.ExecuteUbergraph_WBP_MenuButtonNavShortcut_EsportsHub // (Final|UbergraphFunction) // @ game+0x1b42740
};

