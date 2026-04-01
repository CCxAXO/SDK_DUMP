// WidgetBlueprintGeneratedClass HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C
// Size: 0x369 (Inherited: 0x330)
struct UHoldKeyboardKeyBTN_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UProgressBar* holdBar; // 0x338(0x08)
	struct UInvalidationBox* InvalidationBox_HoldKeyboardKeyBTN; // 0x340(0x08)
	struct UKeyboardKeyBTN_C* KeyboardKeyBTN; // 0x348(0x08)
	struct FName ActionMapping; // 0x350(0x0c)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FTimerHandle HoldTimer; // 0x360(0x08)
	bool isHeld; // 0x368(0x01)

	void UseKeyPressed(); // Function HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C.UseKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void holdComplete(); // Function HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C.holdComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UseKeyReleased(); // Function HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C.UseKeyReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HoldKeyboardKeyBTN(int32_t EntryPoint); // Function HoldKeyboardKeyBTN.HoldKeyboardKeyBTN_C.ExecuteUbergraph_HoldKeyboardKeyBTN // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

