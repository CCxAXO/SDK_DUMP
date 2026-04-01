// WidgetBlueprintGeneratedClass WBP_Panel_Tournament_ScheduledRoundHeader.WBP_Panel_Tournament_ScheduledRoundHeader_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_Tournament_ScheduledRoundHeader_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UBorder* Background; // 0x3e8(0x08)
	struct UTextBlock* DateTimeText; // 0x3f0(0x08)

	void Set Background Color(struct FLinearColor Color); // Function WBP_Panel_Tournament_ScheduledRoundHeader.WBP_Panel_Tournament_ScheduledRoundHeader_C.Set Background Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetText(struct FDateTime InDateTime); // Function WBP_Panel_Tournament_ScheduledRoundHeader.WBP_Panel_Tournament_ScheduledRoundHeader_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Tournament_ScheduledRoundHeader.WBP_Panel_Tournament_ScheduledRoundHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_Tournament_ScheduledRoundHeader.WBP_Panel_Tournament_ScheduledRoundHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Tournament_ScheduledRoundHeader(int32_t EntryPoint); // Function WBP_Panel_Tournament_ScheduledRoundHeader.WBP_Panel_Tournament_ScheduledRoundHeader_C.ExecuteUbergraph_WBP_Panel_Tournament_ScheduledRoundHeader // (Final|UbergraphFunction) // @ game+0x1b42740
};

