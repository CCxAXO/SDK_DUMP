// WidgetBlueprintGeneratedClass ReportPlayerReasonListV2.ReportPlayerReasonListV2_C
// Size: 0x350 (Inherited: 0x320)
struct UReportPlayerReasonListV2_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTextBlock* ListTextBlock; // 0x328(0x08)
	struct UVerticalBox* ReasonVerticalBox; // 0x330(0x08)
	struct FText ListName; // 0x338(0x18)

	void SetTeamReasons(struct TArray<enum class EPremierTeamReportReason>& Reasons, struct TArray<struct UReportTeamReason_C*>& ReasonWidgets); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.SetTeamReasons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddTeamReason(enum class EPremierTeamReportReason Reason, double BGOpacity, struct UReportTeamReason_C*& ReasonWidget); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.AddTeamReason // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Reasons(struct TArray<enum class EPlayerReportReason>& Reasons, struct TArray<struct UReportPlayerReasonV2_C*>& ReasonWidgets); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.Set Reasons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddReason(enum class EPlayerReportReason Reason, double BGOpacity, struct UReportPlayerReasonV2_C*& ReasonWidget); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.AddReason // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BuildDesignerExample(); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.BuildDesignerExample // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ReportPlayerReasonListV2(int32_t EntryPoint); // Function ReportPlayerReasonListV2.ReportPlayerReasonListV2_C.ExecuteUbergraph_ReportPlayerReasonListV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

