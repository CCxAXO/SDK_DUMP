// WidgetBlueprintGeneratedClass WeaponStats_DamageFalloffRanges.WeaponStats_DamageFalloffRanges_C
// Size: 0x368 (Inherited: 0x318)
struct UWeaponStats_DamageFalloffRanges_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* List; // 0x320(0x08)
	struct UWeaponStats_DamageFalloffRange_C* WeaponStats_DamageFalloffRange_1; // 0x328(0x08)
	struct UWeaponStats_DamageFalloffRange_C* WeaponStats_DamageFalloffRange_2; // 0x330(0x08)
	struct UWeaponStats_DamageFalloffRange_C* WeaponStats_DamageFalloffRange_3; // 0x338(0x08)
	struct UWeaponStats_DamageFalloffRange_C* WeaponStats_DamageFalloffRange_4; // 0x340(0x08)
	struct TArray<struct UWeaponStats_DamageFalloffRange_C*> RangeWidgets; // 0x348(0x10)
	struct TArray<struct FWeaponStatDamageUIData> PreviewDamages; // 0x358(0x10)

	void InitializeChildren(); // Function WeaponStats_DamageFalloffRanges.WeaponStats_DamageFalloffRanges_C.InitializeChildren // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContent(struct TArray<struct FWeaponStatDamageUIData>& Damages); // Function WeaponStats_DamageFalloffRanges.WeaponStats_DamageFalloffRanges_C.SetContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponStats_DamageFalloffRanges.WeaponStats_DamageFalloffRanges_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponStats_DamageFalloffRanges(int32_t EntryPoint); // Function WeaponStats_DamageFalloffRanges.WeaponStats_DamageFalloffRanges_C.ExecuteUbergraph_WeaponStats_DamageFalloffRanges // (Final|UbergraphFunction) // @ game+0x1b42740
};

