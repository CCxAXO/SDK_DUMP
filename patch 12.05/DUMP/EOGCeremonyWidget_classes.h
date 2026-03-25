// WidgetBlueprintGeneratedClass EOGCeremonyWidget.EOGCeremonyWidget_C
// Size: 0x338 (Inherited: 0x318)
struct UEOGCeremonyWidget_C : UUserWidget {
	struct FMulticastInlineDelegate CeremonyComplete; // 0x318(0x10)
	struct FMulticastInlineDelegate SkipCeremony; // 0x328(0x10)

	void CallCeremonyComplete(); // Function EOGCeremonyWidget.EOGCeremonyWidget_C.CallCeremonyComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerCeremony(); // Function EOGCeremonyWidget.EOGCeremonyWidget_C.TriggerCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitData(); // Function EOGCeremonyWidget.EOGCeremonyWidget_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SkipCeremony__DelegateSignature(); // Function EOGCeremonyWidget.EOGCeremonyWidget_C.SkipCeremony__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CeremonyComplete__DelegateSignature(); // Function EOGCeremonyWidget.EOGCeremonyWidget_C.CeremonyComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

