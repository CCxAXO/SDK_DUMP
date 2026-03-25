// WidgetBlueprintGeneratedClass ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C
// Size: 0x448 (Inherited: 0x3b8)
struct UArmorHUDElement_CharacterHUD_PlasmaArmor_C : UArmorHUDElement_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* PoolEmpty; // 0x3c0(0x08)
	struct UWidgetAnimation* ArmorEmpty; // 0x3c8(0x08)
	struct UWidgetAnimation* PoolOutro; // 0x3d0(0x08)
	struct UWidgetAnimation* PoolIntro; // 0x3d8(0x08)
	struct UArmorHUDElement_CharacterHUD_Standard_C* ArmorHUDElement_CharacterHUD_Standard; // 0x3e0(0x08)
	struct UTextBlock* ArmorValue; // 0x3e8(0x08)
	struct UOverlay* OverlayParent; // 0x3f0(0x08)
	struct UImage* Plasma_FrameFX; // 0x3f8(0x08)
	struct UImage* PoolFill; // 0x400(0x08)
	struct UOverlay* PoolValueWrapper; // 0x408(0x08)
	double DepletedPoolOpacity; // 0x410(0x08)
	double BasePoolOpacity; // 0x418(0x08)
	struct UMaterialInstanceDynamic* MID_PoolFill; // 0x420(0x08)
	struct APlasmaArmorItem_C* BoundArmor; // 0x428(0x08)
	struct UMaterialInstance* MI_PoolFill; // 0x430(0x08)
	struct UMaterialInstance* MI_Plasma_FrameFX; // 0x438(0x08)
	struct UMaterialInstanceDynamic* MID_Plasma_FrameFX; // 0x440(0x08)

	void InitializeArmorColor(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.InitializeArmorColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUpAnimationEvents(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.SetUpAnimationEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnCinematicModeUpdated_Event_1(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnCinematicModeUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnArmorComponentUpdated(struct UCharacterHudComponent* ArmorComponent); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnArmorComponentUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnItemsChanged_Event(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnItemsChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRegenStart(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnRegenStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRegenEnd(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnRegenEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShieldDepleted(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnShieldDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPoolDepleted(); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.OnPoolDepleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ArmorHUDElement_CharacterHUD_PlasmaArmor(int32_t EntryPoint); // Function ArmorHUDElement_CharacterHUD_PlasmaArmor.ArmorHUDElement_CharacterHUD_PlasmaArmor_C.ExecuteUbergraph_ArmorHUDElement_CharacterHUD_PlasmaArmor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

