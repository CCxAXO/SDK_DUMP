// WidgetBlueprintGeneratedClass SeasonComboBox.SeasonComboBox_C
// Size: 0x1850 (Inherited: 0x318)
struct USeasonComboBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* AresComboBox_1366; // 0x320(0x08)
	struct FMulticastInlineDelegate OnItemSelected; // 0x328(0x10)
	struct TMap<struct FString, struct FText> OptionToEpisode; // 0x338(0x50)
	struct TMap<struct FString, struct FText> OptionToAct; // 0x388(0x50)
	struct TMap<struct FString, struct FSeasonButtonStruct> OptionToSeasonButtonStruct; // 0x3d8(0x50)
	struct FString CurrentSelection; // 0x428(0x10)
	struct USeasonDataAsset* ActiveSeasonAsset; // 0x438(0x08)
	struct TArray<struct FGuid> HiddenSeasons; // 0x440(0x10)
	bool ShowFutureSeasons; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UUserWidget* ComboBoxClass; // 0x458(0x08)
	struct FMulticastInlineDelegate OnGenerateButtonContent; // 0x460(0x10)
	struct UUserWidget* ComboBoxButtonClass; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct FComboBoxStyle ComboButtonStyle; // 0x480(0x680)
	struct FTableRowStyle Item Style; // 0xb00(0xd50)

	void GetCurrentSelection(struct FGuid& SeasonID); // Function SeasonComboBox.SeasonComboBox_C.GetCurrentSelection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct UWidget* OnGenerateButtonContentWidget_1(struct FString Item); // Function SeasonComboBox.SeasonComboBox_C.OnGenerateButtonContentWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* OnGenerateWidget_1(struct FString Item); // Function SeasonComboBox.SeasonComboBox_C.OnGenerateWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectOption(struct FString SeasonID); // Function SeasonComboBox.SeasonComboBox_C.SelectOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddOption(struct FString Option, struct FSeasonButtonStruct SeasonButtonStruct); // Function SeasonComboBox.SeasonComboBox_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SeasonComboBox.SeasonComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SeasonComboBox.SeasonComboBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function SeasonComboBox.SeasonComboBox_C.BndEvt__AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__AresComboBox_1365_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature(); // Function SeasonComboBox.SeasonComboBox_C.BndEvt__AresComboBox_1365_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnAllSeasons(struct FSeasonHandles& SeasonHandles); // Function SeasonComboBox.SeasonComboBox_C.OnAllSeasons // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SeasonComboBox(int32_t EntryPoint); // Function SeasonComboBox.SeasonComboBox_C.ExecuteUbergraph_SeasonComboBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnGenerateButtonContent__DelegateSignature(); // Function SeasonComboBox.SeasonComboBox_C.OnGenerateButtonContent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnItemSelected__DelegateSignature(struct FGuid SeasonID); // Function SeasonComboBox.SeasonComboBox_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

