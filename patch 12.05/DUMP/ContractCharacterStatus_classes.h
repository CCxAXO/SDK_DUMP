// WidgetBlueprintGeneratedClass ContractCharacterStatus.ContractCharacterStatus_C
// Size: 0x3bc (Inherited: 0x318)
struct UContractCharacterStatus_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* AgentName; // 0x320(0x08)
	struct UImage* CharacterImage; // 0x328(0x08)
	struct UImage* Foreground; // 0x330(0x08)
	struct UImage* LockIconInvisible; // 0x338(0x08)
	struct UWidgetSwitcher* LockIconSwitcher; // 0x340(0x08)
	struct UImage* LockIconVisible; // 0x348(0x08)
	struct UTextBlock* LockTextOff; // 0x350(0x08)
	struct UTextBlock* LockTextOn; // 0x358(0x08)
	struct UWidgetSwitcher* LockTextSwitcher; // 0x360(0x08)
	struct UWidgetSwitcher* Sidebar; // 0x368(0x08)
	struct UImage* SideBarLocked; // 0x370(0x08)
	struct UImage* SideBarUnlocked; // 0x378(0x08)
	struct UContractViewModel* ContractViewModel; // 0x380(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x388(0x08)
	struct UMaterialInstanceDynamic* SilhouetteMaterial; // 0x390(0x08)
	bool PreviewUnlocked; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FLinearColor LockedTint; // 0x39c(0x10)
	struct FLinearColor UnlockedTint; // 0x3ac(0x10)

	void SetIsOwned(bool Owned); // Function ContractCharacterStatus.ContractCharacterStatus_C.SetIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIsOwned(); // Function ContractCharacterStatus.ContractCharacterStatus_C.UpdateIsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCharacterLoaded(struct UCharacterHandle* Handle); // Function ContractCharacterStatus.ContractCharacterStatus_C.HandleCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UContractViewModel* ContractViewModel); // Function ContractCharacterStatus.ContractCharacterStatus_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ContractCharacterStatus.ContractCharacterStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ContractCharacterStatus.ContractCharacterStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContractCharacterStatus(int32_t EntryPoint); // Function ContractCharacterStatus.ContractCharacterStatus_C.ExecuteUbergraph_ContractCharacterStatus // (Final|UbergraphFunction) // @ game+0x1af5410
};

