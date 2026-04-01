// WidgetBlueprintGeneratedClass PlayerCardsScreen.PlayerCardsScreen_C
// Size: 0x330 (Inherited: 0x318)
struct UPlayerCardsScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct ULargeModal_C* LargeModal; // 0x320(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x328(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function PlayerCardsScreen.PlayerCardsScreen_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function PlayerCardsScreen.PlayerCardsScreen_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitTabs(); // Function PlayerCardsScreen.PlayerCardsScreen_C.InitTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PlayerCardsScreen.PlayerCardsScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerCardsScreen.PlayerCardsScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerCardsScreen(int32_t EntryPoint); // Function PlayerCardsScreen.PlayerCardsScreen_C.ExecuteUbergraph_PlayerCardsScreen // (Final|UbergraphFunction) // @ game+0x1b42740
};

