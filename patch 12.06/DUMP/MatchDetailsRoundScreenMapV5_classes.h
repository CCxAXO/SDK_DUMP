// WidgetBlueprintGeneratedClass MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C
// Size: 0x5d0 (Inherited: 0x318)
struct UMatchDetailsRoundScreenMapV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCanvasPanel* DeathLocations; // 0x320(0x08)
	struct UImage* MapImage; // 0x328(0x08)
	struct UMatchDetailsMapPlayerIconV5_C* MatchDetailsMapPlayerIconV5; // 0x330(0x08)
	struct UCanvasPanel* PlayerLocations; // 0x338(0x08)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x340(0x278)
	int32_t RoundIndex; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct FString TargetSubject; // 0x5c0(0x10)

	void AddPlayerLocations(struct TArray<struct FPlayerLocationDTO>& Players, struct FString Initiator); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.AddPlayerLocations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddDeathsForRound(struct FString Receiver, int32_t RoundTime); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.AddDeathsForRound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlaceWidgetInCanvas(struct UCanvasPanel* Canvas, struct UUserWidget*& Widget, struct FMapLocationDTO Location); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.PlaceWidgetInCanvas // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearData(); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.ClearData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeEventInfo(int32_t RoundIndex, struct FProcessedMatchDetails& ProcessedMatchDetails, struct FString TargetSubject); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.InitializeEventInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLocations(struct FString Event Type, struct FProcessedRoundResult RoundResult, struct FProcessedKillEvent KillEvent); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.SetLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchDetailsRoundScreenMapV5(int32_t EntryPoint); // Function MatchDetailsRoundScreenMapV5.MatchDetailsRoundScreenMapV5_C.ExecuteUbergraph_MatchDetailsRoundScreenMapV5 // (Final|UbergraphFunction) // @ game+0x1b42740
};

