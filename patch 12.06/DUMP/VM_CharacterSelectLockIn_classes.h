// BlueprintGeneratedClass VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C
// Size: 0xbc (Inherited: 0x90)
struct UVM_CharacterSelectLockIn_C : UAresViewModelBase {
	struct UPregameViewController* PregameViewController; // 0x90(0x08)
	struct FMulticastInlineDelegate OnVisibilityChanged ; // 0x98(0x10)
	struct FMulticastInlineDelegate OnEnabledChanged; // 0xa8(0x10)
	enum class ESlateVisibility VisibilityState; // 0xb8(0x01)
	bool IsEnabled; // 0xb9(0x01)
	bool IsLocalPlayerCoach; // 0xba(0x01)
	enum class EPregameLockInState LastLockInState; // 0xbb(0x01)

	void UpdateVisibility(); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsLocalPlayerCoach(bool NewIsLocalPlayerCoach); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.SetIsLocalPlayerCoach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetEnabled(bool Enabled); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVisibility(enum class ESlateVisibility Visibility); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.SetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLockIn(enum class EPregameLockInState State); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.HandleLockIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LockCharacter(struct UCommonButtonBase* LockInButton); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.LockCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameController); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEnabledChanged__DelegateSignature(bool IsEnabled); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.OnEnabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVisibilityChanged __DelegateSignature(enum class ESlateVisibility Visibility); // Function VM_CharacterSelectLockIn.VM_CharacterSelectLockIn_C.OnVisibilityChanged __DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

