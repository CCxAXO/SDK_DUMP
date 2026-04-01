// BlueprintGeneratedClass VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C
// Size: 0x3b8 (Inherited: 0x3b0)
struct UVM_VoiceSpeakingChannelSetting_C : USettingsIntViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)

	void Refresh(); // Function VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleVoiceRoomUpdated(enum class EVoiceSessionType& SessionType); // Function VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C.HandleVoiceRoomUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOnSettingDataAssetChanged(); // Function VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C.HandleOnSettingDataAssetChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnVoiceChatEnabledSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C.OnVoiceChatEnabledSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_VoiceSpeakingChannelSetting(int32_t EntryPoint); // Function VM_VoiceSpeakingChannelSetting.VM_VoiceSpeakingChannelSetting_C.ExecuteUbergraph_VM_VoiceSpeakingChannelSetting // (Final|UbergraphFunction) // @ game+0x1af5410
};

