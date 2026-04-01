// WidgetBlueprintGeneratedClass BoolGameRuleCustomSettingsWidget.BoolGameRuleCustomSettingsWidget_C
// Size: 0x439 (Inherited: 0x42a)
struct UBoolGameRuleCustomSettingsWidget_C : UBaseBoolOptionWidget_C {
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	enum class EGameRuleBoolName GameRule; // 0x438(0x01)

	void HandleValueUpdated(bool Value); // Function BoolGameRuleCustomSettingsWidget.BoolGameRuleCustomSettingsWidget_C.HandleValueUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function BoolGameRuleCustomSettingsWidget.BoolGameRuleCustomSettingsWidget_C.GameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BoolGameRuleCustomSettingsWidget.BoolGameRuleCustomSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BoolGameRuleCustomSettingsWidget(int32_t EntryPoint); // Function BoolGameRuleCustomSettingsWidget.BoolGameRuleCustomSettingsWidget_C.ExecuteUbergraph_BoolGameRuleCustomSettingsWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

