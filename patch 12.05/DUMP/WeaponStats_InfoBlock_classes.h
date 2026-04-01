// WidgetBlueprintGeneratedClass WeaponStats_InfoBlock.WeaponStats_InfoBlock_C
// Size: 0x368 (Inherited: 0x318)
struct UWeaponStats_InfoBlock_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* Entries; // 0x320(0x08)
	struct URichTextBlock* Header; // 0x328(0x08)
	struct UImage* Image_101; // 0x330(0x08)
	struct FText HeaderText; // 0x338(0x18)
	int32_t MaxEntryCount; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct UWeaponStats_InfoBlockEntry_C*> ChildEntries; // 0x358(0x10)

	void InitializeChildren(); // Function WeaponStats_InfoBlock.WeaponStats_InfoBlock_C.InitializeChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHeader(struct FText newText); // Function WeaponStats_InfoBlock.WeaponStats_InfoBlock_C.SetHeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContent(struct TArray<struct FText>& Texts); // Function WeaponStats_InfoBlock.WeaponStats_InfoBlock_C.SetContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WeaponStats_InfoBlock.WeaponStats_InfoBlock_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WeaponStats_InfoBlock(int32_t EntryPoint); // Function WeaponStats_InfoBlock.WeaponStats_InfoBlock_C.ExecuteUbergraph_WeaponStats_InfoBlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

