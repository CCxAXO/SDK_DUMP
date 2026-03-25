// WidgetBlueprintGeneratedClass ReplayButtonsV1.ReplayButtonsV1_C
// Size: 0x3a1 (Inherited: 0x318)
struct UReplayButtonsV1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UReplayActionButton_C* ReplayActionButton; // 0x320(0x08)
	struct UAresCommonText* ReplayButtonsHeader; // 0x328(0x08)
	struct UReplayCancelButton_C* ReplayCancelButton; // 0x330(0x08)
	struct FString Match ID; // 0x338(0x10)
	enum class EMatchHistoryReplayStatus CurrentReplayStatus; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FReplayLocalFileMatchEntryUpdateInfo LastReplayUpdateInfo; // 0x350(0x50)
	bool IsLocalPlayer; // 0x3a0(0x01)

	void Update Replay Button(struct FReplayLocalFileMatchEntryUpdateInfo Update Info, struct FString MatchID); // Function ReplayButtonsV1.ReplayButtonsV1_C.Update Replay Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FString MatchID, enum class EMatchHistoryContext Context, bool IsLocalPlayer); // Function ReplayButtonsV1.ReplayButtonsV1_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ReplayButtonsV1.ReplayButtonsV1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent(struct FString MatchID, struct FReplayLocalFileMatchEntryUpdateInfo& UpdateInfo); // Function ReplayButtonsV1.ReplayButtonsV1_C.CustomEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ReplayButtonsV1(int32_t EntryPoint); // Function ReplayButtonsV1.ReplayButtonsV1_C.ExecuteUbergraph_ReplayButtonsV1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

