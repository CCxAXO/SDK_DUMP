// WidgetBlueprintGeneratedClass CursorCaptureWidget.CursorCaptureWidget_C
// Size: 0x345 (Inherited: 0x330)
struct UCursorCaptureWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	bool isCursorOn; // 0x340(0x01)
	bool IsHoverableUIVisible; // 0x341(0x01)
	bool IsInRound; // 0x342(0x01)
	bool IsScoreboardVisible; // 0x343(0x01)
	bool IsInformationalScreenVisible; // 0x344(0x01)

	void UpdateIsHoverableUIVisible(); // Function CursorCaptureWidget.CursorCaptureWidget_C.UpdateIsHoverableUIVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCursorState(bool ShouldBeVisible); // Function CursorCaptureWidget.CursorCaptureWidget_C.SetCursorState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function CursorCaptureWidget.CursorCaptureWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void diedMaybe(bool NewValue); // Function CursorCaptureWidget.CursorCaptureWidget_C.diedMaybe // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ScoreboardVisibilityChanged(bool IsVisible); // Function CursorCaptureWidget.CursorCaptureWidget_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PhaseChange(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function CursorCaptureWidget.CursorCaptureWidget_C.PhaseChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CursorToggled(); // Function CursorCaptureWidget.CursorCaptureWidget_C.CursorToggled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHoverableUIVisibilityChanged(); // Function CursorCaptureWidget.CursorCaptureWidget_C.OnHoverableUIVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void informationalScreenVisibilityUpdated(bool IsVisible); // Function CursorCaptureWidget.CursorCaptureWidget_C.informationalScreenVisibilityUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CursorCaptureWidget(int32_t EntryPoint); // Function CursorCaptureWidget.CursorCaptureWidget_C.ExecuteUbergraph_CursorCaptureWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

