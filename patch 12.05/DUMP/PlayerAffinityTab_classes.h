// WidgetBlueprintGeneratedClass PlayerAffinityTab.PlayerAffinityTab_C
// Size: 0x338 (Inherited: 0x318)
struct UPlayerAffinityTab_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedButtonMaster_C* EditVNGButton; // 0x320(0x08)
	struct UTextBlock* GameShardTextbox; // 0x328(0x08)
	struct UTextBlock* RegionTextbox; // 0x330(0x08)

	void OnInitialized(); // Function PlayerAffinityTab.PlayerAffinityTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EditVNGButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PlayerAffinityTab.PlayerAffinityTab_C.BndEvt__EditVNGButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerAffinityTab(int32_t EntryPoint); // Function PlayerAffinityTab.PlayerAffinityTab_C.ExecuteUbergraph_PlayerAffinityTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

