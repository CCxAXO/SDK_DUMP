// WidgetBlueprintGeneratedClass MainMenuAlert.MainMenuAlert_C
// Size: 0x379 (Inherited: 0x318)
struct UMainMenuAlert_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* ErrorBox; // 0x320(0x08)
	struct UButton* ErrorImage; // 0x328(0x08)
	struct UMenuAnchor* MenuAnchor_1; // 0x330(0x08)
	struct USizeBox* OkBox; // 0x338(0x08)
	struct UImage* OkImage; // 0x340(0x08)
	struct UWidgetSwitcher* StatusSwitcher; // 0x348(0x08)
	struct USizeBox* WarningBox; // 0x350(0x08)
	struct UButton* WarningImage; // 0x358(0x08)
	enum class ETickerSeverity TickerSeverity; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct TArray<struct FTickerStatus> Statuses; // 0x368(0x10)
	enum class EMenuPlacement MenuAnchorPlacement; // 0x378(0x01)

	void ToggleAlert(); // Function MainMenuAlert.MainMenuAlert_C.ToggleAlert // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVariables(struct UServiceTickerManager* TickerManager); // Function MainMenuAlert.MainMenuAlert_C.UpdateVariables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDisplay(); // Function MainMenuAlert.MainMenuAlert_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGetMenuContent_1(); // Function MainMenuAlert.MainMenuAlert_C.OnGetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MainMenuAlert.MainMenuAlert_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnTickerChanged(); // Function MainMenuAlert.MainMenuAlert_C.OnTickerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MainMenuAlert.MainMenuAlert_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function MainMenuAlert.MainMenuAlert_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MainMenuAlert(int32_t EntryPoint); // Function MainMenuAlert.MainMenuAlert_C.ExecuteUbergraph_MainMenuAlert // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

