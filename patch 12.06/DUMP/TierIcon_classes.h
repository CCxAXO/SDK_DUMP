// WidgetBlueprintGeneratedClass TierIcon.TierIcon_C
// Size: 0x372 (Inherited: 0x318)
struct UTierIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UWidgetAnimation* XEAnim; // 0x328(0x08)
	struct USizeBox* Placeholder; // 0x330(0x08)
	struct UImage* TierIcon; // 0x338(0x08)
	struct UImage* TierIconAdditive; // 0x340(0x08)
	struct UOverlay* TierOverlay; // 0x348(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x350(0x08)
	struct UImage* XEIconAdditive; // 0x358(0x08)
	bool IsExclusiveSkin; // 0x360(0x01)
	bool IsOwned; // 0x361(0x01)
	char pad_362[0x6]; // 0x362(0x06)
	struct UMaterialInstanceDynamic* AdditiveMaterial; // 0x368(0x08)
	bool HideIfOwned; // 0x370(0x01)
	bool ShowXEAnim; // 0x371(0x01)

	void PlayUnHoverAnim(); // Function TierIcon.TierIcon_C.PlayUnHoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayHoverAnim(); // Function TierIcon.TierIcon_C.PlayHoverAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopXEAnim(); // Function TierIcon.TierIcon_C.StopXEAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayXEAnim(); // Function TierIcon.TierIcon_C.PlayXEAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldShowIcon(bool& ShouldShow); // Function TierIcon.TierIcon_C.ShouldShowIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void ShouldShowXEIconAdditive(bool& ShouldShow); // Function TierIcon.TierIcon_C.ShouldShowXEIconAdditive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIconVisibility(enum class ESlateVisibility VisibilitySetting); // Function TierIcon.TierIcon_C.SetIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSkinlineUI(struct UEquippableSkinHandle* SkinHandle); // Function TierIcon.TierIcon_C.UpdateSkinlineUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TierIcon.TierIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TierIcon.TierIcon_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TierIcon(int32_t EntryPoint); // Function TierIcon.TierIcon_C.ExecuteUbergraph_TierIcon // (Final|UbergraphFunction) // @ game+0x1b42740
};

