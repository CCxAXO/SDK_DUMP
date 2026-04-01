// WidgetBlueprintGeneratedClass TournamentsTeamCustomization.TournamentsTeamCustomization_C
// Size: 0x3d8 (Inherited: 0x318)
struct UTournamentsTeamCustomization_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* TeamIcon; // 0x320(0x08)
	struct FGuid DefaultGuid; // 0x328(0x10)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x338(0x08)
	struct FUnverifiedMetadataPersonalization PersonalizationData; // 0x340(0x40)
	struct UMaterialInterface* DefaultMaterial; // 0x380(0x08)
	struct FPremierRosterCustomization CustomizationDTO; // 0x388(0x40)
	struct FString Old Icon; // 0x3c8(0x10)

	void UpdateFromStaticDTO(struct FPremierRosterCustomization Customization); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.UpdateFromStaticDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFromTournamentRosterInfo(struct FTournamentRosterInfo TournamentRosterInfo); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.UpdateFromTournamentRosterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateColors(); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.UpdateColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFromModel(struct UPremierRosterCustomizationViewModel* Customization); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.UpdateFromModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ParseColorString(struct FString ColorString, struct FLinearColor& LinearColor); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.ParseColorString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnContentLoaded(struct UTournamentsTeamIconHandle* Handle); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.OnContentLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetColor(struct FLinearColor Color, struct FString Level); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIcon(struct UTexture* Texture); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsTeamCustomization(int32_t EntryPoint); // Function TournamentsTeamCustomization.TournamentsTeamCustomization_C.ExecuteUbergraph_TournamentsTeamCustomization // (Final|UbergraphFunction) // @ game+0x1b42740
};

