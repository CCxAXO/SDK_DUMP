// WidgetBlueprintGeneratedClass CompetitiveTierIconSubscriber.CompetitiveTierIconSubscriber_C
// Size: 0x365 (Inherited: 0x318)
struct UCompetitiveTierIconSubscriber_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* InstantlyShowNewRank; // 0x320(0x08)
	struct UWidgetAnimation* RevealNewRank; // 0x328(0x08)
	struct UCompetitiveTierIconLarge_C* CompetitiveTierIconLarge; // 0x330(0x08)
	struct UCompetitiveTierIconLarge_C* InitialCompetitiveTierIcon; // 0x338(0x08)
	struct FString MatchID; // 0x340(0x10)
	struct FMulticastInlineDelegate OnInitializedWithMMR; // 0x350(0x10)
	int32_t InitialTier; // 0x360(0x04)
	bool ShouldAnimate; // 0x364(0x01)

	void InitializeFromMMR(); // Function CompetitiveTierIconSubscriber.CompetitiveTierIconSubscriber_C.InitializeFromMMR // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMatchID(struct FString MatchID); // Function CompetitiveTierIconSubscriber.CompetitiveTierIconSubscriber_C.SetMatchID // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FString MatchID, int32_t InitialTier); // Function CompetitiveTierIconSubscriber.CompetitiveTierIconSubscriber_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CompetitiveTierIconSubscriber(int32_t EntryPoint); // Function CompetitiveTierIconSubscriber.CompetitiveTierIconSubscriber_C.ExecuteUbergraph_CompetitiveTierIconSubscriber // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnInitializedWithMMR__DelegateSignature(int32_t Tier, char Movement); // Function CompetitiveTierIconSubscriber.CompetitiveTierIconSubscriber_C.OnInitializedWithMMR__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

