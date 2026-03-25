// WidgetBlueprintGeneratedClass WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C
// Size: 0x458 (Inherited: 0x3e0)
struct UWBP_Panel_VCTEventInfo_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_EventBlurb_2; // 0x3e8(0x08)
	struct UAresCommonText* CT_EventDates; // 0x3f0(0x08)
	struct UAresCommonText* CT_EventDetailsHeader; // 0x3f8(0x08)
	struct UAresCommonText* CT_EventPrize; // 0x400(0x08)
	struct UAresCommonText* CT_TeamsHeader; // 0x408(0x08)
	struct UImage* I_BG; // 0x410(0x08)
	struct UImage* RedL1_3; // 0x418(0x08)
	struct UImage* RedL1_4; // 0x420(0x08)
	struct UImage* RedL2_3; // 0x428(0x08)
	struct UImage* RedL2_4; // 0x430(0x08)
	struct UWBP_Panel_Esports_EventTeamsWrap_C* WBP_Panel_Esports_EventTeamsWrap; // 0x438(0x08)
	struct UWBP_Panel_EsportsEventTitleCardHorizontal_C* WBP_Panel_EsportsEventTitleCardHorizontal; // 0x440(0x08)
	struct UEsportsEventViewModel* EsportsEventViewModel; // 0x448(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x450(0x08)

	void OnEventChanged(enum class E2024VCTEvent event); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.OnEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleForEvent(enum class E2024VCTEvent InEvent); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.StyleForEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTournamentDateChanged(struct FDateTime& InDateUTC); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.OnTournamentDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewModel(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventDateChanged(struct FText& InEventDates); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.OnEventDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind To Or Unbind From View Model(bool Should Bind); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.Bind To Or Unbind From View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEvent(enum class E2024VCTEvent InEvent); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.SetEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_VCTEventInfo(int32_t EntryPoint); // Function WBP_Panel_VCTEventInfo.WBP_Panel_VCTEventInfo_C.ExecuteUbergraph_WBP_Panel_VCTEventInfo // (Final|UbergraphFunction) // @ game+0x1af5410
};

