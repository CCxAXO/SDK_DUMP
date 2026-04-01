// WidgetBlueprintGeneratedClass WBP_Button_EventStandings.WBP_Button_EventStandings_C
// Size: 0x1b40 (Inherited: 0x1ae0)
struct UWBP_Button_EventStandings_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* onUnhover; // 0x1ae8(0x08)
	struct UWidgetAnimation* OnHover; // 0x1af0(0x08)
	struct UAresButtonImageComponent* BG; // 0x1af8(0x08)
	struct UImage* bg_Hovered; // 0x1b00(0x08)
	struct UImage* Border; // 0x1b08(0x08)
	struct UImage* Dots; // 0x1b10(0x08)
	struct UImage* Dots_2; // 0x1b18(0x08)
	struct UImage* Dots_3; // 0x1b20(0x08)
	struct UImage* Dots_4; // 0x1b28(0x08)
	struct UEsports_StandingBtnMult_C* Esports_StandingBtnMult; // 0x1b30(0x08)
	struct UImage* Image_102; // 0x1b38(0x08)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_EventStandings.WBP_Button_EventStandings_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_EventStandings.WBP_Button_EventStandings_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_EventStandings(int32_t EntryPoint); // Function WBP_Button_EventStandings.WBP_Button_EventStandings_C.ExecuteUbergraph_WBP_Button_EventStandings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

