// WidgetBlueprintGeneratedClass WBP_LiveTag.WBP_LiveTag_C
// Size: 0x38a (Inherited: 0x318)
struct UWBP_LiveTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LiveLinesSampl; // 0x320(0x08)
	struct UImage* IMG_BG_PicksOpen; // 0x328(0x08)
	struct UImage* IMG_Chevron_left_4; // 0x330(0x08)
	struct UImage* IMG_Chevron_left_5; // 0x338(0x08)
	struct UImage* IMG_Chevron_left_6; // 0x340(0x08)
	struct UImage* IMG_LiveBG_left; // 0x348(0x08)
	struct UImage* IMG_LiveBG_right; // 0x350(0x08)
	struct UImage* IMG_PicksOpen_left; // 0x358(0x08)
	struct UOverlay* O_LeftChevrons; // 0x360(0x08)
	struct UOverlay* O_LeftChevrons_2; // 0x368(0x08)
	struct UOverlay* O_RightChevrons; // 0x370(0x08)
	struct UTextBlock* TB_PicksOpen; // 0x378(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x380(0x08)
	bool IsPointingLeft; // 0x388(0x01)
	bool IsPointingRight; // 0x389(0x01)

	void SetWidgetSwitcherState(enum class EEsportsLiveTickerState InTickerState); // Function WBP_LiveTag.WBP_LiveTag_C.SetWidgetSwitcherState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDirection(bool IsPointingLeft, bool IsPointingRight); // Function WBP_LiveTag.WBP_LiveTag_C.SetDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_LiveTag.WBP_LiveTag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_LiveTag.WBP_LiveTag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_LiveTag.WBP_LiveTag_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_LiveTag(int32_t EntryPoint); // Function WBP_LiveTag.WBP_LiveTag_C.ExecuteUbergraph_WBP_LiveTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

