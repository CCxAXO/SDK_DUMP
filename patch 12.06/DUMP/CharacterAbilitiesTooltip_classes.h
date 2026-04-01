// WidgetBlueprintGeneratedClass CharacterAbilitiesTooltip.CharacterAbilitiesTooltip_C
// Size: 0x570 (Inherited: 0x450)
struct UCharacterAbilitiesTooltip_C : UCharacterAbilitiesTooltip_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* EntryAnim; // 0x458(0x08)
	struct UCharacterAbilitiesTooltipChild_C* CharacterAbilitiesTooltipChild4; // 0x460(0x08)
	struct UCharacterAbilitiesTooltipChild_C* CharacterAbilitiesTooltipChildE; // 0x468(0x08)
	struct UCharacterAbilitiesTooltipChild_C* CharacterAbilitiesTooltipChildQ; // 0x470(0x08)
	struct UCharacterAbilitiesTooltipChild_C* CharacterAbilitiesTooltipChildX; // 0x478(0x08)
	struct UImage* Image_267; // 0x480(0x08)
	struct UImage* Image_289; // 0x488(0x08)
	struct UOverlay* Overlay_1; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
	struct FSlateBrush Icon_1; // 0x4a0(0xd0)

	void OnInitialized(); // Function CharacterAbilitiesTooltip.CharacterAbilitiesTooltip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnWidgetVisibilityChanged(enum class ESlateVisibility NewVisibility); // Function CharacterAbilitiesTooltip.CharacterAbilitiesTooltip_C.OnWidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterAbilitiesTooltip(int32_t EntryPoint); // Function CharacterAbilitiesTooltip.CharacterAbilitiesTooltip_C.ExecuteUbergraph_CharacterAbilitiesTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

