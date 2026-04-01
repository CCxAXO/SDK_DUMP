// WidgetBlueprintGeneratedClass TournamentsTeamColorButtonBase.TournamentsTeamColorButtonBase_C
// Size: 0x370 (Inherited: 0x320)
struct UTournamentsTeamColorButtonBase_C : UDesignableUserWidget {
	struct FMulticastInlineDelegate OnClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnActivated; // 0x330(0x10)
	struct FLinearColor Color; // 0x340(0x10)
	struct FGuid UUID; // 0x350(0x10)
	struct FString Name; // 0x360(0x10)

	void SetUuid(struct FGuid UUID); // Function TournamentsTeamColorButtonBase.TournamentsTeamColorButtonBase_C.SetUuid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsActive(bool IsActive); // Function TournamentsTeamColorButtonBase.TournamentsTeamColorButtonBase_C.SetIsActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetColor(struct FLinearColor Color, struct FString Name); // Function TournamentsTeamColorButtonBase.TournamentsTeamColorButtonBase_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActivated__DelegateSignature(); // Function TournamentsTeamColorButtonBase.TournamentsTeamColorButtonBase_C.OnActivated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClicked__DelegateSignature(struct UTournamentsTeamColorButtonBase_C* ColorButton); // Function TournamentsTeamColorButtonBase.TournamentsTeamColorButtonBase_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

