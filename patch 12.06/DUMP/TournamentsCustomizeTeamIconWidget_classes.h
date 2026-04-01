// WidgetBlueprintGeneratedClass TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C
// Size: 0x420 (Inherited: 0x318)
struct UTournamentsCustomizeTeamIconWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresScrollBox* IconScrollBox; // 0x320(0x08)
	struct UWrapBox* IconWrapBox; // 0x328(0x08)
	struct UTournamentsTeamIconButtonBase_C* ActiveChoiceButton; // 0x330(0x08)
	struct UTournamentsTeamIconButtonBase_C* TournamentsTeamIconButtonWidget; // 0x338(0x08)
	struct FMulticastInlineDelegate Updated Texture; // 0x340(0x10)
	struct TMap<struct FString, struct UTournamentsTeamIconButtonBase_C*> Icon Buttons Strings; // 0x350(0x50)
	struct FString Current Icon String; // 0x3a0(0x10)
	struct FGuid Current Icon; // 0x3b0(0x10)
	struct TMap<struct FGuid, struct UTournamentsTeamIconButtonBase_C*> Icon Buttons; // 0x3c0(0x50)
	struct FGuid Default Icon; // 0x410(0x10)

	void Load All Icons(struct FTournamentsTeamIconHandles& TournamentsTeamIconHandles); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Load All Icons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Icon Button Clicked(struct UTournamentsTeamIconButtonBase_C* IconButton); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Handle Icon Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Active Icon(struct UTournamentsTeamIconButtonBase_C* Icon Button, struct UTournamentsTeamIconButtonBase_C*& Active Icon Button); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Set Active Icon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FGuid Current Icon); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Create Icon Button(struct UTournamentsTeamIconHandle* Handle); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Create Icon Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Team Icons Loaded(struct FTournamentsTeamIconHandles& TournamentsTeamIconHandles); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Team Icons Loaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsCustomizeTeamIconWidget(int32_t EntryPoint); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.ExecuteUbergraph_TournamentsCustomizeTeamIconWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void Updated Texture__DelegateSignature(struct UTexture* UpdatedTexture, struct FGuid IconUuid); // Function TournamentsCustomizeTeamIconWidget.TournamentsCustomizeTeamIconWidget_C.Updated Texture__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

