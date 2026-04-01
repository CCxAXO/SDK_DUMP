// WidgetBlueprintGeneratedClass WBP_Template_InfoBox_Social.WBP_Template_InfoBox_Social_C
// Size: 0x440 (Inherited: 0x318)
struct UWBP_Template_InfoBox_Social_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBorder* Border_Root; // 0x320(0x08)
	struct UNamedSlot* NamedSlot_AboveMessage; // 0x328(0x08)
	struct UNamedSlot* NamedSlot_BelowMessage; // 0x330(0x08)
	struct UAresCommonText* Text_Message; // 0x338(0x08)
	struct FText Message; // 0x340(0x18)
	struct UCommonTextStyle* TextStyle; // 0x358(0x08)
	struct FMargin ContentPadding; // 0x360(0x10)
	struct FSlateBrush BackgroundBrush; // 0x370(0xd0)

	void PreConstruct(bool IsDesignTime); // Function WBP_Template_InfoBox_Social.WBP_Template_InfoBox_Social_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetMessage(struct FText InMessage); // Function WBP_Template_InfoBox_Social.WBP_Template_InfoBox_Social_C.SetMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Template_InfoBox_Social(int32_t EntryPoint); // Function WBP_Template_InfoBox_Social.WBP_Template_InfoBox_Social_C.ExecuteUbergraph_WBP_Template_InfoBox_Social // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

