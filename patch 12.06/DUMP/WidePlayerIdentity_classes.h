// WidgetBlueprintGeneratedClass WidePlayerIdentity.WidePlayerIdentity_C
// Size: 0x3f1 (Inherited: 0x318)
struct UWidePlayerIdentity_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAccountLevel_C* AccountLevelWidget; // 0x320(0x08)
	struct UImage* CharacterIcon; // 0x328(0x08)
	struct UTextBlock* CharacterName; // 0x330(0x08)
	struct UImage* CharacterNameBackground; // 0x338(0x08)
	struct UTextBlock* DisplayName; // 0x340(0x08)
	struct USmallPlayerCardLevelBorderFrame_C* LevelBorderFrame; // 0x348(0x08)
	struct UImage* NameBackground; // 0x350(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x358(0x08)
	struct UTextBlock* PlayerTitleWidget; // 0x360(0x08)
	struct ULazyDynamicWidgetSwitcher_C* SeasonWinBadgeSwitcher; // 0x368(0x08)
	bool Ally; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	struct FLinearColor AllyBackgroundColor; // 0x374(0x10)
	struct FLinearColor EnemyBackgroundColor; // 0x384(0x10)
	struct FLinearColor MeBackgroundColor; // 0x394(0x10)
	bool IsCompetitiveMatch; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct UCharacterDataAsset* Character; // 0x3a8(0x08)
	struct FString Subject; // 0x3b0(0x10)
	bool Me; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct USeasonWinBadge_C* SeasonWinBadge; // 0x3c8(0x08)
	int32_t AccountLevel; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UPlayerCardDataAsset* PlayerCard; // 0x3d8(0x08)
	struct UPlayerTitleDataAsset* PlayerTitle; // 0x3e0(0x08)
	struct ULevelBorderDataAsset* LevelBorder; // 0x3e8(0x08)
	bool HideAccountLevel; // 0x3f0(0x01)

	void SetHideAccountLevel(bool HideAccountLevel); // Function WidePlayerIdentity.WidePlayerIdentity_C.SetHideAccountLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(bool Ally, bool Me, bool IsCompetitiveMatch, struct UCharacterDataAsset* Character, struct FString Subject); // Function WidePlayerIdentity.WidePlayerIdentity_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromLoadingPlayer(bool IsCompetitiveMatch, bool Ally, struct FLoadingScreenPlayer Player); // Function WidePlayerIdentity.WidePlayerIdentity_C.InitFromLoadingPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitInternal(); // Function WidePlayerIdentity.WidePlayerIdentity_C.InitInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAllyAndMe(bool Me); // Function WidePlayerIdentity.WidePlayerIdentity_C.UpdateAllyAndMe // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateName(struct FString Name); // Function WidePlayerIdentity.WidePlayerIdentity_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterLoaded(struct UCharacterHandle* Character); // Function WidePlayerIdentity.WidePlayerIdentity_C.HandleCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WidePlayerIdentity.WidePlayerIdentity_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SeasonWinBadgeSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function WidePlayerIdentity.WidePlayerIdentity_C.BndEvt__SeasonWinBadgeSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WidePlayerIdentity(int32_t EntryPoint); // Function WidePlayerIdentity.WidePlayerIdentity_C.ExecuteUbergraph_WidePlayerIdentity // (Final|UbergraphFunction) // @ game+0x1b42740
};

