// Enum AudioWidgets.EAudioRadialSliderLayout
enum class EAudioRadialSliderLayout : uint8 {
	Layout_LabelTop = 0,
	Layout_LabelCenter = 1,
	Layout_LabelBottom = 2,
	Layout_MAX = 3
};

// ScriptStruct AudioWidgets.MeterChannelInfo
// Size: 0x0c (Inherited: 0x00)
struct FMeterChannelInfo {
	float MeterValue; // 0x00(0x04)
	float PeakValue; // 0x04(0x04)
	float ClippingValue; // 0x08(0x04)
};

// ScriptStruct AudioWidgets.AudioMeterStyle
// Size: 0x4d0 (Inherited: 0x08)
struct FAudioMeterStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush MeterValueImage; // 0x10(0xd0)
	struct FSlateBrush BackgroundImage; // 0xe0(0xd0)
	struct FSlateBrush MeterBackgroundImage; // 0x1b0(0xd0)
	struct FSlateBrush MeterValueBackgroundImage; // 0x280(0xd0)
	struct FSlateBrush MeterPeakImage; // 0x350(0xd0)
	struct FVector2D MeterSize; // 0x420(0x10)
	struct FVector2D MeterPadding; // 0x430(0x10)
	float MeterValuePadding; // 0x440(0x04)
	float PeakValueWidth; // 0x444(0x04)
	struct FVector2D ValueRangeDb; // 0x448(0x10)
	bool bShowScale; // 0x458(0x01)
	bool bScaleSide; // 0x459(0x01)
	char pad_45A[0x2]; // 0x45a(0x02)
	float ScaleHashOffset; // 0x45c(0x04)
	float ScaleHashWidth; // 0x460(0x04)
	float ScaleHashHeight; // 0x464(0x04)
	int32_t DecibelsPerHash; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FSlateFontInfo Font; // 0x470(0x60)
};

// ScriptStruct AudioWidgets.AudioTextBoxStyle
// Size: 0x100 (Inherited: 0x08)
struct FAudioTextBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundImage; // 0x10(0xd0)
	struct FSlateColor BackgroundColor; // 0xe0(0x14)
	char pad_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct AudioWidgets.AudioSliderStyle
// Size: 0x750 (Inherited: 0x08)
struct FAudioSliderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSliderStyle SliderStyle; // 0x10(0x500)
	struct FAudioTextBoxStyle TextBoxStyle; // 0x510(0x100)
	struct FSlateBrush WidgetBackgroundImage; // 0x610(0xd0)
	struct FSlateColor SliderBackgroundColor; // 0x6e0(0x14)
	char pad_6F4[0x4]; // 0x6f4(0x04)
	struct FVector2D SliderBackgroundSize; // 0x6f8(0x10)
	float LabelPadding; // 0x708(0x04)
	struct FSlateColor SliderBarColor; // 0x70c(0x14)
	struct FSlateColor SliderThumbColor; // 0x720(0x14)
	struct FSlateColor WidgetBackgroundColor; // 0x734(0x14)
	char pad_748[0x8]; // 0x748(0x08)
};

// ScriptStruct AudioWidgets.AudioRadialSliderStyle
// Size: 0x160 (Inherited: 0x08)
struct FAudioRadialSliderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FAudioTextBoxStyle TextBoxStyle; // 0x10(0x100)
	struct FSlateColor CenterBackgroundColor; // 0x110(0x14)
	struct FSlateColor SliderBarColor; // 0x124(0x14)
	struct FSlateColor SliderProgressColor; // 0x138(0x14)
	float LabelPadding; // 0x14c(0x04)
	float DefaultSliderRadius; // 0x150(0x04)
	char pad_154[0xc]; // 0x154(0x0c)
};

// ScriptStruct AudioWidgets.SampledSequenceViewerStyle
// Size: 0x160 (Inherited: 0x08)
struct FSampledSequenceViewerStyle : FSlateWidgetStyle {
	struct FSlateColor SequenceColor; // 0x08(0x14)
	float SequenceLineThickness; // 0x1c(0x04)
	struct FSlateColor MajorGridLineColor; // 0x20(0x14)
	struct FSlateColor MinorGridLineColor; // 0x34(0x14)
	struct FSlateColor ZeroCrossingLineColor; // 0x48(0x14)
	float ZeroCrossingLineThickness; // 0x5c(0x04)
	float SampleMarkersSize; // 0x60(0x04)
	struct FSlateColor SequenceBackgroundColor; // 0x64(0x14)
	char pad_78[0x8]; // 0x78(0x08)
	struct FSlateBrush BackgroundBrush; // 0x80(0xd0)
	float DesiredWidth; // 0x150(0x04)
	float DesiredHeight; // 0x154(0x04)
	char pad_158[0x8]; // 0x158(0x08)
};

// ScriptStruct AudioWidgets.PlayheadOverlayStyle
// Size: 0x28 (Inherited: 0x08)
struct FPlayheadOverlayStyle : FSlateWidgetStyle {
	struct FSlateColor PlayheadColor; // 0x08(0x14)
	float PlayheadWidth; // 0x1c(0x04)
	float DesiredWidth; // 0x20(0x04)
	float DesiredHeight; // 0x24(0x04)
};

// ScriptStruct AudioWidgets.FixedSampleSequenceRulerStyle
// Size: 0x270 (Inherited: 0x08)
struct FFixedSampleSequenceRulerStyle : FSlateWidgetStyle {
	float HandleWidth; // 0x08(0x04)
	struct FSlateColor HandleColor; // 0x0c(0x14)
	struct FSlateBrush HandleBrush; // 0x20(0xd0)
	struct FSlateColor TicksColor; // 0xf0(0x14)
	struct FSlateColor TicksTextColor; // 0x104(0x14)
	struct FSlateFontInfo TicksTextFont; // 0x118(0x60)
	float TicksTextOffset; // 0x178(0x04)
	struct FSlateColor BackgroundColor; // 0x17c(0x14)
	struct FSlateBrush BackgroundBrush; // 0x190(0xd0)
	float DesiredWidth; // 0x260(0x04)
	float DesiredHeight; // 0x264(0x04)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct AudioWidgets.SampledSequenceValueGridOverlayStyle
// Size: 0xa0 (Inherited: 0x08)
struct FSampledSequenceValueGridOverlayStyle : FSlateWidgetStyle {
	struct FSlateColor GridColor; // 0x08(0x14)
	float GridThickness; // 0x1c(0x04)
	struct FSlateColor LabelTextColor; // 0x20(0x14)
	char pad_34[0x4]; // 0x34(0x04)
	struct FSlateFontInfo LabelTextFont; // 0x38(0x60)
	float DesiredWidth; // 0x98(0x04)
	float DesiredHeight; // 0x9c(0x04)
};

