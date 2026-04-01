// WidgetBlueprintGeneratedClass SectionPlay.SectionPlay_C
// Size: 0x360 (Inherited: 0x320)
struct USectionPlay_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Image; // 0x328(0x08)
	struct UImage* Image_2; // 0x330(0x08)
	struct USharedNavButtonPlay_C* SharedNavButtonPlay; // 0x338(0x08)
	enum class EAresMainMenuTopNavigationState NavigationState; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct FText ButtonText; // 0x348(0x18)

	void UpdateIsSelected(); // Function SectionPlay.SectionPlay_C.UpdateIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SectionPlay.SectionPlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnNavigationStateChanged(); // Function SectionPlay.SectionPlay_C.OnNavigationStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnButtonClicked(); // Function SectionPlay.SectionPlay_C.OnButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function SectionPlay.SectionPlay_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SectionPlay(int32_t EntryPoint); // Function SectionPlay.SectionPlay_C.ExecuteUbergraph_SectionPlay // (Final|UbergraphFunction) // @ game+0x1af5410
};

