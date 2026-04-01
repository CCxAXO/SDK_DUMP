// BlueprintGeneratedClass VM_CharacterSelectTimer.VM_CharacterSelectTimer_C
// Size: 0x10c (Inherited: 0x90)
struct UVM_CharacterSelectTimer_C : UAresViewModelBase {
	struct UPregameViewModel* PregameModel; // 0x90(0x08)
	struct UAkAudioEvent* TickSound; // 0x98(0x08)
	struct UAkAudioEvent* TickSoundUrgent; // 0xa0(0x08)
	struct UAkAudioEvent* NotSelectedAlert; // 0xa8(0x08)
	bool AlertTriggered; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FMulticastInlineDelegate OnNotSelectedAlertChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnNotSelectedAlertCancelledChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnTimerTextChanged; // 0xd8(0x10)
	struct FText TimerText; // 0xe8(0x18)
	bool IsLowTimeRemainingActive; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t TicksStartAt; // 0x104(0x04)
	int32_t UrgentTickStartAt; // 0x108(0x04)

	void SetNotSelectedAlert(); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.SetNotSelectedAlert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNotSelectedAlertCancelled(struct UCharacterDataAsset* Character); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.SetNotSelectedAlertCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTimerText(struct FText Text); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.SetTimerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTimer(); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleServerTime(float ServerTime); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.HandleServerTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePregameState(enum class EPregameMatchState NewState); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.HandlePregameState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameController); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTimerTextChanged__DelegateSignature(struct FText UpdatedTimeText); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.OnTimerTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNotSelectedAlertCancelledChanged__DelegateSignature(); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.OnNotSelectedAlertCancelledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnNotSelectedAlertChanged__DelegateSignature(); // Function VM_CharacterSelectTimer.VM_CharacterSelectTimer_C.OnNotSelectedAlertChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

