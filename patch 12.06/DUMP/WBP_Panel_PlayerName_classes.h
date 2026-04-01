// WidgetBlueprintGeneratedClass WBP_Panel_PlayerName.WBP_Panel_PlayerName_C
// Size: 0x574 (Inherited: 0x3e0)
struct UWBP_Panel_PlayerName_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UPlayerNameViewModel* PlayerNameViewModel; // 0x3e8(0x08)
	struct UBorder* Border_Text; // 0x3f0(0x08)
	struct UMenuAnchor* MenuAnchor_Tooltip; // 0x3f8(0x08)
	struct UOverlay* Overlay_Root; // 0x400(0x08)
	struct USizeBox* SizeBox_RichText; // 0x408(0x08)
	enum class EAresIdentitySource IdentitySource; // 0x410(0x01)
	bool bUseAnonymizedName; // 0x411(0x01)
	char pad_412[0x6]; // 0x412(0x06)
	struct FText PreviewPrefix; // 0x418(0x18)
	struct FText PreviewPrefixSeparator; // 0x430(0x18)
	struct FText PreviewName; // 0x448(0x18)
	struct FText PreviewTag; // 0x460(0x18)
	struct FLinearColor TintColor; // 0x478(0x10)
	bool bUseOverrideStrings; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FText OverridePlayerPrefix; // 0x490(0x18)
	struct FText OverridePrefixSeparator; // 0x4a8(0x18)
	struct FText OverridePlayerName; // 0x4c0(0x18)
	struct FText OverridePlayerTag; // 0x4d8(0x18)
	struct FString PlayerSubject; // 0x4f0(0x10)
	struct UAresCommonRichText* RichTextBlock; // 0x500(0x08)
	struct UWBP_PlayerNameTooltip_C* TooltipWidgetInstance; // 0x508(0x08)
	bool bShowTooltip; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UDataTable* TextStyleSet; // 0x518(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x520(0x08)
	bool bIsScrollingEnabled; // 0x528(0x01)
	bool bShowPlayerPrefix; // 0x529(0x01)
	bool bShowPlayerName; // 0x52a(0x01)
	bool bShowPlayerTag; // 0x52b(0x01)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct FString PlayerPrefixTextStyle; // 0x530(0x10)
	struct FString PlayerNameTextStyle; // 0x540(0x10)
	struct FString PlayerTagTextStyle; // 0x550(0x10)
	struct FMargin TextMargin; // 0x560(0x10)
	bool bIncludeTextMarginInDesiredSize; // 0x570(0x01)
	bool bAlwaysClipText; // 0x571(0x01)
	bool bShowEllipsis; // 0x572(0x01)
	bool bJustifyTextForCulture; // 0x573(0x01)

	void SetPreviewPrefix(struct FText InPreviewName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPreviewPrefix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetJustifyTextForCulture(bool bInJustifyTextForCulture); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetJustifyTextForCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleConfigValueUpdated(struct FName& ConfigName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.HandleConfigValueUpdated // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerTagTextStyle(struct FString InPlayerTagTextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPlayerTagTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerNameTextStyle(struct FString InPlayerNameTextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPlayerNameTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerPrefixTextStyle(struct FString InPlayerPrefixTextStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPlayerPrefixTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowPlayerTag(bool bInShowPlayerTag); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowPlayerTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowPlayerName(bool bInShowPlayerName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowPlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowPlayerPrefix(bool bInShowPlayerPrefix); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowPlayerPrefix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetScrollingIsEnabled(bool bInIsScrollingEnabled); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetScrollingIsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetScrollStyle(struct UCommonTextScrollStyle* InScrollStyle); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetScrollStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTextStyleSet(struct UDataTable* InTextStyleSet); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTextStyleSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetShowEllipsis(bool bInShowEllipsis); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetShowEllipsis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAlwaysClipText(bool bInAlwaysClipText); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetAlwaysClipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTextMargin(struct FMargin InTextMargin); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTextMargin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UUserWidget* OnGetUserMenuContent_Tooltip(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnGetUserMenuContent_Tooltip // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearOverrideStrings(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.ClearOverrideStrings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOverrideStrings(struct FText InOverridePlayerPrefix, struct FText InOverridePrefixSeparator, struct FText InOverridePlayerName, struct FText InOverridePlayerTag); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetOverrideStrings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTintColor(struct FLinearColor InTintColor); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetTintColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetStringsToDisplay(struct FText& PlayerPrefixToDisplay, struct FText& PrefixSeparatorToDisplay, struct FText& PlayerNameToDisplay, struct FText& PlayerTagToDisplay); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.GetStringsToDisplay // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateText(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateOverflowPolicy(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateOverflowPolicy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateClipping(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.UpdateClipping // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ConstructRichTextBlock(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.ConstructRichTextBlock // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUseAnonymizedName(bool bInUseAnonymizedName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetUseAnonymizedName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPreviewTag(struct FText InPreviewTag); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPreviewTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPreviewName(struct FText InPreviewName); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetPreviewName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIdentitySource(enum class EAresIdentitySource NewIdentitySource); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.SetIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Player Subject(struct FString PlayerSubject); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.Set Player Subject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToConfigManager(bool bDoBind); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.BindToConfigManager // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_PlayerName_MenuAnchor_Tooltip_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.BndEvt__WBP_Panel_PlayerName_MenuAnchor_Tooltip_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerNameStringChanged(struct FString InString); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.OnPlayerNameStringChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PlayerName(int32_t EntryPoint); // Function WBP_Panel_PlayerName.WBP_Panel_PlayerName_C.ExecuteUbergraph_WBP_Panel_PlayerName // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

