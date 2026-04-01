// WidgetBlueprintGeneratedClass CharactersScreen_Base.CharactersScreen_Base_C
// Size: 0x3d4 (Inherited: 0x330)
struct UCharactersScreen_Base_C : UContractsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct FAresMainMenuNavBarData AresNavBarData; // 0x338(0x28)
	struct TMap<struct UCharacterDataAsset*, struct UCharacterHandle*> CharacterHandlesByAsset; // 0x360(0x50)
	bool CharactersInitialized; // 0x3b0(0x01)
	bool AgentMovesLeft; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct UCharacterHandle* SelectedCharacter; // 0x3b8(0x08)
	bool OpenBrowsedContract; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct UCharacterDataAsset* InitialCharacter; // 0x3c8(0x08)
	int32_t CharacterIndex; // 0x3d0(0x04)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function CharactersScreen_Base.CharactersScreen_Base_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function CharactersScreen_Base.CharactersScreen_Base_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpSelectedCharacterV2(struct UCharacterHandle* Char Handle); // Function CharactersScreen_Base.CharactersScreen_Base_C.SetUpSelectedCharacterV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharactersInitialized(); // Function CharactersScreen_Base.CharactersScreen_Base_C.OnCharactersInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectCharacter(struct UCharacterHandle* Character); // Function CharactersScreen_Base.CharactersScreen_Base_C.SelectCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateCharacterUIs(); // Function CharactersScreen_Base.CharactersScreen_Base_C.PopulateCharacterUIs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpSelectedCharacter(struct UCharacterHandle* Char Handle, struct UGenericCarousel_C* Owning Carousel); // Function CharactersScreen_Base.CharactersScreen_Base_C.SetUpSelectedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CharactersScreen_Base.CharactersScreen_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CharactersLoaded(struct FCharacterHandles& CharacterHandles); // Function CharactersScreen_Base.CharactersScreen_Base_C.CharactersLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BrowseToCharacter(struct UCharacterDataAsset* Character, bool OpenContract); // Function CharactersScreen_Base.CharactersScreen_Base_C.BrowseToCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharactersScreen_Base(int32_t EntryPoint); // Function CharactersScreen_Base.CharactersScreen_Base_C.ExecuteUbergraph_CharactersScreen_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

