// WidgetBlueprintGeneratedClass MapSelect_VotePips.MapSelect_VotePips_C
// Size: 0x330 (Inherited: 0x318)
struct UMapSelect_VotePips_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* Pips; // 0x320(0x08)
	int32_t DebugItemCount; // 0x328(0x04)
	int32_t CurrentVotes; // 0x32c(0x04)

	void Set Vote Count(int32_t InVotes); // Function MapSelect_VotePips.MapSelect_VotePips_C.Set Vote Count // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddVote(); // Function MapSelect_VotePips.MapSelect_VotePips_C.AddVote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MapSelect_VotePips.MapSelect_VotePips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MapSelect_VotePips.MapSelect_VotePips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MapSelect_VotePips(int32_t EntryPoint); // Function MapSelect_VotePips.MapSelect_VotePips_C.ExecuteUbergraph_MapSelect_VotePips // (Final|UbergraphFunction) // @ game+0x1af5410
};

