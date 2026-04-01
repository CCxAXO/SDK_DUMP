// WidgetBlueprintGeneratedClass WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C
// Size: 0x468 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsEventColumn_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* ColumnHighlight; // 0x3e8(0x08)
	struct UAresCommonText* CT_EventState; // 0x3f0(0x08)
	struct UAresCommonText* CT_EventType; // 0x3f8(0x08)
	struct UOverlay* GlobalEventOverlay; // 0x400(0x08)
	struct UOverlay* RegionalEventOverlay; // 0x408(0x08)
	struct UWBP_Misc_Esports_EventDots_C* WBP_Misc_Esports_EventDots; // 0x410(0x08)
	struct UWBP_Panel_VCTRegionalEventColumn_C* WBP_Panel_VCTRegionalEventColumn; // 0x418(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_EventType; // 0x420(0x08)
	struct UEsportsEventViewModel* EsportsEventViewModel; // 0x428(0x08)
	struct FText FormattedEventDateText; // 0x430(0x18)
	enum class EEsportsMatchStatus EventState; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	struct FSlateColor VCT Red; // 0x44c(0x14)
	struct UEsportsSplitViewModel* Esports Split View Model; // 0x460(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void OnEventDateChangedV2(struct FDateTime& InDateUTC); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.OnEventDateChangedV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventDateChanged(struct FText& InEventDate); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.OnEventDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventStatusChanged(enum class EEsportsMatchStatus InEventStatus); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.OnEventStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize With Event(enum class E2024VCTEvent In Event, bool IsLastEvent); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.Initialize With Event // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsEventColumn(int32_t EntryPoint); // Function WBP_Panel_EsportsEventColumn.WBP_Panel_EsportsEventColumn_C.ExecuteUbergraph_WBP_Panel_EsportsEventColumn // (Final|UbergraphFunction) // @ game+0x1b42740
};

