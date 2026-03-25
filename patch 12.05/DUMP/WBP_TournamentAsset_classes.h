// WidgetBlueprintGeneratedClass WBP_TournamentAsset.WBP_TournamentAsset_C
// Size: 0x372 (Inherited: 0x318)
struct UWBP_TournamentAsset_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image_2; // 0x328(0x08)
	struct UImage* Image_3; // 0x330(0x08)
	struct UImage* Image_8; // 0x338(0x08)
	struct UImage* Image_9; // 0x340(0x08)
	struct UImage* Image_75; // 0x348(0x08)
	struct UImage* Image_92; // 0x350(0x08)
	struct UImage* PremierLogo; // 0x358(0x08)
	struct UTextBlock* T_PrimaryText; // 0x360(0x08)
	struct UTextBlock* T_SecondaryText; // 0x368(0x08)
	bool ShowTopArrow; // 0x370(0x01)
	bool ShowBotArrow; // 0x371(0x01)

	void UpdateTournamentText(struct FText PrimaryText, struct FText SecondaryText); // Function WBP_TournamentAsset.WBP_TournamentAsset_C.UpdateTournamentText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_TournamentAsset.WBP_TournamentAsset_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_TournamentAsset.WBP_TournamentAsset_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_TournamentAsset(int32_t EntryPoint); // Function WBP_TournamentAsset.WBP_TournamentAsset_C.ExecuteUbergraph_WBP_TournamentAsset // (Final|UbergraphFunction) // @ game+0x1af5410
};

