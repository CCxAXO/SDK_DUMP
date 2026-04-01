// WidgetBlueprintGeneratedClass WBP_BracketLineBlocks.WBP_BracketLineBlocks_C
// Size: 0x35c (Inherited: 0x318)
struct UWBP_BracketLineBlocks_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Bot; // 0x320(0x08)
	struct UImage* Corner; // 0x328(0x08)
	struct UOverlay* CornerOverlay; // 0x330(0x08)
	struct UImage* Mid; // 0x338(0x08)
	struct UImage* Side; // 0x340(0x08)
	struct UImage* Top; // 0x348(0x08)
	bool Show Corner; // 0x350(0x01)
	enum class E_BracketLineTransform Transform Types; // 0x351(0x01)
	bool Show Mid Line; // 0x352(0x01)
	bool Vertical Mid Line; // 0x353(0x01)
	bool Show Top Line; // 0x354(0x01)
	bool Show Side Line; // 0x355(0x01)
	bool Flipped Side Line; // 0x356(0x01)
	bool Show Bottom Line; // 0x357(0x01)
	bool Offset Corner; // 0x358(0x01)
	bool Offset Mid L; // 0x359(0x01)
	bool Offset Mid R; // 0x35a(0x01)
	bool Offset Top line B; // 0x35b(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_BracketLineBlocks.WBP_BracketLineBlocks_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function WBP_BracketLineBlocks.WBP_BracketLineBlocks_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Clear(); // Function WBP_BracketLineBlocks.WBP_BracketLineBlocks_C.Clear // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_BracketLineBlocks(int32_t EntryPoint); // Function WBP_BracketLineBlocks.WBP_BracketLineBlocks_C.ExecuteUbergraph_WBP_BracketLineBlocks // (Final|UbergraphFunction) // @ game+0x1b42740
};

