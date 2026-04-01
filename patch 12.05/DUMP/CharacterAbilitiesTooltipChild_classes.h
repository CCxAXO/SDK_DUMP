// WidgetBlueprintGeneratedClass CharacterAbilitiesTooltipChild.CharacterAbilitiesTooltipChild_C
// Size: 0x398 (Inherited: 0x338)
struct UCharacterAbilitiesTooltipChild_C : UCharacterAbilitiesTooltipChild_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UTextBlock* AbilityButton; // 0x340(0x08)
	struct UImage* AbilityIcon; // 0x348(0x08)
	struct UTextBlock* AbilityName; // 0x350(0x08)
	struct UImage* Charge1; // 0x358(0x08)
	struct UImage* Charge2; // 0x360(0x08)
	struct UTextBlock* Description; // 0x368(0x08)
	struct UImage* Image_101; // 0x370(0x08)
	struct UImage* Image_103; // 0x378(0x08)
	struct UImage* Image_104; // 0x380(0x08)
	struct UVerticalBox* KeyPromptsVBox; // 0x388(0x08)
	struct UTextBlock* Price; // 0x390(0x08)

	void SetAbilityDetails(struct FCharacterAbilityTooltipDetails TooltipDetails); // Function CharacterAbilitiesTooltipChild.CharacterAbilitiesTooltipChild_C.SetAbilityDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterAbilitiesTooltipChild.CharacterAbilitiesTooltipChild_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterAbilitiesTooltipChild(int32_t EntryPoint); // Function CharacterAbilitiesTooltipChild.CharacterAbilitiesTooltipChild_C.ExecuteUbergraph_CharacterAbilitiesTooltipChild // (Final|UbergraphFunction) // @ game+0x1af5410
};

