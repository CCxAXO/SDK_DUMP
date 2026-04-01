// WidgetBlueprintGeneratedClass WBP_Panel_PickemPickBlockStateIndicator.WBP_Panel_PickemPickBlockStateIndicator_C
// Size: 0x460 (Inherited: 0x3e0)
struct UWBP_Panel_PickemPickBlockStateIndicator_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Image_Background_Fill; // 0x3e8(0x08)
	struct UImage* Image_Background_Left; // 0x3f0(0x08)
	struct UImage* Image_Background_Right; // 0x3f8(0x08)
	struct UImage* Image_Icon; // 0x400(0x08)
	struct UAresCommonText* Text_CurrentStage; // 0x408(0x08)
	struct FSlateColor StandardBackgroundColor; // 0x410(0x14)
	struct FSlateColor OpenBackgroundColor; // 0x424(0x14)
	struct FSlateColor StandardBodyColor; // 0x438(0x14)
	struct FSlateColor OpenBodyColor; // 0x44c(0x14)

	void SetState(enum class EAresPickemStage NewState); // Function WBP_Panel_PickemPickBlockStateIndicator.WBP_Panel_PickemPickBlockStateIndicator_C.SetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemPickBlockStateIndicator.WBP_Panel_PickemPickBlockStateIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemPickBlockStateIndicator(int32_t EntryPoint); // Function WBP_Panel_PickemPickBlockStateIndicator.WBP_Panel_PickemPickBlockStateIndicator_C.ExecuteUbergraph_WBP_Panel_PickemPickBlockStateIndicator // (Final|UbergraphFunction) // @ game+0x1b42740
};

