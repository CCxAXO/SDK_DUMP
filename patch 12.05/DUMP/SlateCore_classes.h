// Class SlateCore.SlateWidgetStyleAsset
// Size: 0x38 (Inherited: 0x30)
struct USlateWidgetStyleAsset : UObject {
	struct USlateWidgetStyleContainerBase* CustomStyle; // 0x30(0x08)
};

// Class SlateCore.FontBulkData
// Size: 0x80 (Inherited: 0x30)
struct UFontBulkData : UObject {
	char pad_30[0x50]; // 0x30(0x50)
};

// Class SlateCore.FontFaceInterface
// Size: 0x30 (Inherited: 0x30)
struct UFontFaceInterface : UInterface {
};

// Class SlateCore.FontProviderInterface
// Size: 0x30 (Inherited: 0x30)
struct UFontProviderInterface : UInterface {
};

// Class SlateCore.SlateTypes
// Size: 0x30 (Inherited: 0x30)
struct USlateTypes : UObject {
};

// Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x38 (Inherited: 0x30)
struct USlateWidgetStyleContainerBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x30 (Inherited: 0x30)
struct USlateWidgetStyleContainerInterface : UInterface {
};

// Class SlateCore.SlateThemeManager
// Size: 0x9c8 (Inherited: 0x30)
struct USlateThemeManager : UObject {
	struct FGuid CurrentThemeId; // 0x30(0x10)
	struct FStyleColorList ActiveColors; // 0x40(0x988)
};

