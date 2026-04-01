// WidgetBlueprintGeneratedClass WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C
// Size: 0x4b8 (Inherited: 0x3e0)
struct UWBP_Panel_GiftingOfferPreview_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPlayerNameViewModel* PlayerNameViewModel; // 0x3e8(0x08)
	struct UWBP_Button_Primary_C* CloseButton; // 0x3f0(0x08)
	struct UImage* Filigree; // 0x3f8(0x08)
	struct UImage* GiftIcon; // 0x400(0x08)
	struct USizeBox* GiftIconSizeBox; // 0x408(0x08)
	struct UAresCommonRichText* GiftSentRichText; // 0x410(0x08)
	struct UAresCommonText* GiftSentSubtitle; // 0x418(0x08)
	struct UImage* Image; // 0x420(0x08)
	struct UImage* Image_228; // 0x428(0x08)
	struct UAresCommonText* IndexIndicator; // 0x430(0x08)
	struct UOverlay* LeftPanelOverlay; // 0x438(0x08)
	struct UOverlay* OfferPreviewOverlay; // 0x440(0x08)
	struct UOverlay* PurchaseCompleteOverlay; // 0x448(0x08)
	struct UHorizontalBox* SubtitleBox; // 0x450(0x08)
	struct UWBP_Panel_CommonTitle_C* WBP_Panel_CommonTitle; // 0x458(0x08)
	struct UWBP_Panel_ContentTierIcon_C* WBP_Panel_ContentTierIcon; // 0x460(0x08)
	struct UWBP_Panel_LimitedEditionDescriptions_C* WBP_Panel_LimitedEditionDescriptions; // 0x468(0x08)
	struct UWBP_Panel_LimitedEditionIcons_C* WBP_Panel_LimitedEditionIcons; // 0x470(0x08)
	struct UWBP_Panel_OfferPreview_C* WBP_Panel_OfferPreview; // 0x478(0x08)
	struct UVM_Reward_C* VM_Reward; // 0x480(0x08)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0x488(0x08)
	struct UVM_Gifting_C* VM_Gifting; // 0x490(0x08)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x498(0x08)
	enum class EAresPlatformType PlatformToPreview; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	float ConsolePurchaseOverlayLeftPadding; // 0x4a4(0x04)
	struct FMargin FullScreenOfferPreviewPadding; // 0x4a8(0x10)

	void UpdatePadding(); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.UpdatePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRewardTypeDisplaySettings(); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.SetRewardTypeDisplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void UpdatePlatformStyle(enum class EAresPlatformType Platform); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.UpdatePlatformStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerTagChanged(struct FString OutPlayerTag); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.HandlePlayerTagChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNavigateToStore(); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.HandleNavigateToStore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Reward Name Changed(struct FText DisplayName); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.Handle Reward Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleSelectedRecipientChanged(struct FString Subject); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.HandleSelectedRecipientChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind Events(bool Bind); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_GiftingOfferPreview_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.BndEvt__WBP_Panel_GiftingOfferPreview_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_GiftingOfferPreview_CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.BndEvt__WBP_Panel_GiftingOfferPreview_CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_GiftingOfferPreview(int32_t EntryPoint); // Function WBP_Panel_GiftingOfferPreview.WBP_Panel_GiftingOfferPreview_C.ExecuteUbergraph_WBP_Panel_GiftingOfferPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

