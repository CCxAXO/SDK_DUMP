// BlueprintGeneratedClass CustomGameUIFacade.CustomGameUIFacade_C
// Size: 0xf0 (Inherited: 0x30)
struct UCustomGameUIFacade_C : UObject {
	struct UPartyViewController* Controller; // 0x30(0x08)
	struct UPartyModel* PartyModel; // 0x38(0x08)
	struct UCustomGameModel* CustomGameModel; // 0x40(0x08)
	struct USortedMapToListModel* MapOptionsListModel; // 0x48(0x08)
	struct UAresClientGameInstance* GameInstance; // 0x50(0x08)
	struct UComparer_BaseContentUIData_C* UIDataComparer; // 0x58(0x08)
	struct USortedMapToListModel* ModeOptionsListModel; // 0x60(0x08)
	struct TMap<enum class ECustomGameTeam, struct UFixedSlotMapToListModel*> TeamMembersListModels; // 0x68(0x50)
	bool TournamentModeEnabled; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FName PartyTournamentModeObserversConfig; // 0xbc(0x0c)
	struct UGameFeatureTogglesComponent* GameFeatureToggles; // 0xc8(0x08)
	struct TScriptInterface<IUnorderedMapModel> MapOptionsMapModel; // 0xd0(0x10)
	struct TScriptInterface<IUnorderedMapModel> ModeOptionsMapModel; // 0xe0(0x10)

	struct FIndexRange GetPlayerSlotIndex(struct FWildcard& Item); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetPlayerSlotIndex // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct TScriptInterface<IUnorderedMapModel> GetModeOptionsMapModel(); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetModeOptionsMapModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct TScriptInterface<IUnorderedMapModel> GetMapOptionsMapModel(); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetMapOptionsMapModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateObserverListCount(); // Function CustomGameUIFacade.CustomGameUIFacade_C.UpdateObserverListCount // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleBoolSettingChange(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function CustomGameUIFacade.CustomGameUIFacade_C.HandleBoolSettingChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitLocalGameFeatureToggles(); // Function CustomGameUIFacade.CustomGameUIFacade_C.InitLocalGameFeatureToggles // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	int32_t CalculateMaxObserverCount(); // Function CustomGameUIFacade.CustomGameUIFacade_C.CalculateMaxObserverCount // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct UPartyViewController* GetPartyViewController(); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetPartyViewController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetGameInstance(struct UAresClientGameInstance*& GameInstance); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetGameInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetPartyModel(struct UPartyModel*& PartyModel); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetPartyModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct TScriptInterface<IOrderedListModel> GetTeamMembersListModel(enum class ECustomGameTeam Team); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetTeamMembersListModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void UpdateListModelBacking(); // Function CustomGameUIFacade.CustomGameUIFacade_C.UpdateListModelBacking // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct TScriptInterface<IOrderedListModel> GetModeOptionsListModel(); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetModeOptionsListModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct TScriptInterface<IOrderedListModel> GetMapOptionsListModel(); // Function CustomGameUIFacade.CustomGameUIFacade_C.GetMapOptionsListModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void InitListModels(); // Function CustomGameUIFacade.CustomGameUIFacade_C.InitListModels // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCustomGameModel(struct UCustomGameModel* NewValue); // Function CustomGameUIFacade.CustomGameUIFacade_C.SetCustomGameModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCustomGameModel(); // Function CustomGameUIFacade.CustomGameUIFacade_C.UpdateCustomGameModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPartyModel(struct UPartyModel* NewValue); // Function CustomGameUIFacade.CustomGameUIFacade_C.SetPartyModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePartyModel(); // Function CustomGameUIFacade.CustomGameUIFacade_C.UpdatePartyModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UAresClientGameInstance* InGameInstance, struct UPartyViewController* InController); // Function CustomGameUIFacade.CustomGameUIFacade_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetController(struct UPartyViewController* NewValue); // Function CustomGameUIFacade.CustomGameUIFacade_C.SetController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

