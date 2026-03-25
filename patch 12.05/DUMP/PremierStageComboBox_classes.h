// WidgetBlueprintGeneratedClass PremierStageComboBox.PremierStageComboBox_C
// Size: 0x1898 (Inherited: 0x3e0)
struct UPremierStageComboBox_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresComboBox* AresComboBox_1366; // 0x3e8(0x08)
	struct FComboBoxStyle ComboButtonStyle; // 0x3f0(0x680)
	struct FTableRowStyle Item Style; // 0xa70(0xd50)
	struct TMap<struct FString, struct UPremierSeasonModelOld*> OptionToSeasonModel; // 0x17c0(0x50)
	struct FString Current Selection; // 0x1810(0x10)
	struct UUserWidget* ComboBoxClass; // 0x1820(0x08)
	struct UUserWidget* ComboBoxButtonClass; // 0x1828(0x08)
	struct UVM_PremierStageComboBox_C* PremierStageComboBoxVM; // 0x1830(0x08)
	struct TMap<struct FString, struct UPremierSeasonHandle*> OptionToSeasonHandle; // 0x1838(0x50)
	struct FGuid SeasonID; // 0x1888(0x10)

	void AddOptionWithHandle(struct FGuid SeasonID, struct UPremierSeasonHandle* SeasonHandle); // Function PremierStageComboBox.PremierStageComboBox_C.AddOptionWithHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectActiveStage(); // Function PremierStageComboBox.PremierStageComboBox_C.SelectActiveStage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind PremierStageComboBox Events(bool Bind); // Function PremierStageComboBox.PremierStageComboBox_C.Bind PremierStageComboBox Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set PremierStageComboBox VM(struct UVM_PremierStageComboBox_C* PremierStageComboBoxVM); // Function PremierStageComboBox.PremierStageComboBox_C.Set PremierStageComboBox VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithDefaults(bool& Break); // Function PremierStageComboBox.PremierStageComboBox_C.InitWithDefaults // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateButtonContentWidget(struct FString Option); // Function PremierStageComboBox.PremierStageComboBox_C.OnGenerateButtonContentWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateComboBoxWidget(struct FString StageName); // Function PremierStageComboBox.PremierStageComboBox_C.OnGenerateComboBoxWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectOption(struct FString Option); // Function PremierStageComboBox.PremierStageComboBox_C.SelectOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOption(struct FGuid SeasonID, struct UPremierSeasonModelOld* SeasonModel); // Function PremierStageComboBox.PremierStageComboBox_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierStageComboBox.PremierStageComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierStageComboBox.PremierStageComboBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PremierStageComboBox_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature(); // Function PremierStageComboBox.PremierStageComboBox_C.BndEvt__PremierStageComboBox_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PremierStageComboBox_AresComboBox_1365_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function PremierStageComboBox.PremierStageComboBox_C.BndEvt__PremierStageComboBox_AresComboBox_1365_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Init Combo Box Options(struct TMap<struct FGuid, struct UPremierSeasonModelOld*> SeasonID To Model); // Function PremierStageComboBox.PremierStageComboBox_C.Init Combo Box Options // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function PremierStageComboBox.PremierStageComboBox_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init ComboBox(); // Function PremierStageComboBox.PremierStageComboBox_C.Init ComboBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init With VM(struct UVM_PremierStageComboBox_C* PremierStageComboBoxVM); // Function PremierStageComboBox.PremierStageComboBox_C.Init With VM // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierStageComboBox(int32_t EntryPoint); // Function PremierStageComboBox.PremierStageComboBox_C.ExecuteUbergraph_PremierStageComboBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

