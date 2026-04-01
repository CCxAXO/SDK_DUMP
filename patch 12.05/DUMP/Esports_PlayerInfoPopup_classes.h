// WidgetBlueprintGeneratedClass Esports_PlayerInfoPopup.Esports_PlayerInfoPopup_C
// Size: 0x338 (Inherited: 0x318)
struct UEsports_PlayerInfoPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x320(0x08)
	struct UNamedSlot* DisplayWidgetSlot; // 0x328(0x08)
	struct UImage* Image_79; // 0x330(0x08)

	void InitializePlayerInfoSection(struct FPlayerDTO PlayerDTO); // Function Esports_PlayerInfoPopup.Esports_PlayerInfoPopup_C.InitializePlayerInfoSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDisplayWidget(struct UUserWidget* DisplayWidget); // Function Esports_PlayerInfoPopup.Esports_PlayerInfoPopup_C.SetDisplayWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Esports_EventOverview_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function Esports_PlayerInfoPopup.Esports_PlayerInfoPopup_C.BndEvt__Esports_EventOverview_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_PlayerInfoPopup(int32_t EntryPoint); // Function Esports_PlayerInfoPopup.Esports_PlayerInfoPopup_C.ExecuteUbergraph_Esports_PlayerInfoPopup // (Final|UbergraphFunction) // @ game+0x1af5410
};

