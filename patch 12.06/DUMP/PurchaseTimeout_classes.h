// WidgetBlueprintGeneratedClass PurchaseTimeout.PurchaseTimeout_C
// Size: 0x350 (Inherited: 0x318)
struct UPurchaseTimeout_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* DecoLeft; // 0x320(0x08)
	struct UImage* DecoRight; // 0x328(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x330(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x338(0x08)
	struct FMulticastInlineDelegate OnDialogAccepted; // 0x340(0x10)

	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PurchaseTimeout.PurchaseTimeout_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PurchaseTimeout(int32_t EntryPoint); // Function PurchaseTimeout.PurchaseTimeout_C.ExecuteUbergraph_PurchaseTimeout // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnDialogAccepted__DelegateSignature(); // Function PurchaseTimeout.PurchaseTimeout_C.OnDialogAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

