// WidgetBlueprintGeneratedClass MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C
// Size: 0x379 (Inherited: 0x318)
struct UMatchDetailsProgressionXPLineItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* RevealXP; // 0x320(0x08)
	struct UWidgetSwitcher* DoughSwitcher; // 0x328(0x08)
	struct UMatchDetailsProgressionRewards_C* MatchDetailsProgressionRewards; // 0x330(0x08)
	struct UTextBlock* TitleBox; // 0x338(0x08)
	struct UXPCounter_C* XPCounter; // 0x340(0x08)
	struct FText Title; // 0x348(0x18)
	struct FText XPCounterTextFormat; // 0x360(0x18)
	bool IsDoughEnabled; // 0x378(0x01)

	void SequenceEvent__ENTRYPOINTMatchDetailsProgressionXPLineItem(); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.SequenceEvent__ENTRYPOINTMatchDetailsProgressionXPLineItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDoughAmount(int32_t Dough); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.SetDoughAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent_1(); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowEndState(); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayXPReveal(); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.PlayXPReveal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetXPAmount(int32_t XP); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.SetXPAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitle(struct FText NewTitle); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsProgressionXPLineItem(int32_t EntryPoint); // Function MatchDetailsProgressionXPLineItem.MatchDetailsProgressionXPLineItem_C.ExecuteUbergraph_MatchDetailsProgressionXPLineItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

