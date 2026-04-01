// WidgetBlueprintGeneratedClass AgentPurchaseConfirm.AgentPurchaseConfirm_C
// Size: 0x3e0 (Inherited: 0x318)
struct UAgentPurchaseConfirm_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct USharedNavButton_C* AgentDetailsButton; // 0x328(0x08)
	struct UAresTextBlock* AgentName; // 0x330(0x08)
	struct UAgentPreviewIcon_C* AgentPreviewIcon; // 0x338(0x08)
	struct UAgentPurchaseButtons_C* AgentPurchaseButtons; // 0x340(0x08)
	struct USharedBackButton_C* BrowserCloseButton; // 0x348(0x08)
	struct UOverlay* ConfirmOverlay; // 0x350(0x08)
	struct UImage* DecoLeft; // 0x358(0x08)
	struct UImage* DecoRight; // 0x360(0x08)
	struct UPurchaseConfirm_RecruitmentProgress_C* PurchaseConfirm_RecruitmentProgress; // 0x368(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x370(0x08)
	struct UStorepopupBacking_C* StorepopupBacking; // 0x378(0x08)
	struct UWidgetSwitcher* Switcher; // 0x380(0x08)
	struct UImage* TierBgLeft; // 0x388(0x08)
	struct UImage* TierBgRight; // 0x390(0x08)
	struct UOverlay* WebBrowserOverlay; // 0x398(0x08)
	struct UWebBrowser* WebBrowserWidget; // 0x3a0(0x08)
	struct FMulticastInlineDelegate OnUnlockClicked; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnCancelClicked; // 0x3b8(0x10)
	struct UBodegaOfferModel* BodegaOffer; // 0x3c8(0x08)
	struct FDateTime RefreshTimeUTC; // 0x3d0(0x08)
	struct FTimerHandle RefreshTimer; // 0x3d8(0x08)

	void SequenceEvent__ENTRYPOINTAgentPurchaseConfirm(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.SequenceEvent__ENTRYPOINTAgentPurchaseConfirm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActiveRecruitVisibility(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.SetActiveRecruitVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Timer(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.Update Timer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetOfferForCurrencyID(struct FGuid CurrencyID, struct UStoreOffer*& StoreOffer); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.GetOfferForCurrencyID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Character Loaded(struct UCharacterHandle* CharacterHandle); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.On Character Loaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentPurchaseConfirm_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.BndEvt__AgentPurchaseConfirm_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentPurchaseConfirm_AgentPurchaseButtons_K2Node_ComponentBoundEvent_4_OnVPOfferClicked__DelegateSignature(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.BndEvt__AgentPurchaseConfirm_AgentPurchaseButtons_K2Node_ComponentBoundEvent_4_OnVPOfferClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentPurchaseConfirm_AgentPurchaseButtons_K2Node_ComponentBoundEvent_1_OnDoughOfferClicked__DelegateSignature(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.BndEvt__AgentPurchaseConfirm_AgentPurchaseButtons_K2Node_ComponentBoundEvent_1_OnDoughOfferClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentPurchaseConfirm_AgentPurchaseButtons_K2Node_ComponentBoundEvent_2_OnTokenOfferClicked__DelegateSignature(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.BndEvt__AgentPurchaseConfirm_AgentPurchaseButtons_K2Node_ComponentBoundEvent_2_OnTokenOfferClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentPurchaseConfirm_AgentDetailsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.BndEvt__AgentPurchaseConfirm_AgentDetailsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void HandleRecruitmentEventUpdated(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.HandleRecruitmentEventUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AgentPurchaseConfirm(int32_t EntryPoint); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.ExecuteUbergraph_AgentPurchaseConfirm // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnCancelClicked__DelegateSignature(); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.OnCancelClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnlockClicked__DelegateSignature(struct UStoreOffer* StoreOffer); // Function AgentPurchaseConfirm.AgentPurchaseConfirm_C.OnUnlockClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

