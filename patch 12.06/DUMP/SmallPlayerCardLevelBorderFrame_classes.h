// WidgetBlueprintGeneratedClass SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C
// Size: 0x351 (Inherited: 0x318)
struct USmallPlayerCardLevelBorderFrame_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* BorderType; // 0x320(0x08)
	struct UNamedSlot* Contents; // 0x328(0x08)
	struct UImage* LevelBorder; // 0x330(0x08)
	struct UImage* NoPlBorder; // 0x338(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PlayerCardB; // 0x340(0x08)
	struct UOverlay* PlayerCardBorder; // 0x348(0x08)
	bool hideAccountLevelBorder; // 0x350(0x01)

	void SetP(enum class EPremierPrestigePlating PL, bool SA); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.SetP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHideAccountLevelBorder(bool hideAccountLevelBorder); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.SetHideAccountLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBorder(struct ULevelBorderDataAsset* AccountLevelBorder); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.SetBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBorderLoaded(struct ULevelBorderHandle* LevelBorderHandle); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.OnBorderLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SmallPlayerCardLevelBorderFrame(int32_t EntryPoint); // Function SmallPlayerCardLevelBorderFrame.SmallPlayerCardLevelBorderFrame_C.ExecuteUbergraph_SmallPlayerCardLevelBorderFrame // (Final|UbergraphFunction) // @ game+0x1b42740
};

