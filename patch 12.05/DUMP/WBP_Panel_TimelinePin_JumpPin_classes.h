// WidgetBlueprintGeneratedClass WBP_Panel_TimelinePin_JumpPin.WBP_Panel_TimelinePin_JumpPin_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_TimelinePin_JumpPin_C : UWBP_Panel_TimelinePinBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_EndFastForward; // 0x3e8(0x08)
	struct UWidgetAnimation* Anim_StartFastForward; // 0x3f0(0x08)

	void Finished_7C91B8C64C1C4523C1915D9FCCC540C8(); // Function WBP_Panel_TimelinePin_JumpPin.WBP_Panel_TimelinePin_JumpPin_C.Finished_7C91B8C64C1C4523C1915D9FCCC540C8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_TimelinePin_JumpPin.WBP_Panel_TimelinePin_JumpPin_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PlayAnim_StartFastForward(); // Function WBP_Panel_TimelinePin_JumpPin.WBP_Panel_TimelinePin_JumpPin_C.PlayAnim_StartFastForward // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayAnim_EndFastForward(); // Function WBP_Panel_TimelinePin_JumpPin.WBP_Panel_TimelinePin_JumpPin_C.PlayAnim_EndFastForward // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TimelinePin_JumpPin(int32_t EntryPoint); // Function WBP_Panel_TimelinePin_JumpPin.WBP_Panel_TimelinePin_JumpPin_C.ExecuteUbergraph_WBP_Panel_TimelinePin_JumpPin // (Final|UbergraphFunction) // @ game+0x1af5410
};

