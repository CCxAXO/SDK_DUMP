// WidgetBlueprintGeneratedClass Widget_CurrentVoteCanvas.Widget_CurrentVoteCanvas_C
// Size: 0x348 (Inherited: 0x330)
struct UWidget_CurrentVoteCanvas_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidget_Voting_FullScreen_C* Widget_Voting_FullScreen; // 0x338(0x08)
	struct UWidget_Voting_LeftFlyout_C* Widget_Voting_LeftFlyout; // 0x340(0x08)

	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function Widget_CurrentVoteCanvas.Widget_CurrentVoteCanvas_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FullscreenWidgetShowOrHide(bool IsShowing); // Function Widget_CurrentVoteCanvas.Widget_CurrentVoteCanvas_C.FullscreenWidgetShowOrHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_CurrentVoteCanvas(int32_t EntryPoint); // Function Widget_CurrentVoteCanvas.Widget_CurrentVoteCanvas_C.ExecuteUbergraph_Widget_CurrentVoteCanvas // (Final|UbergraphFunction) // @ game+0x1af5410
};

