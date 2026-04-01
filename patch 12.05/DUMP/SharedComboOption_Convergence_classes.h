// WidgetBlueprintGeneratedClass SharedComboOption_Convergence.SharedComboOption_Convergence_C
// Size: 0x46c (Inherited: 0x318)
struct USharedComboOption_Convergence_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* ComboButtonBox; // 0x320(0x08)
	struct UOverlay* ComboOption; // 0x328(0x08)
	struct UTextBlock* DescriptorTextWidget; // 0x330(0x08)
	struct UImage* IMG_HoverBG; // 0x338(0x08)
	struct UTextBlock* OptionText; // 0x340(0x08)
	struct UTextBlock* SelectedTextWidget; // 0x348(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_173; // 0x350(0x08)
	struct FText Text; // 0x358(0x18)
	bool AsComboButton; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FText DescriptorText; // 0x378(0x18)
	bool Selected; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FSlateFontInfo SelectedFontStyle; // 0x398(0x60)
	struct FSlateFontInfo DefaultFontStyle; // 0x3f8(0x60)
	int32_t ItemIndex; // 0x458(0x04)
	struct FMargin OptionTextPadding; // 0x45c(0x10)

	void SetItemTextColor(bool IsSelected); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.SetItemTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOptionBGcolor(int32_t ItemIndex); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.SetOptionBGcolor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SharedComboOption_Convergence(int32_t EntryPoint); // Function SharedComboOption_Convergence.SharedComboOption_Convergence_C.ExecuteUbergraph_SharedComboOption_Convergence // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

