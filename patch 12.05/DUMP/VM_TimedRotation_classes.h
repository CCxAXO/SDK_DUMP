// BlueprintGeneratedClass VM_TimedRotation.VM_TimedRotation_C
// Size: 0xe9 (Inherited: 0x90)
struct UVM_TimedRotation_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct TArray<None> RotatingElements; // 0x98(0x10)
	double RotatingTimerDuration; // 0xa8(0x08)
	struct FTimerHandle RotatingTimerHandle; // 0xb0(0x08)
	int32_t CurrentIndex; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FMulticastInlineDelegate OnCurrentObjectChanged; // 0xc0(0x10)
	struct UObject* CurrentObject; // 0xd0(0x08)
	struct FMulticastInlineDelegate OnIsManuallySelectedChanged; // 0xd8(0x10)
	bool IsManuallySelected; // 0xe8(0x01)

	void GetCurrentIndex(int32_t& CurrentIndex); // Function VM_TimedRotation.VM_TimedRotation_C.GetCurrentIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPreviousIndex(int32_t& PreviousIndex); // Function VM_TimedRotation.VM_TimedRotation_C.GetPreviousIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void NavigateToNextIndex(); // Function VM_TimedRotation.VM_TimedRotation_C.NavigateToNextIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void NavigateToPreviousIndex(); // Function VM_TimedRotation.VM_TimedRotation_C.NavigateToPreviousIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentIndex(int32_t InNewIndex); // Function VM_TimedRotation.VM_TimedRotation_C.SetCurrentIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNextIndex(int32_t& NextIndex); // Function VM_TimedRotation.VM_TimedRotation_C.GetNextIndex // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetCurrentObject(int32_t InCurrentIndex, struct UObject*& InCurrentObject); // Function VM_TimedRotation.VM_TimedRotation_C.SetCurrentObject // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsManuallySelected(bool InIsManuallySelected); // Function VM_TimedRotation.VM_TimedRotation_C.SetIsManuallySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FindNextElement(); // Function VM_TimedRotation.VM_TimedRotation_C.FindNextElement // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Resume Timer(); // Function VM_TimedRotation.VM_TimedRotation_C.Resume Timer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Pause Timer(); // Function VM_TimedRotation.VM_TimedRotation_C.Pause Timer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopTimer(); // Function VM_TimedRotation.VM_TimedRotation_C.StopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Start Timer(); // Function VM_TimedRotation.VM_TimedRotation_C.Start Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(double InRotatingTimerDuration, struct TArray<struct UObject*>& InRotatatingElements, int32_t InStartingIndex); // Function VM_TimedRotation.VM_TimedRotation_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function VM_TimedRotation.VM_TimedRotation_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Dispose(); // Function VM_TimedRotation.VM_TimedRotation_C.Dispose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_TimedRotation.VM_TimedRotation_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_TimedRotation(int32_t EntryPoint); // Function VM_TimedRotation.VM_TimedRotation_C.ExecuteUbergraph_VM_TimedRotation // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsManuallySelectedChanged__DelegateSignature(bool InIsManuallySelected); // Function VM_TimedRotation.VM_TimedRotation_C.OnIsManuallySelectedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCurrentObjectChanged__DelegateSignature(int32_t CurrentIndex, struct UObject* CurrentObject); // Function VM_TimedRotation.VM_TimedRotation_C.OnCurrentObjectChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

