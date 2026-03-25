// WidgetBlueprintGeneratedClass PurchaseFailed.PurchaseFailed_C
// Size: 0x350 (Inherited: 0x318)
struct UPurchaseFailed_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* DecoLeft; // 0x320(0x08)
	struct UImage* DecoRight; // 0x328(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x330(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x338(0x08)
	struct FMulticastInlineDelegate OnDialogAccepted; // 0x340(0x10)

	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PurchaseFailed.PurchaseFailed_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PurchaseFailed(int32_t EntryPoint); // Function PurchaseFailed.PurchaseFailed_C.ExecuteUbergraph_PurchaseFailed // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnDialogAccepted__DelegateSignature(); // Function PurchaseFailed.PurchaseFailed_C.OnDialogAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

