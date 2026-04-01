// WidgetBlueprintGeneratedClass WBP_View_LobbyParty.WBP_View_LobbyParty_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_View_LobbyParty_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* IntroLoad; // 0x3e8(0x08)
	struct UWBP_View_LobbyPlayer_C* LobbyPlayer_Other1; // 0x3f0(0x08)
	struct UWBP_View_LobbyPlayer_C* LobbyPlayer_Other2; // 0x3f8(0x08)
	struct UWBP_View_LobbyPlayer_C* LobbyPlayer_Other3; // 0x400(0x08)
	struct UWBP_View_LobbyPlayer_C* LobbyPlayer_Other4; // 0x408(0x08)
	struct UWBP_View_LobbyPlayer_C* LobbyPlayer_You; // 0x410(0x08)
	struct UVM_LobbyParty_C* LobbyPartyViewModel; // 0x418(0x08)
	struct TArray<None> LobbyPlayers; // 0x420(0x10)
	struct FMulticastInlineDelegate NewEventDispatcher; // 0x430(0x10)

	void SequenceEvent__ENTRYPOINTWBP_View_LobbyParty_1(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.SequenceEvent__ENTRYPOINTWBP_View_LobbyParty_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent__ENTRYPOINTWBP_View_LobbyParty(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.SequenceEvent__ENTRYPOINTWBP_View_LobbyParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent_2(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.SequenceEvent_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SequenceEvent_1(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerSlot(struct FString Subject, int32_t Index); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.UpdatePlayerSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshView(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.RefreshView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InternalOnPartyMemberLeft(struct FString PartyMemberSubject, int32_t PartyMemberSlot); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.InternalOnPartyMemberLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InternalOnPartymemberJoined(struct FString PartyMemberSubject, int32_t PartyMemberSlot); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.InternalOnPartymemberJoined // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool bBind); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModel(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.InitViewModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnButtonBaseHovered_Event_1(struct UCommonButtonBase* Button); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.OnButtonBaseHovered_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_View_LobbyParty(int32_t EntryPoint); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.ExecuteUbergraph_WBP_View_LobbyParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void NewEventDispatcher__DelegateSignature(); // Function WBP_View_LobbyParty.WBP_View_LobbyParty_C.NewEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

