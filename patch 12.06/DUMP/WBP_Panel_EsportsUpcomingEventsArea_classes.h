// WidgetBlueprintGeneratedClass WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsUpcomingEventsArea_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_Error; // 0x3e8(0x08)
	struct UAresCommonText* CT_NoUpcomingMatches; // 0x3f0(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber; // 0x3f8(0x08)
	struct UVerticalBox* VerticalBox_ScheduleList; // 0x400(0x08)
	struct UEsportsScheduleEntryListViewModel* EsportsScheduleEntryListViewModel; // 0x408(0x08)
	int32_t NumScheduleEntries; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct UEsportsScheduleEntryListViewModelV2* EsportsScheduleEntryListViewModelV2; // 0x418(0x08)
	struct TArray<struct FString> MatchIDsCurrentView; // 0x420(0x10)
	struct FMulticastInlineDelegate OnHasLiveEvents; // 0x430(0x10)

	void BroadcastHasLiveEvents(); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.BroadcastHasLiveEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ViewLiveMatches(); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.ViewLiveMatches // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnError(); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.OnError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetScheduleLoadedState(bool IsScheduleDataLoaded); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.SetScheduleLoadedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchIDsForEventsReceived(struct TArray<struct FString>& NewMatchIDs); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.OnMatchIDsForEventsReceived // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEvents(struct TArray<enum class E2024VCTEvent>& InEvents); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.SetEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Style For Screen(enum class E_EsportsScreens Screen); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.Style For Screen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Multiple Event IDs(struct TArray<struct FEventIDs>& Events); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.Set Multiple Event IDs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Schedule Updated(struct TArray<struct UEventDataModel*>& EsportsNewScheduleEntries); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.On Schedule Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Event IDs(struct FString League ID, struct FString TournamentID); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.Set Event IDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsUpcomingEventsArea(int32_t EntryPoint); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.ExecuteUbergraph_WBP_Panel_EsportsUpcomingEventsArea // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHasLiveEvents__DelegateSignature(bool HasLiveEvents); // Function WBP_Panel_EsportsUpcomingEventsArea.WBP_Panel_EsportsUpcomingEventsArea_C.OnHasLiveEvents__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

