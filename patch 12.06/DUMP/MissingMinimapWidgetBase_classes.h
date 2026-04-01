// WidgetBlueprintGeneratedClass MissingMinimapWidgetBase.MissingMinimapWidgetBase_C
// Size: 0x471 (Inherited: 0x340)
struct UMissingMinimapWidgetBase_C : UMissingMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	enum class EAresMinimapLayer MinimapLayer; // 0x348(0x01)
	enum class EAresMinimapPositionSpace Minimap Position Space; // 0x349(0x01)
	enum class EAresMinimapRotationSpace Minimap Rotation Space; // 0x34a(0x01)
	enum class EAresMinimapSizeSpace Minimap Size Space; // 0x34b(0x01)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FVector Minimap Position; // 0x350(0x18)
	double Minimap Rotation; // 0x368(0x08)
	struct FVector Minimap Size; // 0x370(0x18)
	char pad_388[0x8]; // 0x388(0x08)
	struct FSlateBrush Brush; // 0x390(0xd0)
	struct FVector2D Alignment; // 0x460(0x10)
	bool Draw Off Map; // 0x470(0x01)

	void SetAuthoredSlotValues(); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.SetAuthoredSlotValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MissingMinimapWidgetBase(int32_t EntryPoint); // Function MissingMinimapWidgetBase.MissingMinimapWidgetBase_C.ExecuteUbergraph_MissingMinimapWidgetBase // (Final|UbergraphFunction) // @ game+0x1b42740
};

