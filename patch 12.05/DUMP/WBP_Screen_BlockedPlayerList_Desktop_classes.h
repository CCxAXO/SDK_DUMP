// WidgetBlueprintGeneratedClass WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C
// Size: 0x570 (Inherited: 0x520)
struct UWBP_Screen_BlockedPlayerList_Desktop_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* Anim_Close; // 0x528(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x530(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x538(0x08)
	struct USizeBox* SizeBox_Window; // 0x540(0x08)
	struct UWBP_BackgroundDimmer_Standard_C* WBP_BackgroundDimmer_Standard; // 0x548(0x08)
	struct UWBP_Panel_List_BlockedPlayer_C* WBP_Panel_List_BlockedPlayer; // 0x550(0x08)
	struct UWBP_Template_SocialPanelInfoBox_Console_C* WBP_Template_SocialPanelInfoBox_Console; // 0x558(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BlockedPlayerList; // 0x560(0x08)
	struct UAkAudioEvent* OpenScreenSound; // 0x568(0x08)

	void BP_OnActivated(); // Function WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleOpenAnimationFinished(); // Function WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C.HandleOpenAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_BlockedPlayerList_Desktop_WBP_Panel_List_BlockedPlayer_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C.BndEvt__WBP_Screen_BlockedPlayerList_Desktop_WBP_Panel_List_BlockedPlayer_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_BlockedPlayerList_Desktop_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C.BndEvt__WBP_Screen_BlockedPlayerList_Desktop_SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_BlockedPlayerList_Desktop(int32_t EntryPoint); // Function WBP_Screen_BlockedPlayerList_Desktop.WBP_Screen_BlockedPlayerList_Desktop_C.ExecuteUbergraph_WBP_Screen_BlockedPlayerList_Desktop // (Final|UbergraphFunction) // @ game+0x1af5410
};

