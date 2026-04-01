// WidgetBlueprintGeneratedClass BaseVoiceActivationWidget.BaseVoiceActivationWidget_C
// Size: 0x359 (Inherited: 0x320)
struct UBaseVoiceActivationWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FString Subject; // 0x328(0x10)
	struct FMulticastInlineDelegate VoiceStateChanged; // 0x338(0x10)
	enum class SpeakingStates VoiceState; // 0x348(0x01)
	enum class EVoiceSessionType SessionType; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	struct UVoiceSessionParticipantModel* VoiceParticipantModel; // 0x350(0x08)
	bool bIsFirstRefresh; // 0x358(0x01)

	void RefreshState(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.RefreshState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNewState(enum class SpeakingStates NewState, int32_t NewEnergy); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.SetNewState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupVoiceEvents(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.SetupVoiceEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUpdated(bool NewValue); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.OnUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEnergyChanged(int32_t NewValue); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.OnEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TeardownVoiceEvents(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.TeardownVoiceEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BaseVoiceActivationWidget(int32_t EntryPoint); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.ExecuteUbergraph_BaseVoiceActivationWidget // (Final|UbergraphFunction) // @ game+0x1b42740
	void VoiceStateChanged__DelegateSignature(enum class SpeakingStates NewState, enum class SpeakingStates OldState, int32_t NewEnergy); // Function BaseVoiceActivationWidget.BaseVoiceActivationWidget_C.VoiceStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

