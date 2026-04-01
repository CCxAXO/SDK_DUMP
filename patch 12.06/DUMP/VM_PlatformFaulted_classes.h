// BlueprintGeneratedClass VM_PlatformFaulted.VM_PlatformFaulted_C
// Size: 0xf8 (Inherited: 0x90)
struct UVM_PlatformFaulted_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UAresClientEvents* AresClientEventsModel; // 0x98(0x08)
	enum class EPlatformFaultReason PlatformErrorCode; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText PlatformErrorReason; // 0xa8(0x18)
	struct FString RestrictionType; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnPlatformFaultedChanged; // 0xd0(0x10)
	bool IsPlatformFaulted; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FMulticastInlineDelegate OnPlatformFaultInfoChanged; // 0xe8(0x10)

	void Request Quit Game(struct FGuid& ModalID); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.Request Quit Game // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetIsPlatformFaulted(bool& IsPlatformFaulted); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.GetIsPlatformFaulted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetRestrictionType(struct FString& RestrictionType); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.GetRestrictionType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPlatformErrorReason(struct FText& PlatformErrorReason); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.GetPlatformErrorReason // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPlatformErrorCode(enum class EPlatformFaultReason& PlatformErrorCode); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.GetPlatformErrorCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Refresh(); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayFatalNotificationScreen(); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.DisplayFatalNotificationScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetErrorMessageText(enum class EPlatformFaultReason PlatformErrorCode, struct FString RestrictionType, struct FText& ErrorMessageText); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.GetErrorMessageText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleNewPlatformFaultInfo(enum class EPlatformFaultReason NewPlatformErrorCode, struct FText NewPlatformErrorReason, struct FString NewRestrictionsType); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.HandleNewPlatformFaultInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetErrorCodeText(enum class EPlatformFaultReason PlatformErrorCode, struct FText PlatformErrorReason, struct FText& ErrorCodeText); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.GetErrorCodeText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleNewPlatformFaulted(bool NewIsPlatformFaulted); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.HandleNewPlatformFaulted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSessionRestrictionType(struct FString NewRestrictionType, bool& ShouldNotify); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.SetSessionRestrictionType // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlatformErrorReason(struct FText NewPlatformErrorReason, bool& ShouldNotify); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.SetPlatformErrorReason // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlatformErrorCode(enum class EPlatformFaultReason NewPlatformErrorCode, bool& ShouldNotify); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.SetPlatformErrorCode // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlatformFaulted(enum class EPlatformFaultReason& Reason); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.SetPlatformFaulted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind to Ares Client Events Model(struct UAresClientEvents* NewAresClientEventsModel, bool Bind); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.Bind to Ares Client Events Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PlatformFaulted(int32_t EntryPoint); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.ExecuteUbergraph_VM_PlatformFaulted // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnPlatformFaultInfoChanged__DelegateSignature(enum class EPlatformFaultReason PlatformErrorCode, struct FText PlatformErrorReason, struct FString RestrictionType); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.OnPlatformFaultInfoChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlatformFaultedChanged__DelegateSignature(bool IsPlatformFaulted); // Function VM_PlatformFaulted.VM_PlatformFaulted_C.OnPlatformFaultedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

