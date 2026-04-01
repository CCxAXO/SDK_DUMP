// WidgetBlueprintGeneratedClass SeasonalRankInfo.SeasonalRankInfo_C
// Size: 0x348 (Inherited: 0x318)
struct USeasonalRankInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgroundGradient_Bot; // 0x320(0x08)
	struct UImage* BackgroundGradient_Top; // 0x328(0x08)
	struct UImage* BackgroundOverlay; // 0x330(0x08)
	struct UImage* BorderImage_100; // 0x338(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x340(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function SeasonalRankInfo.SeasonalRankInfo_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function SeasonalRankInfo.SeasonalRankInfo_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SeasonalRankInfo.SeasonalRankInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function SeasonalRankInfo.SeasonalRankInfo_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SeasonalRankInfo(int32_t EntryPoint); // Function SeasonalRankInfo.SeasonalRankInfo_C.ExecuteUbergraph_SeasonalRankInfo // (Final|UbergraphFunction) // @ game+0x1af5410
};

