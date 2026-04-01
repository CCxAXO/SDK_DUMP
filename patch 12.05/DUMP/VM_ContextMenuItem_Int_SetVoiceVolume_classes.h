// BlueprintGeneratedClass VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C
// Size: 0x220 (Inherited: 0x200)
struct UVM_ContextMenuItem_Int_SetVoiceVolume_C : UAresContextMenuItemIntViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct UVoiceSessionParticipantModel* PartyVoiceSessionParticipantModel; // 0x208(0x08)
	struct UVoiceModel* VoiceModel; // 0x210(0x08)
	struct UVoiceSessionParticipantModel* TeamVoiceSessionParticipantModel; // 0x218(0x08)

	void SetVolumeForVoiceSessionParticipants(int32_t Volume); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.SetVolumeForVoiceSessionParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetParticipantModelBySessionType(struct UVoiceSessionParticipantModel* NewParticipantModel, enum class EVoiceSessionType SessionType); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.SetParticipantModelBySessionType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateObservedVoiceSessionParticipants(); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.UpdateObservedVoiceSessionParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToVoiceSessionParticipant(struct UVoiceSessionParticipantModel* VoiceSessionParticipantModel, bool bDoBind); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.BindToVoiceSessionParticipant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleSessionParticipantChanged(struct UVoiceSessionParticipantModel* VoiceSessionParticipant); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.HandleSessionParticipantChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnVolumeChanged(int32_t NewValue); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.HandleOnVolumeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIntValue(int32_t NewValue); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.SetIntValue // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsBlockedChanged(bool NewValue); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.HandleIsBlockedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Int_SetVoiceVolume(int32_t EntryPoint); // Function VM_ContextMenuItem_Int_SetVoiceVolume.VM_ContextMenuItem_Int_SetVoiceVolume_C.ExecuteUbergraph_VM_ContextMenuItem_Int_SetVoiceVolume // (Final|UbergraphFunction) // @ game+0x1af5410
};

