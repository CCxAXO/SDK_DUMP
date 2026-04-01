// WidgetBlueprintGeneratedClass EOGContractReward.EOGContractReward_C
// Size: 0x350 (Inherited: 0x318)
struct UEOGContractReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Default; // 0x320(0x08)
	struct UWidgetAnimation* Unlock; // 0x328(0x08)
	struct USquareRewardThumbnail_C* SquareRewardThumbnail; // 0x330(0x08)
	struct UBaseHandle* Handle; // 0x338(0x08)
	int32_t Quantity; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UEOGContractProgressBase_C* Owner; // 0x348(0x08)

	void SetOwner(struct UEOGContractProgressBase_C* NewOwner); // Function EOGContractReward.EOGContractReward_C.SetOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function EOGContractReward.EOGContractReward_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayUnlockAnimation(); // Function EOGContractReward.EOGContractReward_C.PlayUnlockAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EOGContractReward.EOGContractReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void WidgetAnimationEvt_Unlock_K2Node_WidgetAnimationEvent_1(); // Function EOGContractReward.EOGContractReward_C.WidgetAnimationEvt_Unlock_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EOGContractReward(int32_t EntryPoint); // Function EOGContractReward.EOGContractReward_C.ExecuteUbergraph_EOGContractReward // (Final|UbergraphFunction) // @ game+0x1af5410
};

