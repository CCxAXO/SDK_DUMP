// WidgetBlueprintGeneratedClass WBP_Button_Close.WBP_Button_Close_C
// Size: 0x379 (Inherited: 0x320)
struct UWBP_Button_Close_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* BackArrowBg; // 0x328(0x08)
	struct UImage* BackArrowImage; // 0x330(0x08)
	struct UHorizontalBox* BackButtonMode; // 0x338(0x08)
	struct UButton* BackgroundCloseButton; // 0x340(0x08)
	struct UButton* CloseButton; // 0x348(0x08)
	struct UOverlay* KeyBindContainer; // 0x350(0x08)
	struct UTextBlock* KeybindTextBack; // 0x358(0x08)
	struct UMenuAnchor* MenuAnchor_127; // 0x360(0x08)
	struct FMulticastInlineDelegate OnCloseRequested; // 0x368(0x10)
	bool ListenToEscapeKey; // 0x378(0x01)

	void BndEvt__WBP_Button_Close_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Button_Close.WBP_Button_Close_C.BndEvt__WBP_Button_Close_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Button_Close_BackgroundCloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Button_Close.WBP_Button_Close_C.BndEvt__WBP_Button_Close_BackgroundCloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Button_Close.WBP_Button_Close_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Close(int32_t EntryPoint); // Function WBP_Button_Close.WBP_Button_Close_C.ExecuteUbergraph_WBP_Button_Close // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnCloseRequested__DelegateSignature(); // Function WBP_Button_Close.WBP_Button_Close_C.OnCloseRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

