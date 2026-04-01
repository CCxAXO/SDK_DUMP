// WidgetBlueprintGeneratedClass WBP_Panel_Schedule_Day_Container.WBP_Panel_Schedule_Day_Container_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_Schedule_Day_Container_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_Month; // 0x3e8(0x08)
	struct UAresCommonText* CT_Weekday; // 0x3f0(0x08)
	struct UImage* IMG_CircleDeco; // 0x3f8(0x08)
	struct UImage* Line; // 0x400(0x08)
	struct UImage* line_thick; // 0x408(0x08)
	struct UOverlay* O_TodayTag; // 0x410(0x08)
	struct UVerticalBox* VerticalBox_MatchContainer; // 0x418(0x08)
	struct UObject* ScheduleEntry; // 0x420(0x08)
	struct FDateTime EventDate; // 0x428(0x08)

	void UpdateWithMatchID(struct FString InMatchID); // Function WBP_Panel_Schedule_Day_Container.WBP_Panel_Schedule_Day_Container_C.UpdateWithMatchID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWithMatchDetails(struct UObject* InScheduleEntry); // Function WBP_Panel_Schedule_Day_Container.WBP_Panel_Schedule_Day_Container_C.UpdateWithMatchDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Schedule_Day_Container.WBP_Panel_Schedule_Day_Container_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_Schedule_Day_Container.WBP_Panel_Schedule_Day_Container_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Schedule_Day_Container(int32_t EntryPoint); // Function WBP_Panel_Schedule_Day_Container.WBP_Panel_Schedule_Day_Container_C.ExecuteUbergraph_WBP_Panel_Schedule_Day_Container // (Final|UbergraphFunction) // @ game+0x1af5410
};

