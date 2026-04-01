// WidgetBlueprintGeneratedClass CharacterSelectRecapPlayer.CharacterSelectRecapPlayer_C
// Size: 0x339 (Inherited: 0x320)
struct UCharacterSelectRecapPlayer_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* CheckBox; // 0x328(0x08)
	struct UImage* Checkmark; // 0x330(0x08)
	bool IsChecked; // 0x338(0x01)

	void SetIsChecked(bool Value); // Function CharacterSelectRecapPlayer.CharacterSelectRecapPlayer_C.SetIsChecked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CharacterSelectRecapPlayer.CharacterSelectRecapPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function CharacterSelectRecapPlayer.CharacterSelectRecapPlayer_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSelectRecapPlayer(int32_t EntryPoint); // Function CharacterSelectRecapPlayer.CharacterSelectRecapPlayer_C.ExecuteUbergraph_CharacterSelectRecapPlayer // (Final|UbergraphFunction) // @ game+0x1b42740
};

