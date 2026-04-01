// WidgetBlueprintGeneratedClass WBP_BracketLineAssembly.WBP_BracketLineAssembly_C
// Size: 0x389 (Inherited: 0x318)
struct UWBP_BracketLineAssembly_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USpacer* R1C1; // 0x320(0x08)
	struct UWBP_BracketLineBlocks_C* R1C2LINE; // 0x328(0x08)
	struct UWBP_BracketLineBlocks_C* R1C3EMPTY; // 0x330(0x08)
	struct UWBP_BracketLineBlocks_C* R2C1; // 0x338(0x08)
	struct UWBP_BracketLineBlocks_C* R2C1_Extra; // 0x340(0x08)
	struct UOverlay* R2C2; // 0x348(0x08)
	struct UWBP_BracketLineBlocks_C* R2C2CORNER; // 0x350(0x08)
	struct UOverlay* R2C3; // 0x358(0x08)
	struct UWBP_BracketLineBlocks_C* R2CEGOESOUT; // 0x360(0x08)
	struct UWBP_BracketLineBlocks_C* R3C1; // 0x368(0x08)
	struct UWBP_BracketLineBlocks_C* R3C2LINE; // 0x370(0x08)
	struct UWBP_BracketLineBlocks_C* R3C4; // 0x378(0x08)
	struct USizeBox* SB_Extra; // 0x380(0x08)
	enum class E_BracketLineBuilding Line Block Behavior; // 0x388(0x01)

	void Set Bracket Line Block Behavior(enum class E_BracketLineBuilding InBracketLineEnum); // Function WBP_BracketLineAssembly.WBP_BracketLineAssembly_C.Set Bracket Line Block Behavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Line Style(); // Function WBP_BracketLineAssembly.WBP_BracketLineAssembly_C.Set Line Style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_BracketLineAssembly.WBP_BracketLineAssembly_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Clear 2(); // Function WBP_BracketLineAssembly.WBP_BracketLineAssembly_C.Clear 2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh 2(); // Function WBP_BracketLineAssembly.WBP_BracketLineAssembly_C.Refresh 2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_BracketLineAssembly(int32_t EntryPoint); // Function WBP_BracketLineAssembly.WBP_BracketLineAssembly_C.ExecuteUbergraph_WBP_BracketLineAssembly // (Final|UbergraphFunction) // @ game+0x1b42740
};

