// WidgetBlueprintGeneratedClass WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C
// Size: 0x381 (Inherited: 0x318)
struct UWBP_PromotionNoticeModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_PremierPromotion; // 0x320(0x08)
	struct UTextBlock* DescriptionText; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image_498; // 0x338(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x340(0x08)
	struct USizeBox* SizeBoxButton; // 0x348(0x08)
	struct UTextBlock* TitleText; // 0x350(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x358(0x08)
	struct FMulticastInlineDelegate On Close; // 0x360(0x10)
	struct FString PromotionNoticeConfig; // 0x370(0x10)
	bool PromotionForNextSeason; // 0x380(0x01)

	void SequenceEvent__ENTRYPOINTWBP_PromotionNoticeModal(); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.SequenceEvent__ENTRYPOINTWBP_PromotionNoticeModal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Audio_Event(); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.Audio_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_PromotionNoticeModal_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.BndEvt__WBP_PromotionNoticeModal_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_PromotionNoticeModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.BndEvt__WBP_PromotionNoticeModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_PromotionNoticeModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.BndEvt__WBP_PromotionNoticeModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_PromotionNoticeModal(int32_t EntryPoint); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.ExecuteUbergraph_WBP_PromotionNoticeModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void On Close__DelegateSignature(struct FString PromotionNoticeConfig); // Function WBP_PromotionNoticeModal.WBP_PromotionNoticeModal_C.On Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

