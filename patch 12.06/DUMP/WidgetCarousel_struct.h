// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x5b0 (Inherited: 0x08)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FButtonStyle InnerButtonStyle; // 0x10(0x400)
	struct FSlateBrush NavigationButtonLeftImage; // 0x410(0xd0)
	struct FSlateBrush NavigationButtonRightImage; // 0x4e0(0xd0)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0xce0 (Inherited: 0x08)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush HighlightBrush; // 0x10(0xd0)
	struct FButtonStyle LeftButtonStyle; // 0xe0(0x400)
	struct FButtonStyle CenterButtonStyle; // 0x4e0(0x400)
	struct FButtonStyle RightButtonStyle; // 0x8e0(0x400)
};

