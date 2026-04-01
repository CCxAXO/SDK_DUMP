// WidgetBlueprintGeneratedClass TeamAccent.TeamAccent_C
// Size: 0x342 (Inherited: 0x318)
struct UTeamAccent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AllyColor; // 0x320(0x08)
	struct UImage* EnemyColor; // 0x328(0x08)
	struct UImage* MeColor; // 0x330(0x08)
	struct UWidgetSwitcher* Switcher; // 0x338(0x08)
	bool Ally; // 0x340(0x01)
	bool Me; // 0x341(0x01)

	void SetAllyandMe(bool Ally, bool Me); // Function TeamAccent.TeamAccent_C.SetAllyandMe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TeamAccent.TeamAccent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TeamAccent.TeamAccent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TeamAccent(int32_t EntryPoint); // Function TeamAccent.TeamAccent_C.ExecuteUbergraph_TeamAccent // (Final|UbergraphFunction) // @ game+0x1b42740
};

