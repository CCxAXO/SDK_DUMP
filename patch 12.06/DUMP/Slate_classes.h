// Class Slate.ToolMenuBase
// Size: 0x30 (Inherited: 0x30)
struct UToolMenuBase : UObject {
};

// Class Slate.SlateSettings
// Size: 0x38 (Inherited: 0x30)
struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Slate.ButtonWidgetStyle
// Size: 0x440 (Inherited: 0x38)
struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FButtonStyle ButtonStyle; // 0x40(0x400)
};

// Class Slate.CheckBoxWidgetStyle
// Size: 0xb20 (Inherited: 0x38)
struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FCheckBoxStyle CheckBoxStyle; // 0x40(0xae0)
};

// Class Slate.ComboBoxWidgetStyle
// Size: 0x6c0 (Inherited: 0x38)
struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FComboBoxStyle ComboBoxStyle; // 0x40(0x680)
};

// Class Slate.ComboButtonWidgetStyle
// Size: 0x650 (Inherited: 0x38)
struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FComboButtonStyle ComboButtonStyle; // 0x40(0x610)
};

// Class Slate.EditableTextBoxWidgetStyle
// Size: 0xec0 (Inherited: 0x38)
struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x40(0xe80)
};

// Class Slate.EditableTextWidgetStyle
// Size: 0x330 (Inherited: 0x38)
struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FEditableTextStyle EditableTextStyle; // 0x40(0x2f0)
};

// Class Slate.ProgressWidgetStyle
// Size: 0x2d0 (Inherited: 0x38)
struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FProgressBarStyle ProgressBarStyle; // 0x40(0x290)
};

// Class Slate.ScrollBarWidgetStyle
// Size: 0x7b0 (Inherited: 0x38)
struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FScrollBarStyle ScrollBarStyle; // 0x40(0x770)
};

// Class Slate.ScrollBoxWidgetStyle
// Size: 0x3b0 (Inherited: 0x38)
struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FScrollBoxStyle ScrollBoxStyle; // 0x40(0x370)
};

// Class Slate.SpinBoxWidgetStyle
// Size: 0x640 (Inherited: 0x38)
struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSpinBoxStyle SpinBoxStyle; // 0x40(0x600)
};

// Class Slate.TextBlockWidgetStyle
// Size: 0x380 (Inherited: 0x38)
struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FTextBlockStyle TextBlockStyle; // 0x40(0x340)
};

