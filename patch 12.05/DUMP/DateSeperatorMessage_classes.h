// WidgetBlueprintGeneratedClass DateSeperatorMessage.DateSeperatorMessage_C
// Size: 0x330 (Inherited: 0x318)
struct UDateSeperatorMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* DateText; // 0x320(0x08)
	struct FDateTime UTCDateTime; // 0x328(0x08)

	void ChangeTimeStamp(struct FDateTime NewTimestamp); // Function DateSeperatorMessage.DateSeperatorMessage_C.ChangeTimeStamp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateText(); // Function DateSeperatorMessage.DateSeperatorMessage_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DateSeperatorMessage.DateSeperatorMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void DateChangedEvent(); // Function DateSeperatorMessage.DateSeperatorMessage_C.DateChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DateSeperatorMessage(int32_t EntryPoint); // Function DateSeperatorMessage.DateSeperatorMessage_C.ExecuteUbergraph_DateSeperatorMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

