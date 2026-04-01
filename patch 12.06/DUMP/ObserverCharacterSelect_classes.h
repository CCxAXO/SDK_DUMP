// WidgetBlueprintGeneratedClass ObserverCharacterSelect.ObserverCharacterSelect_C
// Size: 0x380 (Inherited: 0x318)
struct UObserverCharacterSelect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPlayerList_C* Attackers; // 0x320(0x08)
	struct UCoach_C* AttackersCoach; // 0x328(0x08)
	struct UImage* bgcolor; // 0x330(0x08)
	struct UImage* BottomGradient; // 0x338(0x08)
	struct UPlayerList_C* Defenders; // 0x340(0x08)
	struct UCoach_C* DefendersCoach; // 0x348(0x08)
	struct UMapBackground_C* MapBackground; // 0x350(0x08)
	struct UMapPreview_C* MapPreview; // 0x358(0x08)
	struct UImage* RedBlueGradient; // 0x360(0x08)
	struct UTeamHeaders_C* TeamHeaders; // 0x368(0x08)
	bool Initialized; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UPregameViewController* ViewController; // 0x378(0x08)

	void TryInit(); // Function ObserverCharacterSelect.ObserverCharacterSelect_C.TryInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ObserverCharacterSelect.ObserverCharacterSelect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void IsSpectatorChanged(bool NewValue); // Function ObserverCharacterSelect.ObserverCharacterSelect_C.IsSpectatorChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ObserverCharacterSelect(int32_t EntryPoint); // Function ObserverCharacterSelect.ObserverCharacterSelect_C.ExecuteUbergraph_ObserverCharacterSelect // (Final|UbergraphFunction) // @ game+0x1b42740
};

