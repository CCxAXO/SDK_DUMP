// WidgetBlueprintGeneratedClass CollectionsScreen.CollectionsScreen_C
// Size: 0x398 (Inherited: 0x318)
struct UCollectionsScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* background_tint; // 0x320(0x08)
	struct UImage* Bot_Gradient_2; // 0x328(0x08)
	struct UImage* LightingSweeps; // 0x330(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x338(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x340(0x08)
	struct UTabbedContent_C* Tabs; // 0x348(0x08)
	struct UImage* Top_Gradient; // 0x350(0x08)
	struct UTabButtonBase_C* CharactersTabButton; // 0x358(0x08)
	struct UTabButtonBase_C* ArsenalTabButton; // 0x360(0x08)
	struct UTabButtonBase_C* SkinsTabButton; // 0x368(0x08)
	struct FAresMainMenuNavBarData AresNavBarData; // 0x370(0x28)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function CollectionsScreen.CollectionsScreen_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function CollectionsScreen.CollectionsScreen_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddArsenalTab(); // Function CollectionsScreen.CollectionsScreen_C.AddArsenalTab // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CollectionsScreen.CollectionsScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnNavigationStateRepeated(); // Function CollectionsScreen.CollectionsScreen_C.OnNavigationStateRepeated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Back(); // Function CollectionsScreen.CollectionsScreen_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function CollectionsScreen.CollectionsScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CollectionsScreen(int32_t EntryPoint); // Function CollectionsScreen.CollectionsScreen_C.ExecuteUbergraph_CollectionsScreen // (Final|UbergraphFunction) // @ game+0x1af5410
};

