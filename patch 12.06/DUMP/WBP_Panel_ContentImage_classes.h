// WidgetBlueprintGeneratedClass WBP_Panel_ContentImage.WBP_Panel_ContentImage_C
// Size: 0x498 (Inherited: 0x3e0)
struct UWBP_Panel_ContentImage_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UNamedSlot* ContentToTransform; // 0x3e8(0x08)
	enum class EContentDisplayType DisplayType; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct TMap<enum class EContentDisplayType, struct FContentImageDisplayData> TransformMap; // 0x3f8(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> EquippableArchetypeMap; // 0x448(0x50)

	void Apply Transform(struct TSoftClassPtr<UObject> InEquippable, struct TSoftClassPtr<UObject> InUIData, bool OverrideTransformData, struct TMap<enum class EContentDisplayType, struct FContentImageDisplayData>& TransformMapOverride, struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>>& EquippableDataAssetOverride); // Function WBP_Panel_ContentImage.WBP_Panel_ContentImage_C.Apply Transform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ContentImage.WBP_Panel_ContentImage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContentImage(int32_t EntryPoint); // Function WBP_Panel_ContentImage.WBP_Panel_ContentImage_C.ExecuteUbergraph_WBP_Panel_ContentImage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

