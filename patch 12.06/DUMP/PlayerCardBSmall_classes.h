// WidgetBlueprintGeneratedClass PlayerCardBSmall.PlayerCardBSmall_C
// Size: 0x33a (Inherited: 0x318)
struct UPlayerCardBSmall_C : UPlayerCardB_Small_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BasicPlating; // 0x320(0x08)
	struct UPremier_ChampsAura_C* ChampsAura; // 0x328(0x08)
	struct UImage* QualifiedPlating; // 0x330(0x08)
	bool ShowChampsAura; // 0x338(0x01)
	enum class EPremierPrestigePlating Plating; // 0x339(0x01)

	void SetA(bool ShowA); // Function PlayerCardBSmall.PlayerCardBSmall_C.SetA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPL(enum class EPremierPrestigePlating PL); // Function PlayerCardBSmall.PlayerCardBSmall_C.SetPL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerCardBSmall.PlayerCardBSmall_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PlayerCardBSmall.PlayerCardBSmall_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerCardBSmall(int32_t EntryPoint); // Function PlayerCardBSmall.PlayerCardBSmall_C.ExecuteUbergraph_PlayerCardBSmall // (Final|UbergraphFunction) // @ game+0x1b42740
};

