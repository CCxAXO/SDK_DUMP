// WidgetBlueprintGeneratedClass LockInPip.LockInPip_C
// Size: 0x339 (Inherited: 0x318)
struct ULockInPip_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Center; // 0x320(0x08)
	struct FLinearColor PipColor; // 0x328(0x10)
	bool LockedIn; // 0x338(0x01)

	void SetLockedIn(bool LockedIn); // Function LockInPip.LockInPip_C.SetLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPipColor(struct FLinearColor NewColor); // Function LockInPip.LockInPip_C.SetPipColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function LockInPip.LockInPip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_LockInPip(int32_t EntryPoint); // Function LockInPip.LockInPip_C.ExecuteUbergraph_LockInPip // (Final|UbergraphFunction) // @ game+0x1af5410
};

