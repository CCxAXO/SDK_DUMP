// WidgetBlueprintGeneratedClass TournamentsMapPoolModal.TournamentsMapPoolModal_C
// Size: 0x398 (Inherited: 0x318)
struct UTournamentsMapPoolModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x328(0x08)
	struct UImage* Divider; // 0x330(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_1; // 0x338(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_2; // 0x340(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_3; // 0x348(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_4; // 0x350(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_5; // 0x358(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_6; // 0x360(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_7; // 0x368(0x08)
	struct UPremierPlayoffMapPoolItem_C* PremierPlayoffMapPoolItem_8; // 0x370(0x08)
	struct UTextBlock* StageName_Text; // 0x378(0x08)
	struct TArray<struct UPremierPlayoffMapPoolItem_C*> MapPoolWidgets; // 0x380(0x10)
	struct UPremierSeasonModelOld* Premier Season Model; // 0x390(0x08)

	void UpdateMapWidgets(); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.UpdateMapWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SwapContentOrder(); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.SwapContentOrder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLoaded_7FF3F9034BAE2001869E949D124FC77F(struct UObject* Loaded); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.OnLoaded_7FF3F9034BAE2001869E949D124FC77F // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TournamentsInfoModal_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.BndEvt__TournamentsInfoModal_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPremierSeasonModelOld* PremierSeasonModel); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsMapPoolModal(int32_t EntryPoint); // Function TournamentsMapPoolModal.TournamentsMapPoolModal_C.ExecuteUbergraph_TournamentsMapPoolModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

