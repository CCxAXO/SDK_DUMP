// WidgetBlueprintGeneratedClass SpectatorWidget.SpectatorWidget_C
// Size: 0x450 (Inherited: 0x398)
struct USpectatorWidget_C : USpectatorWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* Intro; // 0x3a0(0x08)
	struct UImage* Arrow_left; // 0x3a8(0x08)
	struct UImage* Arrow_right; // 0x3b0(0x08)
	struct UHorizontalBox* HorizontalBox_4; // 0x3b8(0x08)
	struct UHorizontalBox* HorizontalBox_GamepadInput; // 0x3c0(0x08)
	struct UImage* Image_111; // 0x3c8(0x08)
	struct UImage* Image_113; // 0x3d0(0x08)
	struct UImage* Image_114; // 0x3d8(0x08)
	struct UHorizontalBox* InputPrompt; // 0x3e0(0x08)
	struct UWidgetSwitcher* InputPromptWidgetSwitcher; // 0x3e8(0x08)
	struct UInvalidationBox* InvalidationBox_Arrow_left; // 0x3f0(0x08)
	struct UInvalidationBox* InvalidationBox_Arrow_right; // 0x3f8(0x08)
	struct UInvalidationBox* InvalidationBox_Overlay; // 0x400(0x08)
	struct UInvalidationBox* InvalidationBox_PlayerName; // 0x408(0x08)
	struct UInvalidationBox* InvalidationBox_PlayerNameWidget; // 0x410(0x08)
	struct UInvalidationBox* InvalidationBox_Portrait; // 0x418(0x08)
	struct UInvalidationBox* InvalidationBox_SwitchPlayer; // 0x420(0x08)
	struct UDynamicConfigSwitcher_C* PlayerNameDisplay; // 0x428(0x08)
	struct UShared_Mouse_Prompt_C* Shared_Mouse_Prompt; // 0x430(0x08)
	struct USizeBox* SizeBox_1; // 0x438(0x08)
	struct USizeBox* SizeBox_MouseInput; // 0x440(0x08)
	struct UTextBlock* SwitchPlayerext; // 0x448(0x08)

	void HandleIntroAnimation(); // Function SpectatorWidget.SpectatorWidget_C.HandleIntroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCheckObserver(struct FDelegate event); // Function SpectatorWidget.SpectatorWidget_C.HandleCheckObserver // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SpectatorWidget.SpectatorWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Toggle Spectator Portrait(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function SpectatorWidget.SpectatorWidget_C.Toggle Spectator Portrait // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SpectatorWidget(int32_t EntryPoint); // Function SpectatorWidget.SpectatorWidget_C.ExecuteUbergraph_SpectatorWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

