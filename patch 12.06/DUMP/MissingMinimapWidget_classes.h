// WidgetBlueprintGeneratedClass MissingMinimapWidget.MissingMinimapWidget_C
// Size: 0x490 (Inherited: 0x471)
struct UMissingMinimapWidget_C : UMissingMinimapWidgetBase_C {
	char pad_471[0x7]; // 0x471(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	double Visible Lifetime; // 0x480(0x08)
	double Fadeout Time; // 0x488(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MissingMinimapWidget.MissingMinimapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MissingMinimapWidget(int32_t EntryPoint); // Function MissingMinimapWidget.MissingMinimapWidget_C.ExecuteUbergraph_MissingMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

