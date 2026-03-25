// WidgetBlueprintGeneratedClass WidePlayerIdentityV3.WidePlayerIdentityV3_C
// Size: 0x400 (Inherited: 0x318)
struct UWidePlayerIdentityV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* AccentSizeBox; // 0x320(0x08)
	struct UTeamAccent_C* AllyTeamAccent; // 0x328(0x08)
	struct UTextBlock* CharacterName; // 0x330(0x08)
	struct UImage* CharacterNameBackground; // 0x338(0x08)
	struct UVerticalBox* DetailsVerticalBox; // 0x340(0x08)
	struct UTextBlock* DisplayName; // 0x348(0x08)
	struct UHorizontalBox* MainPlayerIdentityContainer; // 0x350(0x08)
	struct UDynamicConfigSwitcher_C* NameWidgetSwitcher; // 0x358(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PlayerIdentityBorder_Lazy; // 0x360(0x08)
	struct UWBP_Panel_PlayerName_C* PlayerName; // 0x368(0x08)
	struct UTextBlock* PlayerTitleWidget; // 0x370(0x08)
	bool Ally; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	struct FLinearColor AllyBackgroundColor; // 0x37c(0x10)
	struct FLinearColor EnemyBackgroundColor; // 0x38c(0x10)
	struct FLinearColor MeBackgroundColor; // 0x39c(0x10)
	bool IsCompetitiveMatch; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UCharacterDataAsset* Character; // 0x3b0(0x08)
	struct FString Subject; // 0x3b8(0x10)
	bool Me; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t AccountLevel; // 0x3cc(0x04)
	struct UPlayerCardDataAsset* PlayerCard; // 0x3d0(0x08)
	struct UPlayerTitleDataAsset* PlayerTitle; // 0x3d8(0x08)
	struct ULevelBorderDataAsset* LevelBorder; // 0x3e0(0x08)
	bool HideAccountLevel; // 0x3e8(0x01)
	bool FlipForEnemy; // 0x3e9(0x01)
	char pad_3EA[0x6]; // 0x3ea(0x06)
	struct UIdentityAgentIcon_C* AgentIcon; // 0x3f0(0x08)
	struct UIdentityPlayerCardWithAccountLevel_C* PlayerCardWithLevel; // 0x3f8(0x08)

	void InitPremier(); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.InitPremier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLayout(); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.UpdateLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHideAccountLevel(bool HideAccountLevel); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.SetHideAccountLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(bool Ally, bool FlipForEnemy, bool Me, bool IsCompetitiveMatch, struct UCharacterDataAsset* Character, struct FString Subject); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromLoadingPlayer(bool IsCompetitiveMatch, bool Ally, struct FLoadingScreenPlayer Player); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.InitFromLoadingPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitInternal(); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.InitInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAllyAndMe(bool Me); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.UpdateAllyAndMe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateName(struct FString Name); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCharacterLoaded(struct UCharacterHandle* Character); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.HandleCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WidePlayerIdentityV3(int32_t EntryPoint); // Function WidePlayerIdentityV3.WidePlayerIdentityV3_C.ExecuteUbergraph_WidePlayerIdentityV3 // (Final|UbergraphFunction) // @ game+0x1af5410
};

