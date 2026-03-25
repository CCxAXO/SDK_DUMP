// WidgetBlueprintGeneratedClass AVSComboBox.AVSComboBox_C
// Size: 0x328 (Inherited: 0x318)
struct UAVSComboBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* AresComboBox_51; // 0x320(0x08)

	struct FAVSCountry Get Country by ISO(struct FString Country ISO); // Function AVSComboBox.AVSComboBox_C.Get Country by ISO // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Get Country Code(struct FString& Country Code); // Function AVSComboBox.AVSComboBox_C.Get Country Code // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Initialize Combo Entries(); // Function AVSComboBox.AVSComboBox_C.Initialize Combo Entries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* On_AresComboBox_50_GenerateWidget_1(struct FString Item); // Function AVSComboBox.AVSComboBox_C.On_AresComboBox_50_GenerateWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* On_AresComboBox_50_GenerateButtonContentWidget_1(struct FString Item); // Function AVSComboBox.AVSComboBox_C.On_AresComboBox_50_GenerateButtonContentWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AVSComboBox.AVSComboBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AVSComboBox.AVSComboBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AVSComboBox(int32_t EntryPoint); // Function AVSComboBox.AVSComboBox_C.ExecuteUbergraph_AVSComboBox // (Final|UbergraphFunction) // @ game+0x1af5410
};

