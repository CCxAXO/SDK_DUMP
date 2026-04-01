// WidgetBlueprintGeneratedClass GenericVoiceActivationWidget.GenericVoiceActivationWidget_C
// Size: 0x3e0 (Inherited: 0x320)
struct UGenericVoiceActivationWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x328(0x08)
	struct UImage* Transmittingindicator; // 0x330(0x08)
	struct UImage* VoiceStateIcon; // 0x338(0x08)
	struct FVector2D IconSize; // 0x340(0x10)
	bool CollapseIfNotInRoom; // 0x350(0x01)
	bool CollapseIfNotSpeaking; // 0x351(0x01)
	char pad_352[0x6]; // 0x352(0x06)
	struct TScriptInterface<IVoiceSessionParticipantModelInterface> Model; // 0x358(0x10)
	struct UVoiceViewController* Controller; // 0x368(0x08)
	struct FSlateColor TeamBrushTint; // 0x370(0x14)
	char pad_384[0x4]; // 0x384(0x04)
	struct FString Subject; // 0x388(0x10)
	enum class EVoiceSessionType SessionType; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FSlateColor PartyBrushTint; // 0x39c(0x14)
	struct FSlateColor RestrictedBrushTint; // 0x3b0(0x14)
	enum class SpeakingStates LastState; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct FMulticastInlineDelegate OnSpeakingChanged; // 0x3c8(0x10)
	struct UVoiceSessionParticipantModelSelector* BuiltInModelSelector; // 0x3d8(0x08)

	void HandleIsInRoomChanged(struct UObject* Source); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.HandleIsInRoomChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool IsMe(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.IsMe // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FPlatformPlayerSubject GetParticipantSubject(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.GetParticipantSubject // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct TScriptInterface<IVoiceSessionParticipantModelInterface> GetModel(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.GetModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct UWidget* On_TooltipAnchor_GetMenuContent(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.On_TooltipAnchor_GetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsRestrictedChanged(struct UObject* Source); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.HandleIsRestrictedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromModel(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.UnbindFromModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetModel(struct TScriptInterface<IVoiceSessionParticipantModelInterface> NewModel); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.SetModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AttemptToSetupModel(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.AttemptToSetupModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateImageVisibility(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.UpdateImageVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateImageBrush(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.UpdateImageBrush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsSpeakingChanged(struct UObject* Source); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.HandleIsSpeakingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsInRoom(bool& InRoom); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.IsInRoom // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetState(enum class SpeakingStates& State); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.GetState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateWidget(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEnergyChanged(struct UObject* Source); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.HandleEnergyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsMutedChanged(struct UObject* Source); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.HandleIsMutedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToModel(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.BindToModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString Subject); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GenericVoiceActivationWidget(int32_t EntryPoint); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.ExecuteUbergraph_GenericVoiceActivationWidget // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnSpeakingChanged__DelegateSignature(bool IsSpeaking); // Function GenericVoiceActivationWidget.GenericVoiceActivationWidget_C.OnSpeakingChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

