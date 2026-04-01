// WidgetBlueprintGeneratedClass PlayerNameWidget.PlayerNameWidget_C
// Size: 0x3f2 (Inherited: 0x320)
struct UPlayerNameWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UMenuAnchor* MenuAnchor_216; // 0x328(0x08)
	struct UTextBlock* PlayerNameText; // 0x330(0x08)
	struct FSlateFontInfo Font; // 0x338(0x60)
	struct FString Subject; // 0x398(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x3a8(0x08)
	enum class ETextJustify Justification; // 0x3b0(0x01)
	bool AllowAnonymizedNames; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FText GameName; // 0x3b8(0x18)
	struct FText Tagline; // 0x3d0(0x18)
	struct UGenericTextTooltip_C* ToolTip; // 0x3e8(0x08)
	bool bShouldShowTooltip; // 0x3f0(0x01)
	bool bShouldShowPrefix; // 0x3f1(0x01)

	struct UWidget* UpdateTooltipText(); // Function PlayerNameWidget.PlayerNameWidget_C.UpdateTooltipText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Add PlayerLoginLocationHistory(struct FText GameNameAndTagLine, struct FText& Tooltip Text); // Function PlayerNameWidget.PlayerNameWidget_C.Add PlayerLoginLocationHistory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTextColor(struct FSlateColor Color); // Function PlayerNameWidget.PlayerNameWidget_C.SetTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* SetupTooltip(); // Function PlayerNameWidget.PlayerNameWidget_C.SetupTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPopupVisibility(bool Visible); // Function PlayerNameWidget.PlayerNameWidget_C.SetPopupVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSubjectAndName(struct FString Subject, struct FString GameName, struct FString Tagline, bool ShowTooltip); // Function PlayerNameWidget.PlayerNameWidget_C.SetSubjectAndName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PlayerNameWidget.PlayerNameWidget_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PlayerNameWidget.PlayerNameWidget_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSubject(struct FString Subject); // Function PlayerNameWidget.PlayerNameWidget_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function PlayerNameWidget.PlayerNameWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void FetchPlayerForSubject(); // Function PlayerNameWidget.PlayerNameWidget_C.FetchPlayerForSubject // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNameFromPlatformPlayer(); // Function PlayerNameWidget.PlayerNameWidget_C.SetNameFromPlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PlayerNameWidget.PlayerNameWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PlayerNameWidget.PlayerNameWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void SetPlatformPlayer(struct UPlatformPlayer* Value); // Function PlayerNameWidget.PlayerNameWidget_C.SetPlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlatformPlayerNameChanged(struct FDisplayName& DisplayName); // Function PlayerNameWidget.PlayerNameWidget_C.HandlePlatformPlayerNameChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function PlayerNameWidget.PlayerNameWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerLoginLocationHistoryChanged(); // Function PlayerNameWidget.PlayerNameWidget_C.HandlePlayerLoginLocationHistoryChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerNameWidget(int32_t EntryPoint); // Function PlayerNameWidget.PlayerNameWidget_C.ExecuteUbergraph_PlayerNameWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

