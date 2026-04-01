// WidgetBlueprintGeneratedClass WBP_Button_ReplayButtonBase.WBP_Button_ReplayButtonBase_C
// Size: 0x338 (Inherited: 0x318)
struct UWBP_Button_ReplayButtonBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FString MatchID; // 0x320(0x10)
	struct UReplayButtonViewModel* ReplayButtonVM; // 0x330(0x08)

	void InitTooltip(); // Function WBP_Button_ReplayButtonBase.WBP_Button_ReplayButtonBase_C.InitTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateToolTipText(struct FText newText); // Function WBP_Button_ReplayButtonBase.WBP_Button_ReplayButtonBase_C.UpdateToolTipText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_ReplayButtonBase.WBP_Button_ReplayButtonBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_ReplayButtonBase(int32_t EntryPoint); // Function WBP_Button_ReplayButtonBase.WBP_Button_ReplayButtonBase_C.ExecuteUbergraph_WBP_Button_ReplayButtonBase // (Final|UbergraphFunction) // @ game+0x1af5410
};

