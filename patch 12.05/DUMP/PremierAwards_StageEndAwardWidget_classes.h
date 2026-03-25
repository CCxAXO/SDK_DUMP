// WidgetBlueprintGeneratedClass PremierAwards_StageEndAwardWidget.PremierAwards_StageEndAwardWidget_C
// Size: 0x441 (Inherited: 0x318)
struct UPremierAwards_StageEndAwardWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* BuddyRewardIcon; // 0x328(0x08)
	struct UImage* Color; // 0x330(0x08)
	struct UImage* Color_2; // 0x338(0x08)
	struct UImage* Color_4; // 0x340(0x08)
	struct UImage* darken; // 0x348(0x08)
	struct UImage* darken_3; // 0x350(0x08)
	struct UImage* darken_4; // 0x358(0x08)
	struct UAresCommonText* Description; // 0x360(0x08)
	struct UImage* Lock; // 0x368(0x08)
	struct UImage* Lock_3; // 0x370(0x08)
	struct UImage* Lock_4; // 0x378(0x08)
	struct UWidgetSwitcher* LockStatusSwitcher1; // 0x380(0x08)
	struct UWidgetSwitcher* LockStatusSwitcher2; // 0x388(0x08)
	struct UImage* Reward; // 0x390(0x08)
	struct UImage* Reward_2; // 0x398(0x08)
	struct UImage* Reward_4; // 0x3a0(0x08)
	struct USizeBox* Reward2; // 0x3a8(0x08)
	struct USizeBox* Reward2_2; // 0x3b0(0x08)
	struct UImage* RewardIcon_2; // 0x3b8(0x08)
	struct UWidgetSwitcher* RewardSwitcher; // 0x3c0(0x08)
	struct UImage* SingleAwardIcon; // 0x3c8(0x08)
	struct UOverlay* SingleAwardOverlay; // 0x3d0(0x08)
	struct UWidgetSwitcher* SingleAwardStatusSwitcher; // 0x3d8(0x08)
	struct UAresCommonText* Title; // 0x3e0(0x08)
	struct UImage* Unlocked; // 0x3e8(0x08)
	struct UImage* Unlocked_3; // 0x3f0(0x08)
	struct UImage* Unlocked_4; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x400(0x10)
	struct FText Title Text; // 0x410(0x18)
	struct FText Description Text; // 0x428(0x18)
	bool hasMultipleAwards; // 0x440(0x01)

	void SetAwardStatus(bool IsUnlocked); // Function PremierAwards_StageEndAwardWidget.PremierAwards_StageEndAwardWidget_C.SetAwardStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PremierAwards_StageEndAwardWidget.PremierAwards_StageEndAwardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierAwards_StageEndAwardWidget.PremierAwards_StageEndAwardWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierAwards_StageEndAwardWidget(int32_t EntryPoint); // Function PremierAwards_StageEndAwardWidget.PremierAwards_StageEndAwardWidget_C.ExecuteUbergraph_PremierAwards_StageEndAwardWidget // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnButtonClicked__DelegateSignature(); // Function PremierAwards_StageEndAwardWidget.PremierAwards_StageEndAwardWidget_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

