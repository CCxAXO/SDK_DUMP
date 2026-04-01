// WidgetBlueprintGeneratedClass WBP_Button_EsportsScheduleNavButton.WBP_Button_EsportsScheduleNavButton_C
// Size: 0x1b01 (Inherited: 0x1ae0)
struct UWBP_Button_EsportsScheduleNavButton_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UImage* Image_2; // 0x1ae8(0x08)
	struct UAresCommonText* T_SCHEDULE; // 0x1af0(0x08)
	struct UWBP_Panel_EsportsUpcomingEventsArea_C* WBP_Panel_EsportsUpcomingEventsArea; // 0x1af8(0x08)
	enum class EEsportsHubTab NavToTabType; // 0x1b00(0x01)

	void SetEvents(struct TArray<enum class E2024VCTEvent>& InEvents); // Function WBP_Button_EsportsScheduleNavButton.WBP_Button_EsportsScheduleNavButton_C.SetEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_EsportsScheduleNavButton.WBP_Button_EsportsScheduleNavButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_EsportsScheduleNavButton.WBP_Button_EsportsScheduleNavButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_EsportsScheduleNavButton.WBP_Button_EsportsScheduleNavButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_EsportsScheduleNavButton(int32_t EntryPoint); // Function WBP_Button_EsportsScheduleNavButton.WBP_Button_EsportsScheduleNavButton_C.ExecuteUbergraph_WBP_Button_EsportsScheduleNavButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

