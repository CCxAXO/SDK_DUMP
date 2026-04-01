// WidgetBlueprintGeneratedClass WBP_Template_SocialPanelInfoBox_Console.WBP_Template_SocialPanelInfoBox_Console_C
// Size: 0x438 (Inherited: 0x318)
struct UWBP_Template_SocialPanelInfoBox_Console_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBorder* Border_Root; // 0x320(0x08)
	struct UNamedSlot* NamedSlot_AboveMessage; // 0x328(0x08)
	struct UNamedSlot* NamedSlot_BelowMessage; // 0x330(0x08)
	struct UAresCommonText* Text_Message; // 0x338(0x08)
	struct FText Message; // 0x340(0x18)
	char pad_358[0x8]; // 0x358(0x08)
	struct FSlateBrush BackgroundBrush; // 0x360(0xd0)
	struct UCommonTextStyle* TextStyle; // 0x430(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_Template_SocialPanelInfoBox_Console.WBP_Template_SocialPanelInfoBox_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetMessage(struct FText InMessage); // Function WBP_Template_SocialPanelInfoBox_Console.WBP_Template_SocialPanelInfoBox_Console_C.SetMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_SocialPanelInfoBox_Console(int32_t EntryPoint); // Function WBP_Template_SocialPanelInfoBox_Console.WBP_Template_SocialPanelInfoBox_Console_C.ExecuteUbergraph_WBP_Template_SocialPanelInfoBox_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

