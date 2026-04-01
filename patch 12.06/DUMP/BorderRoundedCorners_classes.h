// WidgetBlueprintGeneratedClass BorderRoundedCorners.BorderRoundedCorners_C
// Size: 0x348 (Inherited: 0x318)
struct UBorderRoundedCorners_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* BorderSlot; // 0x320(0x08)
	struct UBorder* RoundedBorder; // 0x328(0x08)
	double CornerRadius; // 0x330(0x08)
	struct FLinearColor BorderColor; // 0x338(0x10)

	void ResetBorderColor(); // Function BorderRoundedCorners.BorderRoundedCorners_C.ResetBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBorderColor(struct FLinearColor Color); // Function BorderRoundedCorners.BorderRoundedCorners_C.SetBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function BorderRoundedCorners.BorderRoundedCorners_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BorderRoundedCorners(int32_t EntryPoint); // Function BorderRoundedCorners.BorderRoundedCorners_C.ExecuteUbergraph_BorderRoundedCorners // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

