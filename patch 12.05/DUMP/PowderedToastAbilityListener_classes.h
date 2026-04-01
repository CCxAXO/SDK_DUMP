// BlueprintGeneratedClass PowderedToastAbilityListener.PowderedToastAbilityListener_C
// Size: 0x110 (Inherited: 0xd8)
struct UPowderedToastAbilityListener_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<int32_t> AbilityCount; // 0xe0(0x10)
	struct TArray<int32_t> AbilityCount_Copy; // 0xf0(0x10)
	struct TArray<struct AShooterCharacter*> BoundCharacters; // 0x100(0x10)

	void BindToCharactersAbilityUsage(struct AShooterCharacter* Character, bool ShouldBindAbility1, bool ShouldBindAbility2, bool ShouldBindAbilityGrenade, bool ShouldBindUltimate); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.BindToCharactersAbilityUsage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Ability Used(struct AAresEquippable* Equip); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.Ability Used // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRep_AbilityCount(); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.OnRep_AbilityCount // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPossessedCharacterChanged_Event(struct AShooterCharacter* NewValue); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.OnPossessedCharacterChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpawnedCharacterChanged_Event(struct AShooterCharacter* NewValue); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.OnSpawnedCharacterChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PowderedToastAbilityListener(int32_t EntryPoint); // Function PowderedToastAbilityListener.PowderedToastAbilityListener_C.ExecuteUbergraph_PowderedToastAbilityListener // (Final|UbergraphFunction) // @ game+0x1af5410
};

