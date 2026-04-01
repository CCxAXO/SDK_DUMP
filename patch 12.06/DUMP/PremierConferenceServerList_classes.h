// WidgetBlueprintGeneratedClass PremierConferenceServerList.PremierConferenceServerList_C
// Size: 0x358 (Inherited: 0x318)
struct UPremierConferenceServerList_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* ConferenceServerList; // 0x320(0x08)
	struct UTextBlock* GamePodListText; // 0x328(0x08)
	struct FText GamePodList; // 0x330(0x18)
	struct FString ConferenceKey; // 0x348(0x10)

	void UpdateGamePodList(struct FString NewConferenceKey); // Function PremierConferenceServerList.PremierConferenceServerList_C.UpdateGamePodList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierConferenceServerList.PremierConferenceServerList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierConferenceServerList(int32_t EntryPoint); // Function PremierConferenceServerList.PremierConferenceServerList_C.ExecuteUbergraph_PremierConferenceServerList // (Final|UbergraphFunction) // @ game+0x1b42740
};

