// WidgetBlueprintGeneratedClass JanusMatchHistory.JanusMatchHistory_C
// Size: 0x341 (Inherited: 0x318)
struct UJanusMatchHistory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* PlaybackIcon; // 0x320(0x08)
	struct UTextBlock* PlaybackText; // 0x328(0x08)
	struct FString Match ID; // 0x330(0x10)
	bool PlaybackFound; // 0x340(0x01)

	void EnableUI(bool bEnableUI, struct FString Text); // Function JanusMatchHistory.JanusMatchHistory_C.EnableUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlaybackFound_C32E6D574A695654114C0CB12111771B(enum class EJanusStreamerUsed Result, struct FString ID); // Function JanusMatchHistory.JanusMatchHistory_C.OnPlaybackFound_C32E6D574A695654114C0CB12111771B // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function JanusMatchHistory.JanusMatchHistory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Show Playback Availability(struct FString MatchID); // Function JanusMatchHistory.JanusMatchHistory_C.Show Playback Availability // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLocalFileMatchEntryUpdated_Event_1(struct FString MatchID, struct FReplayLocalFileMatchEntryUpdateInfo& UpdateInfo); // Function JanusMatchHistory.JanusMatchHistory_C.OnLocalFileMatchEntryUpdated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_JanusMatchHistory(int32_t EntryPoint); // Function JanusMatchHistory.JanusMatchHistory_C.ExecuteUbergraph_JanusMatchHistory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

