// BlueprintGeneratedClass VM_FriendNote.VM_FriendNote_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_FriendNote_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnFriendNoteChanged; // 0x98(0x10)
	struct FString PlayerSubject; // 0xa8(0x10)
	struct FText CurrentFriendNote; // 0xb8(0x18)

	void SetCurrentFriendNote(struct FText NewFriendNote); // Function VM_FriendNote.VM_FriendNote_C.SetCurrentFriendNote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFriendNoteRestrictionChanged(bool NewValue); // Function VM_FriendNote.VM_FriendNote_C.HandleFriendNoteRestrictionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCurrentFriendNote(); // Function VM_FriendNote.VM_FriendNote_C.UpdateCurrentFriendNote // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleChatFriendsMetadataUpdated(); // Function VM_FriendNote.VM_FriendNote_C.HandleChatFriendsMetadataUpdated // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Friend Note(struct FText InFriendNote); // Function VM_FriendNote.VM_FriendNote_C.Set Friend Note // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetObservedPlayer(struct FString PlayerSubject); // Function VM_FriendNote.VM_FriendNote_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFriendNote(struct FText& FriendNote); // Function VM_FriendNote.VM_FriendNote_C.GetFriendNote // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_FriendNote.VM_FriendNote_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_FriendNote(int32_t EntryPoint); // Function VM_FriendNote.VM_FriendNote_C.ExecuteUbergraph_VM_FriendNote // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnFriendNoteChanged__DelegateSignature(struct FText OutFriendNote); // Function VM_FriendNote.VM_FriendNote_C.OnFriendNoteChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

