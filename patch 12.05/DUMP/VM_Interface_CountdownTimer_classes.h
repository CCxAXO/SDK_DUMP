// BlueprintGeneratedClass VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C
// Size: 0xe8 (Inherited: 0x90)
struct UVM_Interface_CountdownTimer_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnExpirationTimeChanged; // 0x98(0x10)
	double TimerInterval; // 0xa8(0x08)
	struct FDateTime ExpirationTime; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnSetUrgentStyling; // 0xb8(0x10)
	int32_t SecondsRemainingForUrgentFormatting; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FTimerHandle UrgentTimerHandle; // 0xd0(0x08)
	struct FMulticastInlineDelegate OnTimerIntervalChanged; // 0xd8(0x10)

	void StartUrgentTimer(); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.StartUrgentTimer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(struct FDateTime ViewExpirationTime); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Seconds Remaining Until Urgent Time(double& Seconds); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.Get Seconds Remaining Until Urgent Time // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetUrgentFormatting(); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.SetUrgentFormatting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimerInterval(double TimerInterval); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.SetTimerInterval // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind to Model(); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.Bind to Model // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetExpirationTime(struct FDateTime& ExpirationTime); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.GetExpirationTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetExpirationTime(struct FDateTime ExpirationTime); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.SetExpirationTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_Interface_CountdownTimer(int32_t EntryPoint); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.ExecuteUbergraph_VM_Interface_CountdownTimer // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnTimerIntervalChanged__DelegateSignature(double TimerInterval); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.OnTimerIntervalChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSetUrgentStyling__DelegateSignature(); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.OnSetUrgentStyling__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExpirationTimeChanged__DelegateSignature(struct FDateTime ExpirationTime); // Function VM_Interface_CountdownTimer.VM_Interface_CountdownTimer_C.OnExpirationTimeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

