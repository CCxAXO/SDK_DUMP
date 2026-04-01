// WidgetBlueprintGeneratedClass SpectatorCountWidget.SpectatorCountWidget_C
// Size: 0x358 (Inherited: 0x330)
struct USpectatorCountWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UInvalidationBox* InvalidationBox_SpectatorCountWidget; // 0x338(0x08)
	struct UTextBlock* SpectatorCount; // 0x340(0x08)
	struct USizeBox* SpectatorsBox; // 0x348(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x350(0x08)

	void UpdateCount(int32_t& UpdatedCount); // Function SpectatorCountWidget.SpectatorCountWidget_C.UpdateCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function SpectatorCountWidget.SpectatorCountWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAliveStateChanged(bool NewValue); // Function SpectatorCountWidget.SpectatorCountWidget_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayersSpectatingUpdated_Event(); // Function SpectatorCountWidget.SpectatorCountWidget_C.OnPlayersSpectatingUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerStateListUpdated_Event(); // Function SpectatorCountWidget.SpectatorCountWidget_C.OnPlayerStateListUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SpawnedCharacterChanged_Event(struct AShooterCharacter* NewValue); // Function SpectatorCountWidget.SpectatorCountWidget_C.SpawnedCharacterChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVisibilitySettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function SpectatorCountWidget.SpectatorCountWidget_C.OnVisibilitySettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibility(); // Function SpectatorCountWidget.SpectatorCountWidget_C.UpdateVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SpectatorCountWidget(int32_t EntryPoint); // Function SpectatorCountWidget.SpectatorCountWidget_C.ExecuteUbergraph_SpectatorCountWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

