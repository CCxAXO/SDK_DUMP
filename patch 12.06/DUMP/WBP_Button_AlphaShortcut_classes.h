// WidgetBlueprintGeneratedClass WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C
// Size: 0x1c04 (Inherited: 0x1ae0)
struct UWBP_Button_AlphaShortcut_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UOverlay* DiscountTextContainerOverlay; // 0x1ae8(0x08)
	struct UHorizontalBox* HorizontalBox_Contents; // 0x1af0(0x08)
	struct UImage* IMG_DefaultDecoration; // 0x1af8(0x08)
	struct UImage* IMG_NSsuffixBG; // 0x1b00(0x08)
	struct UImage* IMG_StrongBG; // 0x1b08(0x08)
	struct UImage* IMG_StrongBGContrast; // 0x1b10(0x08)
	struct UImage* IMG_StrongDecoration; // 0x1b18(0x08)
	struct UWidgetSwitcher* InputActionIconOrCustomIconSwitcher; // 0x1b20(0x08)
	struct USizeBox* InputActionSizebox; // 0x1b28(0x08)
	struct UNamedSlot* NamedSlot_CustomIcon; // 0x1b30(0x08)
	struct UNamedSlot* NamedSlot_Prefix; // 0x1b38(0x08)
	struct UNamedSlot* NamedSlot_Suffix; // 0x1b40(0x08)
	struct UOverlay* O_NSsuffixWrap; // 0x1b48(0x08)
	struct UAresButtonRichTextComponent* RTCDiscountText; // 0x1b50(0x08)
	struct UAresButtonRichTextComponent* RTCPrimaryText; // 0x1b58(0x08)
	struct UAresButtonRichTextComponent* RTCSecondaryText; // 0x1b60(0x08)
	struct UAresButtonRichTextComponent* RTCSupportAlertText_Txt; // 0x1b68(0x08)
	struct USizeBox* SB_SupportingText; // 0x1b70(0x08)
	struct USpacer* Spacer_InputAction; // 0x1b78(0x08)
	struct UImage* SupportAlertIcon_Img; // 0x1b80(0x08)
	struct UWBP_Panel_StoreItemPrice_C* WBP_Panel_StoreItemPrice; // 0x1b88(0x08)
	enum class EHorizontalAlignment ContentsHorizontalAlignment; // 0x1b90(0x01)
	enum class EVerticalAlignment ContentsVerticalAlignment; // 0x1b91(0x01)
	bool bShowCustomIcon; // 0x1b92(0x01)
	bool bShowPrefix; // 0x1b93(0x01)
	bool bShowSuffix; // 0x1b94(0x01)
	char pad_1B95[0x3]; // 0x1b95(0x03)
	double SpacingBetweenIconAndText; // 0x1b98(0x08)
	struct FMargin ContentsPadding; // 0x1ba0(0x10)
	double IconWidth; // 0x1bb0(0x08)
	struct FText SupportingText; // 0x1bb8(0x18)
	struct FText DiscountText; // 0x1bd0(0x18)
	enum class EButtonProminence Prominence; // 0x1be8(0x01)
	bool ShowSupportingTextIcon; // 0x1be9(0x01)
	enum class EWarningAlertType WarningType; // 0x1bea(0x01)
	char pad_1BEB[0x5]; // 0x1beb(0x05)
	struct UMaterialInstance* WarningIconMI; // 0x1bf0(0x08)
	struct FName WarningTypeMIParameterName; // 0x1bf8(0x0c)

	void Set Prominence(enum class EButtonProminence InProminence); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.Set Prominence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshSecondaryTextBlockVisibility(struct FText& InText); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.RefreshSecondaryTextBlockVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowSuffixContainer(bool InShowSuffix); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetShowSuffixContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowPrefixContainer(bool InShowPrefix); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetShowPrefixContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowCustomIcon(bool InShowCustomIcon); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetShowCustomIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSublabelText(struct FText InSublabelText); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetSublabelText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDiscountText(struct FText InDiscountText); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetDiscountText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSupportingText(struct FText SupportingText, bool ShowIcon, enum class EWarningAlertType WarningAlertType); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetSupportingText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleInputMethodChanged(enum class ECommonInputType InputType); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind or Unbind Common Input(bool bDoBind); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.Bind or Unbind Common Input // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetSecondaryText(struct FText& InText); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.SetSecondaryText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_AlphaShortcut(int32_t EntryPoint); // Function WBP_Button_AlphaShortcut.WBP_Button_AlphaShortcut_C.ExecuteUbergraph_WBP_Button_AlphaShortcut // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

