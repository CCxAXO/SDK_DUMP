// WidgetBlueprintGeneratedClass ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C
// Size: 0x460 (Inherited: 0x3b8)
struct UArmorHUDElement_CharacterHUD_Standard_C : UArmorHUDElement_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UImage* ArmorIcon; // 0x3c0(0x08)
	struct UTextBlock* ArmorValue; // 0x3c8(0x08)
	struct UMaterialInstanceDynamic* MID_FillableArmor; // 0x3d0(0x08)
	struct UTexture* Icon; // 0x3d8(0x08)
	bool Mask; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	double DepletedArmorOpacity; // 0x3e8(0x08)
	double BaseArmorOpacity; // 0x3f0(0x08)
	struct UMaterialInstance* MI_FillableArmor; // 0x3f8(0x08)
	bool HideOutline; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	struct FMargin TextOffsetOverride; // 0x404(0x10)
	char pad_414[0x4]; // 0x414(0x04)
	double ArmorPercentage; // 0x418(0x08)
	struct FLinearColor DefenderStrokeColor; // 0x420(0x10)
	struct FLinearColor AttackerStrokeColor; // 0x430(0x10)
	struct FLinearColor DefenderFillColor; // 0x440(0x10)
	struct FLinearColor AttackerFillColor; // 0x450(0x10)

	void InitializeArmorColor(); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.InitializeArmorColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ArmorComponentUpdated(struct UCharacterHudComponent* ArmorComponent); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.ArmorComponentUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnArmorComponentUpdated(struct UCharacterHudComponent* ArmorComponent); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.OnArmorComponentUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ArmorHUDElement_CharacterHUD_Standard(int32_t EntryPoint); // Function ArmorHUDElement_CharacterHUD_Standard.ArmorHUDElement_CharacterHUD_Standard_C.ExecuteUbergraph_ArmorHUDElement_CharacterHUD_Standard // (Final|UbergraphFunction) // @ game+0x1b42740
};

