// WidgetBlueprintGeneratedClass FaceOffTransitionV3.FaceOffTransitionV3_C
// Size: 0x4c8 (Inherited: 0x318)
struct UFaceOffTransitionV3_C : UFaceOffTransitionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* DataLoaded; // 0x320(0x08)
	struct ULoadingTeamV3_C* AllyTeam; // 0x328(0x08)
	struct UImage* backdrop; // 0x330(0x08)
	struct UImage* BackgroundImage; // 0x338(0x08)
	struct UImage* BackgroundVignette_2; // 0x340(0x08)
	struct UImage* circlebg; // 0x348(0x08)
	struct UOverlay* ConsoleLoading; // 0x350(0x08)
	struct UImage* DecoLeft; // 0x358(0x08)
	struct UImage* DecoRight; // 0x360(0x08)
	struct UScaleBox* DiamondScaleBox; // 0x368(0x08)
	struct ULoadingTeamV3_C* EnemyTeam; // 0x370(0x08)
	struct UAresCommonText* EsportsEventTime; // 0x378(0x08)
	struct USizeBox* EventSection; // 0x380(0x08)
	struct UImage* Floor; // 0x388(0x08)
	struct UWidgetSwitcher* FooterWidgetSwitcher; // 0x390(0x08)
	struct UImage* GameModeIcon; // 0x398(0x08)
	struct UImage* glowgreen; // 0x3a0(0x08)
	struct UImage* glowred; // 0x3a8(0x08)
	struct UVerticalBox* Header; // 0x3b0(0x08)
	struct UImage* LeftLine; // 0x3b8(0x08)
	struct UImage* Loading; // 0x3c0(0x08)
	struct UTextBlock* LocationText; // 0x3c8(0x08)
	struct UTextBlock* MapName; // 0x3d0(0x08)
	struct UTextBlock* MatchReplayDateText; // 0x3d8(0x08)
	struct UTextBlock* MatchReplayTimeText; // 0x3e0(0x08)
	struct UTextBlock* QueueMode; // 0x3e8(0x08)
	struct UVerticalBox* ReplaySection; // 0x3f0(0x08)
	struct UImage* RightLine; // 0x3f8(0x08)
	struct UImage* vct; // 0x400(0x08)
	struct UTextBlock* VersusText; // 0x408(0x08)
	struct UTexture* FallbackImage; // 0x410(0x08)
	struct FString QueueID; // 0x418(0x10)
	struct FFaceOffTransitionModel TransitionModel; // 0x428(0x88)
	struct UGameModeHandle* ModeHandle; // 0x4b0(0x08)
	struct UGameModeUIData* ModeUIData; // 0x4b8(0x08)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0x4c0(0x08)

	void SetEventTime(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.SetEventTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateReplayText(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.UpdateReplayText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OffsetTranslationForLoc(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.OffsetTranslationForLoc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateForEmptyTeams(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.UpdateForEmptyTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FFaceOffTransitionModel Model); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateQueueText(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.UpdateQueueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMapLoaded(struct UMapHandle* Map); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.HandleMapLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitTeams(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.InitTeams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleModeLoaded(struct UGameModeHandle* Mode Handle); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.HandleModeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleQueueLoaded(struct UMatchmakingQueueHandle* QueueHandle); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.HandleQueueLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FaceOffTransitionV3(int32_t EntryPoint); // Function FaceOffTransitionV3.FaceOffTransitionV3_C.ExecuteUbergraph_FaceOffTransitionV3 // (Final|UbergraphFunction) // @ game+0x1b42740
};

