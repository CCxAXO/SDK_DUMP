// WidgetBlueprintGeneratedClass MatchDetailsMapDeathIconV5.MatchDetailsMapDeathIconV5_C
// Size: 0x5c8 (Inherited: 0x318)
struct UMatchDetailsMapDeathIconV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* DeathIcon; // 0x320(0x08)
	struct FProcessedMatchDetails ProcessedMatchDetails; // 0x328(0x278)
	struct FString Subject; // 0x5a0(0x10)
	bool IsCurrentDeath; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FString TargetSubject; // 0x5b8(0x10)

	void Construct(); // Function MatchDetailsMapDeathIconV5.MatchDetailsMapDeathIconV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsMapDeathIconV5(int32_t EntryPoint); // Function MatchDetailsMapDeathIconV5.MatchDetailsMapDeathIconV5_C.ExecuteUbergraph_MatchDetailsMapDeathIconV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

