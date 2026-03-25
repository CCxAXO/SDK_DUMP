// WidgetBlueprintGeneratedClass AVSComboOption.AVSComboOption_C
// Size: 0x379 (Inherited: 0x318)
struct UAVSComboOption_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Linebreakimage; // 0x320(0x08)
	struct UTextBlock* MainText; // 0x328(0x08)
	struct USizeBox* OptionSize; // 0x330(0x08)
	struct UTextBlock* SecondaryText; // 0x338(0x08)
	struct FAVSCountry Country; // 0x340(0x38)
	bool As Combo Button; // 0x378(0x01)

	void Set Fields As Combo List(); // Function AVSComboOption.AVSComboOption_C.Set Fields As Combo List // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Fields as Combo Button(); // Function AVSComboOption.AVSComboOption_C.Set Fields as Combo Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AVSComboOption.AVSComboOption_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AVSComboOption(int32_t EntryPoint); // Function AVSComboOption.AVSComboOption_C.ExecuteUbergraph_AVSComboOption // (Final|UbergraphFunction) // @ game+0x1af5410
};

