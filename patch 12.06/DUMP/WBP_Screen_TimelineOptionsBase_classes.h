// WidgetBlueprintGeneratedClass WBP_Screen_TimelineOptionsBase.WBP_Screen_TimelineOptionsBase_C
// Size: 0x5b0 (Inherited: 0x5a0)
struct UWBP_Screen_TimelineOptionsBase_C : UWBP_Screen_SettingsPage_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a0(0x08)
	struct UTimelineUIViewModel* TimelineUIVM; // 0x5a8(0x08)

	void SetViewModel(struct UTimelineUIViewModel* TimelineUI VM); // Function WBP_Screen_TimelineOptionsBase.WBP_Screen_TimelineOptionsBase_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool BP_OnHandleBackAction(); // Function WBP_Screen_TimelineOptionsBase.WBP_Screen_TimelineOptionsBase_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeactivated(); // Function WBP_Screen_TimelineOptionsBase.WBP_Screen_TimelineOptionsBase_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_TimelineOptionsBase.WBP_Screen_TimelineOptionsBase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_TimelineOptionsBase(int32_t EntryPoint); // Function WBP_Screen_TimelineOptionsBase.WBP_Screen_TimelineOptionsBase_C.ExecuteUbergraph_WBP_Screen_TimelineOptionsBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

