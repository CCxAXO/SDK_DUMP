// WidgetBlueprintGeneratedClass WBP_Panel_VCTSeasonEventColumn.WBP_Panel_VCTSeasonEventColumn_C
// Size: 0x441 (Inherited: 0x3e0)
struct UWBP_Panel_VCTSeasonEventColumn_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* OnFocusColumn; // 0x3e8(0x08)
	struct UImage* Arrow; // 0x3f0(0x08)
	struct UImage* Arrow_2; // 0x3f8(0x08)
	struct UWBP_Panel_VCTSeasonEventButton_C* B_ILKickoffButton; // 0x400(0x08)
	struct UWBP_Panel_VCTSeasonEventButton_C* B_Stage1Button; // 0x408(0x08)
	struct UWBP_Panel_VCTSeasonEventButton_C* B_Stage2Button; // 0x410(0x08)
	struct UAresCommonText* CT_RegionName; // 0x418(0x08)
	struct UImage* I_Logo; // 0x420(0x08)
	struct UImage* SelectionBar; // 0x428(0x08)
	struct UImage* SelectionBarGradient; // 0x430(0x08)
	struct UImage* SelectionGradient; // 0x438(0x08)
	enum class EVCTRegion Region; // 0x440(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VCTSeasonEventColumn.WBP_Panel_VCTSeasonEventColumn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_VCTSeasonEventColumn.WBP_Panel_VCTSeasonEventColumn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PlayOnFocusAnimation(); // Function WBP_Panel_VCTSeasonEventColumn.WBP_Panel_VCTSeasonEventColumn_C.PlayOnFocusAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayOnUnhoverAnimation(); // Function WBP_Panel_VCTSeasonEventColumn.WBP_Panel_VCTSeasonEventColumn_C.PlayOnUnhoverAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_VCTSeasonEventColumn(int32_t EntryPoint); // Function WBP_Panel_VCTSeasonEventColumn.WBP_Panel_VCTSeasonEventColumn_C.ExecuteUbergraph_WBP_Panel_VCTSeasonEventColumn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

