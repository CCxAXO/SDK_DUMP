// WidgetBlueprintGeneratedClass PlayerCardFromAsset.PlayerCardFromAsset_C
// Size: 0x3a8 (Inherited: 0x320)
struct UPlayerCardFromAsset_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* LargeArtCard; // 0x328(0x08)
	struct UScaleBox* LargeCard; // 0x330(0x08)
	struct UPlayerTitleFromAsset_C* LargeTitle; // 0x338(0x08)
	struct UScaleBox* LargeTitleContainer; // 0x340(0x08)
	struct UImage* SmallArt; // 0x348(0x08)
	struct UScaleBox* SmallCard; // 0x350(0x08)
	struct UImage* WideArt; // 0x358(0x08)
	struct UScaleBox* WideCardCombatReportOnly; // 0x360(0x08)
	struct UPlayerTitleFromAsset_C* WideTitle; // 0x368(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x370(0x08)
	enum class PlayerCardFormat Format; // 0x378(0x01)
	bool Initialized; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct UPlayerCardDataAsset* PlayerCard; // 0x380(0x08)
	bool ShowPlayerTitle; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct UMaterialInstanceDynamic* LargeDefaultMaterial; // 0x390(0x08)
	struct UMaterialInstanceDynamic* WideDefaultMaterial; // 0x398(0x08)
	struct UMaterialInstanceDynamic* SmallDefaultMaterial; // 0x3a0(0x08)

	void SetDefaultDynamicMaterial(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.SetDefaultDynamicMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDefaultPlayerTitle(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.SetDefaultPlayerTitle // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDefaultPlayerCard(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.SetDefaultPlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerTitle(struct UPlayerTitleDataAsset* PlayerTitleDataAsset); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.SetPlayerTitle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TArray<struct UWidget*> PlayerTitleContainerWidgets(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.PlayerTitleContainerWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PlayerTitleWidgets(struct TArray<struct UPlayerTitleFromAsset_C*>& PlayerTitleWidgets); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.PlayerTitleWidgets // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetPlayerCard(struct UPlayerCardDataAsset* PlayerCard); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.SetPlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCardArt(struct UTexture2D* Texture, struct UMaterialInterface* InputMaterialInterface, struct UImage* CardArt); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.SetCardArt // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetToDefault(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.ResetToDefault // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCardImage(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.UpdateCardImage // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCardLoaded(struct UPlayerCardHandle* CardHandle); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.HandleCardLoaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerCardFromAsset(int32_t EntryPoint); // Function PlayerCardFromAsset.PlayerCardFromAsset_C.ExecuteUbergraph_PlayerCardFromAsset // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

