// WidgetBlueprintGeneratedClass InterfaceControls_ObserverAndReplaySettings.InterfaceControls_ObserverAndReplaySettings_C
// Size: 0x418 (Inherited: 0x318)
struct UInterfaceControls_ObserverAndReplaySettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextSettingsWidgetWithSlider_C* Gamepad_AimDeadzone_Slider; // 0x320(0x08)
	struct UBoolSettingsWidget_C* Gamepad_AnalogSquaring; // 0x328(0x08)
	struct UBoolSettingsWidget_C* Gamepad_InvertLook_Y; // 0x330(0x08)
	struct UTextSettingsWidgetWithSlider_C* Gamepad_MovementDeadzone_slider; // 0x338(0x08)
	struct UTextSettingsWidgetWithSlider_C* Gamepad_Rotation_Speed_Slider_X; // 0x340(0x08)
	struct UTextSettingsWidgetWithSlider_C* Gamepad_Rotation_Speed_Slider_Y; // 0x348(0x08)
	struct UActionBindingWidget_C* ObservePlayer2; // 0x350(0x08)
	struct UActionBindingWidget_C* ObservePlayer3; // 0x358(0x08)
	struct UActionBindingWidget_C* ObservePlayer4; // 0x360(0x08)
	struct UActionBindingWidget_C* ObservePlayer5; // 0x368(0x08)
	struct UActionBindingWidget_C* ObservePlayer6; // 0x370(0x08)
	struct UActionBindingWidget_C* ObservePlayer7; // 0x378(0x08)
	struct UActionBindingWidget_C* ObservePlayer8; // 0x380(0x08)
	struct UActionBindingWidget_C* ObservePlayer9; // 0x388(0x08)
	struct UAxisBindingWidget_C* ObserverFlyDown; // 0x390(0x08)
	struct UAxisBindingWidget_C* ObserverFlyUp; // 0x398(0x08)
	struct UActionBindingWidget_C* ObserverFollowProjectile; // 0x3a0(0x08)
	struct USettingsV2_Subheader_C* ObserverHeader; // 0x3a8(0x08)
	struct UActionBindingWidget_C* ObserverPlayer1; // 0x3b0(0x08)
	struct UActionBindingWidget_C* ObserverPlayer10; // 0x3b8(0x08)
	struct UVerticalBox* ObserverSubsection; // 0x3c0(0x08)
	struct UActionBindingWidget_C* OutlinesAll; // 0x3c8(0x08)
	struct UActionBindingWidget_C* OutlinesEnemy; // 0x3d0(0x08)
	struct UActionBindingWidget_C* OutlinesFriendly; // 0x3d8(0x08)
	struct UActionBindingWidget_C* OutlinesNone; // 0x3e0(0x08)
	struct UActionBindingWidget_C* ToggleFreeCam; // 0x3e8(0x08)
	struct UActionBindingWidget_C* ToggleMinimap; // 0x3f0(0x08)
	struct UActionBindingWidget_C* TogglePlayerLoadoutVisibility; // 0x3f8(0x08)
	struct UActionBindingWidget_C* ToggleSightLines; // 0x400(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x408(0x10)

	void Construct(); // Function InterfaceControls_ObserverAndReplaySettings.InterfaceControls_ObserverAndReplaySettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InterfaceControls_ObserverAndReplaySettings(int32_t EntryPoint); // Function InterfaceControls_ObserverAndReplaySettings.InterfaceControls_ObserverAndReplaySettings_C.ExecuteUbergraph_InterfaceControls_ObserverAndReplaySettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

