// WidgetBlueprintGeneratedClass WBP_Panel_VCTRegionalEventColumn.WBP_Panel_VCTRegionalEventColumn_C
// Size: 0x418 (Inherited: 0x3e0)
struct UWBP_Panel_VCTRegionalEventColumn_C : UAresCommonUserWidget {
	struct UWBP_Panel_EsportsEventButton_C* EventButtonPanel_VCTAmericas; // 0x3e0(0x08)
	struct UWBP_Panel_EsportsEventButton_C* EventButtonPanel_VCTCN; // 0x3e8(0x08)
	struct UWBP_Panel_EsportsEventButton_C* EventButtonPanel_VCTEMEA; // 0x3f0(0x08)
	struct UWBP_Panel_EsportsEventButton_C* EventButtonPanel_VCTPacific; // 0x3f8(0x08)
	struct UVerticalBox* VB_RegionButtons; // 0x400(0x08)
	struct TArray<enum class E2024VCTEvent> Events; // 0x408(0x10)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_VCTRegionalEventColumn.WBP_Panel_VCTRegionalEventColumn_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void Initialize(struct TArray<enum class E2024VCTEvent>& InEvents); // Function WBP_Panel_VCTRegionalEventColumn.WBP_Panel_VCTRegionalEventColumn_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

