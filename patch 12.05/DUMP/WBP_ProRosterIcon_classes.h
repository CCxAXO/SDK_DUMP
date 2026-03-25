// WidgetBlueprintGeneratedClass WBP_ProRosterIcon.WBP_ProRosterIcon_C
// Size: 0x332 (Inherited: 0x318)
struct UWBP_ProRosterIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* ProIcon; // 0x320(0x08)
	struct UTextBlock* ProRosterTypeText; // 0x328(0x08)
	bool ShowText; // 0x330(0x01)
	enum class EPremierRosterType RosterType; // 0x331(0x01)

	void SetRosterType(enum class EPremierRosterType RosterType); // Function WBP_ProRosterIcon.WBP_ProRosterIcon_C.SetRosterType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_ProRosterIcon.WBP_ProRosterIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_ProRosterIcon(int32_t EntryPoint); // Function WBP_ProRosterIcon.WBP_ProRosterIcon_C.ExecuteUbergraph_WBP_ProRosterIcon // (Final|UbergraphFunction) // @ game+0x1af5410
};

