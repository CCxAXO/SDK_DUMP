// WidgetBlueprintGeneratedClass MatchDetailsPremierCrestProgress.MatchDetailsPremierCrestProgress_C
// Size: 0x350 (Inherited: 0x318)
struct UMatchDetailsPremierCrestProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* FullScreenLoader; // 0x320(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x328(0x08)
	struct UPremierCrestProgress_C* PremierCrestProgress; // 0x330(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x338(0x08)
	struct FString MatchID; // 0x340(0x10)

	void StartCeremony(); // Function MatchDetailsPremierCrestProgress.MatchDetailsPremierCrestProgress_C.StartCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(bool ShouldShowCeremony); // Function MatchDetailsPremierCrestProgress.MatchDetailsPremierCrestProgress_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsPremierCrestProgress.MatchDetailsPremierCrestProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MatchDetailsPremierCrestProgress.MatchDetailsPremierCrestProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchDetailsPremierCrestProgress(int32_t EntryPoint); // Function MatchDetailsPremierCrestProgress.MatchDetailsPremierCrestProgress_C.ExecuteUbergraph_MatchDetailsPremierCrestProgress // (Final|UbergraphFunction) // @ game+0x1b42740
};

