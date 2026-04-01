// WidgetBlueprintGeneratedClass Widget_QuickBomb_DetailElement.Widget_QuickBomb_DetailElement_C
// Size: 0x3c0 (Inherited: 0x318)
struct UWidget_QuickBomb_DetailElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UImage* Background_2; // 0x328(0x08)
	struct UImage* BottomLine; // 0x330(0x08)
	struct UTextBlock* DescriptionText; // 0x338(0x08)
	struct UImage* LeftLine; // 0x340(0x08)
	struct UImage* OrbIcon; // 0x348(0x08)
	struct UTextBlock* OrbText; // 0x350(0x08)
	struct UImage* PointerArrow; // 0x358(0x08)
	struct UImage* PointerLine; // 0x360(0x08)
	struct UImage* TopLine; // 0x368(0x08)
	struct FStruct_OrbUIData UIData; // 0x370(0x50)

	void InitializeIconsAndText(); // Function Widget_QuickBomb_DetailElement.Widget_QuickBomb_DetailElement_C.InitializeIconsAndText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Widget_QuickBomb_DetailElement.Widget_QuickBomb_DetailElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Widget_QuickBomb_DetailElement(int32_t EntryPoint); // Function Widget_QuickBomb_DetailElement.Widget_QuickBomb_DetailElement_C.ExecuteUbergraph_Widget_QuickBomb_DetailElement // (Final|UbergraphFunction) // @ game+0x1af5410
};

