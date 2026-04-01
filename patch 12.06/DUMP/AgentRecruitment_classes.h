// WidgetBlueprintGeneratedClass AgentRecruitment.AgentRecruitment_C
// Size: 0x388 (Inherited: 0x318)
struct UAgentRecruitment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UImage* AgentImage; // 0x328(0x08)
	struct UExpirationTimer_C* ExpirationTimer; // 0x330(0x08)
	struct UImage* GridPatternBG_Left; // 0x338(0x08)
	struct UImage* GridPatternBG_Right; // 0x340(0x08)
	struct UImage* GridPatternBG_Right_2; // 0x348(0x08)
	struct UProgressBar* ProgressBar_87; // 0x350(0x08)
	struct UTextBlock* ProgressText_2; // 0x358(0x08)
	struct UTextBlock* PurchaseAlternativeText; // 0x360(0x08)
	struct USizeBox* SizeBox_68; // 0x368(0x08)
	struct UTextBlock* UnlockText; // 0x370(0x08)
	struct URecruitmentEventModel* RecruitmentEventModel; // 0x378(0x08)
	struct UCharacterHandle* Handle; // 0x380(0x08)

	void InitExpirationTimer(); // Function AgentRecruitment.AgentRecruitment_C.InitExpirationTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitEvent(); // Function AgentRecruitment.AgentRecruitment_C.InitEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Show Agent Recruitment(); // Function AgentRecruitment.AgentRecruitment_C.Show Agent Recruitment // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideAgentRecruitment(); // Function AgentRecruitment.AgentRecruitment_C.HideAgentRecruitment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnedChanged(); // Function AgentRecruitment.AgentRecruitment_C.OnIsOwnedChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTimerExpired(); // Function AgentRecruitment.AgentRecruitment_C.OnTimerExpired // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function AgentRecruitment.AgentRecruitment_C.OnCharacterLoaded // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AgentRecruitment.AgentRecruitment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AgentRecruitment(int32_t EntryPoint); // Function AgentRecruitment.AgentRecruitment_C.ExecuteUbergraph_AgentRecruitment // (Final|UbergraphFunction) // @ game+0x1b42740
};

