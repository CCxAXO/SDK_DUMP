// WidgetBlueprintGeneratedClass WeaponDetailsChroma.WeaponDetailsChroma_C
// Size: 0x378 (Inherited: 0x318)
struct UWeaponDetailsChroma_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgroundImage_2; // 0x320(0x08)
	struct UChromaCarouselBG_C* ChromaCarouselBG; // 0x328(0x08)
	struct UButton* MainButton; // 0x330(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x338(0x08)
	struct FMulticastInlineDelegate OnChromaClicked; // 0x340(0x10)
	struct UEquippableSkinChromaHandle* ChromaHandle; // 0x350(0x08)
	struct UEquippableSkinHandle* SkinHandle; // 0x358(0x08)
	struct UAkAudioEvent* HoverSound; // 0x360(0x08)
	struct UAkAudioEvent* ClickSound; // 0x368(0x08)
	struct UGunSkinLevelPreview_C* PreviewWidget; // 0x370(0x08)

	struct UStreamedVideoDataAsset* GetPreviewVideo(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.GetPreviewVideo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct UWidget* On_TooltipAnchor_GetMenuContent_1(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.On_TooltipAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsSelected(bool IsSelected); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateState(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TooltipAnchor_K2Node_ComponentBoundEvent_6_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.BndEvt__TooltipAnchor_K2Node_ComponentBoundEvent_6_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponDetailsChroma(int32_t EntryPoint); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.ExecuteUbergraph_WeaponDetailsChroma // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnChromaClicked__DelegateSignature(struct UEquippableSkinChromaHandle* Chroma); // Function WeaponDetailsChroma.WeaponDetailsChroma_C.OnChromaClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

