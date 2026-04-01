// WidgetBlueprintGeneratedClass InGameStore_Titles.InGameStore_Titles_C
// Size: 0x360 (Inherited: 0x318)
struct UInGameStore_Titles_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Center; // 0x320(0x08)
	struct UImage* Left; // 0x328(0x08)
	struct UImage* Right; // 0x330(0x08)
	struct UTextBlock* Title_Txt; // 0x338(0x08)
	struct UImage* WhiteBG; // 0x340(0x08)
	struct FText Text_Title; // 0x348(0x18)

	void PreConstruct(bool IsDesignTime); // Function InGameStore_Titles.InGameStore_Titles_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InGameStore_Titles(int32_t EntryPoint); // Function InGameStore_Titles.InGameStore_Titles_C.ExecuteUbergraph_InGameStore_Titles // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

