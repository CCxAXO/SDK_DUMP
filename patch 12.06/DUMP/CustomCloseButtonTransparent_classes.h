// WidgetBlueprintGeneratedClass CustomCloseButtonTransparent.CustomCloseButtonTransparent_C
// Size: 0x391 (Inherited: 0x320)
struct UCustomCloseButtonTransparent_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x328(0x08)
	struct UButton* BackButton; // 0x330(0x08)
	struct UButton* BackgroundBackButton; // 0x338(0x08)
	struct UImage* BackImage; // 0x340(0x08)
	struct UHorizontalBox* CloseButtonMode; // 0x348(0x08)
	struct UVerticalBox* KeybindClose; // 0x350(0x08)
	struct UMenuAnchor* MenuAnchor_127; // 0x358(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x360(0x10)
	bool ListenToEscapeKey; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UAkAudioEvent* AUD_Hovered; // 0x378(0x08)
	struct UAkAudioEvent* AUD_Unhovered; // 0x380(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x388(0x08)
	bool ShowKeybind; // 0x390(0x01)

	struct UWidget* OnGetMenuContent_1(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CustomCloseButtonTransparent(int32_t EntryPoint); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.ExecuteUbergraph_CustomCloseButtonTransparent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function CustomCloseButtonTransparent.CustomCloseButtonTransparent_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

