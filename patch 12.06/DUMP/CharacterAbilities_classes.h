// WidgetBlueprintGeneratedClass CharacterAbilities.CharacterAbilities_C
// Size: 0x3b8 (Inherited: 0x328)
struct UCharacterAbilities_C : UCharacterAbilities_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UCharacterAbilityPreview_C* Ability1; // 0x330(0x08)
	struct UCharacterAbilityPreview_C* Ability2; // 0x338(0x08)
	struct UCharacterAbilityPreview_C* Ability3; // 0x340(0x08)
	struct UCharacterSelectAbilityV2_C* AbilityInfo; // 0x348(0x08)
	struct UWidgetSwitcher* BodySwitcher; // 0x350(0x08)
	struct UTextBlock* CharacterDescriptionText; // 0x358(0x08)
	struct UTextBlock* CharacterName; // 0x360(0x08)
	struct UVerticalBox* CharInfoBox; // 0x368(0x08)
	struct UCharacterAbilityPreview_C* InfoDescription; // 0x370(0x08)
	struct UCharacterAbilityPreview_C* ModeDescription; // 0x378(0x08)
	struct UTextBlock* RoleDescriptionText; // 0x380(0x08)
	struct UTextBlock* RoleName; // 0x388(0x08)
	struct UTextBlock* RoleNameText; // 0x390(0x08)
	struct UHorizontalBox* Tabs; // 0x398(0x08)
	struct UCharacterAbilityPreview_C* Ultimate; // 0x3a0(0x08)
	struct UCharacterAbilityPreview_C* SelectedAbility; // 0x3a8(0x08)
	struct UUserWidget* ModeInfo; // 0x3b0(0x08)

	void OffsetTranslationForLoc(); // Function CharacterAbilities.CharacterAbilities_C.OffsetTranslationForLoc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateAbilityInfo(); // Function CharacterAbilities.CharacterAbilities_C.PopulateAbilityInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MaybeSpawnModeSpecificTab(); // Function CharacterAbilities.CharacterAbilities_C.MaybeSpawnModeSpecificTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedAbility(struct UCharacterAbilityPreview_C* Abiilty); // Function CharacterAbilities.CharacterAbilities_C.SetSelectedAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectedAbility(); // Function CharacterAbilities.CharacterAbilities_C.UpdateSelectedAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAbility(struct UCharacterSelectAbilityV2_C* Ability Widget, struct UCharacterHandle* Character Handle); // Function CharacterAbilities.CharacterAbilities_C.UpdateAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CharacterAbilities.CharacterAbilities_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CharacterAbilities.CharacterAbilities_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Ability1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function CharacterAbilities.CharacterAbilities_C.BndEvt__Ability1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Ability2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function CharacterAbilities.CharacterAbilities_C.BndEvt__Ability2_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Ability3_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function CharacterAbilities.CharacterAbilities_C.BndEvt__Ability3_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__InfoDescription_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function CharacterAbilities.CharacterAbilities_C.BndEvt__InfoDescription_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Ultimate_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function CharacterAbilities.CharacterAbilities_C.BndEvt__Ultimate_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ModeDescription_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function CharacterAbilities.CharacterAbilities_C.BndEvt__ModeDescription_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void UpdateName(); // Function CharacterAbilities.CharacterAbilities_C.UpdateName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAbilities(); // Function CharacterAbilities.CharacterAbilities_C.UpdateAbilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterHandleLoaded(struct UCharacterHandle* Handle); // Function CharacterAbilities.CharacterAbilities_C.OnCharacterHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterAbilities(int32_t EntryPoint); // Function CharacterAbilities.CharacterAbilities_C.ExecuteUbergraph_CharacterAbilities // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

