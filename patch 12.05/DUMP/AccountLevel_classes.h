// WidgetBlueprintGeneratedClass AccountLevel.AccountLevel_C
// Size: 0x351 (Inherited: 0x320)
struct UAccountLevel_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTextBlock* AccountLevelText; // 0x328(0x08)
	struct UBorder* Border_LevelBorder; // 0x330(0x08)
	int32_t PreviewLevel; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct ULevelBorderUIData* PreviewBorderUIData; // 0x340(0x08)
	struct UPlatformPlayer* PlatformPlayer; // 0x348(0x08)
	bool bInitialized; // 0x350(0x01)

	void RemovePlatformPlayer(); // Function AccountLevel.AccountLevel_C.RemovePlatformPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFromPlatformPlayer(struct UPlatformPlayer* Player); // Function AccountLevel.AccountLevel_C.UpdateFromPlatformPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromPlatformPlayer(struct UPlatformPlayer* Player); // Function AccountLevel.AccountLevel_C.InitFromPlatformPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBorderLoaded(struct ULevelBorderHandle* LevelBorderHandle); // Function AccountLevel.AccountLevel_C.OnBorderLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAccountLevelBorder(struct ULevelBorderDataAsset* LevelBorder); // Function AccountLevel.AccountLevel_C.SetAccountLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBorderArt(struct ULevelBorderUIData* LevelBorderUIData); // Function AccountLevel.AccountLevel_C.UpdateBorderArt // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAccountLevel(int32_t AccountLevel, bool IsDesignTime, struct ULevelBorderDataAsset* AccountLevelBorder); // Function AccountLevel.AccountLevel_C.SetAccountLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function AccountLevel.AccountLevel_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AccountLevel.AccountLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function AccountLevel.AccountLevel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AccountLevel(int32_t EntryPoint); // Function AccountLevel.AccountLevel_C.ExecuteUbergraph_AccountLevel // (Final|UbergraphFunction) // @ game+0x1af5410
};

