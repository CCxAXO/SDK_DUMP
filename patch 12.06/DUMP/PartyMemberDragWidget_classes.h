// WidgetBlueprintGeneratedClass PartyMemberDragWidget.PartyMemberDragWidget_C
// Size: 0x378 (Inherited: 0x318)
struct UPartyMemberDragWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* DragWidgetSizeBox; // 0x320(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x328(0x08)
	struct UImage* OwnerIcon; // 0x330(0x08)
	struct UTextBlock* PingText; // 0x338(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x340(0x08)
	struct UHorizontalBox* PlayerInfo; // 0x348(0x08)
	struct USizeBox* SizeBox_VoiceIndicator; // 0x350(0x08)
	struct UTextBlock* StatusText; // 0x358(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x360(0x08)
	struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* WBP_Panel_VoiceIndicator_SpeakerIcon; // 0x368(0x08)
	struct UPlayScreenCustomPartyMemberListing_C* WidgetReference; // 0x370(0x08)

	void Init(); // Function PartyMemberDragWidget.PartyMemberDragWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PartyMemberDragWidget.PartyMemberDragWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PartyMemberDragWidget(int32_t EntryPoint); // Function PartyMemberDragWidget.PartyMemberDragWidget_C.ExecuteUbergraph_PartyMemberDragWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

