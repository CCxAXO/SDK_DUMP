// WidgetBlueprintGeneratedClass PremierCrest_Base.PremierCrest_Base_C
// Size: 0x34a (Inherited: 0x318)
struct UPremierCrest_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* PlayoffTeam; // 0x320(0x08)
	struct UWidgetAnimation* RunnerUp; // 0x328(0x08)
	struct UWidgetAnimation* Winner; // 0x330(0x08)
	struct UWidgetAnimation* Flawless; // 0x338(0x08)
	struct UImage* Crest_Center_POT_Center; // 0x340(0x08)
	enum class EPremierDivisionGroup Division Group; // 0x348(0x01)
	enum class EPremierCrestType Crest Type; // 0x349(0x01)

	void SequenceEvent__ENTRYPOINTPremierCrest_Base_3(); // Function PremierCrest_Base.PremierCrest_Base_C.SequenceEvent__ENTRYPOINTPremierCrest_Base_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTPremierCrest_Base_2(); // Function PremierCrest_Base.PremierCrest_Base_C.SequenceEvent__ENTRYPOINTPremierCrest_Base_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTPremierCrest_Base_1(); // Function PremierCrest_Base.PremierCrest_Base_C.SequenceEvent__ENTRYPOINTPremierCrest_Base_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTPremierCrest_Base(); // Function PremierCrest_Base.PremierCrest_Base_C.SequenceEvent__ENTRYPOINTPremierCrest_Base // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitData(enum class EPremierDivisionGroup DivisionGroup, enum class EPremierCrestType CrestType); // Function PremierCrest_Base.PremierCrest_Base_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerCeremony(); // Function PremierCrest_Base.PremierCrest_Base_C.TriggerCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Flawless_Winner_SFX(); // Function PremierCrest_Base.PremierCrest_Base_C.Flawless_Winner_SFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Winner_SFX(); // Function PremierCrest_Base.PremierCrest_Base_C.Winner_SFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RunnerUpSFX(); // Function PremierCrest_Base.PremierCrest_Base_C.RunnerUpSFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Playoff_SFX(); // Function PremierCrest_Base.PremierCrest_Base_C.Playoff_SFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierCrest_Base.PremierCrest_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierCrest_Base(int32_t EntryPoint); // Function PremierCrest_Base.PremierCrest_Base_C.ExecuteUbergraph_PremierCrest_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

