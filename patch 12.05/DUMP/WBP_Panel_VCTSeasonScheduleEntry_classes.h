// WidgetBlueprintGeneratedClass WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C
// Size: 0x448 (Inherited: 0x3e0)
struct UWBP_Panel_VCTSeasonScheduleEntry_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_EventDate; // 0x3e8(0x08)
	struct UAresCommonText* CT_EventName; // 0x3f0(0x08)
	struct UAresCommonText* CT_EventType; // 0x3f8(0x08)
	struct UImage* isLiveBG; // 0x400(0x08)
	struct FText EventName; // 0x408(0x18)
	struct FText EventDate; // 0x420(0x18)
	enum class E2024VCTEvent event; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x440(0x08)

	void StyleView(); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.StyleView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Event Status Changed(enum class EEsportsMatchStatus NewValue); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.On Event Status Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventDateChanged(struct FText& NewValue); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.OnEventDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventNameChanged(struct FText& NewValue); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.OnEventNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(struct UEsportsEventViewModel* ViewModel, bool ShouldBind); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNameAndDate(struct FText Name, struct FText Date); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.SetNameAndDate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_VCTSeasonScheduleEntry(int32_t EntryPoint); // Function WBP_Panel_VCTSeasonScheduleEntry.WBP_Panel_VCTSeasonScheduleEntry_C.ExecuteUbergraph_WBP_Panel_VCTSeasonScheduleEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

