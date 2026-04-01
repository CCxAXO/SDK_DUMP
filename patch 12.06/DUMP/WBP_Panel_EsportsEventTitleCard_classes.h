// WidgetBlueprintGeneratedClass WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C
// Size: 0x4b0 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsEventTitleCard_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Intro; // 0x3e8(0x08)
	struct UWidgetAnimation* OnHover; // 0x3f0(0x08)
	struct UAresCommonText* CT_CHAMPIONSHIP; // 0x3f8(0x08)
	struct UAresCommonText* CT_PrimaryText_2; // 0x400(0x08)
	struct UAresCommonText* CT_SecondaryText; // 0x408(0x08)
	struct UAresCommonText* ct_TertiaryText; // 0x410(0x08)
	struct UAresCommonText* CT_VALORANT; // 0x418(0x08)
	struct UImage* Image_75; // 0x420(0x08)
	struct UImage* Image_Line1; // 0x428(0x08)
	struct UImage* Image_Line2; // 0x430(0x08)
	struct UImage* Image_Line3; // 0x438(0x08)
	struct UImage* Image_LocationBG; // 0x440(0x08)
	struct UImage* Image_VCTLogo_vertical; // 0x448(0x08)
	struct USpacer* LocSpacer1; // 0x450(0x08)
	struct USpacer* LocSpacer2; // 0x458(0x08)
	struct UOverlay* O_Line3; // 0x460(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x468(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x470(0x08)
	double LocationBackgroundImageBuffer; // 0x478(0x08)
	bool Is Spotlight Page; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	struct FSlateColor Completed Color; // 0x484(0x14)
	bool Is Hovered Triggered; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x4a0(0x08)
	struct UEsportsLeagueViewModel* EsportsLeagueViewModel; // 0x4a8(0x08)

	void StyleForEvent(enum class E2024VCTEvent InEvent); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.StyleForEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventChanged(enum class E2024VCTEvent event); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.OnEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLeagueIDChanged(struct FString NewValue); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.OnLeagueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTournamentDateChanged(struct FDateTime& InDateUTC); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.OnTournamentDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModelV2(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.SetViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Style On Game changers Championship(); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.Set Style On Game changers Championship // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style Date(enum class EEsportsMatchStatus NewParam); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.Style Date // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDateTextColor(); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.SetDateTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Event Location Changed(struct FText& InLocation); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.On Event Location Changed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On League Name Changed(struct FText& NewValue); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.On League Name Changed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Event Date Changed(struct FText& NewValue); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.On Event Date Changed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModel(struct UEsportsEventViewModel* InViewModel); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsEventTitleCard(int32_t EntryPoint); // Function WBP_Panel_EsportsEventTitleCard.WBP_Panel_EsportsEventTitleCard_C.ExecuteUbergraph_WBP_Panel_EsportsEventTitleCard // (Final|UbergraphFunction) // @ game+0x1b42740
};

