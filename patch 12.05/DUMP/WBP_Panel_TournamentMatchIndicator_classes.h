// WidgetBlueprintGeneratedClass WBP_Panel_TournamentMatchIndicator.WBP_Panel_TournamentMatchIndicator_C
// Size: 0x3f9 (Inherited: 0x3e0)
struct UWBP_Panel_TournamentMatchIndicator_C : UAresCommonUserWidget {
	struct UImage* IMG_LeftIndicator; // 0x3e0(0x08)
	struct UImage* IMG_RightIndicator; // 0x3e8(0x08)
	struct UNamedSlot* TextSlot; // 0x3f0(0x08)
	bool bShouldCollapse; // 0x3f8(0x01)

	void SetIndicatorDirection(enum class E_TournamentMatchIndicatorDirection InDirection); // Function WBP_Panel_TournamentMatchIndicator.WBP_Panel_TournamentMatchIndicator_C.SetIndicatorDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

