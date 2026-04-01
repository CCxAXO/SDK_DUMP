// WidgetBlueprintGeneratedClass ObserverKeybindMinimapWidget.ObserverKeybindMinimapWidget_C
// Size: 0x360 (Inherited: 0x348)
struct UObserverKeybindMinimapWidget_C : UShooterCharacterMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UTextBlock* InputActionLabel; // 0x350(0x08)
	struct AShooterCharacter* Character; // 0x358(0x08)

	void ReceiveSetState(); // Function ObserverKeybindMinimapWidget.ObserverKeybindMinimapWidget_C.ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ObserverKeybindMinimapWidget(int32_t EntryPoint); // Function ObserverKeybindMinimapWidget.ObserverKeybindMinimapWidget_C.ExecuteUbergraph_ObserverKeybindMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

