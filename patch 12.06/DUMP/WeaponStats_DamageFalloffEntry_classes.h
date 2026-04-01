// WidgetBlueprintGeneratedClass WeaponStats_DamageFalloffEntry.WeaponStats_DamageFalloffEntry_C
// Size: 0x3c8 (Inherited: 0x318)
struct UWeaponStats_DamageFalloffEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* BodyPart; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image_2; // 0x330(0x08)
	struct UImage* Image_3; // 0x338(0x08)
	struct UImage* Image_28; // 0x340(0x08)
	struct UImage* Image_68; // 0x348(0x08)
	struct UHorizontalBox* Numbers; // 0x350(0x08)
	struct UWeaponStats_DamageFalloffEntryNumber_C* WeaponStats_DamageFalloffEntryNumber_1; // 0x358(0x08)
	struct UWeaponStats_DamageFalloffEntryNumber_C* WeaponStats_DamageFalloffEntryNumber_2; // 0x360(0x08)
	struct UWeaponStats_DamageFalloffEntryNumber_C* WeaponStats_DamageFalloffEntryNumber_3; // 0x368(0x08)
	struct UWeaponStats_DamageFalloffEntryNumber_C* WeaponStats_DamageFalloffEntryNumber_4; // 0x370(0x08)
	struct UWeaponStats_DamageFalloffEntrySeparator_C* WeaponStats_DamageFalloffEntrySeparator_1; // 0x378(0x08)
	struct UWeaponStats_DamageFalloffEntrySeparator_C* WeaponStats_DamageFalloffEntrySeparator_2; // 0x380(0x08)
	struct UWeaponStats_DamageFalloffEntrySeparator_C* WeaponStats_DamageFalloffEntrySeparator_3; // 0x388(0x08)
	struct FText BodyPartText; // 0x390(0x18)
	struct TArray<struct UWeaponStats_DamageFalloffEntryNumber_C*> NumberWidgets; // 0x3a8(0x10)
	struct TArray<struct UWeaponStats_DamageFalloffEntrySeparator_C*> SeparatorWidgets; // 0x3b8(0x10)

	void SetSeparatorVisibility(int32_t NumberIndex, enum class ESlateVisibility NewVisibility); // Function WeaponStats_DamageFalloffEntry.WeaponStats_DamageFalloffEntry_C.SetSeparatorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContent(struct TArray<double>& DamageValues); // Function WeaponStats_DamageFalloffEntry.WeaponStats_DamageFalloffEntry_C.SetContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeChildren(); // Function WeaponStats_DamageFalloffEntry.WeaponStats_DamageFalloffEntry_C.InitializeChildren // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponStats_DamageFalloffEntry.WeaponStats_DamageFalloffEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponStats_DamageFalloffEntry(int32_t EntryPoint); // Function WeaponStats_DamageFalloffEntry.WeaponStats_DamageFalloffEntry_C.ExecuteUbergraph_WeaponStats_DamageFalloffEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

