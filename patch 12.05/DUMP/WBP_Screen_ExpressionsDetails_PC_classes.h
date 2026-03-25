// WidgetBlueprintGeneratedClass WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C
// Size: 0x34c (Inherited: 0x318)
struct UWBP_Screen_ExpressionsDetails_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct ULargeModal_C* LargeModal; // 0x320(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x328(0x08)
	struct UUserWidget* Active Tab; // 0x330(0x08)
	struct UTabButtonBase_C* SpraysTab; // 0x338(0x08)
	struct UTabButtonBase_C* TotemsTab; // 0x340(0x08)
	int32_t SelectedWheelIndex; // 0x348(0x04)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromNavArgs(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.InitFromNavArgs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Wheel Index(struct UExpressionHandle* ExpressionHandle, int32_t Index); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.Update Wheel Index // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Active Tab Changed(struct UTabButtonBase_C* TabButton); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.On Active Tab Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Active Tab Expressions(struct UExpressionHandle* ExpressionHandle, int32_t Index); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.Set Active Tab Expressions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitTabs(); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.InitTabs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Init from Nav Args(struct TMap<struct FName, struct FWildcard> InParameters); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.Init from Nav Args // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_ExpressionsDetails_PC(int32_t EntryPoint); // Function WBP_Screen_ExpressionsDetails_PC.WBP_Screen_ExpressionsDetails_PC_C.ExecuteUbergraph_WBP_Screen_ExpressionsDetails_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

