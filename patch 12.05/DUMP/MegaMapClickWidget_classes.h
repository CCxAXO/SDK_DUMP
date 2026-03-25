// WidgetBlueprintGeneratedClass MegaMapClickWidget.MegaMapClickWidget_C
// Size: 0x3b8 (Inherited: 0x350)
struct UMegaMapClickWidget_C : UClickableMapWidget {
	struct UBorder* MapBorder; // 0x350(0x08)
	struct URadialMenu_C* PingWheel; // 0x358(0x08)
	struct UBorder* ScreenBorder; // 0x360(0x08)
	struct TArray<struct UTexture*> PingIcons; // 0x368(0x10)
	struct FVector2D CachedMousePosition; // 0x378(0x10)
	bool IsPingWheelValid; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FKey mouseButtonPressed; // 0x390(0x20)
	struct ApingPreActor_C* pingPreActor; // 0x3b0(0x08)
};

