// WidgetBlueprintGeneratedClass CharacterIconSlot.CharacterIconSlot_C
// Size: 0x35a (Inherited: 0x318)
struct UCharacterIconSlot_C : UCharacterIconSlot_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* bottom_corner; // 0x320(0x08)
	struct UNamedSlot* CharacterIconSlot; // 0x328(0x08)
	struct UImage* Corner; // 0x330(0x08)
	struct UImage* Corner_4; // 0x338(0x08)
	struct UImage* Logo_2; // 0x340(0x08)
	struct UOverlay* logocorner_2; // 0x348(0x08)
	struct UOverlay* premier; // 0x350(0x08)
	bool Premier_ShouldShowCover; // 0x358(0x01)
	bool Premier_IsLeftSide; // 0x359(0x01)

	void UpdatePremier(bool ShowCover, bool IsLeft); // Function CharacterIconSlot.CharacterIconSlot_C.UpdatePremier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_SetSide(bool LeftSide); // Function CharacterIconSlot.CharacterIconSlot_C.Premier_SetSide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Premier_ShowCover(bool ShowCover); // Function CharacterIconSlot.CharacterIconSlot_C.Premier_ShowCover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CharacterIconSlot.CharacterIconSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterIconSlot(int32_t EntryPoint); // Function CharacterIconSlot.CharacterIconSlot_C.ExecuteUbergraph_CharacterIconSlot // (Final|UbergraphFunction) // @ game+0x1b42740
};

