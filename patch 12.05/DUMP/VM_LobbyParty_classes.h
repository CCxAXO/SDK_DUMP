// BlueprintGeneratedClass VM_LobbyParty.VM_LobbyParty_C
// Size: 0xf8 (Inherited: 0xa0)
struct UVM_LobbyParty_C : UAresPartyViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct TArray<struct FString> PartyMembers; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnPartyMemberLeft; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnPartyMemberJoined; // 0xc8(0x10)
	struct FString EmptyMember; // 0xd8(0x10)
	struct FString LocalPlayerSubject; // 0xe8(0x10)

	void ContainsMember(struct TArray<struct FAresPartyMember>& PartyMemberList, struct FString PotentialMemberSubject, bool& Result); // Function VM_LobbyParty.VM_LobbyParty_C.ContainsMember // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPartyManager(struct UPartyManager*& PartyManager); // Function VM_LobbyParty.VM_LobbyParty_C.GetPartyManager // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPartyOwner(struct FAresPartyMember& PartyOwner); // Function VM_LobbyParty.VM_LobbyParty_C.GetPartyOwner // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void AddPartyMembers(struct TArray<struct FString>& PartyMembersToAdd); // Function VM_LobbyParty.VM_LobbyParty_C.AddPartyMembers // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemovePartyMembers(struct TArray<struct FString>& PartyMembersToRemove); // Function VM_LobbyParty.VM_LobbyParty_C.RemovePartyMembers // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPartyMemberAtSlot(int32_t Slot, struct FString& PartyMemberSubject); // Function VM_LobbyParty.VM_LobbyParty_C.GetPartyMemberAtSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetLostPartyMembers(struct TArray<struct FAresPartyMember>& InPartyMembers, struct TArray<struct FString>& LostPartyMembers); // Function VM_LobbyParty.VM_LobbyParty_C.GetLostPartyMembers // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNewPartyMembers(struct TArray<struct FAresPartyMember>& InPartyMembers, struct TArray<struct FString>& NewPartyMembers); // Function VM_LobbyParty.VM_LobbyParty_C.GetNewPartyMembers // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyUpdated(); // Function VM_LobbyParty.VM_LobbyParty_C.OnPartyUpdated // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerUpdated(); // Function VM_LobbyParty.VM_LobbyParty_C.OnPlayerUpdated // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyUpdated(); // Function VM_LobbyParty.VM_LobbyParty_C.HandlePartyUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerUpdated(); // Function VM_LobbyParty.VM_LobbyParty_C.HandlePlayerUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_LobbyParty.VM_LobbyParty_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_LobbyParty(int32_t EntryPoint); // Function VM_LobbyParty.VM_LobbyParty_C.ExecuteUbergraph_VM_LobbyParty // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnPartyMemberJoined__DelegateSignature(struct FString PartyMemberSubject, int32_t PartyMemberSlot); // Function VM_LobbyParty.VM_LobbyParty_C.OnPartyMemberJoined__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPartyMemberLeft__DelegateSignature(struct FString PartyMemberSubject, int32_t PartyMemberSlot); // Function VM_LobbyParty.VM_LobbyParty_C.OnPartyMemberLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

