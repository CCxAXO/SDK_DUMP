// WidgetBlueprintGeneratedClass MapSelect_SideButton.MapSelect_SideButton_C
// Size: 0x389 (Inherited: 0x318)
struct UMapSelect_SideButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackdropFill; // 0x320(0x08)
	struct UImage* Image_69; // 0x328(0x08)
	struct UImage* IMG_DarkOverlay; // 0x330(0x08)
	struct UImage* IMG_HoverBG; // 0x338(0x08)
	struct UImage* IMG_SelectedOverlay; // 0x340(0x08)
	struct UImage* IMG_SideChooseIcon; // 0x348(0x08)
	struct UImage* IMG_SideChooseIconEcho; // 0x350(0x08)
	struct UMapSelect_VotePips_C* Pips; // 0x358(0x08)
	struct UButton* SideButton; // 0x360(0x08)
	struct UTextBlock* SideText; // 0x368(0x08)
	bool FlipSide; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x378(0x10)
	bool bIsSelected; // 0x388(0x01)

	void SetHoverState(); // Function MapSelect_SideButton.MapSelect_SideButton_C.SetHoverState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInteractable(bool bInteractable); // Function MapSelect_SideButton.MapSelect_SideButton_C.SetInteractable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelected(bool bSelected); // Function MapSelect_SideButton.MapSelect_SideButton_C.SetSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function MapSelect_SideButton.MapSelect_SideButton_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MapSelect_SideButton.MapSelect_SideButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MapSelect_SideButton.MapSelect_SideButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SideButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function MapSelect_SideButton.MapSelect_SideButton_C.BndEvt__SideButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SideButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function MapSelect_SideButton.MapSelect_SideButton_C.BndEvt__SideButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SideButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function MapSelect_SideButton.MapSelect_SideButton_C.BndEvt__SideButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapSelect_SideButton(int32_t EntryPoint); // Function MapSelect_SideButton.MapSelect_SideButton_C.ExecuteUbergraph_MapSelect_SideButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClicked__DelegateSignature(); // Function MapSelect_SideButton.MapSelect_SideButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

