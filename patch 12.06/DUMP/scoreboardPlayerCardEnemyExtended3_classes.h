// WidgetBlueprintGeneratedClass scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C
// Size: 0x1de1 (Inherited: 0x1d8c)
struct UscoreboardPlayerCardEnemyExtended3_C : UWBP_ScoreboardPlayerCardBase_C {
	char pad_1D8C[0x4]; // 0x1d8c(0x04)
	struct UProgressBar* armorBar; // 0x1d90(0x08)
	struct USizeBox* armorBarSizeBox; // 0x1d98(0x08)
	struct UImage* BombIcon_4; // 0x1da0(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher_1; // 0x1da8(0x08)
	struct UImage* Image_1; // 0x1db0(0x08)
	struct UImage* Image_5; // 0x1db8(0x08)
	struct UImage* Image_400; // 0x1dc0(0x08)
	struct USizeBox* kdaContainer; // 0x1dc8(0x08)
	struct USizeBox* moneyContainer; // 0x1dd0(0x08)
	struct USizeBox* RankIconSizeBox; // 0x1dd8(0x08)
	bool IsAlive; // 0x1de0(0x01)

	void Deprecated_setPoints(); // Function scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C.Deprecated_setPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void setAlive(); // Function scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C.setAlive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void setDead(); // Function scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C.setDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Information(); // Function scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C.Update Information // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Deprecated_UpdateAbilities(); // Function scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C.Deprecated_UpdateAbilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void updateGunAndArmorVisibility(bool IsAlive); // Function scoreboardPlayerCardEnemyExtended3.scoreboardPlayerCardEnemyExtended3_C.updateGunAndArmorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

