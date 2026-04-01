// WidgetBlueprintGeneratedClass ReportTeamModal_Base.ReportTeamModal_Base_C
// Size: 0x378 (Inherited: 0x320)
struct UReportTeamModal_Base_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FString Subject; // 0x328(0x10)
	struct FString RosterID; // 0x338(0x10)
	struct FMulticastInlineDelegate OnFetchTeamNameSuccess; // 0x348(0x10)
	struct FString RosterName; // 0x358(0x10)
	struct FString RosterTag; // 0x368(0x10)

	void HandleFetchRosterFailed(); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.HandleFetchRosterFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFetchRosterSuccess(struct UPremierRosterModelV2* PremierRosterModelV2); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.HandleFetchRosterSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CanReport(bool& CanReport); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.CanReport // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Fetch Team Info(); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.Fetch Team Info // (Exec|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SubmitReport(struct TArray<enum class EPremierTeamReportReason>& Reasons, struct FText& Comment); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.SubmitReport // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitFailed(); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.OnSubmitFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitSuccess(); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.OnSubmitSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReportTeamModal_Base(int32_t EntryPoint); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.ExecuteUbergraph_ReportTeamModal_Base // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnFetchTeamNameSuccess__DelegateSignature(); // Function ReportTeamModal_Base.ReportTeamModal_Base_C.OnFetchTeamNameSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

