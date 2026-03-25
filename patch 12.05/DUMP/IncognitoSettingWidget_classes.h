// WidgetBlueprintGeneratedClass IncognitoSettingWidget.IncognitoSettingWidget_C
// Size: 0x439 (Inherited: 0x42a)
struct UIncognitoSettingWidget_C : UBaseBoolOptionWidget_C {
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	enum class EAresVoidSettingName SettingName; // 0x438(0x01)

	bool ShouldDisplay(); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshValue(); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.RefreshValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleValueUpdated(bool Value); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.HandleValueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIncognitoChanged(); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.HandleIncognitoChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_IncognitoSettingWidget(int32_t EntryPoint); // Function IncognitoSettingWidget.IncognitoSettingWidget_C.ExecuteUbergraph_IncognitoSettingWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

