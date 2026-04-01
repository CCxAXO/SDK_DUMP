// WidgetBlueprintGeneratedClass WBP_Panel_PlayerName.WBP_Panel_PlayerName_C
// Size: 0x5a4 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerName_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPlayerNameViewModel* PlayerNameViewModel; // 0x3e8(0x08)
	struct UBorder* Border_Text; // 0x3f0(0x08)
	struct UHorizontalBox* Horizontal_Legacy; // 0x3f8(0x08)
	struct UMenuAnchor* MenuAnchor_Tooltip; // 0x400(0x08)
	struct UOverlay* Overlay_Root; // 0x408(0x08)
	struct USizeBox* SizeBox_RichText; // 0x410(0x08)
	struct UAresCommonText* Txt_PlayerName; // 0x418(0x08)
	struct UAresCommonText* Txt_PlayerTag; // 0x420(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Appearance; // 0x428(0x08)
	enum class EAresIdentitySource IdentitySource; // 0x430(0x01)
	bool bUseAnonymizedName; // 0x431(0x01)
	bool bUseLegacyAppearance; // 0x432(0x01)
	char pad_433[0x5]; // 0x433(0x05)
	struct UCommonTextStyle* NameTextStyle; // 0x438(0x08)
	struct FText PreviewPrefix; // 0x440(0x18)
	struct FText PreviewPrefixSeparator; // 0x458(0x18)
	struct FText PreviewName; // 0x470(0x18)
	struct FText PreviewTag; // 0x488(0x18)
	struct UCommonTextStyle* TagTextStyle; // 0x4a0(0x08)
	struct FLinearColor TintColor; // 0x4a8(0x10)
	bool bUseOverrideStrings; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FText OverridePlayerPrefix; // 0x4c0(0x18)
	struct FText OverridePrefixSeparator; // 0x4d8(0x18)
	struct FText OverridePlayerName; // 0x4f0(0x18)
	struct FText OverridePlayerTag; // 0x508(0x18)
	struct FString PlayerSubject; // 0x520(0x10)
	struct UAresCommonRichText* RichTextBlock; // 0x530(0x08)
	struct UWBP_PlayerNameTooltip_C* TooltipWidgetInstance; // 0x538(0x08)
	bool bShowTooltip; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct UDataTable* TextStyleSet; // 0x548(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x550(0x08)
	bool bIsScrollingEnabled; // 0x558(0x01)
	bool bShowPlayerPrefix; // 0x559(0x01)
	bool bShowPlayerName; // 0x55a(0x01)
	bool bShowPlayerTag; // 0x55b(0x01)
	char pad_55C[0x4]; // 0x55c(0x04)
	struct FString PlayerPrefixTextStyle; // 0x560(0x10)
	struct FString PlayerNameTextStyle; // 0x570(0x10)
	struct FString PlayerTagTextStyle; // 0x580(0x10)
	struct FMargin TextMargin; // 0x590(0x10)
	bool bIncludeTextMarginInDesiredSize; // 0x5a0(0x01)
	bool bAlwaysClipText; // 0x5a1(0x01)
	bool bShowEllipsis; // 0x5a2(0x01)
	bool bJustifyTextForCulture; // 0x5a3(0x01)

	void SetPreviewPrefix(struct FText InPreviewName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPreviewPrefix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetJustifyTextForCulture(bool bInJustifyTextForCulture); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetJustifyTextForCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleConfigValueUpdated(struct FName& ConfigName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.HandleConfigValueUpdated // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerTagTextStyle(struct FString InPlayerTagTextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPlayerTagTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerNameTextStyle(struct FString InPlayerNameTextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPlayerNameTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerPrefixTextStyle(struct FString InPlayerPrefixTextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPlayerPrefixTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowPlayerTag(bool bInShowPlayerTag); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowPlayerTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowPlayerName(bool bInShowPlayerName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowPlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowPlayerPrefix(bool bInShowPlayerPrefix); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowPlayerPrefix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetScrollingIsEnabled(bool bInIsScrollingEnabled); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetScrollingIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetScrollStyle(struct UCommonTextScrollStyle* InScrollStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetScrollStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTextStyleSet(struct UDataTable* InTextStyleSet); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTextStyleSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowEllipsis(bool bInShowEllipsis); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowEllipsis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAlwaysClipText(bool bInAlwaysClipText); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetAlwaysClipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTextMargin(struct FMargin InTextMargin); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTextMargin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UUserWidget* OnGetUserMenuContent_Tooltip(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnGetUserMenuContent_Tooltip // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearOverrideStrings(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.ClearOverrideStrings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOverrideStrings(struct FText InOverridePlayerPrefix, struct FText InOverridePrefixSeparator, struct FText InOverridePlayerName, struct FText InOverridePlayerTag); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetOverrideStrings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTintColor(struct FLinearColor InTintColor); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTintColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetStringsToDisplay(struct FText& PlayerPrefixToDisplay, struct FText& PrefixSeparatorToDisplay, struct FText& PlayerNameToDisplay, struct FText& PlayerTagToDisplay); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.GetStringsToDisplay // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateText(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateOverflowPolicy(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateOverflowPolicy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateClipping(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateClipping // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ConstructRichTextBlock(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.ConstructRichTextBlock // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUseAnonymizedName(bool bInUseAnonymizedName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetUseAnonymizedName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPreviewTag(struct FText InPreviewTag); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPreviewTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPreviewName(struct FText InPreviewName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPreviewName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIdentitySource(enum class EAresIdentitySource NewIdentitySource); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTextStyle(struct UAresCommonText* Text, struct UCommonTextStyle* TextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTextStyle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLegacyAppearance(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateLegacyAppearance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Player Subject(struct FString PlayerSubject); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.Set Player Subject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToConfigManager(bool bDoBind); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.BindToConfigManager // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNameTextStyle(struct UCommonTextStyle* TextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetNameTextStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTagTextStyle(struct UCommonTextStyle* TextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTagTextStyle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PlayerName_MenuAnchor_Tooltip_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.BndEvt__WBP_Panel_PlayerName_MenuAnchor_Tooltip_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerNameStringChanged(struct FString InString); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnPlayerNameStringChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PlayerName(int32_t EntryPoint); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.ExecuteUbergraph_WBP_Panel_PlayerName // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

