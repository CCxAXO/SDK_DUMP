// WidgetBlueprintGeneratedClass StartGameWidgetV2.StartGameWidgetV2_C
// Size: 0x460 (Inherited: 0x358)
struct UStartGameWidgetV2_C : UStartGameWidgetBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* DisableWithWarning; // 0x360(0x08)
	struct UWidgetAnimation* Collapsed; // 0x368(0x08)
	struct UWidgetAnimation* Active; // 0x370(0x08)
	struct UWidgetAnimation* Default; // 0x378(0x08)
	struct UImage* ActiveEffect; // 0x380(0x08)
	struct UWidgetSwitcher* BigButtonSwitcher; // 0x388(0x08)
	struct UImage* ButtonDisabledRedFillBG; // 0x390(0x08)
	struct UVerticalBox* ButtonDisabledWarningBox; // 0x398(0x08)
	struct UImage* ButtonDisabledWarningIcon; // 0x3a0(0x08)
	struct UTextBlock* ButtonDisabledWarningText; // 0x3a8(0x08)
	struct UButton* CloseButton; // 0x3b0(0x08)
	struct UImage* closeicon; // 0x3b8(0x08)
	struct UMenuAnchor* DisableToolTipAnchor; // 0x3c0(0x08)
	struct UImage* Fill; // 0x3c8(0x08)
	struct UImage* HitBox; // 0x3d0(0x08)
	struct UTextBlock* InQueue_text; // 0x3d8(0x08)
	struct UWBP_MenuButtonPrimary_C* InQueueButton; // 0x3e0(0x08)
	struct UWidgetSwitcher* MFAButtonSwitcher; // 0x3e8(0x08)
	struct UImage* Outline; // 0x3f0(0x08)
	struct UImage* Outline_2; // 0x3f8(0x08)
	struct UOverlay* PlayButtons; // 0x400(0x08)
	struct UWidgetSwitcher* PlayButtonStyle; // 0x408(0x08)
	struct UWBP_MenuButtonPlay_Standalone_C* PlayGameButton; // 0x410(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PremierPlayGameButton_LazyLoader; // 0x418(0x08)
	struct UQueueRestrictedTimer_C* QueueRestrictedTimer; // 0x420(0x08)
	struct UOverlay* StartButtonOverlay; // 0x428(0x08)
	struct UOverlay* StopQueueNoTimer; // 0x430(0x08)
	struct UWBP_MenuButtonPrimary_C* VerifyButton; // 0x438(0x08)
	struct FText ToolTip; // 0x440(0x18)
	struct UBaseMenuButton_Universal_C* PremierPlayButton; // 0x458(0x08)

	void SetPlayButtonStyleToPremier(); // Function StartGameWidgetV2.StartGameWidgetV2_C.SetPlayButtonStyleToPremier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OffsetTranslationForLoc(); // Function StartGameWidgetV2.StartGameWidgetV2_C.OffsetTranslationForLoc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPartyModel* Model, struct UPartyViewController* View Controller); // Function StartGameWidgetV2.StartGameWidgetV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UUserWidget* On_DisableToolTipAnchor_GetMenuContent_1(); // Function StartGameWidgetV2.StartGameWidgetV2_C.On_DisableToolTipAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateButtonEnabled(); // Function StartGameWidgetV2.StartGameWidgetV2_C.UpdateButtonEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateButtonWidget(); // Function StartGameWidgetV2.StartGameWidgetV2_C.UpdateButtonWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ToggleCollapsedView(bool Collapsed); // Function StartGameWidgetV2.StartGameWidgetV2_C.ToggleCollapsedView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function StartGameWidgetV2.StartGameWidgetV2_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function StartGameWidgetV2.StartGameWidgetV2_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function StartGameWidgetV2.StartGameWidgetV2_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StartGameWidget_InQueueButtonNew_K2Node_ComponentBoundEvent_6_OnUniversalButtonVoidEvent__DelegateSignature(); // Function StartGameWidgetV2.StartGameWidgetV2_C.BndEvt__StartGameWidget_InQueueButtonNew_K2Node_ComponentBoundEvent_6_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StartGameWidget_FindMatchButtonNew_K2Node_ComponentBoundEvent_7_OnUniversalButtonVoidEvent__DelegateSignature(); // Function StartGameWidgetV2.StartGameWidgetV2_C.BndEvt__StartGameWidget_FindMatchButtonNew_K2Node_ComponentBoundEvent_7_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function StartGameWidgetV2.StartGameWidgetV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void On Initialized(); // Function StartGameWidgetV2.StartGameWidgetV2_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Clicked (PremierPlayButton)(); // Function StartGameWidgetV2.StartGameWidgetV2_C.On Clicked (PremierPlayButton) // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Premier Play Button Lazy Loader(); // Function StartGameWidgetV2.StartGameWidgetV2_C.Handle Premier Play Button Lazy Loader // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__StartGameWidgetV2_VerifyButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function StartGameWidgetV2.StartGameWidgetV2_C.BndEvt__StartGameWidgetV2_VerifyButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_StartGameWidgetV2(int32_t EntryPoint); // Function StartGameWidgetV2.StartGameWidgetV2_C.ExecuteUbergraph_StartGameWidgetV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

