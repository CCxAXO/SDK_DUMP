// BlueprintGeneratedClass VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C
// Size: 0xf1 (Inherited: 0x90)
struct UVM_CharacterAbilitiesTooltip_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x98(0x08)
	enum class ESlateVisibility WidgetVisibility; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnWidgetVisibilityChanged; // 0xa8(0x10)
	struct AShooterCharacter* Current View Character; // 0xb8(0x08)
	bool bAllowChangingWhileVisible; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct AShooterCharacter* OwningCharacter; // 0xc8(0x08)
	struct TArray<struct FCharacterAbilityTooltipDetails> TooltipDetails; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnTooltipDetailsChanged; // 0xe0(0x10)
	bool AbilityTooltipVisible; // 0xf0(0x01)

	void SetHUDModel(struct UCoordinatedHUDModel* InHUDModel); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.SetHUDModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTooltipDetails(struct TArray<struct FCharacterAbilityTooltipDetails>& TooltipDetails); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.GetTooltipDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Get Cost For Equipable(enum class EAresItemSlot InventorySlot, struct AShooterCharacter* ShooterCharacter, int32_t& Cost); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.Get Cost For Equipable // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetAbilityForWidgetPosition(int32_t WidgetPosition, enum class ECharacterAbilitySlot& AbilitySlot, enum class EAresItemSlot& InventorySlot, struct FName& ActionMapping, bool& bSuccess); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.GetAbilityForWidgetPosition // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTooltipDetails(struct UCharacterUIData* UIData); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.UpdateTooltipDetails // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LoadCharacterUIData(); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.LoadCharacterUIData // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetWidgetVisibility(enum class ESlateVisibility Value); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.SetWidgetVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetWidgetVisibility(enum class ESlateVisibility& WidgetVisibility); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.GetWidgetVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BindToEvents(bool Bind); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.BindToEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewTargetChanged(struct AActor* NewViewTarget); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.OnViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CharacterUIDataLoaded(struct UCharacterHandle* CharacterHandle); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.CharacterUIDataLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterTooltipRequestStateChanged(bool bRequested); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.OnCharacterTooltipRequestStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_CharacterAbilitiesTooltip(int32_t EntryPoint); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.ExecuteUbergraph_VM_CharacterAbilitiesTooltip // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnTooltipDetailsChanged__DelegateSignature(int32_t WidgetPosition, struct FCharacterAbilityTooltipDetails TooltipDetails); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.OnTooltipDetailsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnWidgetVisibilityChanged__DelegateSignature(enum class ESlateVisibility NewVisibility); // Function VM_CharacterAbilitiesTooltip.VM_CharacterAbilitiesTooltip_C.OnWidgetVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

