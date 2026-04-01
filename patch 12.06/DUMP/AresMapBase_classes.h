// WidgetBlueprintGeneratedClass AresMapBase.AresMapBase_C
// Size: 0x358 (Inherited: 0x318)
struct UAresMapBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresMinimapPanel* AresMinimapPanel_40; // 0x320(0x08)
	struct UImage* Map; // 0x328(0x08)
	int32_t VisibleLayers; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FVector2D Original Size; // 0x338(0x10)
	bool bShouldCenterOnCharacter; // 0x348(0x01)
	bool bMinimapHasFixedRotation; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	double MinimapZoom; // 0x350(0x08)

	void IsLayerVisible(enum class EAresMinimapLayer Layer, bool& bVisible); // Function AresMapBase.AresMapBase_C.IsLayerVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLayerVisibility(enum class EAresMinimapLayer Layer, bool bVisible); // Function AresMapBase.AresMapBase_C.SetLayerVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresMapBase.AresMapBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_1(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function AresMapBase.AresMapBase_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AresMapBase.AresMapBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_2(enum class EAresFloatSettingName SettingName, float OldValue, float NewValue); // Function AresMapBase.AresMapBase_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function AresMapBase.AresMapBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_3(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function AresMapBase.AresMapBase_C.CustomEvent_3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamChanged_Event_1(); // Function AresMapBase.AresMapBase_C.OnTeamChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_4(); // Function AresMapBase.AresMapBase_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMinimapTextureUpdated(); // Function AresMapBase.AresMapBase_C.OnMinimapTextureUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AresMapBase(int32_t EntryPoint); // Function AresMapBase.AresMapBase_C.ExecuteUbergraph_AresMapBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

