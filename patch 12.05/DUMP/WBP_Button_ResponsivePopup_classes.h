// WidgetBlueprintGeneratedClass WBP_Button_ResponsivePopup.WBP_Button_ResponsivePopup_C
// Size: 0x1bb1 (Inherited: 0x1ae0)
struct UWBP_Button_ResponsivePopup_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct TSoftClassPtr<UObject> ModalWidgetClass; // 0x1ae8(0x30)
	struct TSoftClassPtr<UObject> SidePanelWidgetClass; // 0x1b18(0x30)
	struct UResponsivePopupViewModel* PopupVM; // 0x1b48(0x08)
	struct FText TitleText; // 0x1b50(0x18)
	struct FText ConfirmActionText; // 0x1b68(0x18)
	bool ModalShowBackButton; // 0x1b80(0x01)
	char pad_1B81[0x7]; // 0x1b81(0x07)
	struct FGameplayTagContainer ModalContextInfo; // 0x1b88(0x20)
	struct UMenuStackEntry* PCModalStackObject; // 0x1ba8(0x08)
	bool AsyncPreloadClasses; // 0x1bb0(0x01)

	void CreateVM(); // Function WBP_Button_ResponsivePopup.WBP_Button_ResponsivePopup_C.CreateVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_ResponsivePopup.WBP_Button_ResponsivePopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Button_ResponsivePopup.WBP_Button_ResponsivePopup_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_ResponsivePopup(int32_t EntryPoint); // Function WBP_Button_ResponsivePopup.WBP_Button_ResponsivePopup_C.ExecuteUbergraph_WBP_Button_ResponsivePopup // (Final|UbergraphFunction) // @ game+0x1af5410
};

