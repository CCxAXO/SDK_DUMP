// WidgetBlueprintGeneratedClass FatalVanguardRebootNotification.FatalVanguardRebootNotification_C
// Size: 0x368 (Inherited: 0x318)
struct UFatalVanguardRebootNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* bgcolor; // 0x320(0x08)
	struct UTextBlock* ErrorCodeValueLabel; // 0x328(0x08)
	struct UHorizontalBox* GenericErrorCodeContainer; // 0x330(0x08)
	struct UTextBlock* IncompatibleSoftware; // 0x338(0x08)
	struct UHorizontalBox* IncompatibleSoftwareContainer; // 0x340(0x08)
	struct UHorizontalBox* IncompatibleSoftwareErrorContainer; // 0x348(0x08)
	struct USharedButtonMaster_C* QuitButton; // 0x350(0x08)
	struct USharedButtonMaster_C* RebootButton; // 0x358(0x08)
	struct UImage* VanguardLogo; // 0x360(0x08)

	void Update(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedButtonMaster_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.BndEvt__SharedButtonMaster_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FatalVanguardRebootNotification(int32_t EntryPoint); // Function FatalVanguardRebootNotification.FatalVanguardRebootNotification_C.ExecuteUbergraph_FatalVanguardRebootNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

