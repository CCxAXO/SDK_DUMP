// WidgetBlueprintGeneratedClass WBP_WeaponStats_DamageFalloffRange.WBP_WeaponStats_DamageFalloffRange_C
// Size: 0x350 (Inherited: 0x318)
struct UWBP_WeaponStats_DamageFalloffRange_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* BodyDamage; // 0x320(0x08)
	struct UImage* Divider; // 0x328(0x08)
	struct UTextBlock* HeadDamage; // 0x330(0x08)
	struct UTextBlock* LegDamage; // 0x338(0x08)
	struct UTextBlock* Range; // 0x340(0x08)
	double MinDesiredWidth; // 0x348(0x08)

	void SetRange(double From, double To); // Function WBP_WeaponStats_DamageFalloffRange.WBP_WeaponStats_DamageFalloffRange_C.SetRange // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContent(struct FWeaponStatDamageUIData UIData); // Function WBP_WeaponStats_DamageFalloffRange.WBP_WeaponStats_DamageFalloffRange_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_WeaponStats_DamageFalloffRange.WBP_WeaponStats_DamageFalloffRange_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_WeaponStats_DamageFalloffRange(int32_t EntryPoint); // Function WBP_WeaponStats_DamageFalloffRange.WBP_WeaponStats_DamageFalloffRange_C.ExecuteUbergraph_WBP_WeaponStats_DamageFalloffRange // (Final|UbergraphFunction) // @ game+0x1af5410
};

