// WidgetBlueprintGeneratedClass MatchDetailsMapPlayerIconV5.MatchDetailsMapPlayerIconV5_C
// Size: 0x5d8 (Inherited: 0x318)
struct UMatchDetailsMapPlayerIconV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* GlowLoop; // 0x320(0x08)
	struct UImage* PlayerIcon; // 0x328(0x08)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x330(0x278)
	double ViewRadians; // 0x5a8(0x08)
	struct FString Subject; // 0x5b0(0x10)
	bool IsKiller; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	struct FString TargetSubject; // 0x5c8(0x10)

	void Construct(); // Function MatchDetailsMapPlayerIconV5.MatchDetailsMapPlayerIconV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsMapPlayerIconV5(int32_t EntryPoint); // Function MatchDetailsMapPlayerIconV5.MatchDetailsMapPlayerIconV5_C.ExecuteUbergraph_MatchDetailsMapPlayerIconV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

