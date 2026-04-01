// WidgetBlueprintGeneratedClass PurchaseSuccess.PurchaseSuccess_C
// Size: 0x3c0 (Inherited: 0x318)
struct UPurchaseSuccess_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UImage* Border; // 0x328(0x08)
	struct UImage* DecoCenter; // 0x330(0x08)
	struct UImage* DecoCenterLine; // 0x338(0x08)
	struct UImage* DecoLineLeftTip; // 0x340(0x08)
	struct UImage* DecoLineRightTip; // 0x348(0x08)
	struct UImage* diamond; // 0x350(0x08)
	struct USharedButtonMaster_C* EquipButton; // 0x358(0x08)
	struct URewardPreviewWidget_C* RewardPreviewWidget; // 0x360(0x08)
	struct USharedButtonMaster_C* StoreButtonShared; // 0x368(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x370(0x08)
	struct FMulticastInlineDelegate OnStoreClicked; // 0x378(0x10)
	struct FMulticastInlineDelegate OnEquipClicked; // 0x388(0x10)
	struct URewardModel* Reward; // 0x398(0x08)
	struct FMulticastInlineDelegate OnEquipNowClicked; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnStoreButtonClicked; // 0x3b0(0x10)

	void SequenceEvent__ENTRYPOINTPurchaseSuccess(); // Function PurchaseSuccess.PurchaseSuccess_C.SequenceEvent__ENTRYPOINTPurchaseSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function PurchaseSuccess.PurchaseSuccess_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetReward(struct URewardModel* Reward); // Function PurchaseSuccess.PurchaseSuccess_C.SetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PurchaseSuccess.PurchaseSuccess_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PurchaseSuccess.PurchaseSuccess_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__StoreButtonShared_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PurchaseSuccess.PurchaseSuccess_C.BndEvt__StoreButtonShared_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PurchaseSuccess(int32_t EntryPoint); // Function PurchaseSuccess.PurchaseSuccess_C.ExecuteUbergraph_PurchaseSuccess // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnStoreButtonClicked__DelegateSignature(); // Function PurchaseSuccess.PurchaseSuccess_C.OnStoreButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquipNowClicked__DelegateSignature(); // Function PurchaseSuccess.PurchaseSuccess_C.OnEquipNowClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquipClicked__DelegateSignature(); // Function PurchaseSuccess.PurchaseSuccess_C.OnEquipClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStoreClicked__DelegateSignature(); // Function PurchaseSuccess.PurchaseSuccess_C.OnStoreClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

