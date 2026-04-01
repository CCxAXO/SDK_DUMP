// WidgetBlueprintGeneratedClass BoolSettingsWidget.BoolSettingsWidget_C
// Size: 0x43c (Inherited: 0x42a)
struct UBoolSettingsWidget_C : UBaseBoolOptionWidget_C {
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	enum class EAresBoolSettingName SettingName; // 0x438(0x01)
	bool ShouldPersistSetting; // 0x439(0x01)
	bool AddedChangedEvent; // 0x43a(0x01)
	enum class ESlateVisibility DefaultVisibility; // 0x43b(0x01)

	void GetBoolSettingName(enum class EAresBoolSettingName& BoolSettingName); // Function BoolSettingsWidget.BoolSettingsWidget_C.GetBoolSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateVisibility(); // Function BoolSettingsWidget.BoolSettingsWidget_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeDefaultVisibility(enum class ESlateVisibility NewDefaultVisibility); // Function BoolSettingsWidget.BoolSettingsWidget_C.ChangeDefaultVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function BoolSettingsWidget.BoolSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BoolSettingsWidget.BoolSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function BoolSettingsWidget.BoolSettingsWidget_C.OnSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function BoolSettingsWidget.BoolSettingsWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function BoolSettingsWidget.BoolSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryDisplay(); // Function BoolSettingsWidget.BoolSettingsWidget_C.TryDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function BoolSettingsWidget.BoolSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleValueUpdated(bool Value); // Function BoolSettingsWidget.BoolSettingsWidget_C.HandleValueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBoolSettingVisual(); // Function BoolSettingsWidget.BoolSettingsWidget_C.RefreshBoolSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ChangeSettingName(enum class EAresBoolSettingName NewSettingName); // Function BoolSettingsWidget.BoolSettingsWidget_C.ChangeSettingName // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BoolSettingsWidget(int32_t EntryPoint); // Function BoolSettingsWidget.BoolSettingsWidget_C.ExecuteUbergraph_BoolSettingsWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

