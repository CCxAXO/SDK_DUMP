// WidgetBlueprintGeneratedClass AudioVOLanguageSelector.AudioVOLanguageSelector_C
// Size: 0x360 (Inherited: 0x320)
struct UAudioVOLanguageSelector_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct UComboBoxString* VOLanguageDropdown; // 0x340(0x08)
	bool IsInitialized; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct TArray<struct FVOLanguageContainer> VOLanguageDetails; // 0x350(0x10)

	void GetDirectoryForDisplayName(struct FText DisplayName, struct FString& Directory); // Function AudioVOLanguageSelector.AudioVOLanguageSelector_C.GetDirectoryForDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetDisplayNameForDirectory(struct FString Directory, struct FText& DisplayName); // Function AudioVOLanguageSelector.AudioVOLanguageSelector_C.GetDisplayNameForDirectory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetLanguageFromDirectory(struct FString Directory); // Function AudioVOLanguageSelector.AudioVOLanguageSelector_C.GetLanguageFromDirectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AudioVOLanguageSelector.AudioVOLanguageSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AudioVOLanguageSelector.AudioVOLanguageSelector_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AudioVOLanguageSelector(int32_t EntryPoint); // Function AudioVOLanguageSelector.AudioVOLanguageSelector_C.ExecuteUbergraph_AudioVOLanguageSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

