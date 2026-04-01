// WidgetBlueprintGeneratedClass WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C
// Size: 0x508 (Inherited: 0x408)
struct UWBP_View_WeaponLoadout_C : UAresCommonWidgetPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UCommonCustomNavigation* CommonCustomNavigation_1; // 0x410(0x08)
	struct UCommonCustomNavigation* CommonCustomNavigation_2; // 0x418(0x08)
	struct UCommonCustomNavigation* CommonCustomNavigation_3; // 0x420(0x08)
	struct UCommonCustomNavigation* CommonCustomNavigation_4; // 0x428(0x08)
	struct UWBP_View_WeaponColumn_C* Rifles; // 0x430(0x08)
	struct UWBP_View_WeaponColumn_C* Sidearms; // 0x438(0x08)
	struct UWBP_View_WeaponColumn_C* SMGs_Shotguns; // 0x440(0x08)
	struct UWBP_View_WeaponColumn_C* Snipers; // 0x448(0x08)
	int32_t FocusedColumn; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<struct UWBP_View_WeaponColumn_C*> Columns; // 0x458(0x10)
	struct TMap<struct UEquippableDataAsset*, struct UUserWidget*> OutboundNavOverrides; // 0x468(0x50)
	struct TMap<struct UEquippableDataAsset*, struct UWBP_Panel_CollectionsWeaponSlot_C*> WeaponSlots; // 0x4b8(0x50)

	void AddCompactWeapon(bool WeaponEnabled); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.AddCompactWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool FocusEquippableWeaponSlot(struct UEquippableDataAsset*& Weapon); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.FocusEquippableWeaponSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateWeaponSlotMap(); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.CreateWeaponSlotMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsHorizontallyNavigatingOutOfLoadout(enum class EUINavigation DesiredNavDirection, bool& IsNavigatingOutOfLoadout); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.IsHorizontallyNavigatingOutOfLoadout // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetOutboundNavOverrides(struct TMap<struct UEquippableDataAsset*, struct UUserWidget*> NavOverrides); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.SetOutboundNavOverrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindNavigation(); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.BindNavigation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool OnColumnHorizontalNavigation(enum class EUINavigation NavigationType); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.OnColumnHorizontalNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnColumnFocused(struct UAresCommonWidgetPanel* InWidgetPanel); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.OnColumnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_WeaponLoadout(int32_t EntryPoint); // Function WBP_View_WeaponLoadout.WBP_View_WeaponLoadout_C.ExecuteUbergraph_WBP_View_WeaponLoadout // (Final|UbergraphFunction) // @ game+0x1af5410
};

