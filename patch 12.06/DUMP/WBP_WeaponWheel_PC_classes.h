// WidgetBlueprintGeneratedClass WBP_WeaponWheel_PC.WBP_WeaponWheel_PC_C
// Size: 0x360 (Inherited: 0x330)
struct UWBP_WeaponWheel_PC_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x338(0x08)
	struct UWBP_View_EquippableHUDElement_PC_C* MeleeEquipHUDElement; // 0x340(0x08)
	struct UWBP_View_EquippableHUDElement_PC_C* PrimaryEquipHUDElement; // 0x348(0x08)
	struct UWBP_View_EquippableHUDElement_PC_C* SecondaryEquipHUDElement; // 0x350(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x358(0x08)

	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function WBP_WeaponWheel_PC.WBP_WeaponWheel_PC_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_WeaponWheel_PC(int32_t EntryPoint); // Function WBP_WeaponWheel_PC.WBP_WeaponWheel_PC_C.ExecuteUbergraph_WBP_WeaponWheel_PC // (Final|UbergraphFunction) // @ game+0x1b42740
};

