// WidgetBlueprintGeneratedClass ReportTeamReason.ReportTeamReason_C
// Size: 0x408 (Inherited: 0x3b0)
struct UReportTeamReason_C : UReportPlayerOptionV2_C {
	enum class EPremierTeamReportReason Reason; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct TMap<enum class EPremierTeamReportReason, struct FUserActionDisplayInfo> ReasonToDisplayInfo; // 0x3b8(0x50)

	void UpdateDisplay(); // Function ReportTeamReason.ReportTeamReason_C.UpdateDisplay // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

