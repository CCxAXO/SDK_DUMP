// WidgetBlueprintGeneratedClass CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C
// Size: 0x450 (Inherited: 0x330)
struct UCharacterAbilitiesTooltip_Base_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	struct UMaterialInstance* Icon Material; // 0x340(0x08)
	char pad_348[0x8]; // 0x348(0x08)
	struct FSlateBrush Icon; // 0x350(0xd0)
	struct FCharacterHandleLoadOptions UIDataLoadOptions; // 0x420(0x07)
	char pad_427[0x1]; // 0x427(0x01)
	struct AShooterCharacter* CurrentViewCharacter; // 0x428(0x08)
	bool bAllowChangingWhileVisible; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UVM_CharacterAbilitiesTooltip_C* ViewModel; // 0x438(0x08)
	struct TArray<struct UCharacterAbilitiesTooltipChild_Base_C*> TooltipWidgetOrder; // 0x440(0x10)

	void RefreshView(); // Function CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C.RefreshView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind to View Model Events(bool Bind); // Function CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C.Bind to View Model Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTooltipDetailsChanged(int32_t WidgetPosition, struct FCharacterAbilityTooltipDetails TooltipDetails); // Function CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C.OnTooltipDetailsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnWidgetVisibilityChanged(enum class ESlateVisibility NewVisibility); // Function CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C.OnWidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterAbilitiesTooltip_Base(int32_t EntryPoint); // Function CharacterAbilitiesTooltip_Base.CharacterAbilitiesTooltip_Base_C.ExecuteUbergraph_CharacterAbilitiesTooltip_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

