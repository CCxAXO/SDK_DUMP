// WidgetBlueprintGeneratedClass PremierAwardsFrame.PremierAwardsFrame_C
// Size: 0x3d1 (Inherited: 0x330)
struct UPremierAwardsFrame_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UImage* Au_P_BackGlow; // 0x338(0x08)
	struct UOverlay* Aura_Premier; // 0x340(0x08)
	struct UImage* BasicPlating; // 0x348(0x08)
	struct USizeBox* Champs; // 0x350(0x08)
	struct UOverlay* ChampsPlating; // 0x358(0x08)
	struct UImage* check; // 0x360(0x08)
	struct UImage* Frame; // 0x368(0x08)
	struct UAresWidgetSwitcher* FrameSwitcher; // 0x370(0x08)
	struct UImage* L_Decoration; // 0x378(0x08)
	struct UImage* L_Plate_Glow; // 0x380(0x08)
	struct UImage* Lock; // 0x388(0x08)
	struct UAresWidgetSwitcher* LockStatusSwitcher; // 0x390(0x08)
	struct UAresCommonText* PlayerNameAndTag; // 0x398(0x08)
	struct UImage* QualifiedPlating; // 0x3a0(0x08)
	struct UImage* R_Decoration; // 0x3a8(0x08)
	struct UImage* R_Plate_Glow; // 0x3b0(0x08)
	enum class PremierAwardPlatingLevel PlatingLevel; // 0x3b8(0x01)
	bool IsLocked; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct FString TeamTag; // 0x3c0(0x10)
	bool IsHighlighted; // 0x3d0(0x01)

	void SetIsHighlighted(bool IsHighlighted); // Function PremierAwardsFrame.PremierAwardsFrame_C.SetIsHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTeamTag(struct FString NewTag); // Function PremierAwardsFrame.PremierAwardsFrame_C.UpdateTeamTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Lock Status(bool showStatus, bool IsLocked); // Function PremierAwardsFrame.PremierAwardsFrame_C.Set Lock Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLockStatus(); // Function PremierAwardsFrame.PremierAwardsFrame_C.UpdateLockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlating(); // Function PremierAwardsFrame.PremierAwardsFrame_C.UpdatePlating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierAwardsFrame.PremierAwardsFrame_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierAwardsFrame(int32_t EntryPoint); // Function PremierAwardsFrame.PremierAwardsFrame_C.ExecuteUbergraph_PremierAwardsFrame // (Final|UbergraphFunction) // @ game+0x1b42740
};

