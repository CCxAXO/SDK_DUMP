// WidgetBlueprintGeneratedClass SubscriptionDropdownHeader.SubscriptionDropdownHeader_C
// Size: 0x358 (Inherited: 0x318)
struct USubscriptionDropdownHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BlackImageBG; // 0x320(0x08)
	struct UImage* Image_76; // 0x328(0x08)
	struct UImage* SubscriptionIcon; // 0x330(0x08)
	struct UTextBlock* TextBlock_103; // 0x338(0x08)
	struct FText ItemText; // 0x340(0x18)

	void SetSubscriptionIcon(struct UTexture* SubscriptionIcon); // Function SubscriptionDropdownHeader.SubscriptionDropdownHeader_C.SetSubscriptionIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHeaderText(struct FText ItemText); // Function SubscriptionDropdownHeader.SubscriptionDropdownHeader_C.SetHeaderText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function SubscriptionDropdownHeader.SubscriptionDropdownHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function SubscriptionDropdownHeader.SubscriptionDropdownHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SubscriptionDropdownHeader(int32_t EntryPoint); // Function SubscriptionDropdownHeader.SubscriptionDropdownHeader_C.ExecuteUbergraph_SubscriptionDropdownHeader // (Final|UbergraphFunction) // @ game+0x1b42740
};

