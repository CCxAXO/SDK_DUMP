// WidgetBlueprintGeneratedClass WBP_Button_VoiceBorder.WBP_Button_VoiceBorder_C
// Size: 0x1b08 (Inherited: 0x1ae0)
struct UWBP_Button_VoiceBorder_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct FMulticastInlineDelegate OnPressed; // 0x1ae8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x1af8(0x10)

	void BP_OnPressed(); // Function WBP_Button_VoiceBorder.WBP_Button_VoiceBorder_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_VoiceBorder.WBP_Button_VoiceBorder_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_VoiceBorder(int32_t EntryPoint); // Function WBP_Button_VoiceBorder.WBP_Button_VoiceBorder_C.ExecuteUbergraph_WBP_Button_VoiceBorder // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnReleased__DelegateSignature(); // Function WBP_Button_VoiceBorder.WBP_Button_VoiceBorder_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPressed__DelegateSignature(); // Function WBP_Button_VoiceBorder.WBP_Button_VoiceBorder_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

