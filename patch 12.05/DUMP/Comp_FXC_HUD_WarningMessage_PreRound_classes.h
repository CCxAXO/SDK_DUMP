// BlueprintGeneratedClass Comp_FXC_HUD_WarningMessage_PreRound.Comp_FXC_HUD_WarningMessage_PreRound_C
// Size: 0x1a0 (Inherited: 0x125)
struct UComp_FXC_HUD_WarningMessage_PreRound_C : UComp_FXC_HUD_C {
	char pad_125[0x3]; // 0x125(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)
	int32_t LifeSpan; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FText MessageText; // 0x138(0x18)
	struct FText SubText; // 0x150(0x18)
	struct UAkAudioEvent* AkEvent; // 0x168(0x08)
	bool Continuous; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	double PulseTime; // 0x178(0x08)
	bool HideExistingWarnings; // 0x180(0x01)
	bool LoopAudio; // 0x181(0x01)
	bool PlayIntroAndOutro; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
	struct FText Message Two Text; // 0x188(0x18)

	void SetupHUD_Event(struct UUserWidget* InHUD); // Function Comp_FXC_HUD_WarningMessage_PreRound.Comp_FXC_HUD_WarningMessage_PreRound_C.SetupHUD_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ManualRemoveHUD(); // Function Comp_FXC_HUD_WarningMessage_PreRound.Comp_FXC_HUD_WarningMessage_PreRound_C.ManualRemoveHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_HUD_WarningMessage_PreRound(int32_t EntryPoint); // Function Comp_FXC_HUD_WarningMessage_PreRound.Comp_FXC_HUD_WarningMessage_PreRound_C.ExecuteUbergraph_Comp_FXC_HUD_WarningMessage_PreRound // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

