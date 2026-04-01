// WidgetBlueprintGeneratedClass KilledBy_Base.KilledBy_Base_C
// Size: 0x368 (Inherited: 0x318)
struct UKilledBy_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USeasonWinBadge_C* SeasonWinBadgeWidget; // 0x320(0x08)
	struct UTextBlock* KillerName; // 0x328(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x330(0x08)
	struct UWidgetSwitcher* AccountLevelEnabledSwitcher; // 0x338(0x08)
	struct UVerticalBox* AccountLevelDisabled; // 0x340(0x08)
	struct UWidgetSwitcher* PlayerCardSwitcher; // 0x348(0x08)
	struct UWidePlayerIdentity_C* UnifiedPlayerInfoCard; // 0x350(0x08)
	struct UWBP_CombatReportPlayerIdentity_Base_C* KillerIdentity; // 0x358(0x08)
	struct UTextBlock* KillerAgentName; // 0x360(0x08)

	void SetKillerAgentName-CharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function KilledBy_Base.KilledBy_Base_C.SetKillerAgentName-CharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetKillerAgentName(struct UCharacterDataAsset* Character); // Function KilledBy_Base.KilledBy_Base_C.SetKillerAgentName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Self(struct AShooterPlayerState*& KillerPlayerState, bool& IsSelf, bool& IsAlly); // Function KilledBy_Base.KilledBy_Base_C.Self // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayer(struct AShooterPlayerState* Player); // Function KilledBy_Base.KilledBy_Base_C.SetPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function KilledBy_Base.KilledBy_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function KilledBy_Base.KilledBy_Base_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_KilledBy_Base(int32_t EntryPoint); // Function KilledBy_Base.KilledBy_Base_C.ExecuteUbergraph_KilledBy_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

