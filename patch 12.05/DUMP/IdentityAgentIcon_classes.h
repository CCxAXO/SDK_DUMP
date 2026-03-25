// WidgetBlueprintGeneratedClass IdentityAgentIcon.IdentityAgentIcon_C
// Size: 0x368 (Inherited: 0x318)
struct UIdentityAgentIcon_C : UUserWidget {
	struct UOverlay* AgentIcon; // 0x318(0x08)
	struct UScaleBox* Ally; // 0x320(0x08)
	struct UImage* CharacterIcon; // 0x328(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* CharacterIconSlot_Lazy; // 0x330(0x08)
	struct UScaleBox* Me; // 0x338(0x08)
	struct UImage* NameBackgroundAlly; // 0x340(0x08)
	struct UImage* NameBackgroundME_2; // 0x348(0x08)
	struct UImage* NameBackgroundOpponent; // 0x350(0x08)
	struct UScaleBox* Opponent; // 0x358(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x360(0x08)

	void Init Premier(bool IsLeft); // Function IdentityAgentIcon.IdentityAgentIcon_C.Init Premier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAllyAndMe(bool Ally, bool Me); // Function IdentityAgentIcon.IdentityAgentIcon_C.UpdateAllyAndMe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

