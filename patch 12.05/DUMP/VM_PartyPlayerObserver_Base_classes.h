// BlueprintGeneratedClass VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C
// Size: 0xb8 (Inherited: 0x90)
struct UVM_PartyPlayerObserver_Base_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UPartyModel* PartyModel; // 0x98(0x08)
	struct UPartyPlayerModel* PartyPlayerModel; // 0xa0(0x08)
	struct FString PlayerSubject; // 0xa8(0x10)

	void RefreshAllData(); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.RefreshAllData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindPartyPlayerModel(struct UPartyPlayerModel* PartyPlayerModel, bool bDoBind); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.BindOrUnbindPartyPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCachedPartyMember(); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.UpdateCachedPartyMember // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPartyPlayerModel(struct UPartyPlayerModel*& PartyPlayerModel); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.GetPartyPlayerModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetPartyPlayerModel(struct UPartyPlayerModel* NewPartyPlayerModel); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.SetPartyPlayerModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Party Members Changed(struct UPartyPlayerModel* Player); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.Handle Party Members Changed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetObservedPlayer(struct FString PlayerSubject); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PartyPlayerObserver_Base(int32_t EntryPoint); // Function VM_PartyPlayerObserver_Base.VM_PartyPlayerObserver_Base_C.ExecuteUbergraph_VM_PartyPlayerObserver_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

