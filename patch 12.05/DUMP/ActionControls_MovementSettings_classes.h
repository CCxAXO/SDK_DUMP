// WidgetBlueprintGeneratedClass ActionControls_MovementSettings.ActionControls_MovementSettings_C
// Size: 0x3c8 (Inherited: 0x318)
struct UActionControls_MovementSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* ActionSubsection; // 0x320(0x08)
	struct UActionBindingWidget_C* CrouchBinding; // 0x328(0x08)
	struct UBoolSettingsWidget_C* DefaultMovementMode; // 0x330(0x08)
	struct UAxisBindingWidget_C* FlyDownBinding; // 0x338(0x08)
	struct UAxisBindingWidget_C* FlyUpBinding; // 0x340(0x08)
	struct UActionBindingWidget_C* GhostKeybindAction; // 0x348(0x08)
	struct UActionBindingWidget_C* JumpBinding; // 0x350(0x08)
	struct UAxisBindingWidget_C* LookDown; // 0x358(0x08)
	struct UAxisBindingWidget_C* LookLeft; // 0x360(0x08)
	struct UAxisBindingWidget_C* LookRight; // 0x368(0x08)
	struct UAxisBindingWidget_C* LookUp; // 0x370(0x08)
	struct UAxisBindingWidget_C* MoveFowardBinding; // 0x378(0x08)
	struct USettingsV2_Subheader_C* MovementHeader; // 0x380(0x08)
	struct UAxisBindingWidget_C* StrafeLeftBinding; // 0x388(0x08)
	struct UAxisBindingWidget_C* StrafeRightBinding; // 0x390(0x08)
	struct UBoolSettingsWidget_C* ToggleCrouchWidget; // 0x398(0x08)
	struct UBoolSettingsWidget_C* ToggleWalk; // 0x3a0(0x08)
	struct UAxisBindingWidget_C* WalkBackwardBinding; // 0x3a8(0x08)
	struct UActionBindingWidget_C* WalkBinding; // 0x3b0(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x3b8(0x10)

	void UpdateWalkKeyBindText(); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.UpdateWalkKeyBindText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleGameFeatureToggles(enum class EGameFeatureToggleName GameFeatureToggleName, bool Enabled); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.HandleGameFeatureToggles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.OnGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDefaultToWalkChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.OnDefaultToWalkChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ActionControls_MovementSettings(int32_t EntryPoint); // Function ActionControls_MovementSettings.ActionControls_MovementSettings_C.ExecuteUbergraph_ActionControls_MovementSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

