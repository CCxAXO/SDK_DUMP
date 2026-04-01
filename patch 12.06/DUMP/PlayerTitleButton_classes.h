// WidgetBlueprintGeneratedClass PlayerTitleButton.PlayerTitleButton_C
// Size: 0x3e0 (Inherited: 0x358)
struct UPlayerTitleButton_C : UAresContextMenuActionBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UPlayerTitleLabel_C* PlayerTitleLabel; // 0x360(0x08)
	struct UButton* TitleButton; // 0x368(0x08)
	struct FMulticastInlineDelegate OnHover; // 0x370(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x380(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x390(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3a0(0x10)
	bool IsEnabled; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct FMulticastInlineDelegate OnActionTriggered_1; // 0x3b8(0x10)
	struct UPlayerTitleHandle* PlayerTitleHandle; // 0x3c8(0x08)
	struct FMulticastInlineDelegate On ButtonTitleSelected; // 0x3d0(0x10)

	void SetButtonContents(); // Function PlayerTitleButton.PlayerTitleButton_C.SetButtonContents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitPlayerTitleButtons(struct UPlayerTitleHandle* Player Title Handle); // Function PlayerTitleButton.PlayerTitleButton_C.InitPlayerTitleButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PlayerTitleButton.PlayerTitleButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInit(struct FText& Text, struct UTexture2D* IconTexture, bool Enabled); // Function PlayerTitleButton.PlayerTitleButton_C.OnInit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerTitleButton.PlayerTitleButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerTitleButton(int32_t EntryPoint); // Function PlayerTitleButton.PlayerTitleButton_C.ExecuteUbergraph_PlayerTitleButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void On ButtonTitleSelected__DelegateSignature(struct UPlayerTitleHandle* Selected Title); // Function PlayerTitleButton.PlayerTitleButton_C.On ButtonTitleSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionTriggered_0__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.OnActionTriggered_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnReleased__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPressed__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUnhover__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.OnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHover__DelegateSignature(); // Function PlayerTitleButton.PlayerTitleButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

