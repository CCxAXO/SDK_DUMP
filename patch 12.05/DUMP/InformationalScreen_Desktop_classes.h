// WidgetBlueprintGeneratedClass InformationalScreen_Desktop.InformationalScreen_Desktop_C
// Size: 0x361 (Inherited: 0x349)
struct UInformationalScreen_Desktop_C : UInformationalScreen_C {
	char pad_349[0x7]; // 0x349(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UCombatReportHUDElement_Desktop_C* CombatReportHUDElement_Desktop; // 0x358(0x08)
	bool IsShopVisible; // 0x360(0x01)

	void ShouldOtherScreenOverrideVisibility(struct AShooterCharacter* InCharacter, struct AShooterGameState* InGameState, bool& OverrideVisibility, bool& CanBeVisible); // Function InformationalScreen_Desktop.InformationalScreen_Desktop_C.ShouldOtherScreenOverrideVisibility // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InformationalScreen_Desktop.InformationalScreen_Desktop_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShopVisUpdated(bool IsOpen); // Function InformationalScreen_Desktop.InformationalScreen_Desktop_C.OnShopVisUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InformationalScreen_Desktop(int32_t EntryPoint); // Function InformationalScreen_Desktop.InformationalScreen_Desktop_C.ExecuteUbergraph_InformationalScreen_Desktop // (Final|UbergraphFunction) // @ game+0x1af5410
};

