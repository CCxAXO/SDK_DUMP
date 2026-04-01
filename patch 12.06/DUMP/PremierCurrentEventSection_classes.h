// WidgetBlueprintGeneratedClass PremierCurrentEventSection.PremierCurrentEventSection_C
// Size: 0x3f1 (Inherited: 0x318)
struct UPremierCurrentEventSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* CurrentEvent; // 0x320(0x08)
	struct UVerticalBox* DateAndTime_VerticalBox; // 0x328(0x08)
	struct UImage* Divider; // 0x330(0x08)
	struct UWidgetSwitcher* GoToLobbyWrapper; // 0x338(0x08)
	struct UImage* Header_BackgroundImage; // 0x340(0x08)
	struct UWidgetSwitcher* Header_TextWidgetSwitcher; // 0x348(0x08)
	struct UImage* IMG_PremierLogo; // 0x350(0x08)
	struct UImage* IMG_PremierLogo_2; // 0x358(0x08)
	struct UTextBlock* Info_DatesLine; // 0x360(0x08)
	struct UTextBlock* Info_StartTimesLine; // 0x368(0x08)
	struct UButton* MapPool; // 0x370(0x08)
	struct USizeBox* MapPoolBtn; // 0x378(0x08)
	struct UTextBlock* Match_MapHeaderText; // 0x380(0x08)
	struct UTextBlock* Match_SecondaryText; // 0x388(0x08)
	struct UWidgetSwitcher* NextOrLiveWidgetSwitcher; // 0x390(0x08)
	struct UOverlay* NoEvent; // 0x398(0x08)
	struct UWidgetSwitcher* NoEventWidgetSwitcher; // 0x3a0(0x08)
	struct UPremierEventMatchesRemaining_C* PremierEventMatchesRemaining; // 0x3a8(0x08)
	struct UTextBlock* SecondaryBtnText_2; // 0x3b0(0x08)
	struct USizeBox* SeeBracket_Wrapper; // 0x3b8(0x08)
	struct UTextBlock* Text_PremierStageName; // 0x3c0(0x08)
	struct UWBP_LiveTag_C* WBP_LiveTag; // 0x3c8(0x08)
	struct UWBP_MenuButton_Premier_C* WBP_MenuButton_Premier; // 0x3d0(0x08)
	struct UWBP_TournamentAsset_C* WBP_TournamentAsset; // 0x3d8(0x08)
	struct UPremierEventModelOld* EventModel; // 0x3e0(0x08)
	struct UPremierScheduledEventModelOld* ScheduledEventModel; // 0x3e8(0x08)
	bool IsCurrentOrNext; // 0x3f0(0x01)

	void UpdateStageName(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.UpdateStageName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Play Premier Button Visibility(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.Update Play Premier Button Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsEventLive(bool& Is Live); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.IsEventLive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateIsLiveDisplay(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.UpdateIsLiveDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDisplay(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.UpdateDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdateScheduledEvent(struct UPremierScheduledEventModelOld* Scheduled Event Model, bool IsCurrentOrNext); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.UpdateScheduledEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyOwnerTransferred(struct UPartyPlayerModel* Player); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.OnPartyOwnerTransferred // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartyMatchmakingStateChanged(bool NewValue); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.OnPartyMatchmakingStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierCurrentEventSection_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.BndEvt__PremierCurrentEventSection_WBP_MenuButton_Premier_K2Node_ComponentBoundEvent_5_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.BndEvt__PremierCurrentEventSection_MapPool_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnPremierPartyConversionSuccess(); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.OnPremierPartyConversionSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent(enum class EPartyErrorEnum PartyErrorEnum); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierCurrentEventSection(int32_t EntryPoint); // Function PremierCurrentEventSection.PremierCurrentEventSection_C.ExecuteUbergraph_PremierCurrentEventSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

