// WidgetBlueprintGeneratedClass PlayerTitleLabel.PlayerTitleLabel_C
// Size: 0x338 (Inherited: 0x318)
struct UPlayerTitleLabel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x320(0x08)
	struct UImage* TitleIcon; // 0x328(0x08)
	struct UTextBlock* TitleName; // 0x330(0x08)

	void SetTitleWithIcon(struct FText Title, bool IsOwned, bool IsEquipped, bool IsUnlockedOnlyBySubscription); // Function PlayerTitleLabel.PlayerTitleLabel_C.SetTitleWithIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PlayerTitleLabel.PlayerTitleLabel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PlayerTitleLabel(int32_t EntryPoint); // Function PlayerTitleLabel.PlayerTitleLabel_C.ExecuteUbergraph_PlayerTitleLabel // (Final|UbergraphFunction) // @ game+0x1b42740
};

