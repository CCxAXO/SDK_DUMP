// WidgetBlueprintGeneratedClass WBP_Panel_PlayerCompetitiveTierName.WBP_Panel_PlayerCompetitiveTierName_C
// Size: 0x460 (Inherited: 0x400)
struct UWBP_Panel_PlayerCompetitiveTierName_C : UWBP_Panel_PlayerCompetitiveTier_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UAresCommonText* Text_TierName; // 0x408(0x08)
	bool bApplyColorTint; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UCommonTextStyle* TextStyle; // 0x418(0x08)
	struct FText PreviewText; // 0x420(0x18)
	struct FSlateColor PreviewColor; // 0x438(0x14)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FMulticastInlineDelegate OnTextColorChanged; // 0x450(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerCompetitiveTierName.WBP_Panel_PlayerCompetitiveTierName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCompetitiveTierChanged(struct FCompetitiveTierData CurrentTierData, bool bTierDataIsValid); // Function WBP_Panel_PlayerCompetitiveTierName.WBP_Panel_PlayerCompetitiveTierName_C.OnCompetitiveTierChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerCompetitiveTierName(int32_t EntryPoint); // Function WBP_Panel_PlayerCompetitiveTierName.WBP_Panel_PlayerCompetitiveTierName_C.ExecuteUbergraph_WBP_Panel_PlayerCompetitiveTierName // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnTextColorChanged__DelegateSignature(struct FSlateColor Color); // Function WBP_Panel_PlayerCompetitiveTierName.WBP_Panel_PlayerCompetitiveTierName_C.OnTextColorChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

