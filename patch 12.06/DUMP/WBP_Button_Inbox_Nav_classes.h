// WidgetBlueprintGeneratedClass WBP_Button_Inbox_Nav.WBP_Button_Inbox_Nav_C
// Size: 0x1b00 (Inherited: 0x1ae0)
struct UWBP_Button_Inbox_Nav_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UInboxNavigationViewModel* InboxNavigationViewModel; // 0x1ae8(0x08)
	struct UWidgetAnimation* Intro; // 0x1af0(0x08)
	struct UImage* BadgeIcon; // 0x1af8(0x08)

	void UnreadIntToVisibility(int32_t UnreadCount, enum class ESlateVisibility& UnreadVisibility); // Function WBP_Button_Inbox_Nav.WBP_Button_Inbox_Nav_C.UnreadIntToVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	enum class ESlateVisibility __a52bdb68-4173-3845-a81a-f1b61a312801_SourceToDest(); // Function WBP_Button_Inbox_Nav.WBP_Button_Inbox_Nav_C.__a52bdb68-4173-3845-a81a-f1b61a312801_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_Inbox_Nav.WBP_Button_Inbox_Nav_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Button_Inbox_Nav.WBP_Button_Inbox_Nav_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Inbox_Nav(int32_t EntryPoint); // Function WBP_Button_Inbox_Nav.WBP_Button_Inbox_Nav_C.ExecuteUbergraph_WBP_Button_Inbox_Nav // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

