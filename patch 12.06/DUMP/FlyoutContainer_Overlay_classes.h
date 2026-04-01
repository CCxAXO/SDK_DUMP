// WidgetBlueprintGeneratedClass FlyoutContainer_Overlay.FlyoutContainer_Overlay_C
// Size: 0x3a9 (Inherited: 0x380)
struct UFlyoutContainer_Overlay_C : UFlyoutContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UOverlay* Overlay_Flyouts; // 0x388(0x08)
	enum class EHorizontalAlignment ChildHorizontalAlignment; // 0x390(0x01)
	enum class EVerticalAlignment ChildVerticalAlignment; // 0x391(0x01)
	bool bPositionAtAnchorX; // 0x392(0x01)
	bool bPositionAtAnchorY; // 0x393(0x01)
	bool bClampToContainerBounds; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct TArray<struct UFlyoutWidget*> FlyoutsToPosition; // 0x398(0x10)
	bool bPositionDynamically; // 0x3a8(0x01)

	void GetFlyoutMinMaxPositions(struct UFlyoutWidget* Flyout, struct FVector2D& MinPosition, struct FVector2D& MaxPosition); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.GetFlyoutMinMaxPositions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetFlyoutPivotPosition(struct UFlyoutWidget* Flyout, struct FVector2D& PivotPosition); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.GetFlyoutPivotPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void PositionFlyout(struct UFlyoutWidget* Flyout, bool& WasPositioned); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.PositionFlyout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddFlyoutAsChild(struct UFlyoutWidget* Flyout, struct UFlyoutAnchor* Anchor); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.AddFlyoutAsChild // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RemoveFlyoutAsChild(struct UFlyoutWidget* Flyout); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.RemoveFlyoutAsChild // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FlyoutContainer_Overlay(int32_t EntryPoint); // Function FlyoutContainer_Overlay.FlyoutContainer_Overlay_C.ExecuteUbergraph_FlyoutContainer_Overlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

