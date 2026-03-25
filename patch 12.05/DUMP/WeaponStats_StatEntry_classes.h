// WidgetBlueprintGeneratedClass WeaponStats_StatEntry.WeaponStats_StatEntry_C
// Size: 0x3b9 (Inherited: 0x318)
struct UWeaponStats_StatEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BLDot; // 0x320(0x08)
	struct UImage* Border; // 0x328(0x08)
	struct UImage* BRDot; // 0x330(0x08)
	struct UTextBlock* Header; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_133; // 0x348(0x08)
	struct UProgressBar* ProgressBar_72; // 0x350(0x08)
	struct UImage* TLDot; // 0x358(0x08)
	struct UImage* TRDot; // 0x360(0x08)
	struct UTextBlock* Unit; // 0x368(0x08)
	struct UTextBlock* ValueWidget; // 0x370(0x08)
	struct FText HeaderText; // 0x378(0x18)
	double Value; // 0x390(0x08)
	struct FText UnitText; // 0x398(0x18)
	double FillAmount; // 0x3b0(0x08)
	bool InvertBar; // 0x3b8(0x01)

	void CalculateBarValue(double Value, double Min, double Max, double& BarValue); // Function WeaponStats_StatEntry.WeaponStats_StatEntry_C.CalculateBarValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetValueText(double Value, double ExtraValue); // Function WeaponStats_StatEntry.WeaponStats_StatEntry_C.SetValueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetValue(double NewValue, double NewExtraValue, double MinValue, double MaxValue); // Function WeaponStats_StatEntry.WeaponStats_StatEntry_C.SetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WeaponStats_StatEntry.WeaponStats_StatEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WeaponStats_StatEntry(int32_t EntryPoint); // Function WeaponStats_StatEntry.WeaponStats_StatEntry_C.ExecuteUbergraph_WeaponStats_StatEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

