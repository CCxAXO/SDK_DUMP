// WidgetBlueprintGeneratedClass WBP_Panel_TimelinePin_HoverPin.WBP_Panel_TimelinePin_HoverPin_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_TimelinePin_HoverPin_C : UWBP_Panel_TimelinePinBase_C {
	struct UImage* PanelBG; // 0x3e0(0x08)
	struct UImage* PinImage; // 0x3e8(0x08)
	struct UImage* PinImage_2; // 0x3f0(0x08)
	struct UImage* RoundTextBG; // 0x3f8(0x08)
	struct UTextBlock* T_Round; // 0x400(0x08)
	struct UTextBlock* T_Time; // 0x408(0x08)

	void FormatTimeText(struct FTimespan InTime, struct FText& TimeText); // Function WBP_Panel_TimelinePin_HoverPin.WBP_Panel_TimelinePin_HoverPin_C.FormatTimeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetText(int32_t Round, double TimeValue); // Function WBP_Panel_TimelinePin_HoverPin.WBP_Panel_TimelinePin_HoverPin_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

