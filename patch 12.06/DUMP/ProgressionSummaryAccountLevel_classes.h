// WidgetBlueprintGeneratedClass ProgressionSummaryAccountLevel.ProgressionSummaryAccountLevel_C
// Size: 0x349 (Inherited: 0x318)
struct UProgressionSummaryAccountLevel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAccountLevel_C* AccountLevel; // 0x320(0x08)
	struct UImage* Checkmark; // 0x328(0x08)
	struct UProgressionSummaryHeader_C* ProgressionSummaryHeader; // 0x330(0x08)
	struct UTextBlock* Reward; // 0x338(0x08)
	struct UTextBlock* State; // 0x340(0x08)
	bool PreviewCompleted; // 0x348(0x01)

	void UpdateCompleted(); // Function ProgressionSummaryAccountLevel.ProgressionSummaryAccountLevel_C.UpdateCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCompleted(bool Completed); // Function ProgressionSummaryAccountLevel.ProgressionSummaryAccountLevel_C.SetCompleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ProgressionSummaryAccountLevel.ProgressionSummaryAccountLevel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnWinAvailableTimeChanged(); // Function ProgressionSummaryAccountLevel.ProgressionSummaryAccountLevel_C.OnWinAvailableTimeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ProgressionSummaryAccountLevel(int32_t EntryPoint); // Function ProgressionSummaryAccountLevel.ProgressionSummaryAccountLevel_C.ExecuteUbergraph_ProgressionSummaryAccountLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

