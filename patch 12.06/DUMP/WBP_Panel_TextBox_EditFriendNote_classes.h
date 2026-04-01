// WidgetBlueprintGeneratedClass WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_TextBox_EditFriendNote_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_Reveal; // 0x3e8(0x08)
	struct UWBP_Button_Social_Ghost_C* Button_Save; // 0x3f0(0x08)
	struct USizeBox* SizeBox_Content; // 0x3f8(0x08)
	struct UWBP_EditableTextBox_C* WBP_EditableTextBox; // 0x400(0x08)
	struct UAkAudioEvent* RevealAudio; // 0x408(0x08)
	bool bCommitCooldownIsActive; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UVM_FriendNote_C* FriendNoteViewModel; // 0x418(0x08)
	struct FMulticastInlineDelegate OnCloseRequested; // 0x420(0x10)

	void Initialize(struct FString InPlayerSubject); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SaveFriendNote(); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.SaveFriendNote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_TextBox_EditFriendNote_Button_Save_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.BndEvt__WBP_Panel_TextBox_EditFriendNote_Button_Save_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_TextBox_EditFriendNote(int32_t EntryPoint); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.ExecuteUbergraph_WBP_Panel_TextBox_EditFriendNote // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnCloseRequested__DelegateSignature(); // Function WBP_Panel_TextBox_EditFriendNote.WBP_Panel_TextBox_EditFriendNote_C.OnCloseRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

