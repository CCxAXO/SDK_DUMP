// WidgetBlueprintGeneratedClass AgentStoreItem.AgentStoreItem_C
// Size: 0x3d8 (Inherited: 0x318)
struct UAgentStoreItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* OwnedAnimationOutro; // 0x320(0x08)
	struct UWidgetAnimation* OwnedHoverStatic; // 0x328(0x08)
	struct UWidgetAnimation* OwnedAnimationIntro; // 0x330(0x08)
	struct UWidgetAnimation* OwnedStatic; // 0x338(0x08)
	struct UWidgetAnimation* HoverAnimationOutro; // 0x340(0x08)
	struct UWidgetAnimation* HoverAnimationIntro; // 0x348(0x08)
	struct UWidgetAnimation* HoverStatic; // 0x350(0x08)
	struct UWidgetAnimation* Default; // 0x358(0x08)
	struct UAgentCostAndOwnership_C* AgentCostAndOwnership; // 0x360(0x08)
	struct UAgentOwnershipIcon_C* AgentOwnershipIcon; // 0x368(0x08)
	struct UAgentStoreTelemetryButton_C* AgentStoryTelemetryButton; // 0x370(0x08)
	struct UImage* ButtonBGGradient; // 0x378(0x08)
	struct URichTextBlock* CharacterNameText; // 0x380(0x08)
	struct UImage* GradientTop; // 0x388(0x08)
	struct URewardThumbnail_C* RewardThumbnail; // 0x390(0x08)
	struct UImage* RoleWatermarkImage; // 0x398(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x3a0(0x08)
	struct UImage* TextBG; // 0x3a8(0x08)
	struct UImage* TextBGDarkener; // 0x3b0(0x08)
	struct UCharacterDataAsset* ThumbnailImage; // 0x3b8(0x08)
	struct UBodegaOfferModel* BodegaOffer; // 0x3c0(0x08)
	struct UWidgetAnimation* AnimationToPlay; // 0x3c8(0x08)
	struct UBaseInventoryModel* InventoryModel; // 0x3d0(0x08)

	void StartCharacterFetch(); // Function AgentStoreItem.AgentStoreItem_C.StartCharacterFetch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function AgentStoreItem.AgentStoreItem_C.OnCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function AgentStoreItem.AgentStoreItem_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRewardFromOffers(struct FStoreOfferReward& StoreOfferReward); // Function AgentStoreItem.AgentStoreItem_C.GetRewardFromOffers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AgentStoreItem.AgentStoreItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AgentStoreItem.AgentStoreItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnClicked(); // Function AgentStoreItem.AgentStoreItem_C.OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentStoreItem_AgentStoryTelemetryButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(); // Function AgentStoreItem.AgentStoreItem_C.BndEvt__AgentStoreItem_AgentStoryTelemetryButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AgentStoreItem_AgentStoryTelemetryButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature(); // Function AgentStoreItem.AgentStoreItem_C.BndEvt__AgentStoreItem_AgentStoryTelemetryButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AgentStoreItem(int32_t EntryPoint); // Function AgentStoreItem.AgentStoreItem_C.ExecuteUbergraph_AgentStoreItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

