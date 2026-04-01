// WidgetBlueprintGeneratedClass TournamentsTeamIconButtonBase.TournamentsTeamIconButtonBase_C
// Size: 0x358 (Inherited: 0x320)
struct UTournamentsTeamIconButtonBase_C : UDesignableUserWidget {
	struct FMulticastInlineDelegate OnClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnActivated; // 0x330(0x10)
	struct UTexture* Texture; // 0x340(0x08)
	struct FGuid UUID; // 0x348(0x10)

	void SetUuid(struct FGuid UUID); // Function TournamentsTeamIconButtonBase.TournamentsTeamIconButtonBase_C.SetUuid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsActive(bool IsActive); // Function TournamentsTeamIconButtonBase.TournamentsTeamIconButtonBase_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTexture(struct UTexture* Texture); // Function TournamentsTeamIconButtonBase.TournamentsTeamIconButtonBase_C.SetTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActivated__DelegateSignature(); // Function TournamentsTeamIconButtonBase.TournamentsTeamIconButtonBase_C.OnActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(struct UTournamentsTeamIconButtonBase_C* IconButton); // Function TournamentsTeamIconButtonBase.TournamentsTeamIconButtonBase_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

