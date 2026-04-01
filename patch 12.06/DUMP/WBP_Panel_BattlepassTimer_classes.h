// WidgetBlueprintGeneratedClass WBP_Panel_BattlepassTimer.WBP_Panel_BattlepassTimer_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_BattlepassTimer_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* EndsInText; // 0x3e8(0x08)
	struct UWBP_Timer_Countdown_C* WBP_Timer_Countdown; // 0x3f0(0x08)
	struct UCommonTextStyle* Ends In Text Style; // 0x3f8(0x08)
	struct UCommonTextStyle* Timer Text Style; // 0x400(0x08)
	struct UCommonTextStyle* Urgent Timer Text Style; // 0x408(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_BattlepassTimer.WBP_Panel_BattlepassTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_BattlepassTimer(int32_t EntryPoint); // Function WBP_Panel_BattlepassTimer.WBP_Panel_BattlepassTimer_C.ExecuteUbergraph_WBP_Panel_BattlepassTimer // (Final|UbergraphFunction) // @ game+0x1b42740
};

