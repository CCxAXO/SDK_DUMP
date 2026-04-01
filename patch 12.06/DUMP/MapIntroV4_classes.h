// WidgetBlueprintGeneratedClass MapIntroV4.MapIntroV4_C
// Size: 0x428 (Inherited: 0x318)
struct UMapIntroV4_C : UMapIntro_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* DataLoaded_MapExit; // 0x320(0x08)
	struct UWidgetAnimation* DataLoaded; // 0x328(0x08)
	struct UImage* bigSquare; // 0x330(0x08)
	struct UImage* ColorOverlay; // 0x338(0x08)
	struct UImage* Fadeleft; // 0x340(0x08)
	struct UImage* Faderight; // 0x348(0x08)
	struct UImage* LineB04; // 0x350(0x08)
	struct UImage* LineB04_2; // 0x358(0x08)
	struct UImage* LineL02; // 0x360(0x08)
	struct UImage* LineL02_2; // 0x368(0x08)
	struct UImage* LineR01; // 0x370(0x08)
	struct UImage* LineR02_2; // 0x378(0x08)
	struct UImage* LineT03; // 0x380(0x08)
	struct UImage* LineT03_2; // 0x388(0x08)
	struct UTextBlock* LocationText; // 0x390(0x08)
	struct UTextBlock* MapCoordinates; // 0x398(0x08)
	struct UTextBlock* MapName; // 0x3a0(0x08)
	struct UImage* MapSplash; // 0x3a8(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x3b0(0x08)
	struct UImage* ModeIcon; // 0x3b8(0x08)
	struct UTextBlock* ModeQueue; // 0x3c0(0x08)
	struct UImage* OrnamentBot01; // 0x3c8(0x08)
	struct UImage* OrnamentBot02; // 0x3d0(0x08)
	struct UProgressBar* RightLeftLogoAccent; // 0x3d8(0x08)
	struct UImage* SmallSquare01; // 0x3e0(0x08)
	struct UImage* SmallSquare02; // 0x3e8(0x08)
	struct UTechDeco_C* TechDeco; // 0x3f0(0x08)
	struct UImage* ValorantLogo_2; // 0x3f8(0x08)
	struct UTexture* FallbackImage; // 0x400(0x08)
	struct FString QueueID; // 0x408(0x10)
	struct UGameModeUIData* ModeUIData; // 0x418(0x08)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0x420(0x08)

	void Init(struct UMapDataAsset* MapDataAsset, struct FString QueueID, struct UGameModeDataAsset* ModeDataAsset, struct FString GamePodID); // Function MapIntroV4.MapIntroV4_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateQueueText(); // Function MapIntroV4.MapIntroV4_C.UpdateQueueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleMapLoaded(struct UMapHandle* Map); // Function MapIntroV4.MapIntroV4_C.HandleMapLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleModeLoaded(struct UGameModeHandle* ModeHandle); // Function MapIntroV4.MapIntroV4_C.HandleModeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleQueueLoaded(struct UMatchmakingQueueHandle* QueueHandle); // Function MapIntroV4.MapIntroV4_C.HandleQueueLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MapIntroV4.MapIntroV4_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapIntroV4(int32_t EntryPoint); // Function MapIntroV4.MapIntroV4_C.ExecuteUbergraph_MapIntroV4 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

