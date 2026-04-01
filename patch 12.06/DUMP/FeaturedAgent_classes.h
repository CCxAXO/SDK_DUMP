// WidgetBlueprintGeneratedClass FeaturedAgent.FeaturedAgent_C
// Size: 0x3d0 (Inherited: 0x318)
struct UFeaturedAgent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* RestoreFadeout; // 0x320(0x08)
	struct UWidgetAnimation* FadeOut; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UWidgetAnimation* hover; // 0x338(0x08)
	struct UAgentBackgroundText_C* AgentBackgroundText; // 0x340(0x08)
	struct UAgentGlitchPortrait_C* AgentGlitchPortrait; // 0x348(0x08)
	struct UAgentOwnershipIcon_C* AgentOwnershipIcon; // 0x350(0x08)
	struct UAgentRecruitment_C* AgentRecruitment; // 0x358(0x08)
	struct UImage* DiamondLarge; // 0x360(0x08)
	struct UImage* DiamondLarge_2; // 0x368(0x08)
	struct UImage* DiamondLarge_3; // 0x370(0x08)
	struct UTextBlock* FeaturedTextBlock; // 0x378(0x08)
	struct UWBP_MenuButtonPrimaryWithSubtitle_C* RecruitButton; // 0x380(0x08)
	struct UButton* ShowOwned; // 0x388(0x08)
	struct UButton* ShowSubscription; // 0x390(0x08)
	struct UButton* ShowUnowned; // 0x398(0x08)
	struct UTextBlock* TitleTextWidget; // 0x3a0(0x08)
	struct UPurchaseModal* PurchaseModal; // 0x3a8(0x08)
	struct UMaterialInstanceDynamic* FeaturedDynamicCrop; // 0x3b0(0x08)
	struct UMaterialInstanceDynamic* FeaturedDynamicAdditive; // 0x3b8(0x08)
	struct UBodegaOfferModel* BodegaOffer; // 0x3c0(0x08)
	struct FTimerHandle NewFeaturedAgentTimer; // 0x3c8(0x08)

	void OnBodegaModelUpdated(struct UBodegaModel* BodegaOfferModel); // Function FeaturedAgent.FeaturedAgent_C.OnBodegaModelUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFeaturedAgent(); // Function FeaturedAgent.FeaturedAgent_C.UpdateFeaturedAgent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLockedStatus(); // Function FeaturedAgent.FeaturedAgent_C.UpdateLockedStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function FeaturedAgent.FeaturedAgent_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsUnlocked(bool IsOwned, bool IsSubscription); // Function FeaturedAgent.FeaturedAgent_C.SetIsUnlocked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function FeaturedAgent.FeaturedAgent_C.OnCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFeaturedAgent(); // Function FeaturedAgent.FeaturedAgent_C.SetFeaturedAgent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FeaturedAgent_ShowOwned_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function FeaturedAgent.FeaturedAgent_C.BndEvt__FeaturedAgent_ShowOwned_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FeaturedAgent_ShowUnowned_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function FeaturedAgent.FeaturedAgent_C.BndEvt__FeaturedAgent_ShowUnowned_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FeaturedAgent_ShowSubscription_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function FeaturedAgent.FeaturedAgent_C.BndEvt__FeaturedAgent_ShowSubscription_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function FeaturedAgent.FeaturedAgent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FeaturedAgent_RecruitButton_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature(); // Function FeaturedAgent.FeaturedAgent_C.BndEvt__FeaturedAgent_RecruitButton_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FeaturedAgent(int32_t EntryPoint); // Function FeaturedAgent.FeaturedAgent_C.ExecuteUbergraph_FeaturedAgent // (Final|UbergraphFunction) // @ game+0x1b42740
};

