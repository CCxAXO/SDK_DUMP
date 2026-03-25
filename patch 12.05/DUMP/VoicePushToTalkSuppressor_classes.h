// WidgetBlueprintGeneratedClass VoicePushToTalkSuppressor.VoicePushToTalkSuppressor_C
// Size: 0x340 (Inherited: 0x320)
struct UVoicePushToTalkSuppressor_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	bool IsPushToTalkSuppressed; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FString PushToTalkSuppressionTag; // 0x330(0x10)

	void UpdatePushToTalkSuppressionWithSessionType(bool SuppressPushToTalk, enum class EVoiceSessionType SessionType, bool& IsPushToTalkSuppressed); // Function VoicePushToTalkSuppressor.VoicePushToTalkSuppressor_C.UpdatePushToTalkSuppressionWithSessionType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePushToTalkSuppression(bool SuppressPushToTalk, bool& IsPushToTalkSuppressed); // Function VoicePushToTalkSuppressor.VoicePushToTalkSuppressor_C.UpdatePushToTalkSuppression // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function VoicePushToTalkSuppressor.VoicePushToTalkSuppressor_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VoicePushToTalkSuppressor(int32_t EntryPoint); // Function VoicePushToTalkSuppressor.VoicePushToTalkSuppressor_C.ExecuteUbergraph_VoicePushToTalkSuppressor // (Final|UbergraphFunction) // @ game+0x1af5410
};

