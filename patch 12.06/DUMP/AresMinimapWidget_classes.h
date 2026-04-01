// WidgetBlueprintGeneratedClass AresMinimapWidget.AresMinimapWidget_C
// Size: 0x481 (Inherited: 0x338)
struct UAresMinimapWidget_C : UAresMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* Outro; // 0x340(0x08)
	struct UWidgetAnimation* Intro; // 0x348(0x08)
	struct UImage* MinimapOffsiteImage; // 0x350(0x08)
	enum class EAresMinimapLayer MinimapLayer; // 0x358(0x01)
	enum class EAresMinimapPositionSpace Minimap Position Space; // 0x359(0x01)
	enum class EAresMinimapRotationSpace Minimap Rotation Space; // 0x35a(0x01)
	enum class EAresMinimapSizeSpace Minimap Size Space; // 0x35b(0x01)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FVector Minimap Position; // 0x360(0x18)
	double Minimap Rotation; // 0x378(0x08)
	struct FVector Minimap Size; // 0x380(0x18)
	char pad_398[0x8]; // 0x398(0x08)
	struct FSlateBrush Brush; // 0x3a0(0xd0)
	struct FVector2D Alignment; // 0x470(0x10)
	bool Draw Off Map; // 0x480(0x01)

	void PreConstruct(bool IsDesignTime); // Function AresMinimapWidget.AresMinimapWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AresMinimapWidget.AresMinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresMinimapWidget.AresMinimapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AresMinimapWidget(int32_t EntryPoint); // Function AresMinimapWidget.AresMinimapWidget_C.ExecuteUbergraph_AresMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

