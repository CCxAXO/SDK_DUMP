// WidgetBlueprintGeneratedClass WBP_Panel_GenericStoreOfferTimer.WBP_Panel_GenericStoreOfferTimer_C
// Size: 0x418 (Inherited: 0x3e0)
struct UWBP_Panel_GenericStoreOfferTimer_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Timer_Countdown_C* OfferTimer; // 0x3e8(0x08)
	struct UAresCommonText* TimerText; // 0x3f0(0x08)
	struct UVM_Interface_CountdownTimer_C* TimerVM; // 0x3f8(0x08)
	struct FText TimeText; // 0x400(0x18)

	void SetTimerText(struct FText InText); // Function WBP_Panel_GenericStoreOfferTimer.WBP_Panel_GenericStoreOfferTimer_C.SetTimerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_GenericStoreOfferTimer.WBP_Panel_GenericStoreOfferTimer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GenericStoreOfferTimer.WBP_Panel_GenericStoreOfferTimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_GenericStoreOfferTimer.WBP_Panel_GenericStoreOfferTimer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_GenericStoreOfferTimer(int32_t EntryPoint); // Function WBP_Panel_GenericStoreOfferTimer.WBP_Panel_GenericStoreOfferTimer_C.ExecuteUbergraph_WBP_Panel_GenericStoreOfferTimer // (Final|UbergraphFunction) // @ game+0x1af5410
};

