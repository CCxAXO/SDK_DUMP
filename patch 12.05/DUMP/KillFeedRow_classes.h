// WidgetBlueprintGeneratedClass KillFeedRow.KillFeedRow_C
// Size: 0x4c8 (Inherited: 0x4b0)
struct UKillFeedRow_C : UWBP_KillFeedRow_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* OutAnim; // 0x4b8(0x08)
	struct UWidgetAnimation* InAnim; // 0x4c0(0x08)

	void PlayOutAnimation(); // Function KillFeedRow.KillFeedRow_C.PlayOutAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayInAnimation(); // Function KillFeedRow.KillFeedRow_C.PlayInAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1(); // Function KillFeedRow.KillFeedRow_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KillFeedRow(int32_t EntryPoint); // Function KillFeedRow.KillFeedRow_C.ExecuteUbergraph_KillFeedRow // (Final|UbergraphFunction) // @ game+0x1af5410
};

