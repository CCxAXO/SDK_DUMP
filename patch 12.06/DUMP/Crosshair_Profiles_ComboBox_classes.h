// WidgetBlueprintGeneratedClass Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C
// Size: 0x370 (Inherited: 0x318)
struct UCrosshair_Profiles_ComboBox_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UComboBoxString* ComboBox; // 0x320(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x328(0x08)
	struct FCrosshairProfileData CrosshairProfileData; // 0x330(0x18)
	int32_t MaxNumProfiles; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnCreateProfileSelected; // 0x350(0x10)
	struct FMulticastInlineDelegate OnSelectProfileSelected; // 0x360(0x10)

	void MakeCreateProfileString(struct FString& SlotString); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.MakeCreateProfileString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshProfileNames(); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.RefreshProfileNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CrosshairProfilesChanged(enum class EAresStringSettingName SettingName, struct FString OldValue, struct FString NewValue); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.CrosshairProfilesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Crosshair_Profiles_ComboBox(int32_t EntryPoint); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.ExecuteUbergraph_Crosshair_Profiles_ComboBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnSelectProfileSelected__DelegateSignature(int32_t Profile Index); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.OnSelectProfileSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCreateProfileSelected__DelegateSignature(); // Function Crosshair_Profiles_ComboBox.Crosshair_Profiles_ComboBox_C.OnCreateProfileSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

