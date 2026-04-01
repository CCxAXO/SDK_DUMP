// WidgetBlueprintGeneratedClass ReportPlayerReasonV2.ReportPlayerReasonV2_C
// Size: 0x408 (Inherited: 0x3b0)
struct UReportPlayerReasonV2_C : UReportPlayerOptionV2_C {
	enum class EPlayerReportReason Reason; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct TMap<enum class EPlayerReportReason, struct FUserActionDisplayInfo> ReasonToDisplayInfo; // 0x3b8(0x50)

	void UpdateDisplay(); // Function ReportPlayerReasonV2.ReportPlayerReasonV2_C.UpdateDisplay // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

