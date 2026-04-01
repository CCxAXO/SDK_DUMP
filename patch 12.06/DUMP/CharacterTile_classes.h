// WidgetBlueprintGeneratedClass CharacterTile.CharacterTile_C
// Size: 0x370 (Inherited: 0x320)
struct UCharacterTile_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* CharacterImage; // 0x328(0x08)
	struct UTextBlock* Placeholder; // 0x330(0x08)
	struct UScaleBox* SwitcherImage; // 0x338(0x08)
	struct UScaleBox* SwitcherText; // 0x340(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_2; // 0x348(0x08)
	struct UCharacterDataAsset* CharacterDataAsset; // 0x350(0x08)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x358(0x10)
	struct UCharacterHandle* Handle; // 0x368(0x08)

	void UnbindFromCharacter(); // Function CharacterTile.CharacterTile_C.UnbindFromCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToCharacter(); // Function CharacterTile.CharacterTile_C.BindToCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnIsOwnedChanged(); // Function CharacterTile.CharacterTile_C.HandleOnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLoaded(struct UCharacterHandle* Character Handle); // Function CharacterTile.CharacterTile_C.OnCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsOwned(bool& IsOwned); // Function CharacterTile.CharacterTile_C.IsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetCharacter(struct UCharacterDataAsset* NewCharacterDataAsset); // Function CharacterTile.CharacterTile_C.SetCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CharacterTile.CharacterTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CharacterTile.CharacterTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterTile(int32_t EntryPoint); // Function CharacterTile.CharacterTile_C.ExecuteUbergraph_CharacterTile // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function CharacterTile.CharacterTile_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

