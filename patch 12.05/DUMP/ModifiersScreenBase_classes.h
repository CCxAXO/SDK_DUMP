// WidgetBlueprintGeneratedClass ModifiersScreenBase.ModifiersScreenBase_C
// Size: 0x3c1 (Inherited: 0x340)
struct UModifiersScreenBase_C : UGameModifiersMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UActionBindingWidget_C* Keybind Widget; // 0x348(0x08)
	struct FMulticastInlineDelegate OnModifiersPopulated; // 0x350(0x10)
	struct FMulticastInlineDelegate OnScreenOpened; // 0x360(0x10)
	struct TMap<struct FName, struct UVerticalBox*> CategoryTagToCategoryMap; // 0x370(0x50)
	bool HasVisibleCategories; // 0x3c0(0x01)

	struct UGameModifierWidget* CreateModifierWidget(struct UGameModifierComponent* Modifier); // Function ModifiersScreenBase.ModifiersScreenBase_C.CreateModifierWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddChildModifierWidget(struct UPanelWidget* ParentContainer, struct UUserWidget* ChildWidget); // Function ModifiersScreenBase.ModifiersScreenBase_C.AddChildModifierWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateMenuWithWidgets(struct TArray<struct UGameModifierWidget*>& DisplayedModifiers); // Function ModifiersScreenBase.ModifiersScreenBase_C.PopulateMenuWithWidgets // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void RefreshMenu(); // Function ModifiersScreenBase.ModifiersScreenBase_C.RefreshMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function ModifiersScreenBase.ModifiersScreenBase_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ModifiersScreenBase(int32_t EntryPoint); // Function ModifiersScreenBase.ModifiersScreenBase_C.ExecuteUbergraph_ModifiersScreenBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnScreenOpened__DelegateSignature(); // Function ModifiersScreenBase.ModifiersScreenBase_C.OnScreenOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnModifiersPopulated__DelegateSignature(bool bModifiersExist); // Function ModifiersScreenBase.ModifiersScreenBase_C.OnModifiersPopulated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

