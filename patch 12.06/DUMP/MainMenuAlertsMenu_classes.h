// WidgetBlueprintGeneratedClass MainMenuAlertsMenu.MainMenuAlertsMenu_C
// Size: 0x378 (Inherited: 0x318)
struct UMainMenuAlertsMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* AccentTopLeft; // 0x320(0x08)
	struct UImage* AccentTopMid; // 0x328(0x08)
	struct UImage* AccentTopRight; // 0x330(0x08)
	struct UVerticalBox* AlertStatuses; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct UImage* Image_2; // 0x348(0x08)
	struct UImage* Image_3; // 0x350(0x08)
	struct FMargin AlertStatusesPadding; // 0x358(0x10)
	struct TArray<struct FTickerStatus> Statuses; // 0x368(0x10)

	void Construct(); // Function MainMenuAlertsMenu.MainMenuAlertsMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MainMenuAlertsMenu.MainMenuAlertsMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MainMenuAlertsMenu(int32_t EntryPoint); // Function MainMenuAlertsMenu.MainMenuAlertsMenu_C.ExecuteUbergraph_MainMenuAlertsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

