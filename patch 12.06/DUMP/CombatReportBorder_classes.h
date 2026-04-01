// WidgetBlueprintGeneratedClass CombatReportBorder.CombatReportBorder_C
// Size: 0x3e3 (Inherited: 0x318)
struct UCombatReportBorder_C : UCombatReportBorder_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Aura; // 0x320(0x08)
	struct UOverlay* ChampsAura; // 0x328(0x08)
	struct UImage* Edge; // 0x330(0x08)
	struct UImage* Edge_2; // 0x338(0x08)
	struct UImage* Edge_3; // 0x340(0x08)
	struct UImage* Edge_4; // 0x348(0x08)
	struct UImage* Edge_5; // 0x350(0x08)
	struct UImage* Edge_6; // 0x358(0x08)
	struct UImage* Edge_7; // 0x360(0x08)
	struct UImage* Edge_8; // 0x368(0x08)
	struct UImage* Edge_9; // 0x370(0x08)
	struct UImage* Edge_10; // 0x378(0x08)
	struct UImage* Edge_11; // 0x380(0x08)
	struct UImage* Edge_12; // 0x388(0x08)
	struct UImage* Image; // 0x390(0x08)
	struct UImage* Image_255; // 0x398(0x08)
	struct UImage* LineBottom; // 0x3a0(0x08)
	struct UImage* LineTop; // 0x3a8(0x08)
	struct UOverlay* PremierBorder; // 0x3b0(0x08)
	struct UImage* PremierLogo; // 0x3b8(0x08)
	struct UOverlay* TopLevelOverlay_Basic; // 0x3c0(0x08)
	struct UOverlay* TopLevelOverlay_Qualified; // 0x3c8(0x08)
	struct UImage* Topline_L; // 0x3d0(0x08)
	struct UImage* Topline_R; // 0x3d8(0x08)
	bool Premier_ShouldShowBorder; // 0x3e0(0x01)
	enum class EPremierPrestigePlating Premier_Plating; // 0x3e1(0x01)
	bool Premier_ShouldShowAura; // 0x3e2(0x01)

	void UpdatePremier(bool ShowPremier, enum class EPremierPrestigePlating Plating, bool ShowChampsAura); // Function CombatReportBorder.CombatReportBorder_C.UpdatePremier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_ShowBorder(bool ShowBorder); // Function CombatReportBorder.CombatReportBorder_C.Premier_ShowBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_SetLevel(enum class EPremierPrestigePlating Plating); // Function CombatReportBorder.CombatReportBorder_C.Premier_SetLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_ShowAura(bool ShowAura); // Function CombatReportBorder.CombatReportBorder_C.Premier_ShowAura // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CombatReportBorder.CombatReportBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CombatReportBorder(int32_t EntryPoint); // Function CombatReportBorder.CombatReportBorder_C.ExecuteUbergraph_CombatReportBorder // (Final|UbergraphFunction) // @ game+0x1b42740
};

