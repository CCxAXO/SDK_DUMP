// WidgetBlueprintGeneratedClass ChatMessageV2.ChatMessageV2_C
// Size: 0x4c0 (Inherited: 0x478)
struct UChatMessageV2_C : UChatMessageV2_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UHorizontalBox* DateSeperatorBox; // 0x480(0x08)
	struct UTextBlock* DateText; // 0x488(0x08)
	struct UImage* Image_651; // 0x490(0x08)
	struct UImage* MessageBacking; // 0x498(0x08)
	struct UButton* MessageButton; // 0x4a0(0x08)
	struct URichTextBlock* RichText; // 0x4a8(0x08)
	struct FMulticastInlineDelegate MessageClicked_1; // 0x4b0(0x10)

	void InitInternal(struct FText FormattedChatMessageText, double AnimStartTime); // Function ChatMessageV2.ChatMessageV2_C.InitInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTimestamp(); // Function ChatMessageV2.ChatMessageV2_C.UpdateTimestamp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SenderNameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ChatMessageV2.ChatMessageV2_C.BndEvt__SenderNameButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ChatMessageV2(int32_t EntryPoint); // Function ChatMessageV2.ChatMessageV2_C.ExecuteUbergraph_ChatMessageV2 // (Final|UbergraphFunction) // @ game+0x1af5410
	void MessageClicked_0__DelegateSignature(struct FString Subject); // Function ChatMessageV2.ChatMessageV2_C.MessageClicked_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

