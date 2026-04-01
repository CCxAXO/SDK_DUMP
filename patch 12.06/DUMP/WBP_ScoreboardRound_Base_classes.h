// WidgetBlueprintGeneratedClass WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C
// Size: 0x340 (Inherited: 0x318)
struct UWBP_ScoreboardRound_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* TopIcon; // 0x320(0x08)
	struct UImage* BottomIcon; // 0x328(0x08)
	struct UTextBlock* Number; // 0x330(0x08)
	struct UCanvasPanel* Container; // 0x338(0x08)

	void ClearIcons(); // Function WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C.ClearIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBottomIcon(struct UTexture* RoundIcon); // Function WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C.SetBottomIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTopIcon(struct UTexture* RoundIcon); // Function WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C.SetTopIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRoundNumber(int32_t RoundNumber); // Function WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C.SetRoundNumber // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_ScoreboardRound_Base(int32_t EntryPoint); // Function WBP_ScoreboardRound_Base.WBP_ScoreboardRound_Base_C.ExecuteUbergraph_WBP_ScoreboardRound_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

