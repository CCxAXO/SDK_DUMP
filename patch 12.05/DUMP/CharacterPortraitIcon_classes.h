// WidgetBlueprintGeneratedClass CharacterPortraitIcon.CharacterPortraitIcon_C
// Size: 0x330 (Inherited: 0x320)
struct UCharacterPortraitIcon_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Portrait; // 0x328(0x08)

	void SetCharacterData(struct UCharacterUIData* CharacterUIData); // Function CharacterPortraitIcon.CharacterPortraitIcon_C.SetCharacterData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterPortraitIcon.CharacterPortraitIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterPortraitIcon(int32_t EntryPoint); // Function CharacterPortraitIcon.CharacterPortraitIcon_C.ExecuteUbergraph_CharacterPortraitIcon // (Final|UbergraphFunction) // @ game+0x1af5410
};

