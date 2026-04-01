// WidgetBlueprintGeneratedClass GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C
// Size: 0x404 (Inherited: 0x358)
struct UGamePodPreferenceMenuItem_C : UAresContextMenuActionBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UBorder* BorderBg; // 0x360(0x08)
	struct UButton* GamePodButton; // 0x368(0x08)
	struct UHorizontalBox* HorizontalBox_16; // 0x370(0x08)
	struct UCheckBox* IsSelected; // 0x378(0x08)
	struct UPartyMemberPingListEntry_C* PartyMemberPingListEntry; // 0x380(0x08)
	struct FString GamePodID; // 0x388(0x10)
	bool Is Selected; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FPingInfo PingInfo; // 0x3a0(0x18)
	struct UPartyViewController* View Controller; // 0x3b8(0x08)
	bool Is Editable; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	struct FLinearColor SelectedColor; // 0x3c4(0x10)
	struct FLinearColor UnselectedColor; // 0x3d4(0x10)
	struct FLinearColor HoverSelectedColor; // 0x3e4(0x10)
	struct FLinearColor HoverUnselectedColor; // 0x3f4(0x10)

	void UpdateBackgroundColor(bool Is Selected, bool Is Hovered); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.UpdateBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CheckBox_87_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.BndEvt__CheckBox_87_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_58_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.BndEvt__Button_58_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPartyViewController* View Controller, struct FPingInfo Ping Info, bool Is Selected, bool Is Editable); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GamePodButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.BndEvt__GamePodButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GamePodButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.BndEvt__GamePodButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GamePodPreferenceMenuItem(int32_t EntryPoint); // Function GamePodPreferenceMenuItem.GamePodPreferenceMenuItem_C.ExecuteUbergraph_GamePodPreferenceMenuItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

