// BlueprintGeneratedClass VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C
// Size: 0x218 (Inherited: 0x1f8)
struct UVM_ContextMenuItem_Bool_MuteOtherVoice_C : UAresContextMenuItemBoolViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f8(0x08)
	struct UVoiceModel* VoiceModel; // 0x200(0x08)
	struct UVoiceSessionParticipantModel* PartyVoiceSessionParticipantModel; // 0x208(0x08)
	struct UVoiceSessionParticipantModel* TeamVoiceSessionParticipantModel; // 0x210(0x08)

	void SetMuteForVoiceSessionParticipants(bool bIsMuted); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.SetMuteForVoiceSessionParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetParticipantModelBySessionType(struct UVoiceSessionParticipantModel* NewParticipantModel, enum class EVoiceSessionType SessionType); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.SetParticipantModelBySessionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToVoiceSessionParticipant(struct UVoiceSessionParticipantModel* VoiceSessionParticipantModel, bool bDoBind); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.BindToVoiceSessionParticipant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateObservedVoiceSessionParticipants(); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.UpdateObservedVoiceSessionParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsMutedChanged(bool NewValue); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.HandleIsMutedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSessionParticipantChange(struct UVoiceSessionParticipantModel* VoiceSessionParticipant); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.HandleSessionParticipantChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBoolValue(bool bNewValue); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.SetBoolValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsBlockedChanged(bool NewValue); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.HandleIsBlockedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Bool_MuteOtherVoice(int32_t EntryPoint); // Function VM_ContextMenuItem_Bool_MuteOtherVoice.VM_ContextMenuItem_Bool_MuteOtherVoice_C.ExecuteUbergraph_VM_ContextMenuItem_Bool_MuteOtherVoice // (Final|UbergraphFunction) // @ game+0x1af5410
};

