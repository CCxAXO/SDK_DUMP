// WidgetBlueprintGeneratedClass LockInCounter.LockInCounter_C
// Size: 0x350 (Inherited: 0x318)
struct ULockInCounter_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* NumLockedInText; // 0x320(0x08)
	struct UHorizontalBox* PipsContainer; // 0x328(0x08)
	struct TArray<struct ULockInPip_C*> Pips; // 0x330(0x10)
	struct FLinearColor PipColor; // 0x340(0x10)

	void SetPipColor(struct FLinearColor NewPipColor); // Function LockInCounter.LockInCounter_C.SetPipColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNumLockedIn(int32_t NumPipsFilled); // Function LockInCounter.LockInCounter_C.SetNumLockedIn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetNumPlayers(int32_t NumPips); // Function LockInCounter.LockInCounter_C.SetNumPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function LockInCounter.LockInCounter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LockInCounter(int32_t EntryPoint); // Function LockInCounter.LockInCounter_C.ExecuteUbergraph_LockInCounter // (Final|UbergraphFunction) // @ game+0x1b42740
};

