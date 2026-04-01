// WidgetBlueprintGeneratedClass WBP_Misc_Esports_EventDots.WBP_Misc_Esports_EventDots_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Misc_Esports_EventDots_C : UAresCommonUserWidget {
	struct UImage* Image_ProgressLine; // 0x3e0(0x08)
	struct UImage* IMG_DiamondGray; // 0x3e8(0x08)
	struct UImage* IMG_DiamondOpen; // 0x3f0(0x08)
	struct UImage* IMG_DiamondRed; // 0x3f8(0x08)
	struct UWidgetSwitcher* Switcher_EventStateDiamond; // 0x400(0x08)

	void DisplayProgressLine(bool bShowLine); // Function WBP_Misc_Esports_EventDots.WBP_Misc_Esports_EventDots_C.DisplayProgressLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleDotsFromStatus(enum class EEsportsMatchStatus InMatchStatus); // Function WBP_Misc_Esports_EventDots.WBP_Misc_Esports_EventDots_C.StyleDotsFromStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

