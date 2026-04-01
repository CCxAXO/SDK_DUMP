// WidgetBlueprintGeneratedClass WBP_QuickBomb_DetailElementV2.WBP_QuickBomb_DetailElementV2_C
// Size: 0x3b0 (Inherited: 0x318)
struct UWBP_QuickBomb_DetailElementV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UImage* Background_2; // 0x328(0x08)
	struct UImage* BottomLine; // 0x330(0x08)
	struct UTextBlock* DescriptionText; // 0x338(0x08)
	struct UImage* LeftLine; // 0x340(0x08)
	struct UImage* OrbIcon; // 0x348(0x08)
	struct UTextBlock* OrbText; // 0x350(0x08)
	struct UImage* TopLine; // 0x358(0x08)
	struct FStruct_OrbUIData UIData; // 0x360(0x50)

	void InitializeIconsAndText(); // Function WBP_QuickBomb_DetailElementV2.WBP_QuickBomb_DetailElementV2_C.InitializeIconsAndText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_QuickBomb_DetailElementV2.WBP_QuickBomb_DetailElementV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_QuickBomb_DetailElementV2(int32_t EntryPoint); // Function WBP_QuickBomb_DetailElementV2.WBP_QuickBomb_DetailElementV2_C.ExecuteUbergraph_WBP_QuickBomb_DetailElementV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

