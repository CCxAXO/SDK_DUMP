// WidgetBlueprintGeneratedClass WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_Panel_Schedule_Entry_List_V2_C : UAresCommonUserWidget {
	struct UWBP_List_Grid_C* WBP_List_Grid; // 0x3e0(0x08)
	struct UEsportsScheduleEntryListConvergedViewModelV2* ScheduleEntryListViewModel; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnScheduleLoaded; // 0x3f0(0x10)
	struct UFP_EsportsScheduleFilterProvider_C* Schedule Filter; // 0x400(0x08)
	struct FMulticastInlineDelegate OnScheduleLoadError; // 0x408(0x10)
	struct FMulticastInlineDelegate OnScheduleEmpty; // 0x418(0x10)
	struct FMulticastInlineDelegate OnScheduleHasLiveEvents; // 0x428(0x10)

	void BroadcastHasLiveEvents(); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.BroadcastHasLiveEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ViewLiveEvents(); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.ViewLiveEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnError(); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduleContainersUpdated(struct TArray<struct FEsportsScheduleEntryContainer>& ScheduleContainers); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnScheduleContainersUpdated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduleDataLoaded(bool NewValue); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnScheduleDataLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModelEvents(bool Bind); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.BindViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduleHasLiveEvents__DelegateSignature(bool HasLiveEvents); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnScheduleHasLiveEvents__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduleEmpty__DelegateSignature(bool IsEmpty); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnScheduleEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduleLoadError__DelegateSignature(); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnScheduleLoadError__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnScheduleLoaded__DelegateSignature(bool IsScheduleLoaded); // Function WBP_Panel_Schedule_Entry_List_V2.WBP_Panel_Schedule_Entry_List_V2_C.OnScheduleLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

