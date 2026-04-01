// WidgetBlueprintGeneratedClass WBP_Panel_PickemResultBadge.WBP_Panel_PickemResultBadge_C
// Size: 0x3d8 (Inherited: 0x318)
struct UWBP_Panel_PickemResultBadge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_Circle; // 0x320(0x08)
	struct UImage* Image_Glow; // 0x328(0x08)
	struct UImage* Image_ResultIcon; // 0x330(0x08)
	struct FSlateColor NoResultColor; // 0x338(0x14)
	struct FSlateColor IncorrectColor; // 0x34c(0x14)
	struct FSlateColor PartiallyCorrectColor; // 0x360(0x14)
	struct FSlateColor CorrectColor; // 0x374(0x14)
	struct FSlateColor PerfectColor; // 0x388(0x14)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UTexture2D* NoResultIcon; // 0x3a0(0x08)
	struct UTexture2D* IncorrectIcon; // 0x3a8(0x08)
	struct UTexture2D* PartiallyCorrectIcon; // 0x3b0(0x08)
	struct UTexture2D* CorrectIcon; // 0x3b8(0x08)
	enum class EAresPickemResult ResultType; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	struct FSlateColor ResultIconColor; // 0x3c4(0x14)

	struct FSlateColor GetResultTypeColor(enum class EAresPickemResult ResultType); // Function WBP_Panel_PickemResultBadge.WBP_Panel_PickemResultBadge_C.GetResultTypeColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetAppearance(enum class EAresPickemResult InResultType); // Function WBP_Panel_PickemResultBadge.WBP_Panel_PickemResultBadge_C.SetAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemResultBadge.WBP_Panel_PickemResultBadge_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemResultBadge(int32_t EntryPoint); // Function WBP_Panel_PickemResultBadge.WBP_Panel_PickemResultBadge_C.ExecuteUbergraph_WBP_Panel_PickemResultBadge // (Final|UbergraphFunction) // @ game+0x1b42740
};

