// WidgetBlueprintGeneratedClass WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C
// Size: 0x1be8 (Inherited: 0x1ae0)
struct UWBP_Button_EsportsEvent_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* IsUnfocused; // 0x1ae8(0x08)
	struct UWidgetAnimation* IsFocused; // 0x1af0(0x08)
	struct UAresCommonText* CT_EventName; // 0x1af8(0x08)
	struct UAresCommonText* CT_EventRegion; // 0x1b00(0x08)
	struct UImage* Image_254; // 0x1b08(0x08)
	struct UImage* Image_371; // 0x1b10(0x08)
	struct UImage* Image_CommonBorder_EF; // 0x1b18(0x08)
	struct UImage* Image_LeagueLogo; // 0x1b20(0x08)
	enum class E2024VCTEvent event; // 0x1b28(0x01)
	char pad_1B29[0x7]; // 0x1b29(0x07)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x1b30(0x08)
	struct UTexture2D* VCTLogo_Americas; // 0x1b38(0x08)
	struct UTexture2D* VCTLogo_EMEA; // 0x1b40(0x08)
	struct UTexture2D* VCTLogo_Pacific; // 0x1b48(0x08)
	struct UTexture2D* VCTLogo_CN; // 0x1b50(0x08)
	struct FSlateColor EMEA Color; // 0x1b58(0x14)
	struct FSlateColor Americas Color; // 0x1b6c(0x14)
	struct FSlateColor CN Color; // 0x1b80(0x14)
	struct FSlateColor Pacific Color; // 0x1b94(0x14)
	bool IsEnabled; // 0x1ba8(0x01)
	char pad_1BA9[0x7]; // 0x1ba9(0x07)
	struct FMulticastInlineDelegate OnIsEnabledSet; // 0x1bb0(0x10)
	struct FSlateColor Completed Color; // 0x1bc0(0x14)
	char pad_1BD4[0x4]; // 0x1bd4(0x04)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x1bd8(0x08)
	struct UEsportsLeagueViewModel* EsportsLeagueViewModel; // 0x1be0(0x08)

	void OnLeagueIDChanged(struct FString InLeagueID); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnLeagueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTournamentDateChanged(struct FDateTime& InDateUTC); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnTournamentDateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventStatusChanged(enum class EEsportsMatchStatus InEventStatus); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnEventStatusChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseOverChanged(bool MouseEntered); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnMouseOverChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventNameChanged(struct FText& InEventName); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnEventNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLeagueNameChanged(struct FText& InLeagueName); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnLeagueNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeWithEvent(enum class E2024VCTEvent InEvent); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.InitializeWithEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_EsportsEvent(int32_t EntryPoint); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.ExecuteUbergraph_WBP_Button_EsportsEvent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnIsEnabledSet__DelegateSignature(bool IsEnabled); // Function WBP_Button_EsportsEvent.WBP_Button_EsportsEvent_C.OnIsEnabledSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

