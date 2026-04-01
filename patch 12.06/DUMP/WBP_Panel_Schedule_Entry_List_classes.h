// WidgetBlueprintGeneratedClass WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C
// Size: 0x4a0 (Inherited: 0x3e0)
struct UWBP_Panel_Schedule_Entry_List_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* Schedule_Day_Container_VBox; // 0x3e8(0x08)
	struct UEsportsScheduleEntryListViewModel* ScheduleEntryListViewModel; // 0x3f0(0x08)
	bool ShouldClearChildren; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FDateTime CurrentDate; // 0x400(0x08)
	struct UWBP_Panel_Schedule_Day_Container_C* CurrentDayContainerWidget; // 0x408(0x08)
	bool ShouldScrollToWidget; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TMap<struct FDateTime, struct UWBP_Panel_Schedule_Day_Container_C*> DateToContainerWidget; // 0x418(0x50)
	struct UEsportsScheduleEntryListViewModelV2* ScheduleEntryListViewModelV2; // 0x468(0x08)
	struct FMulticastInlineDelegate OnScheduleLoaded; // 0x470(0x10)
	struct TArray<enum class E2024VCTEvent> VCTDefaultEvents; // 0x480(0x10)
	struct FMulticastInlineDelegate OnScheduleLoadError; // 0x490(0x10)

	void OnError(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.OnError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsScheduleLoadedChanged(bool IsScheduleDataLoaded); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.OnIsScheduleLoadedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNewMatchIDsReceived(struct TArray<struct FString>& NewMatchIDs); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.OnNewMatchIDsReceived // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFilterApplied(bool IsFilterChanged); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.OnFilterApplied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RequestNextScheduleEntries(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.RequestNextScheduleEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModel(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddScheduleEntryWidgetsToScrollBox(struct TArray<struct UUserWidget*>& ScheduleEntryWidgets); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.AddScheduleEntryWidgetsToScrollBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MakeDesignTimeScheduleEntries(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.MakeDesignTimeScheduleEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Schedule_Entry_List(int32_t EntryPoint); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.ExecuteUbergraph_WBP_Panel_Schedule_Entry_List // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnScheduleLoadError__DelegateSignature(); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.OnScheduleLoadError__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScheduleLoaded__DelegateSignature(bool IsScheduleDataLoaded); // Function WBP_Panel_Schedule_Entry_List.WBP_Panel_Schedule_Entry_List_C.OnScheduleLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

