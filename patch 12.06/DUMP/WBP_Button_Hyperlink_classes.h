// WidgetBlueprintGeneratedClass WBP_Button_Hyperlink.WBP_Button_Hyperlink_C
// Size: 0x1b28 (Inherited: 0x1ae0)
struct UWBP_Button_Hyperlink_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UAresButtonRichTextComponent* Txt_Primary; // 0x1ae8(0x08)
	struct FName ActionName; // 0x1af0(0x0c)
	struct FName UrlConfigName; // 0x1afc(0x0c)
	struct FString UrlDefaultValue; // 0x1b08(0x10)
	struct FMulticastInlineDelegate OnHyperlinkClicked; // 0x1b18(0x10)

	void BP_OnClicked(); // Function WBP_Button_Hyperlink.WBP_Button_Hyperlink_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Hyperlink(int32_t EntryPoint); // Function WBP_Button_Hyperlink.WBP_Button_Hyperlink_C.ExecuteUbergraph_WBP_Button_Hyperlink // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHyperlinkClicked__DelegateSignature(struct FName ActionID); // Function WBP_Button_Hyperlink.WBP_Button_Hyperlink_C.OnHyperlinkClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

