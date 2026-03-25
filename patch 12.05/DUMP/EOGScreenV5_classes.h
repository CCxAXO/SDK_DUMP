// WidgetBlueprintGeneratedClass EOGScreenV5.EOGScreenV5_C
// Size: 0x360 (Inherited: 0x318)
struct UEOGScreenV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UMatchDetailsV5_C* MatchDetailsV5; // 0x320(0x08)
	struct FName EOGVersionToggle; // 0x328(0x0c)
	bool HasInitializedScreen; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FAresMainMenuNavBarData NavBarData; // 0x338(0x28)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function EOGScreenV5.EOGScreenV5_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function EOGScreenV5.EOGScreenV5_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ForceMatchID(struct FString Match ID Override, struct FString Subject); // Function EOGScreenV5.EOGScreenV5_C.ForceMatchID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EOGScreenV5.EOGScreenV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void NoOpEvent(); // Function EOGScreenV5.EOGScreenV5_C.NoOpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(); // Function EOGScreenV5.EOGScreenV5_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void NoOp(); // Function EOGScreenV5.EOGScreenV5_C.NoOp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNewMatch_Event_1(struct FString MatchID); // Function EOGScreenV5.EOGScreenV5_C.OnNewMatch_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide_2(); // Function EOGScreenV5.EOGScreenV5_C.Hide_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EOGScreenV5(int32_t EntryPoint); // Function EOGScreenV5.EOGScreenV5_C.ExecuteUbergraph_EOGScreenV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

