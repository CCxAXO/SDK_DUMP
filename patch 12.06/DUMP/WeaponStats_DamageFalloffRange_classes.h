// WidgetBlueprintGeneratedClass WeaponStats_DamageFalloffRange.WeaponStats_DamageFalloffRange_C
// Size: 0x340 (Inherited: 0x318)
struct UWeaponStats_DamageFalloffRange_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_17; // 0x320(0x08)
	struct UTextBlock* Range; // 0x328(0x08)
	double RangeStart; // 0x330(0x08)
	double RangeEnd; // 0x338(0x08)

	void SetRange(double From, double To); // Function WeaponStats_DamageFalloffRange.WeaponStats_DamageFalloffRange_C.SetRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponStats_DamageFalloffRange.WeaponStats_DamageFalloffRange_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponStats_DamageFalloffRange(int32_t EntryPoint); // Function WeaponStats_DamageFalloffRange.WeaponStats_DamageFalloffRange_C.ExecuteUbergraph_WeaponStats_DamageFalloffRange // (Final|UbergraphFunction) // @ game+0x1b42740
};

