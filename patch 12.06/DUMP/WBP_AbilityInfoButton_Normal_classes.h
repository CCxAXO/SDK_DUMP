// WidgetBlueprintGeneratedClass WBP_AbilityInfoButton_Normal.WBP_AbilityInfoButton_Normal_C
// Size: 0x1b38 (Inherited: 0x1b09)
struct UWBP_AbilityInfoButton_Normal_C : UWBP_AbilityInfoButton_ActualButton_C {
	char pad_1B09[0x7]; // 0x1b09(0x07)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt; // 0x1b10(0x08)
	struct UWidgetSwitcher* BackgroundSwitcher; // 0x1b18(0x08)
	struct UBorder* ButtonBorder; // 0x1b20(0x08)
	struct UImage* SelectedBackground; // 0x1b28(0x08)
	struct UImage* StandardBackground; // 0x1b30(0x08)

	void Refresh Button State(); // Function WBP_AbilityInfoButton_Normal.WBP_AbilityInfoButton_Normal_C.Refresh Button State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetActionNamePrompt(struct UActionNameIconPrompt_C*& ActionNamePrompt); // Function WBP_AbilityInfoButton_Normal.WBP_AbilityInfoButton_Normal_C.GetActionNamePrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetButtonBorder(struct UBorder*& ButtonBorder); // Function WBP_AbilityInfoButton_Normal.WBP_AbilityInfoButton_Normal_C.GetButtonBorder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
};

