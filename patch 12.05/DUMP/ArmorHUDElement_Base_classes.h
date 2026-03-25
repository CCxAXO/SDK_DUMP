// WidgetBlueprintGeneratedClass ArmorHUDElement_Base.ArmorHUDElement_Base_C
// Size: 0x3b8 (Inherited: 0x3b0)
struct UArmorHUDElement_Base_C : UCharacterAbilityWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)

	void GetArmorComponent(struct UCharacterHudComponent*& OutputPin); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.GetArmorComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetVisibilityCustom(enum class ESlateVisibility NewVisibility); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.SetVisibilityCustom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateWidget(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStartWidget(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnStartWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnSectionDirtied_Event(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnSectionDirtied_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnItemsChanged_Event(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnItemsChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnArmorComponentUpdated(struct UCharacterHudComponent* ArmorComponent); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnArmorComponentUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVisibilityUpdated(enum class ESlateVisibility NewVisibility); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnVisibilityUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivateWidget(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnActivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnDeactivateWidget(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnDeactivateWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStopWidget(); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.OnStopWidget // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ArmorHUDElement_Base(int32_t EntryPoint); // Function ArmorHUDElement_Base.ArmorHUDElement_Base_C.ExecuteUbergraph_ArmorHUDElement_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

