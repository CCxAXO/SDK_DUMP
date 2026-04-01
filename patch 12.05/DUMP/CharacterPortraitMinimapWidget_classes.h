// WidgetBlueprintGeneratedClass CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C
// Size: 0x378 (Inherited: 0x348)
struct UCharacterPortraitMinimapWidget_C : UShooterCharacterMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Console_Edge_ScaleDown; // 0x350(0x08)
	struct UWidgetAnimation* Console_Edge_ScaleUp; // 0x358(0x08)
	struct UImage* BombIcon; // 0x360(0x08)
	double MissingVisibleLifetime; // 0x368(0x08)
	double MissingFadeoutTime; // 0x370(0x08)

	void UpdatePanelSlot(); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.UpdatePanelSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Visibility(bool& IsVisible); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.Update Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Edge Fade Time(double Visible Lifetime, double Fadeout Time, double In Last Seen); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.Update Edge Fade Time // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Edge Widget Settings(); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.Update Edge Widget Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveSetState(); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleEdgeStateChange(bool bIsEdgeWidget); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.HandleEdgeStateChange // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CharacterPortraitMinimapWidget(int32_t EntryPoint); // Function CharacterPortraitMinimapWidget.CharacterPortraitMinimapWidget_C.ExecuteUbergraph_CharacterPortraitMinimapWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

