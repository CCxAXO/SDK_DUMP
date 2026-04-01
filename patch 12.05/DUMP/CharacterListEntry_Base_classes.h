// WidgetBlueprintGeneratedClass CharacterListEntry_Base.CharacterListEntry_Base_C
// Size: 0x330 (Inherited: 0x318)
struct UCharacterListEntry_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x320(0x08)
	struct UPregameViewController* PregameViewController; // 0x328(0x08)

	void OnOwnedOnlyByLoyaltyChanged(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.OnOwnedOnlyByLoyaltyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerClickEffects(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.TriggerClickEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIcon(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.UpdateIcon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsUnlockedChanged(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.OnIsUnlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterStateChanged(struct UCharacterDataAsset* Character, enum class EPregameCharacterState State); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.OnCharacterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateState(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameViewController* PregameViewController); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetState(enum class CharacterListEntryState NewState); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePortrait(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.UpdatePortrait // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterListEntry_Base(int32_t EntryPoint); // Function CharacterListEntry_Base.CharacterListEntry_Base_C.ExecuteUbergraph_CharacterListEntry_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

