// WidgetBlueprintGeneratedClass WBP_Screen_PickemGroupBracket.WBP_Screen_PickemGroupBracket_C
// Size: 0x628 (Inherited: 0x580)
struct UWBP_Screen_PickemGroupBracket_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UImage* BracketBodyBorder; // 0x588(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x590(0x08)
	struct UImage* Divider; // 0x598(0x08)
	struct UImage* Divider_2; // 0x5a0(0x08)
	struct UImage* Divider_3; // 0x5a8(0x08)
	struct UImage* Image_160; // 0x5b0(0x08)
	struct UImage* Image_167; // 0x5b8(0x08)
	struct UImage* OverlayBG; // 0x5c0(0x08)
	struct UImage* Pattern; // 0x5c8(0x08)
	struct UImage* TopStrip; // 0x5d0(0x08)
	struct UWBP_Panel_EsportsEventTitleCardHorizontal_C* WBP_Panel_EsportsEventTitleCardHorizontal; // 0x5d8(0x08)
	struct UWBP_Panel_PickemBracket_C* WBP_Panel_PickemBracket; // 0x5e0(0x08)
	struct FString sectionid; // 0x5e8(0x10)
	struct FString Title; // 0x5f8(0x10)
	struct UEsportsEventViewModel* EsportsEventViewModel; // 0x608(0x08)
	struct FString TournamentID; // 0x610(0x10)
	struct UEsportsTournamentViewModel* TournamentViewModel; // 0x620(0x08)

	void Init(); // Function WBP_Screen_PickemGroupBracket.WBP_Screen_PickemGroupBracket_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Esports_Bracket_Overlay_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Screen_PickemGroupBracket.WBP_Screen_PickemGroupBracket_C.BndEvt__Esports_Bracket_Overlay_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnScreenReady(); // Function WBP_Screen_PickemGroupBracket.WBP_Screen_PickemGroupBracket_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PickemGroupBracket(int32_t EntryPoint); // Function WBP_Screen_PickemGroupBracket.WBP_Screen_PickemGroupBracket_C.ExecuteUbergraph_WBP_Screen_PickemGroupBracket // (Final|UbergraphFunction) // @ game+0x1af5410
};

