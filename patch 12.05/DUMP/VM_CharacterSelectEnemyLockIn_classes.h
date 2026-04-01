// BlueprintGeneratedClass VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_CharacterSelectEnemyLockIn_C : UAresViewModelBase {
	struct UPregameViewModel* PregameViewModel; // 0x90(0x08)
	struct FMulticastInlineDelegate OnNumPlayersChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate OnNumLockedInChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnEnemyTeamVisChanged; // 0xb8(0x10)
	int32_t NumPlayers; // 0xc8(0x04)
	int32_t NumPlayersLocked; // 0xcc(0x04)

	void SetNumLockedIn(); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.SetNumLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNumPlayers(); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.SetNumPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNumLockedIn(int32_t NewValue); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.HandleNumLockedIn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleNumPlayers(int32_t NewParam); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.HandleNumPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameViewController* PregameViewController); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEnemyTeamVisChanged__DelegateSignature(enum class ESlateVisibility Vis); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.OnEnemyTeamVisChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNumPlayersChanged__DelegateSignature(int32_t NumPlayers); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.OnNumPlayersChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnNumLockedInChanged__DelegateSignature(int32_t NumLocked); // Function VM_CharacterSelectEnemyLockIn.VM_CharacterSelectEnemyLockIn_C.OnNumLockedInChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

