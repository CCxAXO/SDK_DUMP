// WidgetBlueprintGeneratedClass FatalNotificationFSV2.FatalNotificationFSV2_C
// Size: 0x348 (Inherited: 0x318)
struct UFatalNotificationFSV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* bgcolor; // 0x320(0x08)
	struct UTextBlock* Error_Text; // 0x328(0x08)
	struct UTextBlock* ErrorCode; // 0x330(0x08)
	struct UTextBlock* ErrorHeaderText; // 0x338(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x340(0x08)

	void quit(); // Function FatalNotificationFSV2.FatalNotificationFSV2_C.quit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update(); // Function FatalNotificationFSV2.FatalNotificationFSV2_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function FatalNotificationFSV2.FatalNotificationFSV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPlatformUnhealthy(enum class EPlatformFaultReason& Reason); // Function FatalNotificationFSV2.FatalNotificationFSV2_C.OnPlatformUnhealthy // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function FatalNotificationFSV2.FatalNotificationFSV2_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FatalNotificationFSV2(int32_t EntryPoint); // Function FatalNotificationFSV2.FatalNotificationFSV2_C.ExecuteUbergraph_FatalNotificationFSV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

