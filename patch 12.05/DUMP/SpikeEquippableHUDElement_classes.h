// WidgetBlueprintGeneratedClass SpikeEquippableHUDElement.SpikeEquippableHUDElement_C
// Size: 0x39d (Inherited: 0x330)
struct USpikeEquippableHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* Ani_BombDropped; // 0x338(0x08)
	struct UWidgetAnimation* Ani_BombEquipped; // 0x340(0x08)
	struct UWidgetAnimation* Intro_BombAcquired; // 0x348(0x08)
	struct UTextBlock* bombKeyBinding; // 0x350(0x08)
	struct UImage* EquippmentIcon; // 0x358(0x08)
	struct USizeBox* HotKeyBox; // 0x360(0x08)
	struct USizeBox* levelEquippableSizeBoxContainer; // 0x368(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x370(0x08)
	enum class EAresItemSlot ItemSlot; // 0x378(0x01)
	bool ShowSlotIfEmpty; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	struct FLinearColor UnequippedTint; // 0x37c(0x10)
	struct FLinearColor EquippedTInt; // 0x38c(0x10)
	bool CollapsedWhenEmpty; // 0x39c(0x01)

	void GetEquippableDisplayName(struct AAresEquippable* Equippment, struct FText& DisplayName); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.GetEquippableDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateWidgetSettings(struct UTexture* IconTexture, struct FLinearColor IconTint, bool ShowName, struct FText EquippmentName, struct FLinearColor NameColor, bool ShowActionBorder, struct FLinearColor ActionColor, bool ShowBackground); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.UpdateWidgetSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleModelChanged(); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.HandleModelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentEquippableChanged_Event_1(struct AAresEquippable* Equippable); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.OnCurrentEquippableChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnedCharacterChanged_Event_1(struct AShooterCharacter* NewValue); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.SpawnedCharacterChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInventoryItemsChanged_Event_1(); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.OnInventoryItemsChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SpikeEquippableHUDElement(int32_t EntryPoint); // Function SpikeEquippableHUDElement.SpikeEquippableHUDElement_C.ExecuteUbergraph_SpikeEquippableHUDElement // (Final|UbergraphFunction) // @ game+0x1af5410
};

