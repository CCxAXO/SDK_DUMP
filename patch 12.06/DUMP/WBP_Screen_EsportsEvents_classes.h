// WidgetBlueprintGeneratedClass WBP_Screen_EsportsEvents.WBP_Screen_EsportsEvents_C
// Size: 0x5a8 (Inherited: 0x580)
struct UWBP_Screen_EsportsEvents_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea; // 0x588(0x08)
	struct UHorizontalBox* HB_EventsContainer; // 0x590(0x08)
	struct TArray<None> Events; // 0x598(0x10)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_EsportsEvents.WBP_Screen_EsportsEvents_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void InitializeWithEvents(struct TArray<None>& InEvents); // Function WBP_Screen_EsportsEvents.WBP_Screen_EsportsEvents_C.InitializeWithEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_EsportsEvents.WBP_Screen_EsportsEvents_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnScreenReady(); // Function WBP_Screen_EsportsEvents.WBP_Screen_EsportsEvents_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_EsportsEvents(int32_t EntryPoint); // Function WBP_Screen_EsportsEvents.WBP_Screen_EsportsEvents_C.ExecuteUbergraph_WBP_Screen_EsportsEvents // (Final|UbergraphFunction) // @ game+0x1b42740
};

