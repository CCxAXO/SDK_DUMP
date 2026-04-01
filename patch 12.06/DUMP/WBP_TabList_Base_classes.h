// WidgetBlueprintGeneratedClass WBP_TabList_Base.WBP_TabList_Base_C
// Size: 0x5f9 (Inherited: 0x5d0)
struct UWBP_TabList_Base_C : UAresCommonTabListWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UWidgetAnimation* NPE_Ani_Highlight; // 0x5d8(0x08)
	struct UImage* Background; // 0x5e0(0x08)
	struct UImage* FrameObjectiveHighlightLeft; // 0x5e8(0x08)
	struct UImage* FrameObjectiveHighlightRight; // 0x5f0(0x08)
	bool bDisplayBackground; // 0x5f8(0x01)

	void SetBackgroundVisibility(bool bShouldShowBackground); // Function WBP_TabList_Base.WBP_TabList_Base_C.SetBackgroundVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_TabList_Base.WBP_TabList_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_TabList_Base(int32_t EntryPoint); // Function WBP_TabList_Base.WBP_TabList_Base_C.ExecuteUbergraph_WBP_TabList_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

