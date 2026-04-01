// WidgetBlueprintGeneratedClass WBP_Panel_BattlepassXPBoost.WBP_Panel_BattlepassXPBoost_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_BattlepassXPBoost_C : UAresCommonUserWidget {
	struct UAresCommonText* BoostEnabledText; // 0x3e0(0x08)
	struct UPremiumContractXPIndicator_C* PremiumContractXPIndicator; // 0x3e8(0x08)
	struct UAresCommonText* XPBoostText; // 0x3f0(0x08)

	void HandleHasPremiumTrackChanged(bool HasPremiumTrack); // Function WBP_Panel_BattlepassXPBoost.WBP_Panel_BattlepassXPBoost_C.HandleHasPremiumTrackChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsPremiumOwnedChanged(bool IsPremiumOwned); // Function WBP_Panel_BattlepassXPBoost.WBP_Panel_BattlepassXPBoost_C.HandleIsPremiumOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

