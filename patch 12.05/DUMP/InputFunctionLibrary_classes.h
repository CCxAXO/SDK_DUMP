// BlueprintGeneratedClass InputFunctionLibrary.InputFunctionLibrary_C
// Size: 0x30 (Inherited: 0x30)
struct UInputFunctionLibrary_C : UBlueprintFunctionLibrary {

	void SetGamepadGlyphsInputChordAction(struct UWidget* Widget, struct FName ActionName, bool UseInputStruct, struct FStruct_Widget_Ability_Input InputStruct, enum class EActionBindSetAxisDirection ActionBindSetAxisDirection, struct UObject* __WorldContext, struct UInputChordWidgetBase_C*& InputChordWidget); // Function InputFunctionLibrary.InputFunctionLibrary_C.SetGamepadGlyphsInputChordAction // (Static|Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitAbilityElement(struct UPanelWidget* Input Container, struct UObject* __WorldContext); // Function InputFunctionLibrary.InputFunctionLibrary_C.InitAbilityElement // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitGamepadGlyphsAbilityElement(struct UContentWidget* ContainerPanel, struct UObject* __WorldContext); // Function InputFunctionLibrary.InputFunctionLibrary_C.InitGamepadGlyphsAbilityElement // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitGamepadGlyphsInputChord(struct UContentWidget* ContainerPanel, struct FName ActionName, bool UseInputStruct, struct FStruct_Widget_Ability_Input InputStruct, enum class EActionBindSetAxisDirection ActionBindSetAxisDirection, struct UObject* __WorldContext, struct UInputChordWidgetBase_C*& InputChordWidget); // Function InputFunctionLibrary.InputFunctionLibrary_C.InitGamepadGlyphsInputChord // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitGamepadGlyphsInputIcon(struct UContentWidget* ContainerPanel, struct UGamepadInputIconBase*& GamepadInputIconWidgetRef, struct UObject* __WorldContext); // Function InputFunctionLibrary.InputFunctionLibrary_C.InitGamepadGlyphsInputIcon // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AresGetKeyShortDisplayName(struct FKey Key, struct UObject* __WorldContext, struct FText& DisplayName); // Function InputFunctionLibrary.InputFunctionLibrary_C.AresGetKeyShortDisplayName // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
};

