// WidgetBlueprintGeneratedClass CustomGameOptionsPopup.CustomGameOptionsPopup_C
// Size: 0x389 (Inherited: 0x318)
struct UCustomGameOptionsPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolGameRuleCustomSettingsWidget_C* AllowCheats; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* BotLine; // 0x330(0x08)
	struct USharedButtonMaster_C* CloseButton; // 0x338(0x08)
	struct UImage* LBPip; // 0x340(0x08)
	struct UBoolGameRuleCustomSettingsWidget_C* MatchHistoryRecord; // 0x348(0x08)
	struct UBoolGameRuleCustomSettingsWidget_C* PlayOutAllRounds; // 0x350(0x08)
	struct UImage* RBPip; // 0x358(0x08)
	struct UBoolGameRuleCustomSettingsWidget_C* RecordReplay; // 0x360(0x08)
	struct UImage* TopLine; // 0x368(0x08)
	struct UBoolGameRuleCustomSettingsWidget_C* TournamentMode; // 0x370(0x08)
	struct UBoolGameRuleCustomSettingsWidget_C* WinByTwo; // 0x378(0x08)
	struct UPartyViewController* Party View Controller; // 0x380(0x08)
	bool IsClosing; // 0x388(0x01)

	void EnableAllOptions(bool Enabled); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.EnableAllOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void IsOwnerChanged(bool NewValue); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.IsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseSelf(); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.CloseSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StateChanged(enum class EPartyViewState PartyState); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.StateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CustomGameOptionsPopup(int32_t EntryPoint); // Function CustomGameOptionsPopup.CustomGameOptionsPopup_C.ExecuteUbergraph_CustomGameOptionsPopup // (Final|UbergraphFunction) // @ game+0x1af5410
};

