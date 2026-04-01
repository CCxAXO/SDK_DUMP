// WidgetBlueprintGeneratedClass MapIntroV3.MapIntroV3_C
// Size: 0x3f8 (Inherited: 0x318)
struct UMapIntroV3_C : UMapIntro_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* DataLoaded; // 0x320(0x08)
	struct UImage* DarkBackground; // 0x328(0x08)
	struct UImage* DividerLeft; // 0x330(0x08)
	struct UImage* Image_563; // 0x338(0x08)
	struct UProgressBar* LeftRight; // 0x340(0x08)
	struct UProgressBar* LeftRightCoordinates; // 0x348(0x08)
	struct UProgressBar* LeftRightGameType; // 0x350(0x08)
	struct UTextBlock* LocationText; // 0x358(0x08)
	struct UTextBlock* MapCoordinates; // 0x360(0x08)
	struct UTextBlock* MapName; // 0x368(0x08)
	struct UImage* MapSplash; // 0x370(0x08)
	struct UImage* ModeIcon; // 0x378(0x08)
	struct UTextBlock* ModeQueue; // 0x380(0x08)
	struct ULoadingThrobberSmall_C* NativePlatformLoadingIndicator; // 0x388(0x08)
	struct UProgressBar* RightLeft; // 0x390(0x08)
	struct UProgressBar* RightLeftCoordinates; // 0x398(0x08)
	struct UProgressBar* RightLeftGameType; // 0x3a0(0x08)
	struct UProgressBar* RightLeftLogoAccent; // 0x3a8(0x08)
	struct UImage* SquareLarge; // 0x3b0(0x08)
	struct UImage* SquareSmallBtm; // 0x3b8(0x08)
	struct UImage* SquareSmallTop; // 0x3c0(0x08)
	struct UImage* ValorantLogo; // 0x3c8(0x08)
	struct UTexture* FallbackImage; // 0x3d0(0x08)
	struct FString QueueID; // 0x3d8(0x10)
	struct UGameModeUIData* ModeUIData; // 0x3e8(0x08)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0x3f0(0x08)

	void Init(struct UMapDataAsset* MapDataAsset, struct FString QueueID, struct UGameModeDataAsset* ModeDataAsset, struct FString GamePodID); // Function MapIntroV3.MapIntroV3_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateQueueText(); // Function MapIntroV3.MapIntroV3_C.UpdateQueueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleMapLoaded(struct UMapHandle* Map); // Function MapIntroV3.MapIntroV3_C.HandleMapLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModeLoaded(struct UGameModeHandle* ModeHandle); // Function MapIntroV3.MapIntroV3_C.HandleModeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleQueueLoaded(struct UMatchmakingQueueHandle* QueueHandle); // Function MapIntroV3.MapIntroV3_C.HandleQueueLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MapIntroV3.MapIntroV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function MapIntroV3.MapIntroV3_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MapIntroV3.MapIntroV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MapIntroV3(int32_t EntryPoint); // Function MapIntroV3.MapIntroV3_C.ExecuteUbergraph_MapIntroV3 // (Final|UbergraphFunction) // @ game+0x1af5410
};

