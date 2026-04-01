// WidgetBlueprintGeneratedClass WBP_Panel_PickemAwardedPointsDisplay.WBP_Panel_PickemAwardedPointsDisplay_C
// Size: 0x3c5 (Inherited: 0x318)
struct UWBP_Panel_PickemAwardedPointsDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_Background_Fill; // 0x320(0x08)
	struct UImage* Image_Background_Left; // 0x328(0x08)
	struct UImage* Image_Background_Right; // 0x330(0x08)
	struct UAresCommonText* Text_PointsEarned; // 0x338(0x08)
	struct UCommonTextStyle* TextStyle; // 0x340(0x08)
	struct FSlateColor StandardBackgroundColor; // 0x348(0x14)
	struct FSlateColor PerfectBackgroundColor; // 0x35c(0x14)
	int32_t AwardedPoints; // 0x370(0x04)
	int32_t PossiblePoints; // 0x374(0x04)
	bool bShowEarnedPointsSign; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	struct FMargin TextPadding; // 0x37c(0x10)
	char pad_38C[0x4]; // 0x38c(0x04)
	double ChamferedCornerSize; // 0x390(0x08)
	bool bShowPossiblePoints; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FSlateColor StandardTextColor; // 0x39c(0x14)
	struct FSlateColor PerfectTextColor; // 0x3b0(0x14)
	bool bShowPerfectMessage; // 0x3c4(0x01)

	void Set Displayed Points(int32_t InAwardedPoints, int32_t InPossiblePoints); // Function WBP_Panel_PickemAwardedPointsDisplay.WBP_Panel_PickemAwardedPointsDisplay_C.Set Displayed Points // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemAwardedPointsDisplay.WBP_Panel_PickemAwardedPointsDisplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemAwardedPointsDisplay(int32_t EntryPoint); // Function WBP_Panel_PickemAwardedPointsDisplay.WBP_Panel_PickemAwardedPointsDisplay_C.ExecuteUbergraph_WBP_Panel_PickemAwardedPointsDisplay // (Final|UbergraphFunction) // @ game+0x1b42740
};

