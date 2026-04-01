// WidgetBlueprintGeneratedClass CustomCloseButton.CustomCloseButton_C
// Size: 0x399 (Inherited: 0x320)
struct UCustomCloseButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x328(0x08)
	struct UButton* BackButton; // 0x330(0x08)
	struct UButton* BackgroundBackButton; // 0x338(0x08)
	struct UImage* BackImage; // 0x340(0x08)
	struct UHorizontalBox* CloseButtonMode; // 0x348(0x08)
	struct UImage* Image_406; // 0x350(0x08)
	struct UVerticalBox* KeybindClose; // 0x358(0x08)
	struct UMenuAnchor* MenuAnchor_127; // 0x360(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x368(0x10)
	bool ListenToEscapeKey; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UAkAudioEvent* AUD_Hovered; // 0x380(0x08)
	struct UAkAudioEvent* AUD_Unhovered; // 0x388(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x390(0x08)
	bool ShowKeybind; // 0x398(0x01)

	struct UWidget* OnGetMenuContent_1(); // Function CustomCloseButton.CustomCloseButton_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CustomCloseButton.CustomCloseButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.BndEvt__BackgroundBackButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function CustomCloseButton.CustomCloseButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CustomCloseButton(int32_t EntryPoint); // Function CustomCloseButton.CustomCloseButton_C.ExecuteUbergraph_CustomCloseButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function CustomCloseButton.CustomCloseButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

