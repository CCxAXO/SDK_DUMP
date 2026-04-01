// WidgetBlueprintGeneratedClass ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C
// Size: 0x368 (Inherited: 0x320)
struct UReportPlayerModalV2_Base_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UPlayerNameViewModel* PlayerNameViewModel; // 0x328(0x08)
	struct FString Subject; // 0x330(0x10)
	struct FString MatchID; // 0x340(0x10)
	struct FText AgentName; // 0x350(0x18)

	void MuteReportedPlayer(); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.MuteReportedPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CanVoiceMute(bool& CanVoiceMute); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.CanVoiceMute // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsReportingInGame(bool& CanMute); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.IsReportingInGame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CanReport(bool& CanReport); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.CanReport // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void FetchAgentName(struct FDelegate OnSuccess, struct FDelegate OnFailure); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.FetchAgentName // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDisplayName(struct FText& DisplayName); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.GetDisplayName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SubmitReport(struct TArray<enum class EPlayerReportReason>& Reasons, struct FText& Comment, bool ShouldMute); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.SubmitReport // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitFailed(); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.OnSubmitFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitSuccess(); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.OnSubmitSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAgentNameReceived(struct FText& AgentName); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.OnAgentNameReceived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void IgnoreEvent(); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.IgnoreEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnFullPlayerNameChanged(struct FText InFullName); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.OnFullPlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ReportPlayerModalV2_Base(int32_t EntryPoint); // Function ReportPlayerModalV2_Base.ReportPlayerModalV2_Base_C.ExecuteUbergraph_ReportPlayerModalV2_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

