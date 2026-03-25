// WidgetBlueprintGeneratedClass PlayScreenV5_PC.PlayScreenV5_PC_C
// Size: 0x378 (Inherited: 0x318)
struct UPlayScreenV5_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* IntroBackButton; // 0x320(0x08)
	struct UImage* Bot_Gradient_2; // 0x328(0x08)
	struct UImage* ColorTint; // 0x330(0x08)
	struct UImage* LightingSweeps; // 0x338(0x08)
	struct UPlayScreenPartyV2_C* PlayScreenPartyV2; // 0x340(0x08)
	struct UImage* Top_Gradient; // 0x348(0x08)
	struct FAresMainMenuNavBarData NavBarData; // 0x350(0x28)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function PlayScreenV5_PC.PlayScreenV5_PC_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function PlayScreenV5_PC.PlayScreenV5_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function PlayScreenV5_PC.PlayScreenV5_PC_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void TrySelectQueue(struct FString QueueID); // Function PlayScreenV5_PC.PlayScreenV5_PC_C.TrySelectQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayScreenV5_PC(int32_t EntryPoint); // Function PlayScreenV5_PC.PlayScreenV5_PC_C.ExecuteUbergraph_PlayScreenV5_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

