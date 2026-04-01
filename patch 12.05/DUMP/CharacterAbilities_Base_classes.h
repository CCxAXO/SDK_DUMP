// WidgetBlueprintGeneratedClass CharacterAbilities_Base.CharacterAbilities_Base_C
// Size: 0x328 (Inherited: 0x318)
struct UCharacterAbilities_Base_C : UUserWidget {
	struct UCharacterHandle* CharacterHandle; // 0x318(0x08)
	struct UCharacterDataAsset* Character; // 0x320(0x08)

	void GetModeSpecificDetailsWidgetClass(struct UUserWidget*& NewParam); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.GetModeSpecificDetailsWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FindAbility(enum class ECharacterAbilitySlot AbilitySlot, struct UCharacterAbilityUIData*& AbilityData); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.FindAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDisplayCharacterRole(struct FText& DisplayRole); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.GetDisplayCharacterRole // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDisplayCharacterName(struct FText& DisplayName); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.GetDisplayCharacterName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterHandleLoaded(struct UCharacterHandle* Handle); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.OnCharacterHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAbilities(); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.UpdateAbilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateName(); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.UpdateName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCharacter(struct UCharacterDataAsset* Character); // Function CharacterAbilities_Base.CharacterAbilities_Base_C.SetCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

