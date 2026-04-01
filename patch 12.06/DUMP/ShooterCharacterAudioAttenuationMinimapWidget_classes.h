// WidgetBlueprintGeneratedClass ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C
// Size: 0x509 (Inherited: 0x481)
struct UShooterCharacterAudioAttenuationMinimapWidget_C : UAresMinimapWidget_C {
	char pad_481[0x7]; // 0x481(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* ConstantFadeIn; // 0x490(0x08)
	struct UWidgetAnimation* ConstantFadeOut; // 0x498(0x08)
	struct UImage* Constant; // 0x4a0(0x08)
	struct UOverlay* ConstantOverlay; // 0x4a8(0x08)
	double LifeSpan; // 0x4b0(0x08)
	double CreationTime; // 0x4b8(0x08)
	struct TArray<struct FStruct_AttenuationInformation> ConstantVisualizations; // 0x4c0(0x10)
	struct FStruct_AttenuationInformation OneShotVisualization; // 0x4d0(0x18)
	struct FStruct_AttenuationInformation NewVar_1; // 0x4e8(0x18)
	double AnimSpeeds; // 0x500(0x08)
	bool VisualizerActive; // 0x508(0x01)

	void NewFunction_1(); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDesiredAttenuationSize(double& DesiredRadius); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.GetDesiredAttenuationSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateVisualization(struct TArray<struct FStruct_AttenuationInformation>& Attenuations); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.UpdateVisualization // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ShooterCharacterAudioAttenuationMinimapWidget(int32_t EntryPoint); // Function ShooterCharacterAudioAttenuationMinimapWidget.ShooterCharacterAudioAttenuationMinimapWidget_C.ExecuteUbergraph_ShooterCharacterAudioAttenuationMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

