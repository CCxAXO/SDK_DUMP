// BlueprintGeneratedClass InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C
// Size: 0x351 (Inherited: 0x2e8)
struct UInventoryTransactionObjectiveComponent_C : UNPE_MenuObjective_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct TSoftClassPtr<UObject> ItemType; // 0x2f0(0x30)
	enum class EInventoryTransaction TransactionType; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UAresInventory* CurrentInventory; // 0x328(0x08)
	bool AddToRespawnInventoryOnComplete; // 0x330(0x01)
	bool CheckIfAlreadyInInventory; // 0x331(0x01)
	enum class EAresItemSlot ItemSlot; // 0x332(0x01)
	char pad_333[0x5]; // 0x333(0x05)
	struct FText TransactionText; // 0x338(0x18)
	enum class ShopHighlightingSubtextDisplayDirection TextDisplayDirection; // 0x350(0x01)

	void HandleShieldAlreadyInInventory(struct AShooterCharacter* PlayerCharacter); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.HandleShieldAlreadyInInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAbilityAlreadyInInventory(struct UAresInventory* PlayerInventory); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.HandleAbilityAlreadyInInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWeaponAlreadyInInventory(struct UAresInventory* PlayerInventory); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.HandleWeaponAlreadyInInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheckIfItemIsAlreadyOwned(struct AShooterCharacter* PlayerCharacter); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.CheckIfItemIsAlreadyOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ListenForInventoryChanges(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.ListenForInventoryChanges // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InventoryChange(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.InventoryChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InventoryObjectiveCompleted(struct AAresItem* WeaponClass); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.InventoryObjectiveCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.SpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StatusOrProgressChanged(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.StatusOrProgressChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InventoryTransactionObjectiveComponent(int32_t EntryPoint); // Function InventoryTransactionObjectiveComponent.InventoryTransactionObjectiveComponent_C.ExecuteUbergraph_InventoryTransactionObjectiveComponent // (Final|UbergraphFunction) // @ game+0x1af5410
};

