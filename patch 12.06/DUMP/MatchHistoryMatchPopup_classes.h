// WidgetBlueprintGeneratedClass MatchHistoryMatchPopup.MatchHistoryMatchPopup_C
// Size: 0x348 (Inherited: 0x318)
struct UMatchHistoryMatchPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgroundImage; // 0x320(0x08)
	struct UMatchDetailsV5_C* MatchDetailsV5; // 0x328(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x330(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x338(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function MatchHistoryMatchPopup.MatchHistoryMatchPopup_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function MatchHistoryMatchPopup.MatchHistoryMatchPopup_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MatchDetailsV5_K2Node_ComponentBoundEvent_0_CloseMatchDetailsClicked__DelegateSignature(); // Function MatchHistoryMatchPopup.MatchHistoryMatchPopup_C.BndEvt__MatchDetailsV5_K2Node_ComponentBoundEvent_0_CloseMatchDetailsClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString MatchID, struct FString Subject); // Function MatchHistoryMatchPopup.MatchHistoryMatchPopup_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchHistoryMatchPopup(int32_t EntryPoint); // Function MatchHistoryMatchPopup.MatchHistoryMatchPopup_C.ExecuteUbergraph_MatchHistoryMatchPopup // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClose__DelegateSignature(); // Function MatchHistoryMatchPopup.MatchHistoryMatchPopup_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

