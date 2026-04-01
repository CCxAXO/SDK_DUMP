// WidgetBlueprintGeneratedClass WBP_Panel_FriendNote.WBP_Panel_FriendNote_C
// Size: 0x429 (Inherited: 0x3e0)
struct UWBP_Panel_FriendNote_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* Text_FriendNote; // 0x3e8(0x08)
	struct FText PreviewFriendNote; // 0x3f0(0x18)
	struct UVM_FriendNote_C* FriendNoteVM; // 0x408(0x08)
	struct UCommonTextStyle* TextStyle; // 0x410(0x08)
	struct FString PlayerSubject; // 0x418(0x10)
	bool bCollapseIfEmpty; // 0x428(0x01)

	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnFriendNoteChanged(struct FText CurrentFriendNote); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.OnFriendNoteChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_FriendNote(int32_t EntryPoint); // Function WBP_Panel_FriendNote.WBP_Panel_FriendNote_C.ExecuteUbergraph_WBP_Panel_FriendNote // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

