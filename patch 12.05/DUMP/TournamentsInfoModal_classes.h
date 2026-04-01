// WidgetBlueprintGeneratedClass TournamentsInfoModal.TournamentsInfoModal_C
// Size: 0x370 (Inherited: 0x318)
struct UTournamentsInfoModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x320(0x08)
	struct UImage* Image_87; // 0x328(0x08)
	struct UImage* Image_180; // 0x330(0x08)
	struct UHorizontalBox* MainBox; // 0x338(0x08)
	struct UOverlay* O_Tile_L; // 0x340(0x08)
	struct UOverlay* O_Tile_M; // 0x348(0x08)
	struct UOverlay* O_Tile_R; // 0x350(0x08)
	struct UWBP_MenuButton_Premier_C* WBP_MenuButton_Premier; // 0x358(0x08)
	struct TArray<struct UOverlay*> MainBoxContent; // 0x360(0x10)

	void SwapContentOrder(); // Function TournamentsInfoModal.TournamentsInfoModal_C.SwapContentOrder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentsInfoModal_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TournamentsInfoModal.TournamentsInfoModal_C.BndEvt__TournamentsInfoModal_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentsInfoModal_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TournamentsInfoModal.TournamentsInfoModal_C.BndEvt__TournamentsInfoModal_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsInfoModal.TournamentsInfoModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsInfoModal(int32_t EntryPoint); // Function TournamentsInfoModal.TournamentsInfoModal_C.ExecuteUbergraph_TournamentsInfoModal // (Final|UbergraphFunction) // @ game+0x1af5410
};

