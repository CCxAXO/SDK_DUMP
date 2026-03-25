// WidgetBlueprintGeneratedClass PurchaseSuccessNoEquip.PurchaseSuccessNoEquip_C
// Size: 0x358 (Inherited: 0x318)
struct UPurchaseSuccessNoEquip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* DecoLeft; // 0x320(0x08)
	struct UImage* DecoRight; // 0x328(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x330(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x338(0x08)
	struct FMulticastInlineDelegate OnOKClicked; // 0x340(0x10)
	struct URewardModel* Reward; // 0x350(0x08)

	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PurchaseSuccessNoEquip.PurchaseSuccessNoEquip_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PurchaseSuccessNoEquip(int32_t EntryPoint); // Function PurchaseSuccessNoEquip.PurchaseSuccessNoEquip_C.ExecuteUbergraph_PurchaseSuccessNoEquip // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnOKClicked__DelegateSignature(); // Function PurchaseSuccessNoEquip.PurchaseSuccessNoEquip_C.OnOKClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

