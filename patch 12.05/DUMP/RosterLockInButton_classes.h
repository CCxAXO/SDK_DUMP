// WidgetBlueprintGeneratedClass RosterLockInButton.RosterLockInButton_C
// Size: 0x358 (Inherited: 0x318)
struct URosterLockInButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* MemberLockIconBackground_Inner; // 0x320(0x08)
	struct UImage* MemberLockIconImage; // 0x328(0x08)
	struct UOverlay* MemberReadyIconOverlay; // 0x330(0x08)
	struct URosterModel* RosterModel; // 0x338(0x08)
	struct URosterMemberModel* RosterMemberModel; // 0x340(0x08)
	struct UTexture2D* LockedImage; // 0x348(0x08)
	struct UTexture2D* UnlockedImage; // 0x350(0x08)

	void UpdateLockInStatus(); // Function RosterLockInButton.RosterLockInButton_C.UpdateLockInStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct URosterModel* RosterModel, struct URosterMemberModel* RosterMemberModel); // Function RosterLockInButton.RosterLockInButton_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializedWithModel(); // Function RosterLockInButton.RosterLockInButton_C.InitializedWithModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRosterMemberPartyStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function RosterLockInButton.RosterLockInButton_C.OnRosterMemberPartyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RosterLockInButton(int32_t EntryPoint); // Function RosterLockInButton.RosterLockInButton_C.ExecuteUbergraph_RosterLockInButton // (Final|UbergraphFunction) // @ game+0x1af5410
};

