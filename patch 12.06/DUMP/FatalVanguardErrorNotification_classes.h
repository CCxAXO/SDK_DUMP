// WidgetBlueprintGeneratedClass FatalVanguardErrorNotification.FatalVanguardErrorNotification_C
// Size: 0x350 (Inherited: 0x318)
struct UFatalVanguardErrorNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* bgcolor; // 0x320(0x08)
	struct UTextBlock* ConnectionErrorHeaderText; // 0x328(0x08)
	struct UTextBlock* ConnectionErrorMainText; // 0x330(0x08)
	struct UTextBlock* ErrorCodeValueLabel; // 0x338(0x08)
	struct UHorizontalBox* GenericErrorCodeContainer; // 0x340(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x348(0x08)

	void Update(); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FatalVanguardErrorNotification(int32_t EntryPoint); // Function FatalVanguardErrorNotification.FatalVanguardErrorNotification_C.ExecuteUbergraph_FatalVanguardErrorNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

