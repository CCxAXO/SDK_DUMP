// WidgetBlueprintGeneratedClass PlayerCardPreview.PlayerCardPreview_C
// Size: 0x3c9 (Inherited: 0x318)
struct UPlayerCardPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Accent_BL; // 0x320(0x08)
	struct UImage* Accent_BR; // 0x328(0x08)
	struct UAccountLevel_C* AccountLevel; // 0x330(0x08)
	struct UBackgroundBlur* BackgroundBlur_35; // 0x338(0x08)
	struct UTelemetryButton* CardButton; // 0x340(0x08)
	struct UImage* diamond; // 0x348(0x08)
	struct UImage* Image; // 0x350(0x08)
	struct UImage* Image_555; // 0x358(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x360(0x08)
	struct UPlayerNameWidget_C* PlayerNameWidget; // 0x368(0x08)
	struct UImage* PlayerTitleBG; // 0x370(0x08)
	struct UOverlay* self_borderOverlay; // 0x378(0x08)
	struct UImage* Shadow; // 0x380(0x08)
	struct UTextBlock* Title; // 0x388(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x390(0x10)
	enum class ESlateVisibility Button Visibility; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FString TelemetryButtonAction; // 0x3a8(0x10)
	struct UAkAudioEvent* SoundClick; // 0x3b8(0x08)
	struct UAkAudioEvent* SoundHover; // 0x3c0(0x08)
	bool ShowDecorativeBorder; // 0x3c8(0x01)

	void HandleLevelBorderLoaded(struct ULevelBorderHandle* LevelBorderHandle); // Function PlayerCardPreview.PlayerCardPreview_C.HandleLevelBorderLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedAccountLevel(struct ULevelBorderDataAsset* Level Border Data Asset); // Function PlayerCardPreview.PlayerCardPreview_C.SetSelectedAccountLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAccountLevelDisplay(struct UPlatformPlayer* Player); // Function PlayerCardPreview.PlayerCardPreview_C.UpdateAccountLevelDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTitleFromPlatform(); // Function PlayerCardPreview.PlayerCardPreview_C.SetTitleFromPlatform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCardFromPlatform(); // Function PlayerCardPreview.PlayerCardPreview_C.SetCardFromPlatform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTitleLoaded(struct UPlayerTitleDataAsset* TitleDataAsset); // Function PlayerCardPreview.PlayerCardPreview_C.HandleTitleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerTitle(struct UPlayerTitleHandle* PlayerTitle); // Function PlayerCardPreview.PlayerCardPreview_C.SetPlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCardLoaded(struct UPlayerCardHandle* PlayerCardHandle); // Function PlayerCardPreview.PlayerCardPreview_C.HandleCardLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelectedPlayerCard(struct UPlayerCardDataAsset* PlayerCardDataAsset); // Function PlayerCardPreview.PlayerCardPreview_C.SetSelectedPlayerCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PlayerCardPreview.PlayerCardPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayerCardPreview.PlayerCardPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PlayerCardPreview.PlayerCardPreview_C.BndEvt__CardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__CardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function PlayerCardPreview.PlayerCardPreview_C.BndEvt__CardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnHideAccountLevelChanged_Event_1(struct UPlatformPlayer* PlatformPlayer); // Function PlayerCardPreview.PlayerCardPreview_C.OnHideAccountLevelChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerCardPreview(int32_t EntryPoint); // Function PlayerCardPreview.PlayerCardPreview_C.ExecuteUbergraph_PlayerCardPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function PlayerCardPreview.PlayerCardPreview_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

