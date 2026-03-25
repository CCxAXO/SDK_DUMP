// WidgetBlueprintGeneratedClass WBP_Division_Icon.WBP_Division_Icon_C
// Size: 0x340 (Inherited: 0x318)
struct UWBP_Division_Icon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* DivisionIcon; // 0x328(0x08)
	struct UWidgetSwitcher* DivisionIconSwitcher; // 0x330(0x08)
	struct UTextBlock* Number; // 0x338(0x08)

	void SetDivisionFromDTO(struct FPremierDivisionData DivisionData, bool IsDivisionHidden, int32_t Division); // Function WBP_Division_Icon.WBP_Division_Icon_C.SetDivisionFromDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDivisionIgnition(); // Function WBP_Division_Icon.WBP_Division_Icon_C.SetDivisionIgnition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDivision(); // Function WBP_Division_Icon.WBP_Division_Icon_C.SetDivision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Division_Icon.WBP_Division_Icon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Division_Icon(int32_t EntryPoint); // Function WBP_Division_Icon.WBP_Division_Icon_C.ExecuteUbergraph_WBP_Division_Icon // (Final|UbergraphFunction) // @ game+0x1af5410
};

