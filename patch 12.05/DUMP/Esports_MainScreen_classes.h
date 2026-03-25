// WidgetBlueprintGeneratedClass Esports_MainScreen.Esports_MainScreen_C
// Size: 0x438 (Inherited: 0x3e0)
struct UEsports_MainScreen_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UBorder* ContentWrapper; // 0x3e8(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* EsportsMainScreen_LazyLoader; // 0x3f0(0x08)
	struct FAresMainMenuNavBarData NavBarData; // 0x3f8(0x28)
	struct FText Teams Tab Name; // 0x420(0x18)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function Esports_MainScreen.Esports_MainScreen_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function Esports_MainScreen.Esports_MainScreen_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVCTStoreClose(); // Function Esports_MainScreen.Esports_MainScreen_C.OnVCTStoreClose // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function Esports_MainScreen.Esports_MainScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_MainScreen(int32_t EntryPoint); // Function Esports_MainScreen.Esports_MainScreen_C.ExecuteUbergraph_Esports_MainScreen // (Final|UbergraphFunction) // @ game+0x1af5410
};

