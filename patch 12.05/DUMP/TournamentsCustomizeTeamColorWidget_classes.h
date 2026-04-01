// WidgetBlueprintGeneratedClass TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C
// Size: 0x440 (Inherited: 0x318)
struct UTournamentsCustomizeTeamColorWidget_C : UUserWidget {
	struct UAresScrollBox* ColorScrollBox; // 0x318(0x08)
	struct UWrapBox* ColorWrapBox; // 0x320(0x08)
	struct UDataTable* Colors Data Table; // 0x328(0x08)
	struct UTournamentsTeamColorButton_C* TournamentsTeamColorButtonWidget; // 0x330(0x08)
	struct TMap<struct FGuid, struct UTournamentsTeamColorButtonBase_C*> Color Buttons; // 0x338(0x50)
	struct UTournamentsTeamColorButtonBase_C* Active Choice Button; // 0x388(0x08)
	struct FMulticastInlineDelegate Updated Color; // 0x390(0x10)
	struct TMap<struct FLinearColor, struct FGuid> Color Guid Map; // 0x3a0(0x50)
	struct FString ColorLevel; // 0x3f0(0x10)
	struct FLinearColor Current Primary Color; // 0x400(0x10)
	struct FLinearColor Current Secondary Color; // 0x410(0x10)
	struct FLinearColor Current Tertiary Color; // 0x420(0x10)
	struct FLinearColor CurrentColor; // 0x430(0x10)

	void Init(struct FLinearColor CurrentColor, struct FString ColorLevel); // Function TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Active Color(struct UTournamentsTeamColorButtonBase_C* Color Button, struct UTournamentsTeamColorButtonBase_C*& Active Color Button); // Function TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C.Set Active Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Color Button Clicked(struct UTournamentsTeamColorButtonBase_C* ColorButton); // Function TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C.Handle Color Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Create Color Button(struct FTournamentsTeamColorData TeamColorData); // Function TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C.Create Color Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init Color Level(struct FLinearColor Init Linear Color, struct FString Color Level); // Function TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C.Init Color Level // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Updated Color__DelegateSignature(struct FLinearColor Updated Color, struct FString Color Level); // Function TournamentsCustomizeTeamColorWidget.TournamentsCustomizeTeamColorWidget_C.Updated Color__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

