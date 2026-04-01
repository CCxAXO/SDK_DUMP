// WidgetBlueprintGeneratedClass Ping_Caution_MinimapWidget.Ping_Caution_MinimapWidget_C
// Size: 0x4c0 (Inherited: 0x490)
struct UPing_Caution_MinimapWidget_C : UMissingMinimapWidget_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UWidgetAnimation* Pulse_v2; // 0x498(0x08)
	struct UImage* PingIcon; // 0x4a0(0x08)
	struct UImage* pulseRing; // 0x4a8(0x08)
	struct UMaterialInstance* MI_Ping_Ring_Caution; // 0x4b0(0x08)
	struct UMaterialInstanceDynamic* MID_Ping_Ring_Caution; // 0x4b8(0x08)

	void PreConstruct(bool IsDesignTime); // Function Ping_Caution_MinimapWidget.Ping_Caution_MinimapWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Ping_Caution_MinimapWidget.Ping_Caution_MinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Ping_Caution_MinimapWidget(int32_t EntryPoint); // Function Ping_Caution_MinimapWidget.Ping_Caution_MinimapWidget_C.ExecuteUbergraph_Ping_Caution_MinimapWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

