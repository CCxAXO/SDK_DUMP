// WidgetBlueprintGeneratedClass SeasonalPopup.SeasonalPopup_C
// Size: 0x350 (Inherited: 0x318)
struct USeasonalPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWBP_MenuButtonSeasonal_C* Accept; // 0x320(0x08)
	struct USeasonalPopupBase_C* SeasonalPopupBase; // 0x328(0x08)
	struct FString SeasonalID; // 0x330(0x10)
	struct TArray<struct UPanelWidget*> NewVar_1; // 0x340(0x10)

	void OnInitialized(); // Function SeasonalPopup.SeasonalPopup_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SeasonalPopup.SeasonalPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SeasonalPopup_Accept_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function SeasonalPopup.SeasonalPopup_C.BndEvt__SeasonalPopup_Accept_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SeasonalPopup(int32_t EntryPoint); // Function SeasonalPopup.SeasonalPopup_C.ExecuteUbergraph_SeasonalPopup // (Final|UbergraphFunction) // @ game+0x1af5410
};

