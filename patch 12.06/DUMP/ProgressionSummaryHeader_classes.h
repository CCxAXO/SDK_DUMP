// WidgetBlueprintGeneratedClass ProgressionSummaryHeader.ProgressionSummaryHeader_C
// Size: 0x388 (Inherited: 0x318)
struct UProgressionSummaryHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* CountdownRow; // 0x320(0x08)
	struct UCountdownTimer_C* CountdownTimer; // 0x328(0x08)
	struct UTextBlock* ExpirationText; // 0x330(0x08)
	struct UImage* HeaderBG; // 0x338(0x08)
	struct UTextBlock* Title; // 0x340(0x08)
	struct FLinearColor BackgroundColor; // 0x348(0x10)
	struct FText TitleText; // 0x358(0x18)
	struct FText TimerText; // 0x370(0x18)

	void SetExpirationText(struct FText newText); // Function ProgressionSummaryHeader.ProgressionSummaryHeader_C.SetExpirationText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCountdownVisible(bool Visible); // Function ProgressionSummaryHeader.ProgressionSummaryHeader_C.SetCountdownVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetExpirationTime(struct FDateTime ExpirationTime); // Function ProgressionSummaryHeader.ProgressionSummaryHeader_C.SetExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTitleText(struct FText NewTitle); // Function ProgressionSummaryHeader.ProgressionSummaryHeader_C.SetTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ProgressionSummaryHeader.ProgressionSummaryHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ProgressionSummaryHeader(int32_t EntryPoint); // Function ProgressionSummaryHeader.ProgressionSummaryHeader_C.ExecuteUbergraph_ProgressionSummaryHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

