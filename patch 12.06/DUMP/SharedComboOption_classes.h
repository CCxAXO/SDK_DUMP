// WidgetBlueprintGeneratedClass SharedComboOption.SharedComboOption_C
// Size: 0x450 (Inherited: 0x318)
struct USharedComboOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* ComboButtonBox; // 0x320(0x08)
	struct UHorizontalBox* ComboOption; // 0x328(0x08)
	struct UTextBlock* DescriptorTextWidget; // 0x330(0x08)
	struct UTextBlock* OptionText; // 0x338(0x08)
	struct UTextBlock* SelectedTextWidget; // 0x340(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_173; // 0x348(0x08)
	struct FText Text; // 0x350(0x18)
	bool AsComboButton; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FText DescriptorText; // 0x370(0x18)
	bool Selected; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FSlateFontInfo SelectedFontStyle; // 0x390(0x60)
	struct FSlateFontInfo DefaultFontStyle; // 0x3f0(0x60)

	void AlignLabelToLanguage(); // Function SharedComboOption.SharedComboOption_C.AlignLabelToLanguage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SharedComboOption.SharedComboOption_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SharedComboOption.SharedComboOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SharedComboOption(int32_t EntryPoint); // Function SharedComboOption.SharedComboOption_C.ExecuteUbergraph_SharedComboOption // (Final|UbergraphFunction) // @ game+0x1b42740
};

