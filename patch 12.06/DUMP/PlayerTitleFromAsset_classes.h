// WidgetBlueprintGeneratedClass PlayerTitleFromAsset.PlayerTitleFromAsset_C
// Size: 0x3c0 (Inherited: 0x318)
struct UPlayerTitleFromAsset_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBackgroundBlur* BackgroundBlur_35; // 0x320(0x08)
	struct UOverlay* Container; // 0x328(0x08)
	struct UImage* PlayerTitleBG; // 0x330(0x08)
	struct UTextBlock* TitleText; // 0x338(0x08)
	struct UPlayerTitleDataAsset* PlayerTitleDataAsset; // 0x340(0x08)
	bool ShowBackground; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct FSlateFontInfo Font; // 0x350(0x60)
	bool CollapseIfEmpty; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	double WrapTextAt; // 0x3b8(0x08)

	void SetToDefault(); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.SetToDefault // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerTitleLoaded(struct UPlayerTitleDataAsset* TitleDataAsset); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.HandlePlayerTitleLoaded // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerTitle(); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.UpdatePlayerTitle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerTitle(struct UPlayerTitleDataAsset* PlayerTitle); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.SetPlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerTitleFromAsset(int32_t EntryPoint); // Function PlayerTitleFromAsset.PlayerTitleFromAsset_C.ExecuteUbergraph_PlayerTitleFromAsset // (Final|UbergraphFunction) // @ game+0x1b42740
};

