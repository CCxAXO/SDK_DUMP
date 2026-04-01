// WidgetBlueprintGeneratedClass WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C
// Size: 0x1b24 (Inherited: 0x1ae0)
struct UWBP_Panel_CheckToggleIndicator_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UScaleBox* LevelDetails; // 0x1ae8(0x08)
	struct UAresTextBlock* LevelName; // 0x1af0(0x08)
	struct UAresTextBlock* LevelNumber; // 0x1af8(0x08)
	struct FName BaseSelectedParameterName; // 0x1b00(0x0c)
	char pad_1B0C[0x4]; // 0x1b0c(0x04)
	struct UVM_WeaponSkinLevel_C* WeaponSkinLevelVM; // 0x1b10(0x08)
	bool ShowLevelDetails; // 0x1b18(0x01)
	char pad_1B19[0x3]; // 0x1b19(0x03)
	int32_t CurrentLevel; // 0x1b1c(0x04)
	int32_t MaxLevel; // 0x1b20(0x04)

	void InitFromEquippableSkinHandle(int32_t SkinLevel, struct UEquippableSkinHandle* EquippableSkinHandle); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.InitFromEquippableSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelNumberChanged(struct FText LevelNumberText); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.OnLevelNumberChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelNameChanged(struct FText New Value); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.OnLevelNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOwned(bool IsOwned); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.SetOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetEquipped(bool IsEquipped); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.SetEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsEquippedChanged(bool NewValue); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.OnIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnedChanged(bool NewValue); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindViewModel(bool Bind); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.BindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateViewModel(); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.CreateViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set View Model(struct UVM_WeaponSkinLevel_C* InWeaponSkinLevelVM); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.Set View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLevelLinkVisibility(int32_t CurrentLevel, int32_t MaxLevel); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.SetLevelLinkVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_CheckToggleIndicator(int32_t EntryPoint); // Function WBP_Panel_CheckToggleIndicator.WBP_Panel_CheckToggleIndicator_C.ExecuteUbergraph_WBP_Panel_CheckToggleIndicator // (Final|UbergraphFunction) // @ game+0x1af5410
};

