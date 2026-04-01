// WidgetBlueprintGeneratedClass SkillTestPopupV2.SkillTestPopupV2_C
// Size: 0x340 (Inherited: 0x318)
struct USkillTestPopupV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UConfirmationModal_C* SkillTestPopup; // 0x320(0x08)
	struct UMainMenuViewController* MainMenuController; // 0x328(0x08)
	bool ShouldAutoClose; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FTimerHandle PollTimer; // 0x338(0x08)

	void OnConfirmationPressed_Event_1(); // Function SkillTestPopupV2.SkillTestPopupV2_C.OnConfirmationPressed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMMRPlayerUpdated(); // Function SkillTestPopupV2.SkillTestPopupV2_C.OnMMRPlayerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Noop(); // Function SkillTestPopupV2.SkillTestPopupV2_C.Noop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SkillTestPopupV2.SkillTestPopupV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Poll(); // Function SkillTestPopupV2.SkillTestPopupV2_C.Poll // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function SkillTestPopupV2.SkillTestPopupV2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SkillTestPopupV2(int32_t EntryPoint); // Function SkillTestPopupV2.SkillTestPopupV2_C.ExecuteUbergraph_SkillTestPopupV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

