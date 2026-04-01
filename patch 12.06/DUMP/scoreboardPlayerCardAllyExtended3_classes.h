// WidgetBlueprintGeneratedClass scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C
// Size: 0x1e4a (Inherited: 0x1d8c)
struct UscoreboardPlayerCardAllyExtended3_C : UWBP_ScoreboardPlayerCardBase_C {
	char pad_1D8C[0x4]; // 0x1d8c(0x04)
	struct UProgressBar* armorBar; // 0x1d90(0x08)
	struct USizeBox* armorBarSizeBox; // 0x1d98(0x08)
	struct UImage* BombIcon; // 0x1da0(0x08)
	struct UImage* Bottom; // 0x1da8(0x08)
	struct UImage* disconnectedImage; // 0x1db0(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x1db8(0x08)
	struct UImage* Image_1; // 0x1dc0(0x08)
	struct UImage* Image_400; // 0x1dc8(0x08)
	struct USizeBox* kdaContainer; // 0x1dd0(0x08)
	struct UImage* Left; // 0x1dd8(0x08)
	struct UOverlay* MeBorder; // 0x1de0(0x08)
	struct USizeBox* moneyContainer; // 0x1de8(0x08)
	struct UOverlay* PlayerPortrait; // 0x1df0(0x08)
	struct UImage* reconnectingImage; // 0x1df8(0x08)
	struct UImage* Right; // 0x1e00(0x08)
	struct UImage* Spacer; // 0x1e08(0x08)
	struct UImage* Top; // 0x1e10(0x08)
	struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* VoiceIndicator_SpeakerIcon; // 0x1e18(0x08)
	struct FSlateColor meText; // 0x1e20(0x14)
	struct FSlateColor themText; // 0x1e34(0x14)
	bool IsSelfInitiallySet; // 0x1e48(0x01)
	bool CheckConnectionStatus; // 0x1e49(0x01)

	void Deprecated_setPoints(); // Function scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C.Deprecated_setPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void updatePing(bool ForceUpdate); // Function scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C.updatePing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void setAlive(); // Function scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C.setAlive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void setDead(); // Function scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C.setDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Information(); // Function scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C.Update Information // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeVoiceIcon(); // Function scoreboardPlayerCardAllyExtended3.scoreboardPlayerCardAllyExtended3_C.InitializeVoiceIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

