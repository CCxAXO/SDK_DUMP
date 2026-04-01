// WidgetBlueprintGeneratedClass WBP_WeaponStats_DamageFalloff.WBP_WeaponStats_DamageFalloff_C
// Size: 0x350 (Inherited: 0x318)
struct UWBP_WeaponStats_DamageFalloff_C : UUserWidget {
	struct UHorizontalBox* DamageFalloff; // 0x318(0x08)
	struct UWBP_WeaponStats_DamageFalloffRange_C* FalloffRange1; // 0x320(0x08)
	struct UWBP_WeaponStats_DamageFalloffRange_C* FalloffRange2; // 0x328(0x08)
	struct UWBP_WeaponStats_DamageFalloffRange_C* FalloffRange3; // 0x330(0x08)
	struct UWBP_WeaponStats_DamageFalloffRange_C* FalloffRangeSingle; // 0x338(0x08)
	struct TArray<struct FWeaponStatDamageUIData> Damages; // 0x340(0x10)

	void UpdateTriple(); // Function WBP_WeaponStats_DamageFalloff.WBP_WeaponStats_DamageFalloff_C.UpdateTriple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDouble(); // Function WBP_WeaponStats_DamageFalloff.WBP_WeaponStats_DamageFalloff_C.UpdateDouble // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSingle(); // Function WBP_WeaponStats_DamageFalloff.WBP_WeaponStats_DamageFalloff_C.UpdateSingle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContent(struct TArray<struct FWeaponStatDamageUIData>& Damages); // Function WBP_WeaponStats_DamageFalloff.WBP_WeaponStats_DamageFalloff_C.SetContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

