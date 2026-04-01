// WidgetBlueprintGeneratedClass WeaponStats_InfoBlockEntry.WeaponStats_InfoBlockEntry_C
// Size: 0x348 (Inherited: 0x318)
struct UWeaponStats_InfoBlockEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_25; // 0x320(0x08)
	struct URichTextBlock* RichTextBlock_43; // 0x328(0x08)
	struct FText TextContent; // 0x330(0x18)

	void SetContent(struct FText newText); // Function WeaponStats_InfoBlockEntry.WeaponStats_InfoBlockEntry_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WeaponStats_InfoBlockEntry.WeaponStats_InfoBlockEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WeaponStats_InfoBlockEntry(int32_t EntryPoint); // Function WeaponStats_InfoBlockEntry.WeaponStats_InfoBlockEntry_C.ExecuteUbergraph_WeaponStats_InfoBlockEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

