// WidgetBlueprintGeneratedClass InterfaceControls_VoteSettings.InterfaceControls_VoteSettings_C
// Size: 0x360 (Inherited: 0x318)
struct UInterfaceControls_VoteSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USettingsV2_Subheader_C* VoteHeader; // 0x320(0x08)
	struct UActionBindingWidget_C* VoteOption0; // 0x328(0x08)
	struct UActionBindingWidget_C* VoteOption1; // 0x330(0x08)
	struct UActionBindingWidget_C* VoteOption2; // 0x338(0x08)
	struct UActionBindingWidget_C* VoteOption3; // 0x340(0x08)
	struct UVerticalBox* VoteSubsection; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)

	void Construct(); // Function InterfaceControls_VoteSettings.InterfaceControls_VoteSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InterfaceControls_VoteSettings(int32_t EntryPoint); // Function InterfaceControls_VoteSettings.InterfaceControls_VoteSettings_C.ExecuteUbergraph_InterfaceControls_VoteSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

